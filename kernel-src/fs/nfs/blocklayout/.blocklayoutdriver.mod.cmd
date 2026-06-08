savedcmd_blocklayout/blocklayoutdriver.mod := printf '%s\n'   blocklayout.o dev.o extent_tree.o rpc_pipefs.o | awk '!x[$$0]++ { print("blocklayout/"$$0) }' > blocklayout/blocklayoutdriver.mod
