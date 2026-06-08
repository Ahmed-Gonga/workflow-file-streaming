savedcmd_nfs.ko := ld -r -m elf_x86_64 -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T /home/g/linux/scripts/module.lds -o nfs.ko nfs.o nfs.mod.o .module-common.o
