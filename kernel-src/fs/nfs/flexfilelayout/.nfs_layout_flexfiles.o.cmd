savedcmd_flexfilelayout/nfs_layout_flexfiles.o := ld -m elf_x86_64 -z noexecstack --no-warn-rwx-segments   -r -o flexfilelayout/nfs_layout_flexfiles.o @flexfilelayout/nfs_layout_flexfiles.mod  ; /home/g/linux/tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --retpoline --rethunk --sls --stackval --static-call --uaccess --prefix=16  --link  --module flexfilelayout/nfs_layout_flexfiles.o

flexfilelayout/nfs_layout_flexfiles.o: $(wildcard /home/g/linux/tools/objtool/objtool)
