savedcmd_nfs.o := ld -m elf_x86_64 -z noexecstack --no-warn-rwx-segments   -r -o nfs.o @nfs.mod  ; /home/g/linux/tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --retpoline --rethunk --sls --stackval --static-call --uaccess --prefix=16  --link  --module nfs.o

nfs.o: $(wildcard /home/g/linux/tools/objtool/objtool)
