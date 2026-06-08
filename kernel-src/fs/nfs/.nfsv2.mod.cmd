savedcmd_nfsv2.mod := printf '%s\n'   nfs2super.o proc.o nfs2xdr.o | awk '!x[$$0]++ { print("./"$$0) }' > nfsv2.mod
