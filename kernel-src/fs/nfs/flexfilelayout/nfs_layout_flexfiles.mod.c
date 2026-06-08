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
	{ 0xe36227bb, "nfs4_print_deviceid" },
	{ 0xc173838b, "pnfs_report_layoutstat" },
	{ 0x3da37550, "nfs4_put_deviceid_node" },
	{ 0xfb9c960a, "pnfs_put_lseg" },
	{ 0x52f90a9e, "pnfs_layoutcommit_inode" },
	{ 0xfd5c10cc, "nfs4_pnfs_ds_add" },
	{ 0x12f27d9c, "pnfs_destroy_layout" },
	{ 0xbaf85ce1, "pnfs_layout_mark_request_commit" },
	{ 0xd272d446, "__rcu_read_unlock" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0x80e3aa4a, "nfs_pageio_reset_write_mds" },
	{ 0x4e858b01, "rpc_max_payload" },
	{ 0x3e728171, "nfs4_find_or_create_ds_client" },
	{ 0xbe22b7f5, "from_kgid" },
	{ 0xc3fc81b3, "const_current_task" },
	{ 0x1ba0ee51, "__SCK__tp_func_nfs4_pnfs_commit_ds" },
	{ 0x3b23ac81, "nfs4_find_get_deviceid" },
	{ 0xd888c097, "pnfs_read_resend_pnfs" },
	{ 0x4f1e5fd0, "__list_del_entry_valid_or_report" },
	{ 0xb5c51982, "__cpu_online_mask" },
	{ 0x402db74e, "memcmp" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0x1ba0ee51, "__SCK__tp_func_pnfs_mds_fallback_pg_get_mirror_count" },
	{ 0x01955711, "__SCT__tp_func_pnfs_mds_fallback_write_pagelist" },
	{ 0x01955711, "__SCT__tp_func_pnfs_mds_fallback_read_pagelist" },
	{ 0x493ea335, "rpc_call_start" },
	{ 0x01955711, "__SCT__tp_func_pnfs_mds_fallback_pg_get_mirror_count" },
	{ 0x1ba0ee51, "__SCK__tp_func_ff_layout_read_error" },
	{ 0x7143b55e, "__tracepoint_pnfs_mds_fallback_read_done" },
	{ 0xba82fa4a, "folio_alloc_noprof" },
	{ 0x1ba0ee51, "__SCK__tp_func_pnfs_mds_fallback_read_done" },
	{ 0xaf081c0c, "__SCT__tp_func_nfs4_pnfs_write" },
	{ 0x29613d4f, "from_kuid" },
	{ 0xb311a158, "ns_to_timespec64" },
	{ 0x7143b55e, "__tracepoint_ff_layout_read_error" },
	{ 0xdc23a8da, "xdr_init_decode_pages" },
	{ 0x98aa1e41, "tracepoint_srcu" },
	{ 0x1ba0ee51, "__SCK__tp_func_pnfs_mds_fallback_write_done" },
	{ 0x571e5830, "pnfs_generic_layout_insert_lseg" },
	{ 0x20f0228d, "rpc_delay" },
	{ 0x923c70c4, "pnfs_generic_write_commit_done" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x0d6494bf, "pnfs_generic_pg_cleanup" },
	{ 0x06a0ebb0, "rpc_exit" },
	{ 0xa28510eb, "make_kgid" },
	{ 0x1ba0ee51, "__SCK__tp_func_nfs4_pnfs_read" },
	{ 0x01955711, "__SCT__tp_func_pnfs_mds_fallback_pg_init_read" },
	{ 0x51ba6366, "pnfs_update_layout" },
	{ 0x826c9d7a, "pnfs_generic_pg_test" },
	{ 0x49feef87, "xdr_reserve_space" },
	{ 0x9b74b0d8, "nfs4_sequence_done" },
	{ 0x4a831726, "pnfs_generic_recover_commit_reqs" },
	{ 0x1ba0ee51, "__SCK__tp_func_nfs4_pnfs_write" },
	{ 0x21c486a1, "pnfs_generic_commit_pagelist" },
	{ 0xbd03ed67, "vmemmap_base" },
	{ 0x82fd7238, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7ec472ba, "cpu_number" },
	{ 0xa4c0178c, "kvfree_call_rcu" },
	{ 0xab9e81a2, "nfs_initiate_pgio" },
	{ 0x12f13aa1, "nfs4_decode_mp_ds_addr" },
	{ 0x7143b55e, "__tracepoint_nfs4_pnfs_commit_ds" },
	{ 0x726d3e57, "nfs4_mark_deviceid_unavailable" },
	{ 0xf9d9c87b, "init_user_ns" },
	{ 0x7f7545ed, "xprt_force_disconnect" },
	{ 0x1ba0ee51, "__SCK__tp_func_pnfs_mds_fallback_read_pagelist" },
	{ 0xcde3c1aa, "__folio_put" },
	{ 0x1ba0ee51, "__SCK__tp_func_ff_layout_commit_error" },
	{ 0x8eb37e44, "__kmalloc_cache_noprof" },
	{ 0x97acb853, "ktime_get" },
	{ 0x5002c000, "nfs4_delete_deviceid" },
	{ 0xf296206e, "layoutstats_timer" },
	{ 0x7143b55e, "__tracepoint_pnfs_mds_fallback_write_done" },
	{ 0x764a9960, "nfs4_pnfs_ds_put" },
	{ 0x1ba0ee51, "__SCK__tp_func_ff_layout_write_error" },
	{ 0x1ba0ee51, "__SCK__tp_func_pnfs_mds_fallback_pg_init_write" },
	{ 0x443b8da7, "pnfs_error_mark_layout_for_return" },
	{ 0x88842975, "nfs_initiate_commit" },
	{ 0xfbc57bb9, "alloc_pages_noprof" },
	{ 0x1ba0ee51, "__SCK__tp_func_pnfs_mds_fallback_pg_init_read" },
	{ 0x7143b55e, "__tracepoint_pnfs_mds_fallback_pg_init_read" },
	{ 0x51244248, "prepare_kernel_cred" },
	{ 0x1ba0ee51, "__SCK__tp_func_pnfs_mds_fallback_write_pagelist" },
	{ 0x993dbe27, "nfs4_setup_sequence" },
	{ 0x36c454e1, "nfs42_proc_layouterror" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0x43a349ca, "strlen" },
	{ 0xc103906c, "pnfs_generic_clear_request_commit" },
	{ 0x7143b55e, "__tracepoint_pnfs_mds_fallback_pg_get_mirror_count" },
	{ 0xe496b964, "nfs4_pnfs_ds_connect" },
	{ 0x5af09d8b, "_raw_spin_unlock" },
	{ 0x149630ef, "xdr_init_encode" },
	{ 0x01955711, "__SCT__tp_func_pnfs_mds_fallback_pg_init_write" },
	{ 0xf296206e, "nfs_debug" },
	{ 0x01955711, "__SCT__tp_func_pnfs_mds_fallback_read_done" },
	{ 0x67628f51, "msleep" },
	{ 0xc79d0d5f, "pnfs_alloc_commit_array" },
	{ 0xd0ea019a, "kmalloc_caches" },
	{ 0x9e12b5f0, "pnfs_nfs_generic_sync" },
	{ 0x24102caa, "nfs4_schedule_session_recovery" },
	{ 0xcc48482e, "pnfs_unregister_layoutdriver" },
	{ 0x5605f9a7, "pnfs_register_layoutdriver" },
	{ 0x360de656, "pnfs_generic_ds_cinfo_release_lseg" },
	{ 0x726d3e57, "nfs4_mark_deviceid_available" },
	{ 0x885fde2f, "nfs_writeback_update_inode" },
	{ 0xdc352a3b, "__list_add_valid_or_report" },
	{ 0x23a4913a, "param_ops_uint" },
	{ 0x7143b55e, "__tracepoint_pnfs_mds_fallback_pg_init_write" },
	{ 0x7849da3e, "nfs4_init_deviceid_node" },
	{ 0xd272d446, "__rcu_read_lock" },
	{ 0x7143b55e, "__tracepoint_pnfs_mds_fallback_write_pagelist" },
	{ 0x992babb2, "nfs_pageio_reset_read_mds" },
	{ 0x67e35d55, "xdr_write_pages" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0xd0a68378, "pnfs_generic_ds_cinfo_destroy" },
	{ 0x23a4913a, "param_ops_ushort" },
	{ 0x40a621c5, "snprintf" },
	{ 0x7143b55e, "__tracepoint_nfs4_pnfs_write" },
	{ 0x49feef87, "xdr_inline_decode" },
	{ 0x9a9482d7, "rpc_count_iostats_metrics" },
	{ 0xb8f8c02e, "rpc_wake_up" },
	{ 0x39ec907a, "pnfs_write_done_resend_to_mds" },
	{ 0x7143b55e, "__tracepoint_nfs4_pnfs_read" },
	{ 0x7143b55e, "__tracepoint_ff_layout_write_error" },
	{ 0xf9405cc5, "pnfs_free_commit_array" },
	{ 0xfbe7861b, "memcpy" },
	{ 0xb2f8acc6, "pnfs_generic_pg_check_layout" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0xddf5fdf2, "pnfs_generic_prepare_to_resend_writes" },
	{ 0xaf081c0c, "__SCT__tp_func_ff_layout_write_error" },
	{ 0xdece2d71, "pnfs_generic_pg_writepages" },
	{ 0xaf081c0c, "__SCT__tp_func_ff_layout_read_error" },
	{ 0x314ef142, "__SCT__tp_func_nfs4_pnfs_commit_ds" },
	{ 0xffddf59c, "rpc_restart_call_prepare" },
	{ 0x34360028, "xdr_encode_opaque" },
	{ 0xaf081c0c, "__SCT__tp_func_nfs4_pnfs_read" },
	{ 0x7143b55e, "__tracepoint_ff_layout_commit_error" },
	{ 0x39ec907a, "pnfs_read_done_resend_to_mds" },
	{ 0x34360028, "xdr_encode_opaque_fixed" },
	{ 0x5af09d8b, "_raw_spin_lock" },
	{ 0xc019b91a, "pnfs_add_commit_array" },
	{ 0xdece2d71, "pnfs_generic_pg_readpages" },
	{ 0xbbb6b6b5, "pnfs_generic_commit_release" },
	{ 0xe6ceb2c0, "rpc_clnt_disconnect" },
	{ 0xd272d446, "__fentry__" },
	{ 0xd9505619, "__put_cred" },
	{ 0xf70bbac3, "rpc_cancel_tasks" },
	{ 0x314ef142, "__SCT__tp_func_ff_layout_commit_error" },
	{ 0x01955711, "__SCT__tp_func_pnfs_mds_fallback_write_done" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0x06ecfa79, "nfs_map_string_to_numeric" },
	{ 0xe8213e80, "_printk" },
	{ 0xb0d5aea4, "nfs4_test_deviceid_unavailable" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xff0106da, "refcount_warn_saturate" },
	{ 0x972c8816, "make_kuid" },
	{ 0x7143b55e, "__tracepoint_pnfs_mds_fallback_read_pagelist" },
	{ 0x9479a1e8, "strnlen" },
	{ 0x481f45e4, "pnfs_generic_rw_release" },
	{ 0x8cc2e4ed, "pnfs_generic_scan_commit_lists" },
	{ 0x86d206f6, "__SCT__WARN_trap" },
	{ 0xd7133844, "init_task" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0xbd03ed67, "page_offset_base" },
	{ 0x0a7ca3bf, "pnfs_set_layoutcommit" },
	{ 0xb04003c4, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe36227bb,
	0xc173838b,
	0x3da37550,
	0xfb9c960a,
	0x52f90a9e,
	0xfd5c10cc,
	0x12f27d9c,
	0xbaf85ce1,
	0xd272d446,
	0xbd03ed67,
	0x80e3aa4a,
	0x4e858b01,
	0x3e728171,
	0xbe22b7f5,
	0xc3fc81b3,
	0x1ba0ee51,
	0x3b23ac81,
	0xd888c097,
	0x4f1e5fd0,
	0xb5c51982,
	0x402db74e,
	0xe54e0a6b,
	0x1ba0ee51,
	0x01955711,
	0x01955711,
	0x493ea335,
	0x01955711,
	0x1ba0ee51,
	0x7143b55e,
	0xba82fa4a,
	0x1ba0ee51,
	0xaf081c0c,
	0x29613d4f,
	0xb311a158,
	0x7143b55e,
	0xdc23a8da,
	0x98aa1e41,
	0x1ba0ee51,
	0x571e5830,
	0x20f0228d,
	0x923c70c4,
	0xd272d446,
	0x0d6494bf,
	0x06a0ebb0,
	0xa28510eb,
	0x1ba0ee51,
	0x01955711,
	0x51ba6366,
	0x826c9d7a,
	0x49feef87,
	0x9b74b0d8,
	0x4a831726,
	0x1ba0ee51,
	0x21c486a1,
	0xbd03ed67,
	0x82fd7238,
	0x7ec472ba,
	0xa4c0178c,
	0xab9e81a2,
	0x12f13aa1,
	0x7143b55e,
	0x726d3e57,
	0xf9d9c87b,
	0x7f7545ed,
	0x1ba0ee51,
	0xcde3c1aa,
	0x1ba0ee51,
	0x8eb37e44,
	0x97acb853,
	0x5002c000,
	0xf296206e,
	0x7143b55e,
	0x764a9960,
	0x1ba0ee51,
	0x1ba0ee51,
	0x443b8da7,
	0x88842975,
	0xfbc57bb9,
	0x1ba0ee51,
	0x7143b55e,
	0x51244248,
	0x1ba0ee51,
	0x993dbe27,
	0x36c454e1,
	0xe4de56b4,
	0x43a349ca,
	0xc103906c,
	0x7143b55e,
	0xe496b964,
	0x5af09d8b,
	0x149630ef,
	0x01955711,
	0xf296206e,
	0x01955711,
	0x67628f51,
	0xc79d0d5f,
	0xd0ea019a,
	0x9e12b5f0,
	0x24102caa,
	0xcc48482e,
	0x5605f9a7,
	0x360de656,
	0x726d3e57,
	0x885fde2f,
	0xdc352a3b,
	0x23a4913a,
	0x7143b55e,
	0x7849da3e,
	0xd272d446,
	0x7143b55e,
	0x992babb2,
	0x67e35d55,
	0xd710adbf,
	0xd0a68378,
	0x23a4913a,
	0x40a621c5,
	0x7143b55e,
	0x49feef87,
	0x9a9482d7,
	0xb8f8c02e,
	0x39ec907a,
	0x7143b55e,
	0x7143b55e,
	0xf9405cc5,
	0xfbe7861b,
	0xb2f8acc6,
	0xcb8b6ec6,
	0xddf5fdf2,
	0xaf081c0c,
	0xdece2d71,
	0xaf081c0c,
	0x314ef142,
	0xffddf59c,
	0x34360028,
	0xaf081c0c,
	0x7143b55e,
	0x39ec907a,
	0x34360028,
	0x5af09d8b,
	0xc019b91a,
	0xdece2d71,
	0xbbb6b6b5,
	0xe6ceb2c0,
	0xd272d446,
	0xd9505619,
	0xf70bbac3,
	0x314ef142,
	0x01955711,
	0x5a844b26,
	0x06ecfa79,
	0xe8213e80,
	0xb0d5aea4,
	0xbd03ed67,
	0xd272d446,
	0xff0106da,
	0x972c8816,
	0x7143b55e,
	0x9479a1e8,
	0x481f45e4,
	0x8cc2e4ed,
	0x86d206f6,
	0xd7133844,
	0x90a48d82,
	0xbd03ed67,
	0x0a7ca3bf,
	0xb04003c4,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"nfs4_print_deviceid\0"
	"pnfs_report_layoutstat\0"
	"nfs4_put_deviceid_node\0"
	"pnfs_put_lseg\0"
	"pnfs_layoutcommit_inode\0"
	"nfs4_pnfs_ds_add\0"
	"pnfs_destroy_layout\0"
	"pnfs_layout_mark_request_commit\0"
	"__rcu_read_unlock\0"
	"random_kmalloc_seed\0"
	"nfs_pageio_reset_write_mds\0"
	"rpc_max_payload\0"
	"nfs4_find_or_create_ds_client\0"
	"from_kgid\0"
	"const_current_task\0"
	"__SCK__tp_func_nfs4_pnfs_commit_ds\0"
	"nfs4_find_get_deviceid\0"
	"pnfs_read_resend_pnfs\0"
	"__list_del_entry_valid_or_report\0"
	"__cpu_online_mask\0"
	"memcmp\0"
	"__fortify_panic\0"
	"__SCK__tp_func_pnfs_mds_fallback_pg_get_mirror_count\0"
	"__SCT__tp_func_pnfs_mds_fallback_write_pagelist\0"
	"__SCT__tp_func_pnfs_mds_fallback_read_pagelist\0"
	"rpc_call_start\0"
	"__SCT__tp_func_pnfs_mds_fallback_pg_get_mirror_count\0"
	"__SCK__tp_func_ff_layout_read_error\0"
	"__tracepoint_pnfs_mds_fallback_read_done\0"
	"folio_alloc_noprof\0"
	"__SCK__tp_func_pnfs_mds_fallback_read_done\0"
	"__SCT__tp_func_nfs4_pnfs_write\0"
	"from_kuid\0"
	"ns_to_timespec64\0"
	"__tracepoint_ff_layout_read_error\0"
	"xdr_init_decode_pages\0"
	"tracepoint_srcu\0"
	"__SCK__tp_func_pnfs_mds_fallback_write_done\0"
	"pnfs_generic_layout_insert_lseg\0"
	"rpc_delay\0"
	"pnfs_generic_write_commit_done\0"
	"__x86_return_thunk\0"
	"pnfs_generic_pg_cleanup\0"
	"rpc_exit\0"
	"make_kgid\0"
	"__SCK__tp_func_nfs4_pnfs_read\0"
	"__SCT__tp_func_pnfs_mds_fallback_pg_init_read\0"
	"pnfs_update_layout\0"
	"pnfs_generic_pg_test\0"
	"xdr_reserve_space\0"
	"nfs4_sequence_done\0"
	"pnfs_generic_recover_commit_reqs\0"
	"__SCK__tp_func_nfs4_pnfs_write\0"
	"pnfs_generic_commit_pagelist\0"
	"vmemmap_base\0"
	"__ubsan_handle_shift_out_of_bounds\0"
	"cpu_number\0"
	"kvfree_call_rcu\0"
	"nfs_initiate_pgio\0"
	"nfs4_decode_mp_ds_addr\0"
	"__tracepoint_nfs4_pnfs_commit_ds\0"
	"nfs4_mark_deviceid_unavailable\0"
	"init_user_ns\0"
	"xprt_force_disconnect\0"
	"__SCK__tp_func_pnfs_mds_fallback_read_pagelist\0"
	"__folio_put\0"
	"__SCK__tp_func_ff_layout_commit_error\0"
	"__kmalloc_cache_noprof\0"
	"ktime_get\0"
	"nfs4_delete_deviceid\0"
	"layoutstats_timer\0"
	"__tracepoint_pnfs_mds_fallback_write_done\0"
	"nfs4_pnfs_ds_put\0"
	"__SCK__tp_func_ff_layout_write_error\0"
	"__SCK__tp_func_pnfs_mds_fallback_pg_init_write\0"
	"pnfs_error_mark_layout_for_return\0"
	"nfs_initiate_commit\0"
	"alloc_pages_noprof\0"
	"__SCK__tp_func_pnfs_mds_fallback_pg_init_read\0"
	"__tracepoint_pnfs_mds_fallback_pg_init_read\0"
	"prepare_kernel_cred\0"
	"__SCK__tp_func_pnfs_mds_fallback_write_pagelist\0"
	"nfs4_setup_sequence\0"
	"nfs42_proc_layouterror\0"
	"__ubsan_handle_load_invalid_value\0"
	"strlen\0"
	"pnfs_generic_clear_request_commit\0"
	"__tracepoint_pnfs_mds_fallback_pg_get_mirror_count\0"
	"nfs4_pnfs_ds_connect\0"
	"_raw_spin_unlock\0"
	"xdr_init_encode\0"
	"__SCT__tp_func_pnfs_mds_fallback_pg_init_write\0"
	"nfs_debug\0"
	"__SCT__tp_func_pnfs_mds_fallback_read_done\0"
	"msleep\0"
	"pnfs_alloc_commit_array\0"
	"kmalloc_caches\0"
	"pnfs_nfs_generic_sync\0"
	"nfs4_schedule_session_recovery\0"
	"pnfs_unregister_layoutdriver\0"
	"pnfs_register_layoutdriver\0"
	"pnfs_generic_ds_cinfo_release_lseg\0"
	"nfs4_mark_deviceid_available\0"
	"nfs_writeback_update_inode\0"
	"__list_add_valid_or_report\0"
	"param_ops_uint\0"
	"__tracepoint_pnfs_mds_fallback_pg_init_write\0"
	"nfs4_init_deviceid_node\0"
	"__rcu_read_lock\0"
	"__tracepoint_pnfs_mds_fallback_write_pagelist\0"
	"nfs_pageio_reset_read_mds\0"
	"xdr_write_pages\0"
	"__kmalloc_noprof\0"
	"pnfs_generic_ds_cinfo_destroy\0"
	"param_ops_ushort\0"
	"snprintf\0"
	"__tracepoint_nfs4_pnfs_write\0"
	"xdr_inline_decode\0"
	"rpc_count_iostats_metrics\0"
	"rpc_wake_up\0"
	"pnfs_write_done_resend_to_mds\0"
	"__tracepoint_nfs4_pnfs_read\0"
	"__tracepoint_ff_layout_write_error\0"
	"pnfs_free_commit_array\0"
	"memcpy\0"
	"pnfs_generic_pg_check_layout\0"
	"kfree\0"
	"pnfs_generic_prepare_to_resend_writes\0"
	"__SCT__tp_func_ff_layout_write_error\0"
	"pnfs_generic_pg_writepages\0"
	"__SCT__tp_func_ff_layout_read_error\0"
	"__SCT__tp_func_nfs4_pnfs_commit_ds\0"
	"rpc_restart_call_prepare\0"
	"xdr_encode_opaque\0"
	"__SCT__tp_func_nfs4_pnfs_read\0"
	"__tracepoint_ff_layout_commit_error\0"
	"pnfs_read_done_resend_to_mds\0"
	"xdr_encode_opaque_fixed\0"
	"_raw_spin_lock\0"
	"pnfs_add_commit_array\0"
	"pnfs_generic_pg_readpages\0"
	"pnfs_generic_commit_release\0"
	"rpc_clnt_disconnect\0"
	"__fentry__\0"
	"__put_cred\0"
	"rpc_cancel_tasks\0"
	"__SCT__tp_func_ff_layout_commit_error\0"
	"__SCT__tp_func_pnfs_mds_fallback_write_done\0"
	"__x86_indirect_thunk_rax\0"
	"nfs_map_string_to_numeric\0"
	"_printk\0"
	"nfs4_test_deviceid_unavailable\0"
	"__ref_stack_chk_guard\0"
	"__stack_chk_fail\0"
	"refcount_warn_saturate\0"
	"make_kuid\0"
	"__tracepoint_pnfs_mds_fallback_read_pagelist\0"
	"strnlen\0"
	"pnfs_generic_rw_release\0"
	"pnfs_generic_scan_commit_lists\0"
	"__SCT__WARN_trap\0"
	"init_task\0"
	"__ubsan_handle_out_of_bounds\0"
	"page_offset_base\0"
	"pnfs_set_layoutcommit\0"
	"module_layout\0"
;

MODULE_INFO(depends, "nfsv4,nfs,sunrpc");


MODULE_INFO(srcversion, "A2E06F472BB5FB4EA461FF6");
