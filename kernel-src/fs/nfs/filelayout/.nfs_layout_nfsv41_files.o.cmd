savedcmd_filelayout/nfs_layout_nfsv41_files.o := ld -m elf_x86_64 -z noexecstack --no-warn-rwx-segments   -r -o filelayout/nfs_layout_nfsv41_files.o @filelayout/nfs_layout_nfsv41_files.mod  ; /home/g/linux/tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --retpoline --rethunk --sls --stackval --static-call --uaccess --prefix=16  --link  --module filelayout/nfs_layout_nfsv41_files.o

filelayout/nfs_layout_nfsv41_files.o: $(wildcard /home/g/linux/tools/objtool/objtool)
