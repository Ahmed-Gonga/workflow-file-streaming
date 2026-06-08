savedcmd_nfsv4.ko := ld -r -m elf_x86_64 -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T /home/g/linux/scripts/module.lds -o nfsv4.ko nfsv4.o nfsv4.mod.o .module-common.o
