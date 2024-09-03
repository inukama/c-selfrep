
out = "/* Inuka's selfrep */\n\nconst unsigned char data[] = {"
dat = ""
with open("code.c", "r", encoding="ascii") as code:
    i = 0
    while 1:
        if i % 8 == 0:
            out += "\n"
        char = code.read(1)
        if not char:
            break

        out += " 0x{0:02x},".format(ord(char))
        i += 1

with open("code.c", "r", encoding="ascii") as code:
    dat = code.read()

out += "\n};\n\n"
out += dat

print(out)

with open("main.c", "w", encoding="ascii") as main:
    main.write(out)
