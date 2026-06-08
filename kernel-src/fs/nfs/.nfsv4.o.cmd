savedcmd_nfsv4.o := ld -m elf_x86_64 -z noexecstack --no-warn-rwx-segments   -r -o nfsv4.o @nfsv4.mod  ; /home/g/linux/tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --retpoline --rethunk --sls --stackval --static-call --uaccess --prefix=16  --link  --module nfsv4.o

nfsv4.o: $(wildcard /home/g/linux/tools/objtool/objtool)
