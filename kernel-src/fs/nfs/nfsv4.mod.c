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

KSYMTAB_FUNC(nfs41_sequence_done, "");
SYMBOL_FLAGS(nfs41_sequence_done, 0x01);
KSYMTAB_FUNC(nfs4_sequence_done, "");
SYMBOL_FLAGS(nfs4_sequence_done, 0x01);
KSYMTAB_FUNC(nfs4_setup_sequence, "");
SYMBOL_FLAGS(nfs4_setup_sequence, 0x01);
KSYMTAB_FUNC(nfs4_set_rw_stateid, "");
SYMBOL_FLAGS(nfs4_set_rw_stateid, 0x01);
KSYMTAB_FUNC(nfs4_test_session_trunk, "");
SYMBOL_FLAGS(nfs4_test_session_trunk, 0x01);
KSYMTAB_FUNC(nfs4_proc_getdeviceinfo, "");
SYMBOL_FLAGS(nfs4_proc_getdeviceinfo, 0x01);
KSYMTAB_DATA(nfs41_maxgetdevinfo_overhead, "");
SYMBOL_FLAGS(nfs41_maxgetdevinfo_overhead, 0x01);
KSYMTAB_FUNC(nfs4_schedule_lease_recovery, "");
SYMBOL_FLAGS(nfs4_schedule_lease_recovery, 0x01);
KSYMTAB_FUNC(nfs4_schedule_migration_recovery, "");
SYMBOL_FLAGS(nfs4_schedule_migration_recovery, 0x01);
KSYMTAB_FUNC(nfs4_schedule_lease_moved_recovery, "");
SYMBOL_FLAGS(nfs4_schedule_lease_moved_recovery, 0x01);
KSYMTAB_FUNC(nfs4_schedule_stateid_recovery, "");
SYMBOL_FLAGS(nfs4_schedule_stateid_recovery, 0x01);
KSYMTAB_FUNC(nfs4_schedule_session_recovery, "");
SYMBOL_FLAGS(nfs4_schedule_session_recovery, 0x01);
KSYMTAB_FUNC(nfs_remove_bad_delegation, "");
SYMBOL_FLAGS(nfs_remove_bad_delegation, 0x01);
KSYMTAB_FUNC(nfs_map_string_to_numeric, "");
SYMBOL_FLAGS(nfs_map_string_to_numeric, 0x01);
KSYMTAB_FUNC(nfs4_find_or_create_ds_client, "");
SYMBOL_FLAGS(nfs4_find_or_create_ds_client, 0x01);
KSYMTAB_FUNC(nfs4_set_ds_client, "");
SYMBOL_FLAGS(nfs4_set_ds_client, 0x01);
KSYMTAB_FUNC(nfs4_init_ds_session, "");
SYMBOL_FLAGS(nfs4_init_ds_session, 0x01);
KSYMTAB_DATA(__tracepoint_nfs4_pnfs_read, "");
SYMBOL_FLAGS(__tracepoint_nfs4_pnfs_read, 0x01);
KSYMTAB_FUNC(__traceiter_nfs4_pnfs_read, "");
SYMBOL_FLAGS(__traceiter_nfs4_pnfs_read, 0x01);
KSYMTAB_DATA(__SCK__tp_func_nfs4_pnfs_read, "");
SYMBOL_FLAGS(__SCK__tp_func_nfs4_pnfs_read, 0x01);
KSYMTAB_FUNC(__SCT__tp_func_nfs4_pnfs_read, "");
SYMBOL_FLAGS(__SCT__tp_func_nfs4_pnfs_read, 0x01);
KSYMTAB_DATA(__tracepoint_nfs4_pnfs_write, "");
SYMBOL_FLAGS(__tracepoint_nfs4_pnfs_write, 0x01);
KSYMTAB_FUNC(__traceiter_nfs4_pnfs_write, "");
SYMBOL_FLAGS(__traceiter_nfs4_pnfs_write, 0x01);
KSYMTAB_DATA(__SCK__tp_func_nfs4_pnfs_write, "");
SYMBOL_FLAGS(__SCK__tp_func_nfs4_pnfs_write, 0x01);
KSYMTAB_FUNC(__SCT__tp_func_nfs4_pnfs_write, "");
SYMBOL_FLAGS(__SCT__tp_func_nfs4_pnfs_write, 0x01);
KSYMTAB_DATA(__tracepoint_nfs4_pnfs_commit_ds, "");
SYMBOL_FLAGS(__tracepoint_nfs4_pnfs_commit_ds, 0x01);
KSYMTAB_FUNC(__traceiter_nfs4_pnfs_commit_ds, "");
SYMBOL_FLAGS(__traceiter_nfs4_pnfs_commit_ds, 0x01);
KSYMTAB_DATA(__SCK__tp_func_nfs4_pnfs_commit_ds, "");
SYMBOL_FLAGS(__SCK__tp_func_nfs4_pnfs_commit_ds, 0x01);
KSYMTAB_FUNC(__SCT__tp_func_nfs4_pnfs_commit_ds, "");
SYMBOL_FLAGS(__SCT__tp_func_nfs4_pnfs_commit_ds, 0x01);
KSYMTAB_DATA(__tracepoint_pnfs_mds_fallback_pg_init_read, "");
SYMBOL_FLAGS(__tracepoint_pnfs_mds_fallback_pg_init_read, 0x01);
KSYMTAB_FUNC(__traceiter_pnfs_mds_fallback_pg_init_read, "");
SYMBOL_FLAGS(__traceiter_pnfs_mds_fallback_pg_init_read, 0x01);
KSYMTAB_DATA(__SCK__tp_func_pnfs_mds_fallback_pg_init_read, "");
SYMBOL_FLAGS(__SCK__tp_func_pnfs_mds_fallback_pg_init_read, 0x01);
KSYMTAB_FUNC(__SCT__tp_func_pnfs_mds_fallback_pg_init_read, "");
SYMBOL_FLAGS(__SCT__tp_func_pnfs_mds_fallback_pg_init_read, 0x01);
KSYMTAB_DATA(__tracepoint_pnfs_mds_fallback_pg_init_write, "");
SYMBOL_FLAGS(__tracepoint_pnfs_mds_fallback_pg_init_write, 0x01);
KSYMTAB_FUNC(__traceiter_pnfs_mds_fallback_pg_init_write, "");
SYMBOL_FLAGS(__traceiter_pnfs_mds_fallback_pg_init_write, 0x01);
KSYMTAB_DATA(__SCK__tp_func_pnfs_mds_fallback_pg_init_write, "");
SYMBOL_FLAGS(__SCK__tp_func_pnfs_mds_fallback_pg_init_write, 0x01);
KSYMTAB_FUNC(__SCT__tp_func_pnfs_mds_fallback_pg_init_write, "");
SYMBOL_FLAGS(__SCT__tp_func_pnfs_mds_fallback_pg_init_write, 0x01);
KSYMTAB_DATA(__tracepoint_pnfs_mds_fallback_pg_get_mirror_count, "");
SYMBOL_FLAGS(__tracepoint_pnfs_mds_fallback_pg_get_mirror_count, 0x01);
KSYMTAB_FUNC(__traceiter_pnfs_mds_fallback_pg_get_mirror_count, "");
SYMBOL_FLAGS(__traceiter_pnfs_mds_fallback_pg_get_mirror_count, 0x01);
KSYMTAB_DATA(__SCK__tp_func_pnfs_mds_fallback_pg_get_mirror_count, "");
SYMBOL_FLAGS(__SCK__tp_func_pnfs_mds_fallback_pg_get_mirror_count, 0x01);
KSYMTAB_FUNC(__SCT__tp_func_pnfs_mds_fallback_pg_get_mirror_count, "");
SYMBOL_FLAGS(__SCT__tp_func_pnfs_mds_fallback_pg_get_mirror_count, 0x01);
KSYMTAB_DATA(__tracepoint_pnfs_mds_fallback_read_done, "");
SYMBOL_FLAGS(__tracepoint_pnfs_mds_fallback_read_done, 0x01);
KSYMTAB_FUNC(__traceiter_pnfs_mds_fallback_read_done, "");
SYMBOL_FLAGS(__traceiter_pnfs_mds_fallback_read_done, 0x01);
KSYMTAB_DATA(__SCK__tp_func_pnfs_mds_fallback_read_done, "");
SYMBOL_FLAGS(__SCK__tp_func_pnfs_mds_fallback_read_done, 0x01);
KSYMTAB_FUNC(__SCT__tp_func_pnfs_mds_fallback_read_done, "");
SYMBOL_FLAGS(__SCT__tp_func_pnfs_mds_fallback_read_done, 0x01);
KSYMTAB_DATA(__tracepoint_pnfs_mds_fallback_write_done, "");
SYMBOL_FLAGS(__tracepoint_pnfs_mds_fallback_write_done, 0x01);
KSYMTAB_FUNC(__traceiter_pnfs_mds_fallback_write_done, "");
SYMBOL_FLAGS(__traceiter_pnfs_mds_fallback_write_done, 0x01);
KSYMTAB_DATA(__SCK__tp_func_pnfs_mds_fallback_write_done, "");
SYMBOL_FLAGS(__SCK__tp_func_pnfs_mds_fallback_write_done, 0x01);
KSYMTAB_FUNC(__SCT__tp_func_pnfs_mds_fallback_write_done, "");
SYMBOL_FLAGS(__SCT__tp_func_pnfs_mds_fallback_write_done, 0x01);
KSYMTAB_DATA(__tracepoint_pnfs_mds_fallback_read_pagelist, "");
SYMBOL_FLAGS(__tracepoint_pnfs_mds_fallback_read_pagelist, 0x01);
KSYMTAB_FUNC(__traceiter_pnfs_mds_fallback_read_pagelist, "");
SYMBOL_FLAGS(__traceiter_pnfs_mds_fallback_read_pagelist, 0x01);
KSYMTAB_DATA(__SCK__tp_func_pnfs_mds_fallback_read_pagelist, "");
SYMBOL_FLAGS(__SCK__tp_func_pnfs_mds_fallback_read_pagelist, 0x01);
KSYMTAB_FUNC(__SCT__tp_func_pnfs_mds_fallback_read_pagelist, "");
SYMBOL_FLAGS(__SCT__tp_func_pnfs_mds_fallback_read_pagelist, 0x01);
KSYMTAB_DATA(__tracepoint_pnfs_mds_fallback_write_pagelist, "");
SYMBOL_FLAGS(__tracepoint_pnfs_mds_fallback_write_pagelist, 0x01);
KSYMTAB_FUNC(__traceiter_pnfs_mds_fallback_write_pagelist, "");
SYMBOL_FLAGS(__traceiter_pnfs_mds_fallback_write_pagelist, 0x01);
KSYMTAB_DATA(__SCK__tp_func_pnfs_mds_fallback_write_pagelist, "");
SYMBOL_FLAGS(__SCK__tp_func_pnfs_mds_fallback_write_pagelist, 0x01);
KSYMTAB_FUNC(__SCT__tp_func_pnfs_mds_fallback_write_pagelist, "");
SYMBOL_FLAGS(__SCT__tp_func_pnfs_mds_fallback_write_pagelist, 0x01);
KSYMTAB_DATA(__tracepoint_pnfs_ds_connect, "");
SYMBOL_FLAGS(__tracepoint_pnfs_ds_connect, 0x01);
KSYMTAB_FUNC(__traceiter_pnfs_ds_connect, "");
SYMBOL_FLAGS(__traceiter_pnfs_ds_connect, 0x01);
KSYMTAB_DATA(__SCK__tp_func_pnfs_ds_connect, "");
SYMBOL_FLAGS(__SCK__tp_func_pnfs_ds_connect, 0x01);
KSYMTAB_FUNC(__SCT__tp_func_pnfs_ds_connect, "");
SYMBOL_FLAGS(__SCT__tp_func_pnfs_ds_connect, 0x01);
KSYMTAB_DATA(__tracepoint_ff_layout_read_error, "");
SYMBOL_FLAGS(__tracepoint_ff_layout_read_error, 0x01);
KSYMTAB_FUNC(__traceiter_ff_layout_read_error, "");
SYMBOL_FLAGS(__traceiter_ff_layout_read_error, 0x01);
KSYMTAB_DATA(__SCK__tp_func_ff_layout_read_error, "");
SYMBOL_FLAGS(__SCK__tp_func_ff_layout_read_error, 0x01);
KSYMTAB_FUNC(__SCT__tp_func_ff_layout_read_error, "");
SYMBOL_FLAGS(__SCT__tp_func_ff_layout_read_error, 0x01);
KSYMTAB_DATA(__tracepoint_ff_layout_write_error, "");
SYMBOL_FLAGS(__tracepoint_ff_layout_write_error, 0x01);
KSYMTAB_FUNC(__traceiter_ff_layout_write_error, "");
SYMBOL_FLAGS(__traceiter_ff_layout_write_error, 0x01);
KSYMTAB_DATA(__SCK__tp_func_ff_layout_write_error, "");
SYMBOL_FLAGS(__SCK__tp_func_ff_layout_write_error, 0x01);
KSYMTAB_FUNC(__SCT__tp_func_ff_layout_write_error, "");
SYMBOL_FLAGS(__SCT__tp_func_ff_layout_write_error, 0x01);
KSYMTAB_DATA(__tracepoint_ff_layout_commit_error, "");
SYMBOL_FLAGS(__tracepoint_ff_layout_commit_error, 0x01);
KSYMTAB_FUNC(__traceiter_ff_layout_commit_error, "");
SYMBOL_FLAGS(__traceiter_ff_layout_commit_error, 0x01);
KSYMTAB_DATA(__SCK__tp_func_ff_layout_commit_error, "");
SYMBOL_FLAGS(__SCK__tp_func_ff_layout_commit_error, 0x01);
KSYMTAB_FUNC(__SCT__tp_func_ff_layout_commit_error, "");
SYMBOL_FLAGS(__SCT__tp_func_ff_layout_commit_error, 0x01);
KSYMTAB_DATA(__tracepoint_bl_ext_tree_prepare_commit, "");
SYMBOL_FLAGS(__tracepoint_bl_ext_tree_prepare_commit, 0x01);
KSYMTAB_FUNC(__traceiter_bl_ext_tree_prepare_commit, "");
SYMBOL_FLAGS(__traceiter_bl_ext_tree_prepare_commit, 0x01);
KSYMTAB_DATA(__SCK__tp_func_bl_ext_tree_prepare_commit, "");
SYMBOL_FLAGS(__SCK__tp_func_bl_ext_tree_prepare_commit, 0x01);
KSYMTAB_FUNC(__SCT__tp_func_bl_ext_tree_prepare_commit, "");
SYMBOL_FLAGS(__SCT__tp_func_bl_ext_tree_prepare_commit, 0x01);
KSYMTAB_DATA(__tracepoint_bl_pr_key_reg, "");
SYMBOL_FLAGS(__tracepoint_bl_pr_key_reg, 0x01);
KSYMTAB_FUNC(__traceiter_bl_pr_key_reg, "");
SYMBOL_FLAGS(__traceiter_bl_pr_key_reg, 0x01);
KSYMTAB_DATA(__SCK__tp_func_bl_pr_key_reg, "");
SYMBOL_FLAGS(__SCK__tp_func_bl_pr_key_reg, 0x01);
KSYMTAB_FUNC(__SCT__tp_func_bl_pr_key_reg, "");
SYMBOL_FLAGS(__SCT__tp_func_bl_pr_key_reg, 0x01);
KSYMTAB_DATA(__tracepoint_bl_pr_key_reg_err, "");
SYMBOL_FLAGS(__tracepoint_bl_pr_key_reg_err, 0x01);
KSYMTAB_FUNC(__traceiter_bl_pr_key_reg_err, "");
SYMBOL_FLAGS(__traceiter_bl_pr_key_reg_err, 0x01);
KSYMTAB_DATA(__SCK__tp_func_bl_pr_key_reg_err, "");
SYMBOL_FLAGS(__SCK__tp_func_bl_pr_key_reg_err, 0x01);
KSYMTAB_FUNC(__SCT__tp_func_bl_pr_key_reg_err, "");
SYMBOL_FLAGS(__SCT__tp_func_bl_pr_key_reg_err, 0x01);
KSYMTAB_DATA(__tracepoint_bl_pr_key_unreg, "");
SYMBOL_FLAGS(__tracepoint_bl_pr_key_unreg, 0x01);
KSYMTAB_FUNC(__traceiter_bl_pr_key_unreg, "");
SYMBOL_FLAGS(__traceiter_bl_pr_key_unreg, 0x01);
KSYMTAB_DATA(__SCK__tp_func_bl_pr_key_unreg, "");
SYMBOL_FLAGS(__SCK__tp_func_bl_pr_key_unreg, 0x01);
KSYMTAB_FUNC(__SCT__tp_func_bl_pr_key_unreg, "");
SYMBOL_FLAGS(__SCT__tp_func_bl_pr_key_unreg, 0x01);
KSYMTAB_DATA(__tracepoint_bl_pr_key_unreg_err, "");
SYMBOL_FLAGS(__tracepoint_bl_pr_key_unreg_err, 0x01);
KSYMTAB_FUNC(__traceiter_bl_pr_key_unreg_err, "");
SYMBOL_FLAGS(__traceiter_bl_pr_key_unreg_err, 0x01);
KSYMTAB_DATA(__SCK__tp_func_bl_pr_key_unreg_err, "");
SYMBOL_FLAGS(__SCK__tp_func_bl_pr_key_unreg_err, 0x01);
KSYMTAB_FUNC(__SCT__tp_func_bl_pr_key_unreg_err, "");
SYMBOL_FLAGS(__SCT__tp_func_bl_pr_key_unreg_err, 0x01);
KSYMTAB_DATA(__tracepoint_fl_getdevinfo, "");
SYMBOL_FLAGS(__tracepoint_fl_getdevinfo, 0x01);
KSYMTAB_FUNC(__traceiter_fl_getdevinfo, "");
SYMBOL_FLAGS(__traceiter_fl_getdevinfo, 0x01);
KSYMTAB_DATA(__SCK__tp_func_fl_getdevinfo, "");
SYMBOL_FLAGS(__SCK__tp_func_fl_getdevinfo, 0x01);
KSYMTAB_FUNC(__SCT__tp_func_fl_getdevinfo, "");
SYMBOL_FLAGS(__SCT__tp_func_fl_getdevinfo, 0x01);
KSYMTAB_FUNC(pnfs_register_layoutdriver, "");
SYMBOL_FLAGS(pnfs_register_layoutdriver, 0x01);
KSYMTAB_FUNC(pnfs_unregister_layoutdriver, "");
SYMBOL_FLAGS(pnfs_unregister_layoutdriver, 0x01);
KSYMTAB_FUNC(pnfs_put_lseg, "");
SYMBOL_FLAGS(pnfs_put_lseg, 0x01);
KSYMTAB_FUNC(pnfs_destroy_layout, "");
SYMBOL_FLAGS(pnfs_destroy_layout, 0x01);
KSYMTAB_FUNC(pnfs_generic_layout_insert_lseg, "");
SYMBOL_FLAGS(pnfs_generic_layout_insert_lseg, 0x01);
KSYMTAB_FUNC(pnfs_update_layout, "");
SYMBOL_FLAGS(pnfs_update_layout, 0x01);
KSYMTAB_FUNC(pnfs_error_mark_layout_for_return, "");
SYMBOL_FLAGS(pnfs_error_mark_layout_for_return, 0x01);
KSYMTAB_FUNC(pnfs_generic_pg_check_layout, "");
SYMBOL_FLAGS(pnfs_generic_pg_check_layout, 0x01);
KSYMTAB_FUNC(pnfs_generic_pg_init_read, "");
SYMBOL_FLAGS(pnfs_generic_pg_init_read, 0x01);
KSYMTAB_FUNC(pnfs_generic_pg_init_write, "");
SYMBOL_FLAGS(pnfs_generic_pg_init_write, 0x01);
KSYMTAB_FUNC(pnfs_generic_pg_cleanup, "");
SYMBOL_FLAGS(pnfs_generic_pg_cleanup, 0x01);
KSYMTAB_FUNC(pnfs_generic_pg_test, "");
SYMBOL_FLAGS(pnfs_generic_pg_test, 0x01);
KSYMTAB_FUNC(pnfs_write_done_resend_to_mds, "");
SYMBOL_FLAGS(pnfs_write_done_resend_to_mds, 0x01);
KSYMTAB_FUNC(pnfs_ld_write_done, "");
SYMBOL_FLAGS(pnfs_ld_write_done, 0x01);
KSYMTAB_FUNC(pnfs_generic_pg_writepages, "");
SYMBOL_FLAGS(pnfs_generic_pg_writepages, 0x01);
KSYMTAB_FUNC(pnfs_read_done_resend_to_mds, "");
SYMBOL_FLAGS(pnfs_read_done_resend_to_mds, 0x01);
KSYMTAB_FUNC(pnfs_ld_read_done, "");
SYMBOL_FLAGS(pnfs_ld_read_done, 0x01);
KSYMTAB_FUNC(pnfs_read_resend_pnfs, "");
SYMBOL_FLAGS(pnfs_read_resend_pnfs, 0x01);
KSYMTAB_FUNC(pnfs_generic_pg_readpages, "");
SYMBOL_FLAGS(pnfs_generic_pg_readpages, 0x01);
KSYMTAB_FUNC(pnfs_set_lo_fail, "");
SYMBOL_FLAGS(pnfs_set_lo_fail, 0x01);
KSYMTAB_FUNC(pnfs_set_layoutcommit, "");
SYMBOL_FLAGS(pnfs_set_layoutcommit, 0x01);
KSYMTAB_FUNC(pnfs_layoutcommit_inode, "");
SYMBOL_FLAGS(pnfs_layoutcommit_inode, 0x01);
KSYMTAB_FUNC(pnfs_generic_sync, "");
SYMBOL_FLAGS(pnfs_generic_sync, 0x01);
KSYMTAB_FUNC(pnfs_report_layoutstat, "");
SYMBOL_FLAGS(pnfs_report_layoutstat, 0x01);
KSYMTAB_DATA(layoutstats_timer, "");
SYMBOL_FLAGS(layoutstats_timer, 0x01);
KSYMTAB_FUNC(nfs4_print_deviceid, "");
SYMBOL_FLAGS(nfs4_print_deviceid, 0x01);
KSYMTAB_FUNC(nfs4_find_get_deviceid, "");
SYMBOL_FLAGS(nfs4_find_get_deviceid, 0x01);
KSYMTAB_FUNC(nfs4_delete_deviceid, "");
SYMBOL_FLAGS(nfs4_delete_deviceid, 0x01);
KSYMTAB_FUNC(nfs4_init_deviceid_node, "");
SYMBOL_FLAGS(nfs4_init_deviceid_node, 0x01);
KSYMTAB_FUNC(nfs4_put_deviceid_node, "");
SYMBOL_FLAGS(nfs4_put_deviceid_node, 0x01);
KSYMTAB_FUNC(nfs4_mark_deviceid_available, "");
SYMBOL_FLAGS(nfs4_mark_deviceid_available, 0x01);
KSYMTAB_FUNC(nfs4_mark_deviceid_unavailable, "");
SYMBOL_FLAGS(nfs4_mark_deviceid_unavailable, 0x01);
KSYMTAB_FUNC(nfs4_test_deviceid_unavailable, "");
SYMBOL_FLAGS(nfs4_test_deviceid_unavailable, 0x01);
KSYMTAB_FUNC(pnfs_generic_rw_release, "");
SYMBOL_FLAGS(pnfs_generic_rw_release, 0x01);
KSYMTAB_FUNC(pnfs_generic_prepare_to_resend_writes, "");
SYMBOL_FLAGS(pnfs_generic_prepare_to_resend_writes, 0x01);
KSYMTAB_FUNC(pnfs_generic_write_commit_done, "");
SYMBOL_FLAGS(pnfs_generic_write_commit_done, 0x01);
KSYMTAB_FUNC(pnfs_generic_commit_release, "");
SYMBOL_FLAGS(pnfs_generic_commit_release, 0x01);
KSYMTAB_FUNC(pnfs_generic_clear_request_commit, "");
SYMBOL_FLAGS(pnfs_generic_clear_request_commit, 0x01);
KSYMTAB_FUNC(pnfs_alloc_commit_array, "");
SYMBOL_FLAGS(pnfs_alloc_commit_array, 0x01);
KSYMTAB_FUNC(pnfs_free_commit_array, "");
SYMBOL_FLAGS(pnfs_free_commit_array, 0x01);
KSYMTAB_FUNC(pnfs_add_commit_array, "");
SYMBOL_FLAGS(pnfs_add_commit_array, 0x01);
KSYMTAB_FUNC(pnfs_generic_ds_cinfo_release_lseg, "");
SYMBOL_FLAGS(pnfs_generic_ds_cinfo_release_lseg, 0x01);
KSYMTAB_FUNC(pnfs_generic_ds_cinfo_destroy, "");
SYMBOL_FLAGS(pnfs_generic_ds_cinfo_destroy, 0x01);
KSYMTAB_FUNC(pnfs_generic_scan_commit_lists, "");
SYMBOL_FLAGS(pnfs_generic_scan_commit_lists, 0x01);
KSYMTAB_FUNC(pnfs_generic_recover_commit_reqs, "");
SYMBOL_FLAGS(pnfs_generic_recover_commit_reqs, 0x01);
KSYMTAB_FUNC(pnfs_generic_commit_pagelist, "");
SYMBOL_FLAGS(pnfs_generic_commit_pagelist, 0x01);
KSYMTAB_FUNC(nfs4_pnfs_ds_put, "");
SYMBOL_FLAGS(nfs4_pnfs_ds_put, 0x01);
KSYMTAB_FUNC(nfs4_pnfs_ds_add, "");
SYMBOL_FLAGS(nfs4_pnfs_ds_add, 0x01);
KSYMTAB_FUNC(nfs4_pnfs_ds_connect, "");
SYMBOL_FLAGS(nfs4_pnfs_ds_connect, 0x01);
KSYMTAB_FUNC(nfs4_decode_mp_ds_addr, "");
SYMBOL_FLAGS(nfs4_decode_mp_ds_addr, 0x01);
KSYMTAB_FUNC(pnfs_layout_mark_request_commit, "");
SYMBOL_FLAGS(pnfs_layout_mark_request_commit, 0x01);
KSYMTAB_FUNC(pnfs_nfs_generic_sync, "");
SYMBOL_FLAGS(pnfs_nfs_generic_sync, 0x01);
KSYMTAB_FUNC(nfs42_proc_layouterror, "");
SYMBOL_FLAGS(nfs42_proc_layouterror, 0x01);

