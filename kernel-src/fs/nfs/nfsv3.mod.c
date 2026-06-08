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

KSYMTAB_FUNC(nfs3_set_ds_client, "");
SYMBOL_FLAGS(nfs3_set_ds_client, 0x01);

SYMBOL_CRC(nfs3_set_ds_client, 0xc083d059);

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x058c185a, "jiffies" },
	{ 0xf6319543, "nfs_rmdir" },
	{ 0x7ec472ba, "cpu_number" },
	{ 0x118649b4, "unregister_nfs_version" },
	{ 0xa4c0178c, "kvfree_call_rcu" },
	{ 0x4a09d399, "nfs_async_iocounter_wait" },
	{ 0x3a155231, "nfs_setattr_update_inode" },
	{ 0x9d34bda5, "nfs_sops" },
	{ 0xf9d9c87b, "init_user_ns" },
	{ 0xffddf59c, "rpc_restart_call" },
	{ 0x39030e3a, "nfs_link" },
	{ 0x8eb37e44, "__kmalloc_cache_noprof" },
	{ 0xae612a3f, "dput" },
	{ 0xf32eae3f, "nfs_stat_to_errno" },
	{ 0xe1387849, "put_nfs_open_context" },
	{ 0x0be4d87e, "nfs_permission" },
	{ 0xfbc57bb9, "alloc_pages_noprof" },
	{ 0x2da8be68, "nfs_add_or_obtain" },
	{ 0x29613d4f, "from_kuid_munged" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0x43a349ca, "strlen" },
	{ 0xbf672701, "nfs_free_client" },
	{ 0x166cce4f, "nfs_close_context" },
	{ 0x27cf78d5, "nfs_refresh_inode" },
	{ 0xc38c4741, "nfs_access_set_mask" },
	{ 0x3398a1da, "xdr_stream_pos" },
	{ 0xf296206e, "nfs_debug" },
	{ 0xd0ea019a, "kmalloc_caches" },
	{ 0xb2e62cba, "__trace_set_current_state" },
	{ 0xfdb69c3e, "nfs_symlink" },
	{ 0xf6319543, "nfs_unlink" },
	{ 0x6eb9238c, "forget_cached_acl" },
	{ 0xddb5f6cd, "nfs_clone_server" },
	{ 0xc1249a30, "strcpy" },
	{ 0x035de56c, "nlmclnt_proc" },
	{ 0x885fde2f, "nfs_writeback_update_inode" },
	{ 0xf62be786, "nfs_alloc_client" },
	{ 0x74694ee3, "nfs_dentry_operations" },
	{ 0x67e35d55, "xdr_write_pages" },
	{ 0xfdc586be, "nfs_access_zap_cache" },
	{ 0x94cace9f, "nfs_wb_all" },
	{ 0x49feef87, "xdr_inline_decode" },
	{ 0x3810d3ee, "forget_all_cached_acls" },
	{ 0x6a7efe4c, "nfs_submount" },
	{ 0xa55d8d66, "__tracepoint_nfs_xdr_status" },
	{ 0x016dfd7f, "nfs_mknod" },
	{ 0x34d0c3d8, "nfs_create_server" },
	{ 0xfbe7861b, "memcpy" },
	{ 0xb9e2c240, "nfs_init_client" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x27cf78d5, "nfs_post_op_update_inode" },
	{ 0x87b5742d, "rpc_ntop" },
	{ 0x34360028, "xdr_encode_opaque" },
	{ 0x66506b3e, "xdr_read_pages" },
	{ 0x5692ece8, "nfsacl_decode" },
	{ 0xbea62909, "posix_acl_from_mode" },
	{ 0x16a35c59, "nfs_create" },
	{ 0xd272d446, "__fentry__" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0x33a21527, "nfs_mkdir" },
	{ 0x809e6ffc, "nfs_revalidate_inode" },
	{ 0x844d048a, "nfs_get_lock_context" },
	{ 0xe8213e80, "_printk" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0x6ac784f4, "schedule_timeout" },
	{ 0xb0f2d320, "nfs_try_get_tree" },
	{ 0x3bf9ad69, "__tracepoint_sched_set_state_tp" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xff0106da, "refcount_warn_saturate" },
	{ 0x972c8816, "make_kuid" },
	{ 0xf10836c6, "__SCT__tp_func_nfs_xdr_status" },
	{ 0xf62be786, "nfs_get_client" },
	{ 0x2bf2c044, "__free_pages" },
	{ 0x53d3ca21, "nfs_file_operations" },
	{ 0x1b425bc6, "get_inode_acl" },
	{ 0xf10836c6, "__SCT__tp_func_nfs_xdr_bad_filehandle" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0x540fdd49, "nfs_put_lock_context" },
	{ 0xc2274c8a, "nfs_rename" },
	{ 0x85aae626, "nfs_lookup" },
	{ 0xcd9a5985, "nfs_sysfs_link_rpc_client" },
	{ 0xfb9777ad, "nfsacl_encode" },
	{ 0x25c76e1c, "posix_acl_create" },
	{ 0x9399b375, "get_nfs_open_context" },
	{ 0xc792d712, "__SCK__tp_func_nfs_xdr_status" },
	{ 0x7cf48427, "nfs_invalidate_atime" },
	{ 0x01bec65e, "posix_acl_equiv_mode" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0x9e7487f5, "nfs_getattr" },
	{ 0xc792d712, "__SCK__tp_func_nfs_xdr_bad_filehandle" },
	{ 0x7cf48427, "nfs_zap_acl_cache" },
	{ 0xc3fc81b3, "const_current_task" },
	{ 0xa55d8d66, "__tracepoint_nfs_xdr_bad_filehandle" },
	{ 0xb5c51982, "__cpu_online_mask" },
	{ 0xd2123ed2, "rpc_bind_new_program" },
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
	{ 0x20f0228d, "rpc_delay" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0xfc1a30ee, "nfs_init_timeout_values" },
	{ 0xa28510eb, "make_kgid" },
	{ 0xbe22b7f5, "from_kgid_munged" },
	{ 0x1a113166, "nfs_alloc_fattr" },
	{ 0x49feef87, "xdr_reserve_space" },
	{ 0xb04003c4, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x058c185a,
	0xf6319543,
	0x7ec472ba,
	0x118649b4,
	0xa4c0178c,
	0x4a09d399,
	0x3a155231,
	0x9d34bda5,
	0xf9d9c87b,
	0xffddf59c,
	0x39030e3a,
	0x8eb37e44,
	0xae612a3f,
	0xf32eae3f,
	0xe1387849,
	0x0be4d87e,
	0xfbc57bb9,
	0x2da8be68,
	0x29613d4f,
	0xe4de56b4,
	0x43a349ca,
	0xbf672701,
	0x166cce4f,
	0x27cf78d5,
	0xc38c4741,
	0x3398a1da,
	0xf296206e,
	0xd0ea019a,
	0xb2e62cba,
	0xfdb69c3e,
	0xf6319543,
	0x6eb9238c,
	0xddb5f6cd,
	0xc1249a30,
	0x035de56c,
	0x885fde2f,
	0xf62be786,
	0x74694ee3,
	0x67e35d55,
	0xfdc586be,
	0x94cace9f,
	0x49feef87,
	0x3810d3ee,
	0x6a7efe4c,
	0xa55d8d66,
	0x016dfd7f,
	0x34d0c3d8,
	0xfbe7861b,
	0xb9e2c240,
	0xcb8b6ec6,
	0x27cf78d5,
	0x87b5742d,
	0x34360028,
	0x66506b3e,
	0x5692ece8,
	0xbea62909,
	0x16a35c59,
	0xd272d446,
	0x5a844b26,
	0x33a21527,
	0x809e6ffc,
	0x844d048a,
	0xe8213e80,
	0xbd03ed67,
	0x6ac784f4,
	0xb0f2d320,
	0x3bf9ad69,
	0xd272d446,
	0xff0106da,
	0x972c8816,
	0xf10836c6,
	0xf62be786,
	0x2bf2c044,
	0x53d3ca21,
	0x1b425bc6,
	0xf10836c6,
	0x90a48d82,
	0x540fdd49,
	0xc2274c8a,
	0x85aae626,
	0xcd9a5985,
	0xfb9777ad,
	0x25c76e1c,
	0x9399b375,
	0xc792d712,
	0x7cf48427,
	0x01bec65e,
	0xbd03ed67,
	0x9e7487f5,
	0xc792d712,
	0x7cf48427,
	0xc3fc81b3,
	0xa55d8d66,
	0xb5c51982,
	0xd2123ed2,
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
	0x20f0228d,
	0xd272d446,
	0xfc1a30ee,
	0xa28510eb,
	0xbe22b7f5,
	0x1a113166,
	0x49feef87,
	0xb04003c4,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"jiffies\0"
	"nfs_rmdir\0"
	"cpu_number\0"
	"unregister_nfs_version\0"
	"kvfree_call_rcu\0"
	"nfs_async_iocounter_wait\0"
	"nfs_setattr_update_inode\0"
	"nfs_sops\0"
	"init_user_ns\0"
	"rpc_restart_call\0"
	"nfs_link\0"
	"__kmalloc_cache_noprof\0"
	"dput\0"
	"nfs_stat_to_errno\0"
	"put_nfs_open_context\0"
	"nfs_permission\0"
	"alloc_pages_noprof\0"
	"nfs_add_or_obtain\0"
	"from_kuid_munged\0"
	"__ubsan_handle_load_invalid_value\0"
	"strlen\0"
	"nfs_free_client\0"
	"nfs_close_context\0"
	"nfs_refresh_inode\0"
	"nfs_access_set_mask\0"
	"xdr_stream_pos\0"
	"nfs_debug\0"
	"kmalloc_caches\0"
	"__trace_set_current_state\0"
	"nfs_symlink\0"
	"nfs_unlink\0"
	"forget_cached_acl\0"
	"nfs_clone_server\0"
	"strcpy\0"
	"nlmclnt_proc\0"
	"nfs_writeback_update_inode\0"
	"nfs_alloc_client\0"
	"nfs_dentry_operations\0"
	"xdr_write_pages\0"
	"nfs_access_zap_cache\0"
	"nfs_wb_all\0"
	"xdr_inline_decode\0"
	"forget_all_cached_acls\0"
	"nfs_submount\0"
	"__tracepoint_nfs_xdr_status\0"
	"nfs_mknod\0"
	"nfs_create_server\0"
	"memcpy\0"
	"nfs_init_client\0"
	"kfree\0"
	"nfs_post_op_update_inode\0"
	"rpc_ntop\0"
	"xdr_encode_opaque\0"
	"xdr_read_pages\0"
	"nfsacl_decode\0"
	"posix_acl_from_mode\0"
	"nfs_create\0"
	"__fentry__\0"
	"__x86_indirect_thunk_rax\0"
	"nfs_mkdir\0"
	"nfs_revalidate_inode\0"
	"nfs_get_lock_context\0"
	"_printk\0"
	"__ref_stack_chk_guard\0"
	"schedule_timeout\0"
	"nfs_try_get_tree\0"
	"__tracepoint_sched_set_state_tp\0"
	"__stack_chk_fail\0"
	"refcount_warn_saturate\0"
	"make_kuid\0"
	"__SCT__tp_func_nfs_xdr_status\0"
	"nfs_get_client\0"
	"__free_pages\0"
	"nfs_file_operations\0"
	"get_inode_acl\0"
	"__SCT__tp_func_nfs_xdr_bad_filehandle\0"
	"__ubsan_handle_out_of_bounds\0"
	"nfs_put_lock_context\0"
	"nfs_rename\0"
	"nfs_lookup\0"
	"nfs_sysfs_link_rpc_client\0"
	"nfsacl_encode\0"
	"posix_acl_create\0"
	"get_nfs_open_context\0"
	"__SCK__tp_func_nfs_xdr_status\0"
	"nfs_invalidate_atime\0"
	"posix_acl_equiv_mode\0"
	"random_kmalloc_seed\0"
	"nfs_getattr\0"
	"__SCK__tp_func_nfs_xdr_bad_filehandle\0"
	"nfs_zap_acl_cache\0"
	"const_current_task\0"
	"__tracepoint_nfs_xdr_bad_filehandle\0"
	"__cpu_online_mask\0"
	"rpc_bind_new_program\0"
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
	"rpc_delay\0"
	"__x86_return_thunk\0"
	"nfs_init_timeout_values\0"
	"make_kgid\0"
	"from_kgid_munged\0"
	"nfs_alloc_fattr\0"
	"xdr_reserve_space\0"
	"module_layout\0"
;

MODULE_INFO(depends, "nfs,sunrpc,lockd,nfs_acl");


MODULE_INFO(srcversion, "31BD2B4CFEBB69639CBAE17");
