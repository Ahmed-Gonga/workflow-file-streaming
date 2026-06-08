#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3a155231, "nfs_setattr_update_inode" },
	{ 0x9d34bda5, "nfs_sops" },
	{ 0xb570c0fa, "nfs_instantiate" },
	{ 0xf9d9c87b, "init_user_ns" },
	{ 0x39030e3a, "nfs_link" },
	{ 0x8eb37e44, "__kmalloc_cache_noprof" },
	{ 0xf32eae3f, "nfs_stat_to_errno" },
	{ 0x0be4d87e, "nfs_permission" },
	{ 0x2da8be68, "nfs_add_or_obtain" },
	{ 0x29613d4f, "from_kuid_munged" },
	{ 0xbf672701, "nfs_free_client" },
	{ 0x166cce4f, "nfs_close_context" },
	{ 0x27cf78d5, "nfs_refresh_inode" },
	{ 0x5af09d8b, "_raw_spin_unlock" },
	{ 0xf296206e, "nfs_debug" },
	{ 0xd0ea019a, "kmalloc_caches" },
	{ 0xfdb69c3e, "nfs_symlink" },
	{ 0xf6319543, "nfs_unlink" },
	{ 0xddb5f6cd, "nfs_clone_server" },
	{ 0x035de56c, "nlmclnt_proc" },
	{ 0x885fde2f, "nfs_writeback_update_inode" },
	{ 0xf62be786, "nfs_alloc_client" },
	{ 0x74694ee3, "nfs_dentry_operations" },
	{ 0x67e35d55, "xdr_write_pages" },
	{ 0x94cace9f, "nfs_wb_all" },
	{ 0x49feef87, "xdr_inline_decode" },
	{ 0x6a7efe4c, "nfs_submount" },
	{ 0xa55d8d66, "__tracepoint_nfs_xdr_status" },
	{ 0x016dfd7f, "nfs_mknod" },
	{ 0x34d0c3d8, "nfs_create_server" },
	{ 0xb9e2c240, "nfs_init_client" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x34360028, "xdr_encode_opaque" },
	{ 0x66506b3e, "xdr_read_pages" },
	{ 0x5af09d8b, "_raw_spin_lock" },
	{ 0x16a35c59, "nfs_create" },
	{ 0xd272d446, "__fentry__" },
	{ 0x33a21527, "nfs_mkdir" },
	{ 0xe8213e80, "_printk" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xb0f2d320, "nfs_try_get_tree" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x972c8816, "make_kuid" },
	{ 0xf10836c6, "__SCT__tp_func_nfs_xdr_status" },
	{ 0x53d3ca21, "nfs_file_operations" },
	{ 0xc2274c8a, "nfs_rename" },
	{ 0x85aae626, "nfs_lookup" },
	{ 0x74ecf7cc, "nfs_alloc_fhandle" },
	{ 0xc792d712, "__SCK__tp_func_nfs_xdr_status" },
	{ 0x7cf48427, "nfs_invalidate_atime" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0x9e7487f5, "nfs_getattr" },
	{ 0xb5c51982, "__cpu_online_mask" },
	{ 0x118649b4, "register_nfs_version" },
	{ 0xea905005, "nfs_atomic_open_v23" },
	{ 0x493ea335, "rpc_call_start" },
	{ 0x886b59cc, "rpc_call_sync" },
	{ 0xc21fb1d8, "rpc_prepare_reply_pages" },
	{ 0x80b101dc, "nfs_fs_type" },
	{ 0x98aa1e41, "tracepoint_srcu" },
	{ 0x48bb57c3, "nfs_setattr" },
	{ 0x438a4ff2, "xdr_terminate_string" },
	{ 0x68bb3eeb, "nfs_fattr_init" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0xa28510eb, "make_kgid" },
	{ 0xbe22b7f5, "from_kgid_munged" },
	{ 0x1a113166, "nfs_alloc_fattr" },
	{ 0x49feef87, "xdr_reserve_space" },
	{ 0xf6319543, "nfs_rmdir" },
	{ 0x7ec472ba, "cpu_number" },
	{ 0x118649b4, "unregister_nfs_version" },
	{ 0xb04003c4, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x3a155231,
	0x9d34bda5,
	0xb570c0fa,
	0xf9d9c87b,
	0x39030e3a,
	0x8eb37e44,
	0xf32eae3f,
	0x0be4d87e,
	0x2da8be68,
	0x29613d4f,
	0xbf672701,
	0x166cce4f,
	0x27cf78d5,
	0x5af09d8b,
	0xf296206e,
	0xd0ea019a,
	0xfdb69c3e,
	0xf6319543,
	0xddb5f6cd,
	0x035de56c,
	0x885fde2f,
	0xf62be786,
	0x74694ee3,
	0x67e35d55,
	0x94cace9f,
	0x49feef87,
	0x6a7efe4c,
	0xa55d8d66,
	0x016dfd7f,
	0x34d0c3d8,
	0xb9e2c240,
	0xcb8b6ec6,
	0x34360028,
	0x66506b3e,
	0x5af09d8b,
	0x16a35c59,
	0xd272d446,
	0x33a21527,
	0xe8213e80,
	0xbd03ed67,
	0xb0f2d320,
	0xd272d446,
	0x972c8816,
	0xf10836c6,
	0x53d3ca21,
	0xc2274c8a,
	0x85aae626,
	0x74ecf7cc,
	0xc792d712,
	0x7cf48427,
	0xbd03ed67,
	0x9e7487f5,
	0xb5c51982,
	0x118649b4,
	0xea905005,
	0x493ea335,
	0x886b59cc,
	0xc21fb1d8,
	0x80b101dc,
	0x98aa1e41,
	0x48bb57c3,
	0x438a4ff2,
	0x68bb3eeb,
	0xd272d446,
	0xa28510eb,
	0xbe22b7f5,
	0x1a113166,
	0x49feef87,
	0xf6319543,
	0x7ec472ba,
	0x118649b4,
	0xb04003c4,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"nfs_setattr_update_inode\0"
	"nfs_sops\0"
	"nfs_instantiate\0"
	"init_user_ns\0"
	"nfs_link\0"
	"__kmalloc_cache_noprof\0"
	"nfs_stat_to_errno\0"
	"nfs_permission\0"
	"nfs_add_or_obtain\0"
	"from_kuid_munged\0"
	"nfs_free_client\0"
	"nfs_close_context\0"
	"nfs_refresh_inode\0"
	"_raw_spin_unlock\0"
	"nfs_debug\0"
	"kmalloc_caches\0"
	"nfs_symlink\0"
	"nfs_unlink\0"
	"nfs_clone_server\0"
	"nlmclnt_proc\0"
	"nfs_writeback_update_inode\0"
	"nfs_alloc_client\0"
	"nfs_dentry_operations\0"
	"xdr_write_pages\0"
	"nfs_wb_all\0"
	"xdr_inline_decode\0"
	"nfs_submount\0"
	"__tracepoint_nfs_xdr_status\0"
	"nfs_mknod\0"
	"nfs_create_server\0"
	"nfs_init_client\0"
	"kfree\0"
	"xdr_encode_opaque\0"
	"xdr_read_pages\0"
	"_raw_spin_lock\0"
	"nfs_create\0"
	"__fentry__\0"
	"nfs_mkdir\0"
	"_printk\0"
	"__ref_stack_chk_guard\0"
	"nfs_try_get_tree\0"
	"__stack_chk_fail\0"
	"make_kuid\0"
	"__SCT__tp_func_nfs_xdr_status\0"
	"nfs_file_operations\0"
	"nfs_rename\0"
	"nfs_lookup\0"
	"nfs_alloc_fhandle\0"
	"__SCK__tp_func_nfs_xdr_status\0"
	"nfs_invalidate_atime\0"
	"random_kmalloc_seed\0"
	"nfs_getattr\0"
	"__cpu_online_mask\0"
	"register_nfs_version\0"
	"nfs_atomic_open_v23\0"
	"rpc_call_start\0"
	"rpc_call_sync\0"
	"rpc_prepare_reply_pages\0"
	"nfs_fs_type\0"
	"tracepoint_srcu\0"
	"nfs_setattr\0"
	"xdr_terminate_string\0"
	"nfs_fattr_init\0"
	"__x86_return_thunk\0"
	"make_kgid\0"
	"from_kgid_munged\0"
	"nfs_alloc_fattr\0"
	"xdr_reserve_space\0"
	"nfs_rmdir\0"
	"cpu_number\0"
	"unregister_nfs_version\0"
	"module_layout\0"
;

MODULE_INFO(depends, "nfs,sunrpc,lockd");


MODULE_INFO(srcversion, "43CEEE45FAB74BC7B8CB7F5");
