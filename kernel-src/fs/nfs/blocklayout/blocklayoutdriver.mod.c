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
	{ 0xff0106da, "refcount_warn_saturate" },
	{ 0x5490c000, "rb_prev" },
	{ 0x1ba0ee51, "__SCK__tp_func_bl_pr_key_reg" },
	{ 0xc475524c, "rpc_destroy_pipe_data" },
	{ 0xfd285498, "rpc_pipefs_notifier_register" },
	{ 0x86d206f6, "__SCT__WARN_trap" },
	{ 0x9b5d7f3f, "blk_finish_plug" },
	{ 0x716216be, "submit_bio" },
	{ 0x11bea720, "rpc_pipe_generic_upcall" },
	{ 0x38ae9edf, "module_put" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0xbd03ed67, "page_offset_base" },
	{ 0x3da37550, "nfs4_put_deviceid_node" },
	{ 0x2d970242, "bio_put" },
	{ 0x05fedf86, "fput" },
	{ 0x22bbe942, "__SCT__tp_func_bl_pr_key_reg" },
	{ 0xd272d446, "__rcu_read_unlock" },
	{ 0xaef1f20d, "system_percpu_wq" },
	{ 0x48cf44a3, "rpc_d_lookup_sb" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0x7c0c25f7, "mutex_lock" },
	{ 0x80e3aa4a, "nfs_pageio_reset_write_mds" },
	{ 0x7143b55e, "__tracepoint_bl_pr_key_reg" },
	{ 0xc3fc81b3, "const_current_task" },
	{ 0xf5d8d228, "rb_erase" },
	{ 0x3b23ac81, "nfs4_find_get_deviceid" },
	{ 0x4f1e5fd0, "__list_del_entry_valid_or_report" },
	{ 0xf64a735b, "bio_add_page" },
	{ 0xb5c51982, "__cpu_online_mask" },
	{ 0xee0a4b36, "bdev_file_open_by_dev" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0xba82fa4a, "folio_alloc_noprof" },
	{ 0x7aafb0d8, "unregister_pernet_subsys" },
	{ 0x374b8dda, "rpc_queue_upcall" },
	{ 0xdc23a8da, "xdr_init_decode_pages" },
	{ 0x98aa1e41, "tracepoint_srcu" },
	{ 0x0e9cab28, "memset" },
	{ 0x3ab77147, "pnfs_generic_sync" },
	{ 0x57a9e4b2, "__vmalloc_noprof" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x386e4ba3, "kmemdup_noprof" },
	{ 0x0d6494bf, "pnfs_generic_pg_cleanup" },
	{ 0x2247bd2b, "default_wake_function" },
	{ 0xe804603d, "__init_waitqueue_head" },
	{ 0xa8a747aa, "rpc_get_sb_net" },
	{ 0x1ba0ee51, "__SCK__tp_func_bl_pr_key_reg_err" },
	{ 0x1ba0ee51, "__SCK__tp_func_bl_ext_tree_prepare_commit" },
	{ 0xec203997, "kasprintf" },
	{ 0x1ba0ee51, "__SCK__tp_func_bl_pr_key_unreg_err" },
	{ 0x826c9d7a, "pnfs_generic_pg_test" },
	{ 0x058c185a, "jiffies" },
	{ 0x629270fa, "__SCT__tp_func_bl_pr_key_unreg_err" },
	{ 0x7143b55e, "__tracepoint_bl_pr_key_reg_err" },
	{ 0xbd03ed67, "vmemmap_base" },
	{ 0xfcec65ad, "rpc_mkpipe_dentry" },
	{ 0x82fd7238, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdedf9392, "rpc_mkpipe_data" },
	{ 0x7ec472ba, "cpu_number" },
	{ 0xa4c0178c, "kvfree_call_rcu" },
	{ 0xf1de9e85, "vfree" },
	{ 0x7c0c25f7, "mutex_unlock" },
	{ 0x726d3e57, "nfs4_mark_deviceid_unavailable" },
	{ 0xcde3c1aa, "__folio_put" },
	{ 0x8eb37e44, "__kmalloc_cache_noprof" },
	{ 0xf296206e, "nfs_net_id" },
	{ 0x5002c000, "nfs4_delete_deviceid" },
	{ 0xae612a3f, "dput" },
	{ 0x443b8da7, "pnfs_error_mark_layout_for_return" },
	{ 0x584259e0, "pnfs_ld_write_done" },
	{ 0xfbc57bb9, "alloc_pages_noprof" },
	{ 0xc475524c, "rpc_unlink" },
	{ 0x7143b55e, "__tracepoint_bl_ext_tree_prepare_commit" },
	{ 0xb730487b, "remove_wait_queue" },
	{ 0x799fa8cd, "file_bdev" },
	{ 0xebfe0fb0, "nfs_dreq_bytes_left" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0x1ba0ee51, "__SCK__tp_func_bl_pr_key_unreg" },
	{ 0x7143b55e, "__tracepoint_bl_pr_key_unreg_err" },
	{ 0x5af09d8b, "_raw_spin_unlock" },
	{ 0xa3e44597, "bio_alloc_bioset" },
	{ 0xf296206e, "nfs_debug" },
	{ 0xd0ea019a, "kmalloc_caches" },
	{ 0xb2e62cba, "__trace_set_current_state" },
	{ 0xb05863ca, "fs_bio_set" },
	{ 0xf0ba0e98, "pnfs_generic_pg_init_write" },
	{ 0x7c0c25f7, "mutex_init_generic" },
	{ 0xcc48482e, "pnfs_unregister_layoutdriver" },
	{ 0x7143b55e, "__tracepoint_bl_pr_key_unreg" },
	{ 0x5605f9a7, "pnfs_register_layoutdriver" },
	{ 0x2ed9dc29, "bdev_file_open_by_path" },
	{ 0x872f5dee, "try_module_get" },
	{ 0x584259e0, "pnfs_ld_read_done" },
	{ 0xdc352a3b, "__list_add_valid_or_report" },
	{ 0x9b5d7f3f, "blk_start_plug" },
	{ 0xfb9c960a, "pnfs_set_lo_fail" },
	{ 0x092a35a2, "_copy_from_user" },
	{ 0x7849da3e, "nfs4_init_deviceid_node" },
	{ 0xd272d446, "__rcu_read_lock" },
	{ 0x992babb2, "nfs_pageio_reset_read_mds" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0xb63e44df, "vmalloc_to_page" },
	{ 0x49feef87, "xdr_inline_decode" },
	{ 0x49733ad6, "queue_work_on" },
	{ 0x47886e07, "rpc_pipefs_notifier_unregister" },
	{ 0x5490c000, "rb_next" },
	{ 0xb2f8acc6, "pnfs_generic_pg_init_read" },
	{ 0xfbe7861b, "memcpy" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0xdece2d71, "pnfs_generic_pg_writepages" },
	{ 0xb730487b, "add_wait_queue" },
	{ 0x1b5a53ce, "page_cache_next_miss" },
	{ 0x68a1b6c6, "__wake_up" },
	{ 0x34360028, "xdr_encode_opaque" },
	{ 0xf5d8d228, "rb_insert_color" },
	{ 0x34360028, "xdr_encode_opaque_fixed" },
	{ 0x5af09d8b, "_raw_spin_lock" },
	{ 0xdece2d71, "pnfs_generic_pg_readpages" },
	{ 0xd272d446, "__fentry__" },
	{ 0x6a6d4406, "rpc_put_sb_net" },
	{ 0x71d7a617, "register_pernet_subsys" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0x22bbe942, "__SCT__tp_func_bl_pr_key_unreg" },
	{ 0xe8213e80, "_printk" },
	{ 0x9cbfff72, "__SCT__tp_func_bl_ext_tree_prepare_commit" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xd272d446, "schedule" },
	{ 0x3bf9ad69, "__tracepoint_sched_set_state_tp" },
	{ 0x629270fa, "__SCT__tp_func_bl_pr_key_reg_err" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xb04003c4, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xff0106da,
	0x5490c000,
	0x1ba0ee51,
	0xc475524c,
	0xfd285498,
	0x86d206f6,
	0x9b5d7f3f,
	0x716216be,
	0x11bea720,
	0x38ae9edf,
	0x90a48d82,
	0xbd03ed67,
	0x3da37550,
	0x2d970242,
	0x05fedf86,
	0x22bbe942,
	0xd272d446,
	0xaef1f20d,
	0x48cf44a3,
	0xbd03ed67,
	0x7c0c25f7,
	0x80e3aa4a,
	0x7143b55e,
	0xc3fc81b3,
	0xf5d8d228,
	0x3b23ac81,
	0x4f1e5fd0,
	0xf64a735b,
	0xb5c51982,
	0xee0a4b36,
	0xe54e0a6b,
	0xba82fa4a,
	0x7aafb0d8,
	0x374b8dda,
	0xdc23a8da,
	0x98aa1e41,
	0x0e9cab28,
	0x3ab77147,
	0x57a9e4b2,
	0xd272d446,
	0x386e4ba3,
	0x0d6494bf,
	0x2247bd2b,
	0xe804603d,
	0xa8a747aa,
	0x1ba0ee51,
	0x1ba0ee51,
	0xec203997,
	0x1ba0ee51,
	0x826c9d7a,
	0x058c185a,
	0x629270fa,
	0x7143b55e,
	0xbd03ed67,
	0xfcec65ad,
	0x82fd7238,
	0xdedf9392,
	0x7ec472ba,
	0xa4c0178c,
	0xf1de9e85,
	0x7c0c25f7,
	0x726d3e57,
	0xcde3c1aa,
	0x8eb37e44,
	0xf296206e,
	0x5002c000,
	0xae612a3f,
	0x443b8da7,
	0x584259e0,
	0xfbc57bb9,
	0xc475524c,
	0x7143b55e,
	0xb730487b,
	0x799fa8cd,
	0xebfe0fb0,
	0xe4de56b4,
	0x1ba0ee51,
	0x7143b55e,
	0x5af09d8b,
	0xa3e44597,
	0xf296206e,
	0xd0ea019a,
	0xb2e62cba,
	0xb05863ca,
	0xf0ba0e98,
	0x7c0c25f7,
	0xcc48482e,
	0x7143b55e,
	0x5605f9a7,
	0x2ed9dc29,
	0x872f5dee,
	0x584259e0,
	0xdc352a3b,
	0x9b5d7f3f,
	0xfb9c960a,
	0x092a35a2,
	0x7849da3e,
	0xd272d446,
	0x992babb2,
	0xd710adbf,
	0xb63e44df,
	0x49feef87,
	0x49733ad6,
	0x47886e07,
	0x5490c000,
	0xb2f8acc6,
	0xfbe7861b,
	0xcb8b6ec6,
	0xdece2d71,
	0xb730487b,
	0x1b5a53ce,
	0x68a1b6c6,
	0x34360028,
	0xf5d8d228,
	0x34360028,
	0x5af09d8b,
	0xdece2d71,
	0xd272d446,
	0x6a6d4406,
	0x71d7a617,
	0x5a844b26,
	0x22bbe942,
	0xe8213e80,
	0x9cbfff72,
	0xbd03ed67,
	0xd272d446,
	0x3bf9ad69,
	0x629270fa,
	0xd272d446,
	0xb04003c4,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"refcount_warn_saturate\0"
	"rb_prev\0"
	"__SCK__tp_func_bl_pr_key_reg\0"
	"rpc_destroy_pipe_data\0"
	"rpc_pipefs_notifier_register\0"
	"__SCT__WARN_trap\0"
	"blk_finish_plug\0"
	"submit_bio\0"
	"rpc_pipe_generic_upcall\0"
	"module_put\0"
	"__ubsan_handle_out_of_bounds\0"
	"page_offset_base\0"
	"nfs4_put_deviceid_node\0"
	"bio_put\0"
	"fput\0"
	"__SCT__tp_func_bl_pr_key_reg\0"
	"__rcu_read_unlock\0"
	"system_percpu_wq\0"
	"rpc_d_lookup_sb\0"
	"random_kmalloc_seed\0"
	"mutex_lock\0"
	"nfs_pageio_reset_write_mds\0"
	"__tracepoint_bl_pr_key_reg\0"
	"const_current_task\0"
	"rb_erase\0"
	"nfs4_find_get_deviceid\0"
	"__list_del_entry_valid_or_report\0"
	"bio_add_page\0"
	"__cpu_online_mask\0"
	"bdev_file_open_by_dev\0"
	"__fortify_panic\0"
	"folio_alloc_noprof\0"
	"unregister_pernet_subsys\0"
	"rpc_queue_upcall\0"
	"xdr_init_decode_pages\0"
	"tracepoint_srcu\0"
	"memset\0"
	"pnfs_generic_sync\0"
	"__vmalloc_noprof\0"
	"__x86_return_thunk\0"
	"kmemdup_noprof\0"
	"pnfs_generic_pg_cleanup\0"
	"default_wake_function\0"
	"__init_waitqueue_head\0"
	"rpc_get_sb_net\0"
	"__SCK__tp_func_bl_pr_key_reg_err\0"
	"__SCK__tp_func_bl_ext_tree_prepare_commit\0"
	"kasprintf\0"
	"__SCK__tp_func_bl_pr_key_unreg_err\0"
	"pnfs_generic_pg_test\0"
	"jiffies\0"
	"__SCT__tp_func_bl_pr_key_unreg_err\0"
	"__tracepoint_bl_pr_key_reg_err\0"
	"vmemmap_base\0"
	"rpc_mkpipe_dentry\0"
	"__ubsan_handle_shift_out_of_bounds\0"
	"rpc_mkpipe_data\0"
	"cpu_number\0"
	"kvfree_call_rcu\0"
	"vfree\0"
	"mutex_unlock\0"
	"nfs4_mark_deviceid_unavailable\0"
	"__folio_put\0"
	"__kmalloc_cache_noprof\0"
	"nfs_net_id\0"
	"nfs4_delete_deviceid\0"
	"dput\0"
	"pnfs_error_mark_layout_for_return\0"
	"pnfs_ld_write_done\0"
	"alloc_pages_noprof\0"
	"rpc_unlink\0"
	"__tracepoint_bl_ext_tree_prepare_commit\0"
	"remove_wait_queue\0"
	"file_bdev\0"
	"nfs_dreq_bytes_left\0"
	"__ubsan_handle_load_invalid_value\0"
	"__SCK__tp_func_bl_pr_key_unreg\0"
	"__tracepoint_bl_pr_key_unreg_err\0"
	"_raw_spin_unlock\0"
	"bio_alloc_bioset\0"
	"nfs_debug\0"
	"kmalloc_caches\0"
	"__trace_set_current_state\0"
	"fs_bio_set\0"
	"pnfs_generic_pg_init_write\0"
	"mutex_init_generic\0"
	"pnfs_unregister_layoutdriver\0"
	"__tracepoint_bl_pr_key_unreg\0"
	"pnfs_register_layoutdriver\0"
	"bdev_file_open_by_path\0"
	"try_module_get\0"
	"pnfs_ld_read_done\0"
	"__list_add_valid_or_report\0"
	"blk_start_plug\0"
	"pnfs_set_lo_fail\0"
	"_copy_from_user\0"
	"nfs4_init_deviceid_node\0"
	"__rcu_read_lock\0"
	"nfs_pageio_reset_read_mds\0"
	"__kmalloc_noprof\0"
	"vmalloc_to_page\0"
	"xdr_inline_decode\0"
	"queue_work_on\0"
	"rpc_pipefs_notifier_unregister\0"
	"rb_next\0"
	"pnfs_generic_pg_init_read\0"
	"memcpy\0"
	"kfree\0"
	"pnfs_generic_pg_writepages\0"
	"add_wait_queue\0"
	"page_cache_next_miss\0"
	"__wake_up\0"
	"xdr_encode_opaque\0"
	"rb_insert_color\0"
	"xdr_encode_opaque_fixed\0"
	"_raw_spin_lock\0"
	"pnfs_generic_pg_readpages\0"
	"__fentry__\0"
	"rpc_put_sb_net\0"
	"register_pernet_subsys\0"
	"__x86_indirect_thunk_rax\0"
	"__SCT__tp_func_bl_pr_key_unreg\0"
	"_printk\0"
	"__SCT__tp_func_bl_ext_tree_prepare_commit\0"
	"__ref_stack_chk_guard\0"
	"schedule\0"
	"__tracepoint_sched_set_state_tp\0"
	"__SCT__tp_func_bl_pr_key_reg_err\0"
	"__stack_chk_fail\0"
	"module_layout\0"
;

MODULE_INFO(depends, "nfsv4,sunrpc,nfs");


MODULE_INFO(srcversion, "F84EFE9E69E7F42699FF364");
