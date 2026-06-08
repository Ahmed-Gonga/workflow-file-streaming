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
	{ 0xe8213e80, "_printk" },
	{ 0xb0d5aea4, "nfs4_test_deviceid_unavailable" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xff0106da, "refcount_warn_saturate" },
	{ 0x9b74b0d8, "nfs41_sequence_done" },
	{ 0x481f45e4, "pnfs_generic_rw_release" },
	{ 0x8cc2e4ed, "pnfs_generic_scan_commit_lists" },
	{ 0x86d206f6, "__SCT__WARN_trap" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0xbd03ed67, "page_offset_base" },
	{ 0x0a7ca3bf, "pnfs_set_layoutcommit" },
	{ 0xe36227bb, "nfs4_print_deviceid" },
	{ 0x3da37550, "nfs4_put_deviceid_node" },
	{ 0xfb9c960a, "pnfs_put_lseg" },
	{ 0xfd5c10cc, "nfs4_pnfs_ds_add" },
	{ 0x7143b55e, "__tracepoint_fl_getdevinfo" },
	{ 0x12f27d9c, "pnfs_destroy_layout" },
	{ 0xbaf85ce1, "pnfs_layout_mark_request_commit" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0x80e3aa4a, "nfs_pageio_reset_write_mds" },
	{ 0x3e728171, "nfs4_find_or_create_ds_client" },
	{ 0xc3fc81b3, "const_current_task" },
	{ 0x1ba0ee51, "__SCK__tp_func_nfs4_pnfs_commit_ds" },
	{ 0x3b23ac81, "nfs4_find_get_deviceid" },
	{ 0x1ba0ee51, "__SCK__tp_func_fl_getdevinfo" },
	{ 0x4f1e5fd0, "__list_del_entry_valid_or_report" },
	{ 0xb5c51982, "__cpu_online_mask" },
	{ 0xba82fa4a, "folio_alloc_noprof" },
	{ 0xaf081c0c, "__SCT__tp_func_nfs4_pnfs_write" },
	{ 0xdc23a8da, "xdr_init_decode_pages" },
	{ 0x98aa1e41, "tracepoint_srcu" },
	{ 0x20f0228d, "rpc_delay" },
	{ 0x923c70c4, "pnfs_generic_write_commit_done" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x0d6494bf, "pnfs_generic_pg_cleanup" },
	{ 0x06a0ebb0, "rpc_exit" },
	{ 0x1ba0ee51, "__SCK__tp_func_nfs4_pnfs_read" },
	{ 0x51ba6366, "pnfs_update_layout" },
	{ 0x826c9d7a, "pnfs_generic_pg_test" },
	{ 0x4a831726, "pnfs_generic_recover_commit_reqs" },
	{ 0x1ba0ee51, "__SCK__tp_func_nfs4_pnfs_write" },
	{ 0x21c486a1, "pnfs_generic_commit_pagelist" },
	{ 0xbd03ed67, "vmemmap_base" },
	{ 0x82fd7238, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7ec472ba, "cpu_number" },
	{ 0xa4c0178c, "kvfree_call_rcu" },
	{ 0xdc9fa1a7, "nfs4_set_rw_stateid" },
	{ 0xab9e81a2, "nfs_initiate_pgio" },
	{ 0x12f13aa1, "nfs4_decode_mp_ds_addr" },
	{ 0x7143b55e, "__tracepoint_nfs4_pnfs_commit_ds" },
	{ 0x726d3e57, "nfs4_mark_deviceid_unavailable" },
	{ 0xcde3c1aa, "__folio_put" },
	{ 0x8eb37e44, "__kmalloc_cache_noprof" },
	{ 0x764a9960, "nfs4_pnfs_ds_put" },
	{ 0x443b8da7, "pnfs_error_mark_layout_for_return" },
	{ 0x88842975, "nfs_initiate_commit" },
	{ 0x993dbe27, "nfs4_setup_sequence" },
	{ 0xc103906c, "pnfs_generic_clear_request_commit" },
	{ 0xe496b964, "nfs4_pnfs_ds_connect" },
	{ 0x5af09d8b, "_raw_spin_unlock" },
	{ 0xf296206e, "nfs_debug" },
	{ 0xc79d0d5f, "pnfs_alloc_commit_array" },
	{ 0xd0ea019a, "kmalloc_caches" },
	{ 0x9e12b5f0, "pnfs_nfs_generic_sync" },
	{ 0x5e575a33, "nfs_request_add_commit_list" },
	{ 0x24102caa, "nfs4_schedule_session_recovery" },
	{ 0xcc48482e, "pnfs_unregister_layoutdriver" },
	{ 0x5605f9a7, "pnfs_register_layoutdriver" },
	{ 0x360de656, "pnfs_generic_ds_cinfo_release_lseg" },
	{ 0x885fde2f, "nfs_writeback_update_inode" },
	{ 0xdc352a3b, "__list_add_valid_or_report" },
	{ 0xfb9c960a, "pnfs_set_lo_fail" },
	{ 0x23a4913a, "param_ops_uint" },
	{ 0x7849da3e, "nfs4_init_deviceid_node" },
	{ 0x992babb2, "nfs_pageio_reset_read_mds" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0xd0a68378, "pnfs_generic_ds_cinfo_destroy" },
	{ 0x7143b55e, "__tracepoint_nfs4_pnfs_write" },
	{ 0x49feef87, "xdr_inline_decode" },
	{ 0xb8f8c02e, "rpc_wake_up" },
	{ 0x39ec907a, "pnfs_write_done_resend_to_mds" },
	{ 0x7143b55e, "__tracepoint_nfs4_pnfs_read" },
	{ 0xf9405cc5, "pnfs_free_commit_array" },
	{ 0xb5b907b5, "__SCT__tp_func_fl_getdevinfo" },
	{ 0xfbe7861b, "memcpy" },
	{ 0xb2f8acc6, "pnfs_generic_pg_check_layout" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0xddf5fdf2, "pnfs_generic_prepare_to_resend_writes" },
	{ 0xdece2d71, "pnfs_generic_pg_writepages" },
	{ 0x314ef142, "__SCT__tp_func_nfs4_pnfs_commit_ds" },
	{ 0xffddf59c, "rpc_restart_call_prepare" },
	{ 0xaf081c0c, "__SCT__tp_func_nfs4_pnfs_read" },
	{ 0xd710e012, "rpc_count_iostats" },
	{ 0x39ec907a, "pnfs_read_done_resend_to_mds" },
	{ 0x5af09d8b, "_raw_spin_lock" },
	{ 0xc019b91a, "pnfs_add_commit_array" },
	{ 0xdece2d71, "pnfs_generic_pg_readpages" },
	{ 0xbbb6b6b5, "pnfs_generic_commit_release" },
	{ 0xd272d446, "__fentry__" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0xb04003c4, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe8213e80,
	0xb0d5aea4,
	0xbd03ed67,
	0xd272d446,
	0xff0106da,
	0x9b74b0d8,
	0x481f45e4,
	0x8cc2e4ed,
	0x86d206f6,
	0x90a48d82,
	0xbd03ed67,
	0x0a7ca3bf,
	0xe36227bb,
	0x3da37550,
	0xfb9c960a,
	0xfd5c10cc,
	0x7143b55e,
	0x12f27d9c,
	0xbaf85ce1,
	0xbd03ed67,
	0x80e3aa4a,
	0x3e728171,
	0xc3fc81b3,
	0x1ba0ee51,
	0x3b23ac81,
	0x1ba0ee51,
	0x4f1e5fd0,
	0xb5c51982,
	0xba82fa4a,
	0xaf081c0c,
	0xdc23a8da,
	0x98aa1e41,
	0x20f0228d,
	0x923c70c4,
	0xd272d446,
	0x0d6494bf,
	0x06a0ebb0,
	0x1ba0ee51,
	0x51ba6366,
	0x826c9d7a,
	0x4a831726,
	0x1ba0ee51,
	0x21c486a1,
	0xbd03ed67,
	0x82fd7238,
	0x7ec472ba,
	0xa4c0178c,
	0xdc9fa1a7,
	0xab9e81a2,
	0x12f13aa1,
	0x7143b55e,
	0x726d3e57,
	0xcde3c1aa,
	0x8eb37e44,
	0x764a9960,
	0x443b8da7,
	0x88842975,
	0x993dbe27,
	0xc103906c,
	0xe496b964,
	0x5af09d8b,
	0xf296206e,
	0xc79d0d5f,
	0xd0ea019a,
	0x9e12b5f0,
	0x5e575a33,
	0x24102caa,
	0xcc48482e,
	0x5605f9a7,
	0x360de656,
	0x885fde2f,
	0xdc352a3b,
	0xfb9c960a,
	0x23a4913a,
	0x7849da3e,
	0x992babb2,
	0xd710adbf,
	0xd0a68378,
	0x7143b55e,
	0x49feef87,
	0xb8f8c02e,
	0x39ec907a,
	0x7143b55e,
	0xf9405cc5,
	0xb5b907b5,
	0xfbe7861b,
	0xb2f8acc6,
	0xcb8b6ec6,
	0xddf5fdf2,
	0xdece2d71,
	0x314ef142,
	0xffddf59c,
	0xaf081c0c,
	0xd710e012,
	0x39ec907a,
	0x5af09d8b,
	0xc019b91a,
	0xdece2d71,
	0xbbb6b6b5,
	0xd272d446,
	0x5a844b26,
	0xb04003c4,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_printk\0"
	"nfs4_test_deviceid_unavailable\0"
	"__ref_stack_chk_guard\0"
	"__stack_chk_fail\0"
	"refcount_warn_saturate\0"
	"nfs41_sequence_done\0"
	"pnfs_generic_rw_release\0"
	"pnfs_generic_scan_commit_lists\0"
	"__SCT__WARN_trap\0"
	"__ubsan_handle_out_of_bounds\0"
	"page_offset_base\0"
	"pnfs_set_layoutcommit\0"
	"nfs4_print_deviceid\0"
	"nfs4_put_deviceid_node\0"
	"pnfs_put_lseg\0"
	"nfs4_pnfs_ds_add\0"
	"__tracepoint_fl_getdevinfo\0"
	"pnfs_destroy_layout\0"
	"pnfs_layout_mark_request_commit\0"
	"random_kmalloc_seed\0"
	"nfs_pageio_reset_write_mds\0"
	"nfs4_find_or_create_ds_client\0"
	"const_current_task\0"
	"__SCK__tp_func_nfs4_pnfs_commit_ds\0"
	"nfs4_find_get_deviceid\0"
	"__SCK__tp_func_fl_getdevinfo\0"
	"__list_del_entry_valid_or_report\0"
	"__cpu_online_mask\0"
	"folio_alloc_noprof\0"
	"__SCT__tp_func_nfs4_pnfs_write\0"
	"xdr_init_decode_pages\0"
	"tracepoint_srcu\0"
	"rpc_delay\0"
	"pnfs_generic_write_commit_done\0"
	"__x86_return_thunk\0"
	"pnfs_generic_pg_cleanup\0"
	"rpc_exit\0"
	"__SCK__tp_func_nfs4_pnfs_read\0"
	"pnfs_update_layout\0"
	"pnfs_generic_pg_test\0"
	"pnfs_generic_recover_commit_reqs\0"
	"__SCK__tp_func_nfs4_pnfs_write\0"
	"pnfs_generic_commit_pagelist\0"
	"vmemmap_base\0"
	"__ubsan_handle_shift_out_of_bounds\0"
	"cpu_number\0"
	"kvfree_call_rcu\0"
	"nfs4_set_rw_stateid\0"
	"nfs_initiate_pgio\0"
	"nfs4_decode_mp_ds_addr\0"
	"__tracepoint_nfs4_pnfs_commit_ds\0"
	"nfs4_mark_deviceid_unavailable\0"
	"__folio_put\0"
	"__kmalloc_cache_noprof\0"
	"nfs4_pnfs_ds_put\0"
	"pnfs_error_mark_layout_for_return\0"
	"nfs_initiate_commit\0"
	"nfs4_setup_sequence\0"
	"pnfs_generic_clear_request_commit\0"
	"nfs4_pnfs_ds_connect\0"
	"_raw_spin_unlock\0"
	"nfs_debug\0"
	"pnfs_alloc_commit_array\0"
	"kmalloc_caches\0"
	"pnfs_nfs_generic_sync\0"
	"nfs_request_add_commit_list\0"
	"nfs4_schedule_session_recovery\0"
	"pnfs_unregister_layoutdriver\0"
	"pnfs_register_layoutdriver\0"
	"pnfs_generic_ds_cinfo_release_lseg\0"
	"nfs_writeback_update_inode\0"
	"__list_add_valid_or_report\0"
	"pnfs_set_lo_fail\0"
	"param_ops_uint\0"
	"nfs4_init_deviceid_node\0"
	"nfs_pageio_reset_read_mds\0"
	"__kmalloc_noprof\0"
	"pnfs_generic_ds_cinfo_destroy\0"
	"__tracepoint_nfs4_pnfs_write\0"
	"xdr_inline_decode\0"
	"rpc_wake_up\0"
	"pnfs_write_done_resend_to_mds\0"
	"__tracepoint_nfs4_pnfs_read\0"
	"pnfs_free_commit_array\0"
	"__SCT__tp_func_fl_getdevinfo\0"
	"memcpy\0"
	"pnfs_generic_pg_check_layout\0"
	"kfree\0"
	"pnfs_generic_prepare_to_resend_writes\0"
	"pnfs_generic_pg_writepages\0"
	"__SCT__tp_func_nfs4_pnfs_commit_ds\0"
	"rpc_restart_call_prepare\0"
	"__SCT__tp_func_nfs4_pnfs_read\0"
	"rpc_count_iostats\0"
	"pnfs_read_done_resend_to_mds\0"
	"_raw_spin_lock\0"
	"pnfs_add_commit_array\0"
	"pnfs_generic_pg_readpages\0"
	"pnfs_generic_commit_release\0"
	"__fentry__\0"
	"__x86_indirect_thunk_rax\0"
	"module_layout\0"
;

MODULE_INFO(depends, "nfsv4,nfs,sunrpc");


MODULE_INFO(srcversion, "0AAE6742FD26224335A4917");