SYMBOL_CRC(nfs41_sequence_done, 0x9b74b0d8);
SYMBOL_CRC(nfs4_sequence_done, 0x9b74b0d8);
SYMBOL_CRC(nfs4_setup_sequence, 0x993dbe27);
SYMBOL_CRC(nfs4_set_rw_stateid, 0xdc9fa1a7);
SYMBOL_CRC(nfs4_test_session_trunk, 0x2656841b);
SYMBOL_CRC(nfs4_proc_getdeviceinfo, 0xbdd19f3f);
SYMBOL_CRC(nfs41_maxgetdevinfo_overhead, 0x21a5325e);
SYMBOL_CRC(nfs4_schedule_lease_recovery, 0x0e5b4aa7);
SYMBOL_CRC(nfs4_schedule_migration_recovery, 0xf2974287);
SYMBOL_CRC(nfs4_schedule_lease_moved_recovery, 0x0e5b4aa7);
SYMBOL_CRC(nfs4_schedule_stateid_recovery, 0x0296858e);
SYMBOL_CRC(nfs4_schedule_session_recovery, 0x24102caa);
SYMBOL_CRC(nfs_remove_bad_delegation, 0x12dd6b24);
SYMBOL_CRC(nfs_map_string_to_numeric, 0x06ecfa79);
SYMBOL_CRC(nfs4_find_or_create_ds_client, 0x3e728171);
SYMBOL_CRC(nfs4_set_ds_client, 0x0a07df7a);
SYMBOL_CRC(nfs4_init_ds_session, 0x78a67538);
SYMBOL_CRC(__tracepoint_nfs4_pnfs_read, 0x7143b55e);
SYMBOL_CRC(__traceiter_nfs4_pnfs_read, 0x8bbc6b0e);
SYMBOL_CRC(__SCK__tp_func_nfs4_pnfs_read, 0x1ba0ee51);
SYMBOL_CRC(__SCT__tp_func_nfs4_pnfs_read, 0xaf081c0c);
SYMBOL_CRC(__tracepoint_nfs4_pnfs_write, 0x7143b55e);
SYMBOL_CRC(__traceiter_nfs4_pnfs_write, 0x8bbc6b0e);
SYMBOL_CRC(__SCK__tp_func_nfs4_pnfs_write, 0x1ba0ee51);
SYMBOL_CRC(__SCT__tp_func_nfs4_pnfs_write, 0xaf081c0c);
SYMBOL_CRC(__tracepoint_nfs4_pnfs_commit_ds, 0x7143b55e);
SYMBOL_CRC(__traceiter_nfs4_pnfs_commit_ds, 0xc39dcc24);
SYMBOL_CRC(__SCK__tp_func_nfs4_pnfs_commit_ds, 0x1ba0ee51);
SYMBOL_CRC(__SCT__tp_func_nfs4_pnfs_commit_ds, 0x314ef142);
SYMBOL_CRC(__tracepoint_pnfs_mds_fallback_pg_init_read, 0x7143b55e);
SYMBOL_CRC(__traceiter_pnfs_mds_fallback_pg_init_read, 0x31bf903e);
SYMBOL_CRC(__SCK__tp_func_pnfs_mds_fallback_pg_init_read, 0x1ba0ee51);
SYMBOL_CRC(__SCT__tp_func_pnfs_mds_fallback_pg_init_read, 0x01955711);
SYMBOL_CRC(__tracepoint_pnfs_mds_fallback_pg_init_write, 0x7143b55e);
SYMBOL_CRC(__traceiter_pnfs_mds_fallback_pg_init_write, 0x31bf903e);
SYMBOL_CRC(__SCK__tp_func_pnfs_mds_fallback_pg_init_write, 0x1ba0ee51);
SYMBOL_CRC(__SCT__tp_func_pnfs_mds_fallback_pg_init_write, 0x01955711);
SYMBOL_CRC(__tracepoint_pnfs_mds_fallback_pg_get_mirror_count, 0x7143b55e);
SYMBOL_CRC(__traceiter_pnfs_mds_fallback_pg_get_mirror_count, 0x31bf903e);
SYMBOL_CRC(__SCK__tp_func_pnfs_mds_fallback_pg_get_mirror_count, 0x1ba0ee51);
SYMBOL_CRC(__SCT__tp_func_pnfs_mds_fallback_pg_get_mirror_count, 0x01955711);
SYMBOL_CRC(__tracepoint_pnfs_mds_fallback_read_done, 0x7143b55e);
SYMBOL_CRC(__traceiter_pnfs_mds_fallback_read_done, 0x31bf903e);
SYMBOL_CRC(__SCK__tp_func_pnfs_mds_fallback_read_done, 0x1ba0ee51);
SYMBOL_CRC(__SCT__tp_func_pnfs_mds_fallback_read_done, 0x01955711);
SYMBOL_CRC(__tracepoint_pnfs_mds_fallback_write_done, 0x7143b55e);
SYMBOL_CRC(__traceiter_pnfs_mds_fallback_write_done, 0x31bf903e);
SYMBOL_CRC(__SCK__tp_func_pnfs_mds_fallback_write_done, 0x1ba0ee51);
SYMBOL_CRC(__SCT__tp_func_pnfs_mds_fallback_write_done, 0x01955711);
SYMBOL_CRC(__tracepoint_pnfs_mds_fallback_read_pagelist, 0x7143b55e);
SYMBOL_CRC(__traceiter_pnfs_mds_fallback_read_pagelist, 0x31bf903e);
SYMBOL_CRC(__SCK__tp_func_pnfs_mds_fallback_read_pagelist, 0x1ba0ee51);
SYMBOL_CRC(__SCT__tp_func_pnfs_mds_fallback_read_pagelist, 0x01955711);
SYMBOL_CRC(__tracepoint_pnfs_mds_fallback_write_pagelist, 0x7143b55e);
SYMBOL_CRC(__traceiter_pnfs_mds_fallback_write_pagelist, 0x31bf903e);
SYMBOL_CRC(__SCK__tp_func_pnfs_mds_fallback_write_pagelist, 0x1ba0ee51);
SYMBOL_CRC(__SCT__tp_func_pnfs_mds_fallback_write_pagelist, 0x01955711);
SYMBOL_CRC(__tracepoint_pnfs_ds_connect, 0x7143b55e);
SYMBOL_CRC(__traceiter_pnfs_ds_connect, 0x24bd0711);
SYMBOL_CRC(__SCK__tp_func_pnfs_ds_connect, 0x1ba0ee51);
SYMBOL_CRC(__SCT__tp_func_pnfs_ds_connect, 0x95fc34ef);
SYMBOL_CRC(__tracepoint_ff_layout_read_error, 0x7143b55e);
SYMBOL_CRC(__traceiter_ff_layout_read_error, 0x8bbc6b0e);
SYMBOL_CRC(__SCK__tp_func_ff_layout_read_error, 0x1ba0ee51);
SYMBOL_CRC(__SCT__tp_func_ff_layout_read_error, 0xaf081c0c);
SYMBOL_CRC(__tracepoint_ff_layout_write_error, 0x7143b55e);
SYMBOL_CRC(__traceiter_ff_layout_write_error, 0x8bbc6b0e);
SYMBOL_CRC(__SCK__tp_func_ff_layout_write_error, 0x1ba0ee51);
SYMBOL_CRC(__SCT__tp_func_ff_layout_write_error, 0xaf081c0c);
SYMBOL_CRC(__tracepoint_ff_layout_commit_error, 0x7143b55e);
SYMBOL_CRC(__traceiter_ff_layout_commit_error, 0xc39dcc24);
SYMBOL_CRC(__SCK__tp_func_ff_layout_commit_error, 0x1ba0ee51);
SYMBOL_CRC(__SCT__tp_func_ff_layout_commit_error, 0x314ef142);
SYMBOL_CRC(__tracepoint_bl_ext_tree_prepare_commit, 0x7143b55e);
SYMBOL_CRC(__traceiter_bl_ext_tree_prepare_commit, 0x9f08219b);
SYMBOL_CRC(__SCK__tp_func_bl_ext_tree_prepare_commit, 0x1ba0ee51);
SYMBOL_CRC(__SCT__tp_func_bl_ext_tree_prepare_commit, 0x9cbfff72);
SYMBOL_CRC(__tracepoint_bl_pr_key_reg, 0x7143b55e);
SYMBOL_CRC(__traceiter_bl_pr_key_reg, 0x4762ef28);
SYMBOL_CRC(__SCK__tp_func_bl_pr_key_reg, 0x1ba0ee51);
SYMBOL_CRC(__SCT__tp_func_bl_pr_key_reg, 0x22bbe942);
SYMBOL_CRC(__tracepoint_bl_pr_key_reg_err, 0x7143b55e);
SYMBOL_CRC(__traceiter_bl_pr_key_reg_err, 0x0bb4f5e0);
SYMBOL_CRC(__SCK__tp_func_bl_pr_key_reg_err, 0x1ba0ee51);
SYMBOL_CRC(__SCT__tp_func_bl_pr_key_reg_err, 0x629270fa);
SYMBOL_CRC(__tracepoint_bl_pr_key_unreg, 0x7143b55e);
SYMBOL_CRC(__traceiter_bl_pr_key_unreg, 0x4762ef28);
SYMBOL_CRC(__SCK__tp_func_bl_pr_key_unreg, 0x1ba0ee51);
SYMBOL_CRC(__SCT__tp_func_bl_pr_key_unreg, 0x22bbe942);
SYMBOL_CRC(__tracepoint_bl_pr_key_unreg_err, 0x7143b55e);
SYMBOL_CRC(__traceiter_bl_pr_key_unreg_err, 0x0bb4f5e0);
SYMBOL_CRC(__SCK__tp_func_bl_pr_key_unreg_err, 0x1ba0ee51);
SYMBOL_CRC(__SCT__tp_func_bl_pr_key_unreg_err, 0x629270fa);
SYMBOL_CRC(__tracepoint_fl_getdevinfo, 0x7143b55e);
SYMBOL_CRC(__traceiter_fl_getdevinfo, 0x5a0bee49);
SYMBOL_CRC(__SCK__tp_func_fl_getdevinfo, 0x1ba0ee51);
SYMBOL_CRC(__SCT__tp_func_fl_getdevinfo, 0xb5b907b5);
SYMBOL_CRC(pnfs_register_layoutdriver, 0x5605f9a7);
SYMBOL_CRC(pnfs_unregister_layoutdriver, 0xcc48482e);
SYMBOL_CRC(pnfs_put_lseg, 0xfb9c960a);
SYMBOL_CRC(pnfs_destroy_layout, 0x12f27d9c);
SYMBOL_CRC(pnfs_generic_layout_insert_lseg, 0x571e5830);
SYMBOL_CRC(pnfs_update_layout, 0x51ba6366);
SYMBOL_CRC(pnfs_error_mark_layout_for_return, 0x443b8da7);
SYMBOL_CRC(pnfs_generic_pg_check_layout, 0xb2f8acc6);
SYMBOL_CRC(pnfs_generic_pg_init_read, 0xb2f8acc6);
SYMBOL_CRC(pnfs_generic_pg_init_write, 0xf0ba0e98);
SYMBOL_CRC(pnfs_generic_pg_cleanup, 0x0d6494bf);
SYMBOL_CRC(pnfs_generic_pg_test, 0x826c9d7a);
SYMBOL_CRC(pnfs_write_done_resend_to_mds, 0x39ec907a);
SYMBOL_CRC(pnfs_ld_write_done, 0x584259e0);
SYMBOL_CRC(pnfs_generic_pg_writepages, 0xdece2d71);
SYMBOL_CRC(pnfs_read_done_resend_to_mds, 0x39ec907a);
SYMBOL_CRC(pnfs_ld_read_done, 0x584259e0);
SYMBOL_CRC(pnfs_read_resend_pnfs, 0xd888c097);
SYMBOL_CRC(pnfs_generic_pg_readpages, 0xdece2d71);
SYMBOL_CRC(pnfs_set_lo_fail, 0xfb9c960a);
SYMBOL_CRC(pnfs_set_layoutcommit, 0x0a7ca3bf);
SYMBOL_CRC(pnfs_layoutcommit_inode, 0x52f90a9e);
SYMBOL_CRC(pnfs_generic_sync, 0x3ab77147);
SYMBOL_CRC(pnfs_report_layoutstat, 0xc173838b);
SYMBOL_CRC(layoutstats_timer, 0xf296206e);
SYMBOL_CRC(nfs4_print_deviceid, 0xe36227bb);
SYMBOL_CRC(nfs4_find_get_deviceid, 0x3b23ac81);
SYMBOL_CRC(nfs4_delete_deviceid, 0x5002c000);
SYMBOL_CRC(nfs4_init_deviceid_node, 0x7849da3e);
SYMBOL_CRC(nfs4_put_deviceid_node, 0x3da37550);
SYMBOL_CRC(nfs4_mark_deviceid_available, 0x726d3e57);
SYMBOL_CRC(nfs4_mark_deviceid_unavailable, 0x726d3e57);
SYMBOL_CRC(nfs4_test_deviceid_unavailable, 0xb0d5aea4);
SYMBOL_CRC(pnfs_generic_rw_release, 0x481f45e4);
SYMBOL_CRC(pnfs_generic_prepare_to_resend_writes, 0xddf5fdf2);
SYMBOL_CRC(pnfs_generic_write_commit_done, 0x923c70c4);
SYMBOL_CRC(pnfs_generic_commit_release, 0xbbb6b6b5);
SYMBOL_CRC(pnfs_generic_clear_request_commit, 0xc103906c);
SYMBOL_CRC(pnfs_alloc_commit_array, 0xc79d0d5f);
SYMBOL_CRC(pnfs_free_commit_array, 0xf9405cc5);
SYMBOL_CRC(pnfs_add_commit_array, 0xc019b91a);
SYMBOL_CRC(pnfs_generic_ds_cinfo_release_lseg, 0x360de656);
SYMBOL_CRC(pnfs_generic_ds_cinfo_destroy, 0xd0a68378);
SYMBOL_CRC(pnfs_generic_scan_commit_lists, 0x8cc2e4ed);
SYMBOL_CRC(pnfs_generic_recover_commit_reqs, 0x4a831726);
SYMBOL_CRC(pnfs_generic_commit_pagelist, 0x21c486a1);
SYMBOL_CRC(nfs4_pnfs_ds_put, 0x764a9960);
SYMBOL_CRC(nfs4_pnfs_ds_add, 0xfd5c10cc);
SYMBOL_CRC(nfs4_pnfs_ds_connect, 0xe496b964);
SYMBOL_CRC(nfs4_decode_mp_ds_addr, 0x12f13aa1);
SYMBOL_CRC(pnfs_layout_mark_request_commit, 0xbaf85ce1);
SYMBOL_CRC(pnfs_nfs_generic_sync, 0x9e12b5f0);
SYMBOL_CRC(nfs42_proc_layouterror, 0x36c454e1);

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3bf2939c, "nfs_umount_begin" },
	{ 0x8bc8f40f, "crc32_le" },
	{ 0x9e7487f5, "nfs_getattr" },
	{ 0x7c0c25f7, "mutex_lock" },
	{ 0x80e3aa4a, "nfs_pageio_reset_write_mds" },
	{ 0x7a3574d2, "kmem_cache_free" },
	{ 0xaa359527, "nfs_generic_pg_test" },
	{ 0x2435d559, "strncmp" },
	{ 0x6445d9b9, "xdr_stream_subsegment" },
	{ 0x7cf48427, "nfs_zap_acl_cache" },
	{ 0xcd25bd1d, "nfs_fscache_open_file" },
	{ 0xbe22b7f5, "from_kgid" },
	{ 0xc3fc81b3, "const_current_task" },
	{ 0x191b4e90, "trace_event_reg" },
	{ 0xf5d8d228, "rb_erase" },
	{ 0xa39e5fb6, "nfs_write_inode" },
	{ 0x5e575a33, "nfs_request_remove_commit_list" },
	{ 0x3d395066, "wait_for_completion_interruptible" },
	{ 0x34d8cefd, "rpc_wake_up_first" },
	{ 0x1665f94f, "alloc_nfs_open_context" },
	{ 0x410dd971, "list_lru_add_obj" },
	{ 0x8ce83585, "mod_delayed_work_on" },
	{ 0x4f1e5fd0, "__list_del_entry_valid_or_report" },
	{ 0xe78cc8c9, "nfs_path" },
	{ 0x9003df13, "rpc_sleep_on_priority_timeout" },
	{ 0xb5c51982, "__cpu_online_mask" },
	{ 0x402db74e, "memcmp" },
	{ 0x2953d016, "nfs_create_rpc_client" },
	{ 0xc1e6da50, "_raw_spin_trylock" },
	{ 0x173ec8da, "sscanf" },
	{ 0x118649b4, "register_nfs_version" },
	{ 0xf45cdbd2, "rpc_sleep_on_timeout" },
	{ 0x5068dcba, "list_lru_count_one" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0x7c774c60, "svc_destroy" },
	{ 0x66b814fd, "wake_up_var" },
	{ 0x493ea335, "rpc_call_start" },
	{ 0x301fe6aa, "xprt_setup_backchannel" },
	{ 0x2750496d, "bpf_trace_run1" },
	{ 0xdd53cda6, "svc_create" },
	{ 0xafeda8c0, "rpc_clnt_iterate_for_each_xprt" },
	{ 0x84c36eff, "nfs_file_set_open_context" },
	{ 0x7f4fc2d5, "rpc_init_priority_wait_queue" },
	{ 0xba82fa4a, "folio_alloc_noprof" },
	{ 0xc4ff513e, "nfs_check_flags" },
	{ 0x886b59cc, "rpc_call_sync" },
	{ 0x29613d4f, "from_kuid" },
	{ 0x91ca3d0d, "rpc_put_task_async" },
	{ 0xc21fb1d8, "rpc_prepare_reply_pages" },
	{ 0x374b8dda, "rpc_queue_upcall" },
	{ 0xabe329a9, "nfs_free_server" },
	{ 0x414f10af, "fc_mount" },
	{ 0x1d4de77c, "register_sysctl_sz" },
	{ 0x48bb57c3, "nfs_setattr" },
	{ 0x98aa1e41, "tracepoint_srcu" },
	{ 0x0e9cab28, "memset" },
	{ 0x438a4ff2, "xdr_terminate_string" },
	{ 0x5a844b26, "__x86_indirect_thunk_r10" },
	{ 0xbd069841, "kstrtoull" },
	{ 0x80b101dc, "nfs4_fs_type" },
	{ 0x24e1fbea, "key_revoke" },
	{ 0x68bb3eeb, "nfs_fattr_init" },
	{ 0x20f0228d, "rpc_delay" },
	{ 0x07714a01, "nfs_flock" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x782ccc4f, "__list_lru_init" },
	{ 0x4eba539e, "kmem_cache_alloc_noprof" },
	{ 0xf296206e, "nr_cpu_ids" },
	{ 0xe804603d, "__init_waitqueue_head" },
	{ 0xb5c83a4c, "svc_generic_init_request" },
	{ 0xc98982f0, "key_validate" },
	{ 0xfc1a30ee, "nfs_init_timeout_values" },
	{ 0x06a0ebb0, "rpc_exit" },
	{ 0xa28510eb, "make_kgid" },
	{ 0x565254fb, "__kmem_cache_create_args" },
	{ 0xc818d35a, "rpc_remove_pipe_dir_object" },
	{ 0x655a6628, "nfs_may_open" },
	{ 0xbe22b7f5, "from_kgid_munged" },
	{ 0xefab16c4, "_nfs_display_fhandle" },
	{ 0xec203997, "kasprintf" },
	{ 0x19572860, "vfs_parse_fs_qstr" },
	{ 0xe2f59f75, "out_of_line_wait_on_bit_lock" },
	{ 0xf85c28f6, "nfs_server_copy_userdata" },
	{ 0x1a113166, "nfs_alloc_fattr" },
	{ 0x888b8f57, "strcmp" },
	{ 0x8e6fe378, "down_read" },
	{ 0x49feef87, "xdr_reserve_space" },
	{ 0x44db188e, "rpcauth_lookupcred" },
	{ 0x058c185a, "jiffies" },
	{ 0xc0798420, "kthread_create_on_node" },
	{ 0x9c9a3785, "list_lru_isolate" },
	{ 0xce4af33b, "kstrdup" },
	{ 0xfd5acacb, "nfs_file_mmap_prepare" },
	{ 0xf6319543, "nfs_rmdir" },
	{ 0x2acfb7f7, "bpf_trace_run3" },
	{ 0x3239fbdb, "recover_lost_locks" },
	{ 0x314dffaa, "trace_print_flags_seq" },
	{ 0xbd03ed67, "vmemmap_base" },
	{ 0xddbb02a6, "nfs_filemap_write_and_wait_range" },
	{ 0xfcec65ad, "rpc_mkpipe_dentry" },
	{ 0x15f3e49f, "alloc_file_pseudo" },
	{ 0x82fd7238, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdedf9392, "rpc_mkpipe_data" },
	{ 0x7ec472ba, "cpu_number" },
	{ 0x7ec472ba, "__preempt_count" },
	{ 0x9598bf00, "rpc_add_pipe_dir_object" },
	{ 0xf95f8582, "vfs_pressure_ratio" },
	{ 0xe7b2230e, "igrab" },
	{ 0x118649b4, "unregister_nfs_version" },
	{ 0xa4c0178c, "kvfree_call_rcu" },
	{ 0x4a09d399, "nfs_async_iocounter_wait" },
	{ 0x00ad7f4c, "nfs_file_read" },
	{ 0xd0b95dc4, "trace_event_buffer_reserve" },
	{ 0x8508cae6, "nfs_alloc_fattr_with_label" },
	{ 0x7c0c25f7, "mutex_unlock" },
	{ 0x6eec7a0d, "filemap_fdatawait_range" },
	{ 0x85acaba2, "cancel_delayed_work_sync" },
	{ 0xeae5a0e7, "percpu_counter_add_batch" },
	{ 0x3b6753a0, "nfs_commitdata_alloc" },
	{ 0x23a4913a, "param_ops_bool" },
	{ 0xabe329a9, "nfs_server_set_init_caps" },
	{ 0x3a155231, "nfs_setattr_update_inode" },
	{ 0xb570c0fa, "nfs_instantiate" },
	{ 0xf9d9c87b, "init_user_ns" },
	{ 0x234dcba4, "rpc_uaddr2sockaddr" },
	{ 0x20d1eac6, "user_read" },
	{ 0xffddf59c, "rpc_restart_call" },
	{ 0xfa9c902e, "request_key_tag" },
	{ 0x7f7545ed, "xprt_force_disconnect" },
	{ 0x3c43adb8, "user_free_preparse" },
	{ 0x73f90186, "rpc_clnt_xprt_switch_remove_xprt" },
	{ 0x70518525, "svc_xprt_destroy_all" },
	{ 0x1aa3f3a3, "generic_key_instantiate" },
	{ 0x6eacfae8, "inc_nlink" },
	{ 0x5a844b26, "__x86_indirect_thunk_rcx" },
	{ 0x7de510a1, "match_token" },
	{ 0x39030e3a, "nfs_link" },
	{ 0xcde3c1aa, "__folio_put" },
	{ 0x8eb37e44, "__kmalloc_cache_noprof" },
	{ 0x97acb853, "ktime_get" },
	{ 0x5fc57acd, "list_lru_walk_one" },
	{ 0xf296206e, "nfs_net_id" },
	{ 0xb4f7c638, "rpcauth_stringify_acceptor" },
	{ 0xae612a3f, "dput" },
	{ 0x1f3da2df, "lockref_get" },
	{ 0x7f4fc2d5, "rpc_init_wait_queue" },
	{ 0x71798f7e, "delayed_work_timer_fn" },
	{ 0x92339227, "xdr_stream_move_subsegment" },
	{ 0x5597b998, "put_rpccred" },
	{ 0xf95768b8, "nfs_callback_nr_threads" },
	{ 0x27cf78d5, "nfs_post_op_update_inode_force_wcc" },
	{ 0xfc63cc90, "nfs_pgheader_init" },
	{ 0xe1387849, "put_nfs_open_context" },
	{ 0x2f8d819c, "nfs_show_path" },
	{ 0x7851be11, "__SCT__cond_resched" },
	{ 0xfc9e3d6c, "nfs_show_devname" },
	{ 0x0be4d87e, "nfs_permission" },
	{ 0x88842975, "nfs_initiate_commit" },
	{ 0x2b73fc43, "truncate_inode_pages_range" },
	{ 0x8b61d6cd, "__put_user_ns" },
	{ 0xfbc57bb9, "alloc_pages_noprof" },
	{ 0x3d4e2af6, "cred_fscmp" },
	{ 0xc475524c, "rpc_unlink" },
	{ 0x6e6eef01, "nfs_sync_inode" },
	{ 0xce4bb53a, "wait_woken" },
	{ 0x600e1ee7, "proc_dointvec" },
	{ 0xb730487b, "remove_wait_queue" },
	{ 0xe0bd61e6, "nfs_file_write" },
	{ 0x2da8be68, "nfs_add_or_obtain" },
	{ 0xf95768b8, "max_session_cb_slots" },
	{ 0xe1106eda, "node_data" },
	{ 0xe29e146b, "nfs_probe_server" },
	{ 0x02f9bbf0, "timer_init_key" },
	{ 0x2a3aa8c5, "nfs_setsecurity" },
	{ 0xd4d86f7b, "rpc_clnt_xprt_switch_has_addr" },
	{ 0x3c0bf884, "rpc_clnt_test_and_add_xprt" },
	{ 0xcd8b3995, "file_ra_state_init" },
	{ 0xbfe42f1a, "nfs_force_lookup_revalidate" },
	{ 0xea48f515, "nfs_file_llseek" },
	{ 0x5ccfed25, "autoremove_wake_function" },
	{ 0x6d3b7d77, "rpc_clnt_add_xprt" },
	{ 0x7b33e239, "dget_parent" },
	{ 0x29613d4f, "from_kuid_munged" },
	{ 0x51244248, "prepare_kernel_cred" },
	{ 0x26eca8fa, "nfs_alloc_server" },
	{ 0x217fc893, "rpc_call_async" },
	{ 0x3911db0c, "security_dentry_init_security" },
	{ 0xdc6da1aa, "filemap_write_and_wait_range" },
	{ 0x410dd971, "list_lru_del_obj" },
	{ 0xabe329a9, "nfs_server_insert_lists" },
	{ 0xebfe0fb0, "nfs_dreq_bytes_left" },
	{ 0x1f55c5b2, "kstrtoll" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0x43a349ca, "strlen" },
	{ 0xbf672701, "nfs_free_client" },
	{ 0xe8e0a5a9, "wake_up_bit" },
	{ 0x671b77dd, "rpc_init_pipe_dir_object" },
	{ 0xe1912719, "bpf_trace_run7" },
	{ 0x27cf78d5, "nfs_refresh_inode" },
	{ 0x3ea1bbe0, "refcount_dec_and_lock" },
	{ 0xf1de9e85, "kvfree" },
	{ 0xd272d446, "__SCT__preempt_schedule_notrace" },
	{ 0xf95768b8, "max_session_slots" },
	{ 0x296b9459, "strchr" },
	{ 0xc38c4741, "nfs_access_set_mask" },
	{ 0xa0099570, "nfs_init_server_rpcclient" },
	{ 0x8a624ee3, "__mark_inode_dirty" },
	{ 0x5af09d8b, "_raw_spin_unlock" },
	{ 0x6bded543, "get_free_pages_noprof" },
	{ 0x61d8f4bc, "rpc_set_connect_timeout" },
	{ 0x96c06ee1, "rpcauth_create" },
	{ 0x3398a1da, "xdr_stream_pos" },
	{ 0x040f7812, "__kvmalloc_node_noprof" },
	{ 0x177da279, "key_set_timeout" },
	{ 0x1de9d283, "trace_handle_return" },
	{ 0xbb0fdc8a, "nfs_delay_retrans" },
	{ 0xf296206e, "nfs_debug" },
	{ 0x7d38088a, "nfs_auth_info_match" },
	{ 0x8e6fe378, "up_read" },
	{ 0xf296206e, "nfs_idmap_cache_timeout" },
	{ 0x991639d4, "svc_xprt_create" },
	{ 0x6240d62b, "nfs42_ssc_register" },
	{ 0x1bd62f57, "rpc_wait_for_completion_task" },
	{ 0x6eacfae8, "drop_nlink" },
	{ 0x67628f51, "msleep" },
	{ 0xc1480808, "rpc_num_bc_slots" },
	{ 0x327be542, "nfs_alloc_inode" },
	{ 0x7851be11, "__SCT__might_resched" },
	{ 0xb8f8c02e, "rpc_destroy_wait_queue" },
	{ 0xd0ea019a, "kmalloc_caches" },
	{ 0xb2e62cba, "__trace_set_current_state" },
	{ 0x00d59ee9, "security_inode_listsecurity" },
	{ 0xd02f07e5, "nfs_fhget" },
	{ 0xfdb69c3e, "nfs_symlink" },
	{ 0x37c0b5f3, "__request_module" },
	{ 0x4e59e194, "locks_copy_lock" },
	{ 0x7eb6028e, "kmem_cache_destroy" },
	{ 0x7c0c25f7, "mutex_init_generic" },
	{ 0xf296206e, "nfs_callback_set_tcpport" },
	{ 0xf6319543, "nfs_unlink" },
	{ 0x73760bf7, "nfs_set_verifier" },
	{ 0x600e1ee7, "proc_dointvec_minmax" },
	{ 0x91ca3d0d, "rpc_put_task" },
	{ 0x7f2e4ea5, "nfs4_stat_to_errno" },
	{ 0x52d37340, "svc_generic_rpcbind_set" },
	{ 0xddb5f6cd, "nfs_clone_server" },
	{ 0xe5e9db28, "nfs_access_add_cache" },
	{ 0x487a9129, "nfs_start_io_write" },
	{ 0x4ed1c97d, "filemap_fdatawrite" },
	{ 0xfc9e3d6c, "nfs_show_stats" },
	{ 0xabe329a9, "nfs_server_remove_lists" },
	{ 0x3f8c35b8, "shrinker_alloc" },
	{ 0x6240d62b, "nfs42_ssc_unregister" },
	{ 0xee4020ec, "generic_listxattr" },
	{ 0x872f5dee, "try_module_get" },
	{ 0x05d1641d, "xprt_svc_destroy_nullify_bc" },
	{ 0x3170695f, "__ipv6_addr_type" },
	{ 0x885fde2f, "nfs_writeback_update_inode" },
	{ 0xdc352a3b, "__list_add_valid_or_report" },
	{ 0x6eacfae8, "clear_inode" },
	{ 0xd8b344e3, "inode_to_bdi" },
	{ 0x6f71a083, "bpf_trace_run4" },
	{ 0x379d33d6, "user_destroy" },
	{ 0x9a8a840e, "idr_find" },
	{ 0x23a4913a, "param_ops_uint" },
	{ 0x379d33d6, "user_revoke" },
	{ 0x092a35a2, "_copy_from_user" },
	{ 0xf62be786, "nfs_alloc_client" },
	{ 0xeee33258, "nfs_mark_client_ready" },
	{ 0xd272d446, "__rcu_read_lock" },
	{ 0x66f1a17f, "rpc_clnt_probe_trunked_xprts" },
	{ 0x992babb2, "nfs_pageio_reset_read_mds" },
	{ 0x67e35d55, "xdr_write_pages" },
	{ 0xd75ccb8d, "security_ismaclabel" },
	{ 0xe6ceb2c0, "rpc_shutdown_client" },
	{ 0x847d8292, "svc_bind" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0xfdc586be, "nfs_d_prune_case_insensitive_aliases" },
	{ 0x09a60b79, "nfs_wait_bit_killable" },
	{ 0x7cf48427, "nfs_free_inode" },
	{ 0xfdc586be, "nfs_access_zap_cache" },
	{ 0x3bf2939c, "nfs_sb_deactive" },
	{ 0x94cace9f, "nfs_wb_all" },
	{ 0x0432a604, "__break_lease" },
	{ 0xf5762f5b, "nfs_pageio_init_write" },
	{ 0x5196dfeb, "svc_recv" },
	{ 0x6e6eef01, "nfs_drop_inode" },
	{ 0x40a621c5, "snprintf" },
	{ 0x62cbec20, "complete" },
	{ 0x49feef87, "xdr_inline_decode" },
	{ 0x5489ce84, "nfs_pageio_init_read" },
	{ 0xb23d220e, "trace_raw_output_prep" },
	{ 0x225c2b09, "nfs_wait_client_init_complete" },
	{ 0x4ef4b174, "__symbol_put" },
	{ 0x628e385b, "nfs_init_commit" },
	{ 0x2c1419eb, "nfs_commitdata_release" },
	{ 0xd272d446, "__SCT__preempt_schedule" },
	{ 0xca9d471a, "bpf_trace_run6" },
	{ 0x398dc4a8, "list_lru_destroy" },
	{ 0x5490c000, "rb_next" },
	{ 0x158d0db0, "rpc_net_ns" },
	{ 0xc2ccdd1e, "__init_swait_queue_head" },
	{ 0x02ae6e9f, "__trace_trigger_soft_disabled" },
	{ 0x016dfd7f, "nfs_mknod" },
	{ 0xe1387849, "nfs_inode_attach_open_context" },
	{ 0xb730487b, "finish_wait" },
	{ 0xc029d003, "nfs4_label_alloc" },
	{ 0xb69a1497, "rpc_localaddr" },
	{ 0xb8f8c02e, "rpc_wake_up" },
	{ 0x3677eb57, "xprt_find_transport_ident" },
	{ 0x3b4a56a7, "trace_event_printf" },
	{ 0xe7ac541b, "nfs_access_get_cached" },
	{ 0x40a621c5, "scnprintf" },
	{ 0xbd03ed67, "this_cpu_off" },
	{ 0x4a9b7efd, "idr_replace" },
	{ 0x07714a01, "nfs_lock" },
	{ 0xfc479c82, "unregister_key_type" },
	{ 0xab6f0f55, "atomic_dec_and_lock" },
	{ 0x4e6f6c6d, "nfs_client_init_is_complete" },
	{ 0x2eefc99b, "nfs_file_splice_read" },
	{ 0x494c552b, "_find_first_zero_bit" },
	{ 0xfbeffd26, "d_splice_alias" },
	{ 0x5e505530, "set_freezable" },
	{ 0x8de16330, "prepare_to_wait" },
	{ 0xb2fa43dd, "kernel_sigaction" },
	{ 0xfcd9cad9, "trace_event_raw_init" },
	{ 0xd93b2109, "user_preparse" },
	{ 0x4e060c89, "trace_print_symbols_seq" },
	{ 0xfbe7861b, "memcpy" },
	{ 0x7f57070e, "errseq_sample" },
	{ 0x6eacfae8, "ihold" },
	{ 0x6eacfae8, "inode_dio_wait" },
	{ 0x900b356f, "truncate_pagecache_range" },
	{ 0x579ff8de, "rpc_peeraddr" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x8fd5ee17, "invalidate_inode_pages2_range" },
	{ 0x27cf78d5, "nfs_post_op_update_inode" },
	{ 0xb397e48a, "svc_exit_thread" },
	{ 0x6eacfae8, "iput" },
	{ 0xa64f31bf, "xdr_set_pagelen" },
	{ 0x1eaa4178, "nfs_pgio_header_free" },
	{ 0xacdad865, "nfs_request_add_commit_list_locked" },
	{ 0xb730487b, "add_wait_queue" },
	{ 0x17cfa7cd, "logfc" },
	{ 0xa052e13d, "nfs_pgio_header_alloc" },
	{ 0x00f09098, "iter_file_splice_write" },
	{ 0x38db07b0, "rpc_pton" },
	{ 0x0a5b9d88, "nfs_sb_active" },
	{ 0xe169b089, "mod_node_page_state" },
	{ 0x87b5742d, "rpc_ntop" },
	{ 0xde45859c, "rpc_wake_up_queued_task" },
	{ 0x7b638c16, "bpf_trace_run2" },
	{ 0xc281f1fb, "prepare_to_wait_event" },
	{ 0xe2f59f75, "out_of_line_wait_on_bit" },
	{ 0xcff67975, "xdr_stream_zero" },
	{ 0x2a2acbbd, "memcpy_and_pad" },
	{ 0xf49c8481, "rpcauth_get_pseudoflavor" },
	{ 0xffddf59c, "rpc_restart_call_prepare" },
	{ 0x68a1b6c6, "__wake_up" },
	{ 0x02e1dca7, "free_pages" },
	{ 0x84684cdd, "_copy_from_pages" },
	{ 0x38ae9edf, "__module_get" },
	{ 0x493ea335, "rpc_task_release_transport" },
	{ 0x3398a1da, "xdr_page_pos" },
	{ 0x7f44d3fe, "nfs_file_release" },
	{ 0x34360028, "xdr_encode_opaque" },
	{ 0x2795f6ad, "nfs_pgio_current_mirror" },
	{ 0xf5d8d228, "rb_insert_color" },
	{ 0x217e9ecb, "key_instantiate_and_link" },
	{ 0x92d7bb07, "trace_print_hex_seq" },
	{ 0x9de38dea, "match_strlcpy" },
	{ 0x66506b3e, "xdr_read_pages" },
	{ 0x34360028, "xdr_encode_opaque_fixed" },
	{ 0x5af09d8b, "_raw_spin_lock" },
	{ 0x51a773ad, "register_key_type" },
	{ 0x58716555, "rpc_sleep_on" },
	{ 0x234cc97b, "rpc_run_task" },
	{ 0xf83b0dc4, "nfs_pageio_resend" },
	{ 0xe263ff7c, "keyring_alloc" },
	{ 0x9f5ae5b0, "vfs_setpos" },
	{ 0x16a35c59, "nfs_create" },
	{ 0xb555f528, "complete_request_key" },
	{ 0xd272d446, "__fentry__" },
	{ 0xd9505619, "__put_cred" },
	{ 0x7cf48427, "nfs_update_delegated_mtime" },
	{ 0x4a1c006f, "nfs_statfs" },
	{ 0xaf112a0d, "wake_up_process" },
	{ 0xaeb40924, "shrinker_free" },
	{ 0x494c552b, "_find_last_bit" },
	{ 0x9fca215e, "splice_file_range" },
	{ 0x4e858b01, "rpc_max_bc_payload" },
	{ 0x22dd2048, "nfs_truncate_last_folio" },
	{ 0xcfbe39aa, "trace_event_buffer_commit" },
	{ 0x27b873b8, "nfs_inc_attr_generation_counter" },
	{ 0xaef1f20d, "nfsiod_workqueue" },
	{ 0xf745e777, "wait_for_completion_interruptible_timeout" },
	{ 0x0706e99c, "nfs_end_io_write" },
	{ 0x73f90186, "rpc_clnt_xprt_switch_add_xprt" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0xf183a6d9, "locks_lock_inode_wait" },
	{ 0x33a21527, "nfs_mkdir" },
	{ 0x809e6ffc, "nfs_revalidate_inode" },
	{ 0xfad69ede, "inode_newsize_ok" },
	{ 0x844d048a, "nfs_get_lock_context" },
	{ 0x03342f24, "lock_two_nondirectories" },
	{ 0xae612a3f, "d_drop" },
	{ 0xe8213e80, "_printk" },
	{ 0x3bb5c542, "nfs_set_cache_invalid" },
	{ 0xe6ceb2c0, "rpc_release_client" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xe6ceb2c0, "rpc_clnt_manage_trunked_xprts" },
	{ 0x0e675b65, "___ratelimit" },
	{ 0xd272d446, "schedule" },
	{ 0x6ac784f4, "schedule_timeout" },
	{ 0xa64f31bf, "xdr_enter_page" },
	{ 0x3bf9ad69, "__tracepoint_sched_set_state_tp" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x7cfd965e, "rpc_clnt_setup_test_and_add_xprt" },
	{ 0xff0106da, "refcount_warn_saturate" },
	{ 0x9b74e79d, "unregister_sysctl_table" },
	{ 0xf83b0dc4, "nfs_generic_pgio" },
	{ 0x972c8816, "make_kuid" },
	{ 0x86fae56c, "truncate_inode_pages_final" },
	{ 0xf6f7eb4d, "generic_setlease" },
	{ 0xd710adbf, "__kmalloc_large_noprof" },
	{ 0xa250726a, "xprt_destroy_backchannel" },
	{ 0xb205c97d, "rpc_switch_client_transport" },
	{ 0x9479a1e8, "strnlen" },
	{ 0xc900412d, "nfs_scan_commit_list" },
	{ 0x3ff5b900, "xdr_stream_decode_string_dup" },
	{ 0xc551ed93, "nfs_commit_inode" },
	{ 0xaeb40924, "shrinker_register" },
	{ 0xc60170d6, "locks_init_lock" },
	{ 0xf95768b8, "send_implementation_id" },
	{ 0xc475524c, "rpc_destroy_pipe_data" },
	{ 0xf62be786, "nfs_get_client" },
	{ 0x2bf2c044, "__free_pages" },
	{ 0x296b9459, "strrchr" },
	{ 0x86d206f6, "__SCT__WARN_trap" },
	{ 0xcc410e9c, "init_wait_var_entry" },
	{ 0x29d12a64, "bit_wait" },
	{ 0x97324298, "security_release_secctx" },
	{ 0xd7133844, "init_task" },
	{ 0x5ccfed25, "woken_wake_function" },
	{ 0xea905005, "nfs_atomic_open" },
	{ 0x11bea720, "rpc_pipe_generic_upcall" },
	{ 0x1d2e5c1f, "nfs_file_fsync" },
	{ 0x38ae9edf, "module_put" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0x80519711, "__var_waitqueue" },
	{ 0xbd03ed67, "page_offset_base" },
	{ 0xd70733be, "sized_strscpy" },
	{ 0xce1b2da9, "mntput" },
	{ 0x540fdd49, "nfs_put_lock_context" },
	{ 0xc2274c8a, "nfs_rename" },
	{ 0x85aae626, "nfs_lookup" },
	{ 0x9cd2a478, "errseq_check" },
	{ 0xcd9a5985, "nfs_sysfs_link_rpc_client" },
	{ 0xbf672701, "nfs_put_client" },
	{ 0xfc9e3d6c, "nfs_show_options" },
	{ 0x963234a3, "dns_query" },
	{ 0x74ecf7cc, "nfs_alloc_fhandle" },
	{ 0x24e1fbea, "key_put" },
	{ 0xb1390e2f, "__symbol_get" },
	{ 0xfb77a122, "mount_subtree" },
	{ 0x7a5ffe84, "init_wait_entry" },
	{ 0xac527e8e, "perf_trace_buf_alloc" },
	{ 0x9399b375, "get_nfs_open_context" },
	{ 0x30eb8e97, "perf_trace_run_bpf_submit" },
	{ 0xfdc586be, "nfs_clear_verifier_delegated" },
	{ 0xf36cd068, "nfs_sysfs_add_server" },
	{ 0x05fedf86, "fput" },
	{ 0x8e6fe378, "down_write" },
	{ 0xf545e32f, "rpc_machine_cred" },
	{ 0xbfcc0a67, "nfs4_client_id_uniquifier" },
	{ 0xde945ac9, "nfs_do_submount" },
	{ 0x61a4ccfe, "vfs_dup_fs_context" },
	{ 0x8e6fe378, "up_write" },
	{ 0x07bc7e7e, "sort" },
	{ 0x613a45ff, "request_key_with_auxdata" },
	{ 0xf09c19da, "rpc_clone_client_set_auth" },
	{ 0xed59019f, "rpc_clone_client" },
	{ 0x275f8c2e, "svc_set_num_threads" },
	{ 0x08a22404, "match_int" },
	{ 0x225c2b09, "nfs_client_init_status" },
	{ 0xb33f96dc, "idr_alloc" },
	{ 0x366ddfcc, "memchr" },
	{ 0xee2b6a6b, "user_describe" },
	{ 0xd272d446, "__rcu_read_unlock" },
	{ 0x5a844b26, "__x86_indirect_thunk_r14" },
	{ 0x716c9bcf, "put_fs_context" },
	{ 0x19aee28b, "nfs_retry_commit" },
	{ 0x74694ee3, "nfs4_dentry_operations" },
	{ 0x80e26fb0, "__module_put_and_kthread_exit" },
	{ 0x6a22d58c, "rpc_peeraddr2str" },
	{ 0xa38f8c89, "kmemdup_nul" },
	{ 0x03342f24, "unlock_two_nondirectories" },
	{ 0xaef1f20d, "system_percpu_wq" },
	{ 0xdc0e7d51, "nfs_client_for_each_server" },
	{ 0x7cf48427, "nfs_clear_inode" },
	{ 0xebd9a3c7, "rpc_sleep_on_priority" },
	{ 0x7cf48427, "nfs_invalidate_atime" },
	{ 0x582d5d4b, "bpf_trace_run5" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0x7b611b34, "idr_preload" },
	{ 0xb04003c4, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x3bf2939c,
	0x8bc8f40f,
	0x9e7487f5,
	0x7c0c25f7,
	0x80e3aa4a,
	0x7a3574d2,
	0xaa359527,
	0x2435d559,
	0x6445d9b9,
	0x7cf48427,
	0xcd25bd1d,
	0xbe22b7f5,
	0xc3fc81b3,
	0x191b4e90,
	0xf5d8d228,
	0xa39e5fb6,
	0x5e575a33,
	0x3d395066,
	0x34d8cefd,
	0x1665f94f,
	0x410dd971,
	0x8ce83585,
	0x4f1e5fd0,
	0xe78cc8c9,
	0x9003df13,
	0xb5c51982,
	0x402db74e,
	0x2953d016,
	0xc1e6da50,
	0x173ec8da,
	0x118649b4,
	0xf45cdbd2,
	0x5068dcba,
	0xe54e0a6b,
	0x7c774c60,
	0x66b814fd,
	0x493ea335,
	0x301fe6aa,
	0x2750496d,
	0xdd53cda6,
	0xafeda8c0,
	0x84c36eff,
	0x7f4fc2d5,
	0xba82fa4a,
	0xc4ff513e,
	0x886b59cc,
	0x29613d4f,
	0x91ca3d0d,
	0xc21fb1d8,
	0x374b8dda,
	0xabe329a9,
	0x414f10af,
	0x1d4de77c,
	0x48bb57c3,
	0x98aa1e41,
	0x0e9cab28,
	0x438a4ff2,
	0x5a844b26,
	0xbd069841,
	0x80b101dc,
	0x24e1fbea,
	0x68bb3eeb,
	0x20f0228d,
	0x07714a01,
	0xd272d446,
	0x782ccc4f,
	0x4eba539e,
	0xf296206e,
	0xe804603d,
	0xb5c83a4c,
	0xc98982f0,
	0xfc1a30ee,
	0x06a0ebb0,
	0xa28510eb,
	0x565254fb,
	0xc818d35a,
	0x655a6628,
	0xbe22b7f5,
	0xefab16c4,
	0xec203997,
	0x19572860,
	0xe2f59f75,
	0xf85c28f6,
	0x1a113166,
	0x888b8f57,
	0x8e6fe378,
	0x49feef87,
	0x44db188e,
	0x058c185a,
	0xc0798420,
	0x9c9a3785,
	0xce4af33b,
	0xfd5acacb,
	0xf6319543,
	0x2acfb7f7,
	0x3239fbdb,
	0x314dffaa,
	0xbd03ed67,
	0xddbb02a6,
	0xfcec65ad,
	0x15f3e49f,
	0x82fd7238,
	0xdedf9392,
	0x7ec472ba,
	0x7ec472ba,
	0x9598bf00,
	0xf95f8582,
	0xe7b2230e,
	0x118649b4,
	0xa4c0178c,
	0x4a09d399,
	0x00ad7f4c,
	0xd0b95dc4,
	0x8508cae6,
	0x7c0c25f7,
	0x6eec7a0d,
	0x85acaba2,
	0xeae5a0e7,
	0x3b6753a0,
	0x23a4913a,
	0xabe329a9,
	0x3a155231,
	0xb570c0fa,
	0xf9d9c87b,
	0x234dcba4,
	0x20d1eac6,
	0xffddf59c,
	0xfa9c902e,
	0x7f7545ed,
	0x3c43adb8,
	0x73f90186,
	0x70518525,
	0x1aa3f3a3,
	0x6eacfae8,
	0x5a844b26,
	0x7de510a1,
	0x39030e3a,
	0xcde3c1aa,
	0x8eb37e44,
	0x97acb853,
	0x5fc57acd,
	0xf296206e,
	0xb4f7c638,
	0xae612a3f,
	0x1f3da2df,
	0x7f4fc2d5,
	0x71798f7e,
	0x92339227,
	0x5597b998,
	0xf95768b8,
	0x27cf78d5,
	0xfc63cc90,
	0xe1387849,
	0x2f8d819c,
	0x7851be11,
	0xfc9e3d6c,
	0x0be4d87e,
	0x88842975,
	0x2b73fc43,
	0x8b61d6cd,
	0xfbc57bb9,
	0x3d4e2af6,
	0xc475524c,
	0x6e6eef01,
	0xce4bb53a,
	0x600e1ee7,
	0xb730487b,
	0xe0bd61e6,
	0x2da8be68,
	0xf95768b8,
	0xe1106eda,
	0xe29e146b,
	0x02f9bbf0,
	0x2a3aa8c5,
	0xd4d86f7b,
	0x3c0bf884,
	0xcd8b3995,
	0xbfe42f1a,
	0xea48f515,
	0x5ccfed25,
	0x6d3b7d77,
	0x7b33e239,
	0x29613d4f,
	0x51244248,
	0x26eca8fa,
	0x217fc893,
	0x3911db0c,
	0xdc6da1aa,
	0x410dd971,
	0xabe329a9,
	0xebfe0fb0,
	0x1f55c5b2,
	0xe4de56b4,
	0x43a349ca,
	0xbf672701,
	0xe8e0a5a9,
	0x671b77dd,
	0xe1912719,
	0x27cf78d5,
	0x3ea1bbe0,
	0xf1de9e85,
	0xd272d446,
	0xf95768b8,
	0x296b9459,
	0xc38c4741,
	0xa0099570,
	0x8a624ee3,
	0x5af09d8b,
	0x6bded543,
	0x61d8f4bc,
	0x96c06ee1,
	0x3398a1da,
	0x040f7812,
	0x177da279,
	0x1de9d283,
	0xbb0fdc8a,
	0xf296206e,
	0x7d38088a,
	0x8e6fe378,
	0xf296206e,
	0x991639d4,
	0x6240d62b,
	0x1bd62f57,
	0x6eacfae8,
	0x67628f51,
	0xc1480808,
	0x327be542,
	0x7851be11,
	0xb8f8c02e,
	0xd0ea019a,
	0xb2e62cba,
	0x00d59ee9,
	0xd02f07e5,
	0xfdb69c3e,
	0x37c0b5f3,
	0x4e59e194,
	0x7eb6028e,
	0x7c0c25f7,
	0xf296206e,
	0xf6319543,
	0x73760bf7,
	0x600e1ee7,
	0x91ca3d0d,
	0x7f2e4ea5,
	0x52d37340,
	0xddb5f6cd,
	0xe5e9db28,
	0x487a9129,
	0x4ed1c97d,
	0xfc9e3d6c,
	0xabe329a9,
	0x3f8c35b8,
	0x6240d62b,
	0xee4020ec,
	0x872f5dee,
	0x05d1641d,
	0x3170695f,
	0x885fde2f,
	0xdc352a3b,
	0x6eacfae8,
	0xd8b344e3,
	0x6f71a083,
	0x379d33d6,
	0x9a8a840e,
	0x23a4913a,
	0x379d33d6,
	0x092a35a2,
	0xf62be786,
	0xeee33258,
	0xd272d446,
	0x66f1a17f,
	0x992babb2,
	0x67e35d55,
	0xd75ccb8d,
	0xe6ceb2c0,
	0x847d8292,
	0xd710adbf,
	0xfdc586be,
	0x09a60b79,
	0x7cf48427,
	0xfdc586be,
	0x3bf2939c,
	0x94cace9f,
	0x0432a604,
	0xf5762f5b,
	0x5196dfeb,
	0x6e6eef01,
	0x40a621c5,
	0x62cbec20,
	0x49feef87,
	0x5489ce84,
	0xb23d220e,
	0x225c2b09,
	0x4ef4b174,
	0x628e385b,
	0x2c1419eb,
	0xd272d446,
	0xca9d471a,
	0x398dc4a8,
	0x5490c000,
	0x158d0db0,
	0xc2ccdd1e,
	0x02ae6e9f,
	0x016dfd7f,
	0xe1387849,
	0xb730487b,
	0xc029d003,
	0xb69a1497,
	0xb8f8c02e,
	0x3677eb57,
	0x3b4a56a7,
	0xe7ac541b,
	0x40a621c5,
	0xbd03ed67,
	0x4a9b7efd,
	0x07714a01,
	0xfc479c82,
	0xab6f0f55,
	0x4e6f6c6d,
	0x2eefc99b,
	0x494c552b,
	0xfbeffd26,
	0x5e505530,
	0x8de16330,
	0xb2fa43dd,
	0xfcd9cad9,
	0xd93b2109,
	0x4e060c89,
	0xfbe7861b,
	0x7f57070e,
	0x6eacfae8,
	0x6eacfae8,
	0x900b356f,
	0x579ff8de,
	0xcb8b6ec6,
	0x8fd5ee17,
	0x27cf78d5,
	0xb397e48a,
	0x6eacfae8,
	0xa64f31bf,
	0x1eaa4178,
	0xacdad865,
	0xb730487b,
	0x17cfa7cd,
	0xa052e13d,
	0x00f09098,
	0x38db07b0,
	0x0a5b9d88,
	0xe169b089,
	0x87b5742d,
	0xde45859c,
	0x7b638c16,
	0xc281f1fb,
	0xe2f59f75,
	0xcff67975,
	0x2a2acbbd,
	0xf49c8481,
	0xffddf59c,
	0x68a1b6c6,
	0x02e1dca7,
	0x84684cdd,
	0x38ae9edf,
	0x493ea335,
	0x3398a1da,
	0x7f44d3fe,
	0x34360028,
	0x2795f6ad,
	0xf5d8d228,
	0x217e9ecb,
	0x92d7bb07,
	0x9de38dea,
	0x66506b3e,
	0x34360028,
	0x5af09d8b,
	0x51a773ad,
	0x58716555,
	0x234cc97b,
	0xf83b0dc4,
	0xe263ff7c,
	0x9f5ae5b0,
	0x16a35c59,
	0xb555f528,
	0xd272d446,
	0xd9505619,
	0x7cf48427,
	0x4a1c006f,
	0xaf112a0d,
	0xaeb40924,
	0x494c552b,
	0x9fca215e,
	0x4e858b01,
	0x22dd2048,
	0xcfbe39aa,
	0x27b873b8,
	0xaef1f20d,
	0xf745e777,
	0x0706e99c,
	0x73f90186,
	0x5a844b26,
	0xf183a6d9,
	0x33a21527,
	0x809e6ffc,
	0xfad69ede,
	0x844d048a,
	0x03342f24,
	0xae612a3f,
	0xe8213e80,
	0x3bb5c542,
	0xe6ceb2c0,
	0xbd03ed67,
	0xe6ceb2c0,
	0x0e675b65,
	0xd272d446,
	0x6ac784f4,
	0xa64f31bf,
	0x3bf9ad69,
	0xd272d446,
	0x7cfd965e,
	0xff0106da,
	0x9b74e79d,
	0xf83b0dc4,
	0x972c8816,
	0x86fae56c,
	0xf6f7eb4d,
	0xd710adbf,
	0xa250726a,
	0xb205c97d,
	0x9479a1e8,
	0xc900412d,
	0x3ff5b900,
	0xc551ed93,
	0xaeb40924,
	0xc60170d6,
	0xf95768b8,
	0xc475524c,
	0xf62be786,
	0x2bf2c044,
	0x296b9459,
	0x86d206f6,
	0xcc410e9c,
	0x29d12a64,
	0x97324298,
	0xd7133844,
	0x5ccfed25,
	0xea905005,
	0x11bea720,
	0x1d2e5c1f,
	0x38ae9edf,
	0x90a48d82,
	0x80519711,
	0xbd03ed67,
	0xd70733be,
	0xce1b2da9,
	0x540fdd49,
	0xc2274c8a,
	0x85aae626,
	0x9cd2a478,
	0xcd9a5985,
	0xbf672701,
	0xfc9e3d6c,
	0x963234a3,
	0x74ecf7cc,
	0x24e1fbea,
	0xb1390e2f,
	0xfb77a122,
	0x7a5ffe84,
	0xac527e8e,
	0x9399b375,
	0x30eb8e97,
	0xfdc586be,
	0xf36cd068,
	0x05fedf86,
	0x8e6fe378,
	0xf545e32f,
	0xbfcc0a67,
	0xde945ac9,
	0x61a4ccfe,
	0x8e6fe378,
	0x07bc7e7e,
	0x613a45ff,
	0xf09c19da,
	0xed59019f,
	0x275f8c2e,
	0x08a22404,
	0x225c2b09,
	0xb33f96dc,
	0x366ddfcc,
	0xee2b6a6b,
	0xd272d446,
	0x5a844b26,
	0x716c9bcf,
	0x19aee28b,
	0x74694ee3,
	0x80e26fb0,
	0x6a22d58c,
	0xa38f8c89,
	0x03342f24,
	0xaef1f20d,
	0xdc0e7d51,
	0x7cf48427,
	0xebd9a3c7,
	0x7cf48427,
	0x582d5d4b,
	0xbd03ed67,
	0x7b611b34,
	0xb04003c4,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"nfs_umount_begin\0"
	"crc32_le\0"
	"nfs_getattr\0"
	"mutex_lock\0"
	"nfs_pageio_reset_write_mds\0"
	"kmem_cache_free\0"
	"nfs_generic_pg_test\0"
	"strncmp\0"
	"xdr_stream_subsegment\0"
	"nfs_zap_acl_cache\0"
	"nfs_fscache_open_file\0"
	"from_kgid\0"
	"const_current_task\0"
	"trace_event_reg\0"
	"rb_erase\0"
	"nfs_write_inode\0"
	"nfs_request_remove_commit_list\0"
	"wait_for_completion_interruptible\0"
	"rpc_wake_up_first\0"
	"alloc_nfs_open_context\0"
	"list_lru_add_obj\0"
	"mod_delayed_work_on\0"
	"__list_del_entry_valid_or_report\0"
	"nfs_path\0"
	"rpc_sleep_on_priority_timeout\0"
	"__cpu_online_mask\0"
	"memcmp\0"
	"nfs_create_rpc_client\0"
	"_raw_spin_trylock\0"
	"sscanf\0"
	"register_nfs_version\0"
	"rpc_sleep_on_timeout\0"
	"list_lru_count_one\0"
	"__fortify_panic\0"
	"svc_destroy\0"
	"wake_up_var\0"
	"rpc_call_start\0"
	"xprt_setup_backchannel\0"
	"bpf_trace_run1\0"
	"svc_create\0"
	"rpc_clnt_iterate_for_each_xprt\0"
	"nfs_file_set_open_context\0"
	"rpc_init_priority_wait_queue\0"
	"folio_alloc_noprof\0"
	"nfs_check_flags\0"
	"rpc_call_sync\0"
	"from_kuid\0"
	"rpc_put_task_async\0"
	"rpc_prepare_reply_pages\0"
	"rpc_queue_upcall\0"
	"nfs_free_server\0"
	"fc_mount\0"
	"register_sysctl_sz\0"
	"nfs_setattr\0"
	"tracepoint_srcu\0"
	"memset\0"
	"xdr_terminate_string\0"
	"__x86_indirect_thunk_r10\0"
	"kstrtoull\0"
	"nfs4_fs_type\0"
	"key_revoke\0"
	"nfs_fattr_init\0"
	"rpc_delay\0"
	"nfs_flock\0"
	"__x86_return_thunk\0"
	"__list_lru_init\0"
	"kmem_cache_alloc_noprof\0"
	"nr_cpu_ids\0"
	"__init_waitqueue_head\0"
	"svc_generic_init_request\0"
	"key_validate\0"
	"nfs_init_timeout_values\0"
	"rpc_exit\0"
	"make_kgid\0"
	"__kmem_cache_create_args\0"
	"rpc_remove_pipe_dir_object\0"
	"nfs_may_open\0"
	"from_kgid_munged\0"
	"_nfs_display_fhandle\0"
	"kasprintf\0"
	"vfs_parse_fs_qstr\0"
	"out_of_line_wait_on_bit_lock\0"
	"nfs_server_copy_userdata\0"
	"nfs_alloc_fattr\0"
	"strcmp\0"
	"down_read\0"
	"xdr_reserve_space\0"
	"rpcauth_lookupcred\0"
	"jiffies\0"
	"kthread_create_on_node\0"
	"list_lru_isolate\0"
	"kstrdup\0"
	"nfs_file_mmap_prepare\0"
	"nfs_rmdir\0"
	"bpf_trace_run3\0"
	"recover_lost_locks\0"
	"trace_print_flags_seq\0"
	"vmemmap_base\0"
	"nfs_filemap_write_and_wait_range\0"
	"rpc_mkpipe_dentry\0"
	"alloc_file_pseudo\0"
	"__ubsan_handle_shift_out_of_bounds\0"
	"rpc_mkpipe_data\0"
	"cpu_number\0"
	"__preempt_count\0"
	"rpc_add_pipe_dir_object\0"
	"vfs_pressure_ratio\0"
	"igrab\0"
	"unregister_nfs_version\0"
	"kvfree_call_rcu\0"
	"nfs_async_iocounter_wait\0"
	"nfs_file_read\0"
	"trace_event_buffer_reserve\0"
	"nfs_alloc_fattr_with_label\0"
	"mutex_unlock\0"
	"filemap_fdatawait_range\0"
	"cancel_delayed_work_sync\0"
	"percpu_counter_add_batch\0"
	"nfs_commitdata_alloc\0"
	"param_ops_bool\0"
	"nfs_server_set_init_caps\0"
	"nfs_setattr_update_inode\0"
	"nfs_instantiate\0"
	"init_user_ns\0"
	"rpc_uaddr2sockaddr\0"
	"user_read\0"
	"rpc_restart_call\0"
	"request_key_tag\0"
	"xprt_force_disconnect\0"
	"user_free_preparse\0"
	"rpc_clnt_xprt_switch_remove_xprt\0"
	"svc_xprt_destroy_all\0"
	"generic_key_instantiate\0"
	"inc_nlink\0"
	"__x86_indirect_thunk_rcx\0"
	"match_token\0"
	"nfs_link\0"
	"__folio_put\0"
	"__kmalloc_cache_noprof\0"
	"ktime_get\0"
	"list_lru_walk_one\0"
	"nfs_net_id\0"
	"rpcauth_stringify_acceptor\0"
	"dput\0"
	"lockref_get\0"
	"rpc_init_wait_queue\0"
	"delayed_work_timer_fn\0"
	"xdr_stream_move_subsegment\0"
	"put_rpccred\0"
	"nfs_callback_nr_threads\0"
	"nfs_post_op_update_inode_force_wcc\0"
	"nfs_pgheader_init\0"
	"put_nfs_open_context\0"
	"nfs_show_path\0"
	"__SCT__cond_resched\0"
	"nfs_show_devname\0"
	"nfs_permission\0"
	"nfs_initiate_commit\0"
	"truncate_inode_pages_range\0"
	"__put_user_ns\0"
	"alloc_pages_noprof\0"
	"cred_fscmp\0"
	"rpc_unlink\0"
	"nfs_sync_inode\0"
	"wait_woken\0"
	"proc_dointvec\0"
	"remove_wait_queue\0"
	"nfs_file_write\0"
	"nfs_add_or_obtain\0"
	"max_session_cb_slots\0"
	"node_data\0"
	"nfs_probe_server\0"
	"timer_init_key\0"
	"nfs_setsecurity\0"
	"rpc_clnt_xprt_switch_has_addr\0"
	"rpc_clnt_test_and_add_xprt\0"
	"file_ra_state_init\0"
	"nfs_force_lookup_revalidate\0"
	"nfs_file_llseek\0"
	"autoremove_wake_function\0"
	"rpc_clnt_add_xprt\0"
	"dget_parent\0"
	"from_kuid_munged\0"
	"prepare_kernel_cred\0"
	"nfs_alloc_server\0"
	"rpc_call_async\0"
	"security_dentry_init_security\0"
	"filemap_write_and_wait_range\0"
	"list_lru_del_obj\0"
	"nfs_server_insert_lists\0"
	"nfs_dreq_bytes_left\0"
	"kstrtoll\0"
	"__ubsan_handle_load_invalid_value\0"
	"strlen\0"
	"nfs_free_client\0"
	"wake_up_bit\0"
	"rpc_init_pipe_dir_object\0"
	"bpf_trace_run7\0"
	"nfs_refresh_inode\0"
	"refcount_dec_and_lock\0"
	"kvfree\0"
	"__SCT__preempt_schedule_notrace\0"
	"max_session_slots\0"
	"strchr\0"
	"nfs_access_set_mask\0"
	"nfs_init_server_rpcclient\0"
	"__mark_inode_dirty\0"
	"_raw_spin_unlock\0"
	"get_free_pages_noprof\0"
	"rpc_set_connect_timeout\0"
	"rpcauth_create\0"
	"xdr_stream_pos\0"
	"__kvmalloc_node_noprof\0"
	"key_set_timeout\0"
	"trace_handle_return\0"
	"nfs_delay_retrans\0"
	"nfs_debug\0"
	"nfs_auth_info_match\0"
	"up_read\0"
	"nfs_idmap_cache_timeout\0"
	"svc_xprt_create\0"
	"nfs42_ssc_register\0"
	"rpc_wait_for_completion_task\0"
	"drop_nlink\0"
	"msleep\0"
	"rpc_num_bc_slots\0"
	"nfs_alloc_inode\0"
	"__SCT__might_resched\0"
	"rpc_destroy_wait_queue\0"
	"kmalloc_caches\0"
	"__trace_set_current_state\0"
	"security_inode_listsecurity\0"
	"nfs_fhget\0"
	"nfs_symlink\0"
	"__request_module\0"
	"locks_copy_lock\0"
	"kmem_cache_destroy\0"
	"mutex_init_generic\0"
	"nfs_callback_set_tcpport\0"
	"nfs_unlink\0"
	"nfs_set_verifier\0"
	"proc_dointvec_minmax\0"
	"rpc_put_task\0"
	"nfs4_stat_to_errno\0"
	"svc_generic_rpcbind_set\0"
	"nfs_clone_server\0"
	"nfs_access_add_cache\0"
	"nfs_start_io_write\0"
	"filemap_fdatawrite\0"
	"nfs_show_stats\0"
	"nfs_server_remove_lists\0"
	"shrinker_alloc\0"
	"nfs42_ssc_unregister\0"
	"generic_listxattr\0"
	"try_module_get\0"
	"xprt_svc_destroy_nullify_bc\0"
	"__ipv6_addr_type\0"
	"nfs_writeback_update_inode\0"
	"__list_add_valid_or_report\0"
	"clear_inode\0"
	"inode_to_bdi\0"
	"bpf_trace_run4\0"
	"user_destroy\0"
	"idr_find\0"
	"param_ops_uint\0"
	"user_revoke\0"
	"_copy_from_user\0"
	"nfs_alloc_client\0"
	"nfs_mark_client_ready\0"
	"__rcu_read_lock\0"
	"rpc_clnt_probe_trunked_xprts\0"
	"nfs_pageio_reset_read_mds\0"
	"xdr_write_pages\0"
	"security_ismaclabel\0"
	"rpc_shutdown_client\0"
	"svc_bind\0"
	"__kmalloc_noprof\0"
	"nfs_d_prune_case_insensitive_aliases\0"
	"nfs_wait_bit_killable\0"
	"nfs_free_inode\0"
	"nfs_access_zap_cache\0"
	"nfs_sb_deactive\0"
	"nfs_wb_all\0"
	"__break_lease\0"
	"nfs_pageio_init_write\0"
	"svc_recv\0"
	"nfs_drop_inode\0"
	"snprintf\0"
	"complete\0"
	"xdr_inline_decode\0"
	"nfs_pageio_init_read\0"
	"trace_raw_output_prep\0"
	"nfs_wait_client_init_complete\0"
	"__symbol_put\0"
	"nfs_init_commit\0"
	"nfs_commitdata_release\0"
	"__SCT__preempt_schedule\0"
	"bpf_trace_run6\0"
	"list_lru_destroy\0"
	"rb_next\0"
	"rpc_net_ns\0"
	"__init_swait_queue_head\0"
	"__trace_trigger_soft_disabled\0"
	"nfs_mknod\0"
	"nfs_inode_attach_open_context\0"
	"finish_wait\0"
	"nfs4_label_alloc\0"
	"rpc_localaddr\0"
	"rpc_wake_up\0"
	"xprt_find_transport_ident\0"
	"trace_event_printf\0"
	"nfs_access_get_cached\0"
	"scnprintf\0"
	"this_cpu_off\0"
	"idr_replace\0"
	"nfs_lock\0"
	"unregister_key_type\0"
	"atomic_dec_and_lock\0"
	"nfs_client_init_is_complete\0"
	"nfs_file_splice_read\0"
	"_find_first_zero_bit\0"
	"d_splice_alias\0"
	"set_freezable\0"
	"prepare_to_wait\0"
	"kernel_sigaction\0"
	"trace_event_raw_init\0"
	"user_preparse\0"
	"trace_print_symbols_seq\0"
	"memcpy\0"
	"errseq_sample\0"
	"ihold\0"
	"inode_dio_wait\0"
	"truncate_pagecache_range\0"
	"rpc_peeraddr\0"
	"kfree\0"
	"invalidate_inode_pages2_range\0"
	"nfs_post_op_update_inode\0"
	"svc_exit_thread\0"
	"iput\0"
	"xdr_set_pagelen\0"
	"nfs_pgio_header_free\0"
	"nfs_request_add_commit_list_locked\0"
	"add_wait_queue\0"
	"logfc\0"
	"nfs_pgio_header_alloc\0"
	"iter_file_splice_write\0"
	"rpc_pton\0"
	"nfs_sb_active\0"
	"mod_node_page_state\0"
	"rpc_ntop\0"
	"rpc_wake_up_queued_task\0"
	"bpf_trace_run2\0"
	"prepare_to_wait_event\0"
	"out_of_line_wait_on_bit\0"
	"xdr_stream_zero\0"
	"memcpy_and_pad\0"
	"rpcauth_get_pseudoflavor\0"
	"rpc_restart_call_prepare\0"
	"__wake_up\0"
	"free_pages\0"
	"_copy_from_pages\0"
	"__module_get\0"
	"rpc_task_release_transport\0"
	"xdr_page_pos\0"
	"nfs_file_release\0"
	"xdr_encode_opaque\0"
	"nfs_pgio_current_mirror\0"
	"rb_insert_color\0"
	"key_instantiate_and_link\0"
	"trace_print_hex_seq\0"
	"match_strlcpy\0"
	"xdr_read_pages\0"
	"xdr_encode_opaque_fixed\0"
	"_raw_spin_lock\0"
	"register_key_type\0"
	"rpc_sleep_on\0"
	"rpc_run_task\0"
	"nfs_pageio_resend\0"
	"keyring_alloc\0"
	"vfs_setpos\0"
	"nfs_create\0"
	"complete_request_key\0"
	"__fentry__\0"
	"__put_cred\0"
	"nfs_update_delegated_mtime\0"
	"nfs_statfs\0"
	"wake_up_process\0"
	"shrinker_free\0"
	"_find_last_bit\0"
	"splice_file_range\0"
	"rpc_max_bc_payload\0"
	"nfs_truncate_last_folio\0"
	"trace_event_buffer_commit\0"
	"nfs_inc_attr_generation_counter\0"
	"nfsiod_workqueue\0"
	"wait_for_completion_interruptible_timeout\0"
	"nfs_end_io_write\0"
	"rpc_clnt_xprt_switch_add_xprt\0"
	"__x86_indirect_thunk_rax\0"
	"locks_lock_inode_wait\0"
	"nfs_mkdir\0"
	"nfs_revalidate_inode\0"
	"inode_newsize_ok\0"
	"nfs_get_lock_context\0"
	"lock_two_nondirectories\0"
	"d_drop\0"
	"_printk\0"
	"nfs_set_cache_invalid\0"
	"rpc_release_client\0"
	"__ref_stack_chk_guard\0"
	"rpc_clnt_manage_trunked_xprts\0"
	"___ratelimit\0"
	"schedule\0"
	"schedule_timeout\0"
	"xdr_enter_page\0"
	"__tracepoint_sched_set_state_tp\0"
	"__stack_chk_fail\0"
	"rpc_clnt_setup_test_and_add_xprt\0"
	"refcount_warn_saturate\0"
	"unregister_sysctl_table\0"
	"nfs_generic_pgio\0"
	"make_kuid\0"
	"truncate_inode_pages_final\0"
	"generic_setlease\0"
	"__kmalloc_large_noprof\0"
	"xprt_destroy_backchannel\0"
	"rpc_switch_client_transport\0"
	"strnlen\0"
	"nfs_scan_commit_list\0"
	"xdr_stream_decode_string_dup\0"
	"nfs_commit_inode\0"
	"shrinker_register\0"
	"locks_init_lock\0"
	"send_implementation_id\0"
	"rpc_destroy_pipe_data\0"
	"nfs_get_client\0"
	"__free_pages\0"
	"strrchr\0"
	"__SCT__WARN_trap\0"
	"init_wait_var_entry\0"
	"bit_wait\0"
	"security_release_secctx\0"
	"init_task\0"
	"woken_wake_function\0"
	"nfs_atomic_open\0"
	"rpc_pipe_generic_upcall\0"
	"nfs_file_fsync\0"
	"module_put\0"
	"__ubsan_handle_out_of_bounds\0"
	"__var_waitqueue\0"
	"page_offset_base\0"
	"sized_strscpy\0"
	"mntput\0"
	"nfs_put_lock_context\0"
	"nfs_rename\0"
	"nfs_lookup\0"
	"errseq_check\0"
	"nfs_sysfs_link_rpc_client\0"
	"nfs_put_client\0"
	"nfs_show_options\0"
	"dns_query\0"
	"nfs_alloc_fhandle\0"
	"key_put\0"
	"__symbol_get\0"
	"mount_subtree\0"
	"init_wait_entry\0"
	"perf_trace_buf_alloc\0"
	"get_nfs_open_context\0"
	"perf_trace_run_bpf_submit\0"
	"nfs_clear_verifier_delegated\0"
	"nfs_sysfs_add_server\0"
	"fput\0"
	"down_write\0"
	"rpc_machine_cred\0"
	"nfs4_client_id_uniquifier\0"
	"nfs_do_submount\0"
	"vfs_dup_fs_context\0"
	"up_write\0"
	"sort\0"
	"request_key_with_auxdata\0"
	"rpc_clone_client_set_auth\0"
	"rpc_clone_client\0"
	"svc_set_num_threads\0"
	"match_int\0"
	"nfs_client_init_status\0"
	"idr_alloc\0"
	"memchr\0"
	"user_describe\0"
	"__rcu_read_unlock\0"
	"__x86_indirect_thunk_r14\0"
	"put_fs_context\0"
	"nfs_retry_commit\0"
	"nfs4_dentry_operations\0"
	"__module_put_and_kthread_exit\0"
	"rpc_peeraddr2str\0"
	"kmemdup_nul\0"
	"unlock_two_nondirectories\0"
	"system_percpu_wq\0"
	"nfs_client_for_each_server\0"
	"nfs_clear_inode\0"
	"rpc_sleep_on_priority\0"
	"nfs_invalidate_atime\0"
	"bpf_trace_run5\0"
	"random_kmalloc_seed\0"
	"idr_preload\0"
	"module_layout\0"
;

MODULE_INFO(depends, "nfs,sunrpc");


MODULE_INFO(srcversion, "024483B02AE7314B35C08CE");
