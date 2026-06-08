savedcmd_flexfilelayout/nfs_layout_flexfiles.mod := printf '%s\n'   flexfilelayout.o flexfilelayoutdev.o | awk '!x[$$0]++ { print("flexfilelayout/"$$0) }' > flexfilelayout/nfs_layout_flexfiles.mod
