savedcmd_nfsv2.o := ld -m elf_x86_64 -z noexecstack --no-warn-rwx-segments   -r -o nfsv2.o @nfsv2.mod  ; /home/g/linux/tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --retpoline --rethunk --sls --stackval --static-call --uaccess --prefix=16  --link  --module nfsv2.o

nfsv2.o: $(wildcard /home/g/linux/tools/objtool/objtool)
