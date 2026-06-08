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

KSYMTAB_FUNC(get_nfs_version, "");
SYMBOL_FLAGS(get_nfs_version, 0x01);
KSYMTAB_FUNC(register_nfs_version, "");
SYMBOL_FLAGS(register_nfs_version, 0x01);
KSYMTAB_FUNC(unregister_nfs_version, "");
SYMBOL_FLAGS(unregister_nfs_version, 0x01);
KSYMTAB_FUNC(nfs_alloc_client, "");
SYMBOL_FLAGS(nfs_alloc_client, 0x01);
KSYMTAB_FUNC(nfs_free_client, "");
SYMBOL_FLAGS(nfs_free_client, 0x01);
KSYMTAB_FUNC(nfs_put_client, "");
SYMBOL_FLAGS(nfs_put_client, 0x01);
KSYMTAB_FUNC(nfs_client_init_is_complete, "");
SYMBOL_FLAGS(nfs_client_init_is_complete, 0x01);
KSYMTAB_FUNC(nfs_client_init_status, "");
SYMBOL_FLAGS(nfs_client_init_status, 0x01);
KSYMTAB_FUNC(nfs_wait_client_init_complete, "");
SYMBOL_FLAGS(nfs_wait_client_init_complete, 0x01);
KSYMTAB_FUNC(nfs_get_client, "");
SYMBOL_FLAGS(nfs_get_client, 0x01);
KSYMTAB_FUNC(nfs_mark_client_ready, "");
SYMBOL_FLAGS(nfs_mark_client_ready, 0x01);
KSYMTAB_FUNC(nfs_init_timeout_values, "");
SYMBOL_FLAGS(nfs_init_timeout_values, 0x01);
KSYMTAB_FUNC(nfs_create_rpc_client, "");
SYMBOL_FLAGS(nfs_create_rpc_client, 0x01);
KSYMTAB_FUNC(nfs_init_server_rpcclient, "");
SYMBOL_FLAGS(nfs_init_server_rpcclient, 0x01);
KSYMTAB_FUNC(nfs_init_client, "");
SYMBOL_FLAGS(nfs_init_client, 0x01);
KSYMTAB_FUNC(nfs_server_set_init_caps, "");
SYMBOL_FLAGS(nfs_server_set_init_caps, 0x01);
KSYMTAB_FUNC(nfs_probe_server, "");
SYMBOL_FLAGS(nfs_probe_server, 0x01);
KSYMTAB_FUNC(nfs_server_copy_userdata, "");
SYMBOL_FLAGS(nfs_server_copy_userdata, 0x01);
KSYMTAB_FUNC(nfs_server_insert_lists, "");
SYMBOL_FLAGS(nfs_server_insert_lists, 0x01);
KSYMTAB_FUNC(nfs_server_remove_lists, "");
SYMBOL_FLAGS(nfs_server_remove_lists, 0x01);
KSYMTAB_FUNC(nfs_alloc_server, "");
SYMBOL_FLAGS(nfs_alloc_server, 0x01);
KSYMTAB_FUNC(nfs_free_server, "");
SYMBOL_FLAGS(nfs_free_server, 0x01);
KSYMTAB_FUNC(nfs_create_server, "");
SYMBOL_FLAGS(nfs_create_server, 0x01);
KSYMTAB_FUNC(nfs_clone_server, "");
SYMBOL_FLAGS(nfs_clone_server, 0x01);
KSYMTAB_FUNC(nfs_force_lookup_revalidate, "");
SYMBOL_FLAGS(nfs_force_lookup_revalidate, 0x01);
KSYMTAB_FUNC(nfs_set_verifier, "");
SYMBOL_FLAGS(nfs_set_verifier, 0x01);
KSYMTAB_FUNC(nfs_clear_verifier_delegated, "");
SYMBOL_FLAGS(nfs_clear_verifier_delegated, 0x01);
KSYMTAB_DATA(nfs_dentry_operations, "");
SYMBOL_FLAGS(nfs_dentry_operations, 0x01);
KSYMTAB_FUNC(nfs_lookup, "");
SYMBOL_FLAGS(nfs_lookup, 0x01);
KSYMTAB_FUNC(nfs_d_prune_case_insensitive_aliases, "");
SYMBOL_FLAGS(nfs_d_prune_case_insensitive_aliases, 0x01);
KSYMTAB_DATA(nfs4_dentry_operations, "");
SYMBOL_FLAGS(nfs4_dentry_operations, 0x01);
KSYMTAB_FUNC(nfs_atomic_open, "");
SYMBOL_FLAGS(nfs_atomic_open, 0x01);
KSYMTAB_FUNC(nfs_atomic_open_v23, "");
SYMBOL_FLAGS(nfs_atomic_open_v23, 0x01);
KSYMTAB_FUNC(nfs_add_or_obtain, "");
SYMBOL_FLAGS(nfs_add_or_obtain, 0x01);
KSYMTAB_FUNC(nfs_instantiate, "");
SYMBOL_FLAGS(nfs_instantiate, 0x01);
KSYMTAB_FUNC(nfs_create, "");
SYMBOL_FLAGS(nfs_create, 0x01);
KSYMTAB_FUNC(nfs_mknod, "");
SYMBOL_FLAGS(nfs_mknod, 0x01);
KSYMTAB_FUNC(nfs_mkdir, "");
SYMBOL_FLAGS(nfs_mkdir, 0x01);
KSYMTAB_FUNC(nfs_rmdir, "");
SYMBOL_FLAGS(nfs_rmdir, 0x01);
KSYMTAB_FUNC(nfs_unlink, "");
SYMBOL_FLAGS(nfs_unlink, 0x01);
KSYMTAB_FUNC(nfs_symlink, "");
SYMBOL_FLAGS(nfs_symlink, 0x01);
KSYMTAB_FUNC(nfs_link, "");
SYMBOL_FLAGS(nfs_link, 0x01);
KSYMTAB_FUNC(nfs_rename, "");
SYMBOL_FLAGS(nfs_rename, 0x01);
KSYMTAB_FUNC(nfs_access_zap_cache, "");
SYMBOL_FLAGS(nfs_access_zap_cache, 0x01);
KSYMTAB_FUNC(nfs_access_get_cached, "");
SYMBOL_FLAGS(nfs_access_get_cached, 0x01);
KSYMTAB_FUNC(nfs_access_add_cache, "");
SYMBOL_FLAGS(nfs_access_add_cache, 0x01);
KSYMTAB_FUNC(nfs_access_set_mask, "");
SYMBOL_FLAGS(nfs_access_set_mask, 0x01);
KSYMTAB_FUNC(nfs_may_open, "");
SYMBOL_FLAGS(nfs_may_open, 0x01);
KSYMTAB_FUNC(nfs_permission, "");
SYMBOL_FLAGS(nfs_permission, 0x01);
KSYMTAB_FUNC(nfs_check_flags, "");
SYMBOL_FLAGS(nfs_check_flags, 0x01);
KSYMTAB_FUNC(nfs_file_release, "");
SYMBOL_FLAGS(nfs_file_release, 0x01);
KSYMTAB_FUNC(nfs_file_llseek, "");
SYMBOL_FLAGS(nfs_file_llseek, 0x01);
KSYMTAB_FUNC(nfs_file_read, "");
SYMBOL_FLAGS(nfs_file_read, 0x01);
KSYMTAB_FUNC(nfs_file_splice_read, "");
SYMBOL_FLAGS(nfs_file_splice_read, 0x01);
KSYMTAB_FUNC(nfs_file_mmap_prepare, "");
SYMBOL_FLAGS(nfs_file_mmap_prepare, 0x01);
KSYMTAB_FUNC(nfs_file_fsync, "");
SYMBOL_FLAGS(nfs_file_fsync, 0x01);
KSYMTAB_FUNC(nfs_truncate_last_folio, "");
SYMBOL_FLAGS(nfs_truncate_last_folio, 0x01);
KSYMTAB_FUNC(nfs_file_write, "");
SYMBOL_FLAGS(nfs_file_write, 0x01);
KSYMTAB_FUNC(nfs_lock, "");
SYMBOL_FLAGS(nfs_lock, 0x01);
KSYMTAB_FUNC(nfs_flock, "");
SYMBOL_FLAGS(nfs_flock, 0x01);
KSYMTAB_DATA(nfs_file_operations, "");
SYMBOL_FLAGS(nfs_file_operations, 0x01);
KSYMTAB_FUNC(nfs_wait_bit_killable, "");
SYMBOL_FLAGS(nfs_wait_bit_killable, 0x01);
KSYMTAB_FUNC(nfs_drop_inode, "");
SYMBOL_FLAGS(nfs_drop_inode, 0x01);
KSYMTAB_FUNC(nfs_clear_inode, "");
SYMBOL_FLAGS(nfs_clear_inode, 0x01);
KSYMTAB_FUNC(nfs_sync_inode, "");
SYMBOL_FLAGS(nfs_sync_inode, 0x01);
KSYMTAB_FUNC(nfs_check_cache_invalid, "");
SYMBOL_FLAGS(nfs_check_cache_invalid, 0x01);
KSYMTAB_FUNC(nfs_set_cache_invalid, "");
SYMBOL_FLAGS(nfs_set_cache_invalid, 0x01);
KSYMTAB_FUNC(nfs_zap_acl_cache, "");
SYMBOL_FLAGS(nfs_zap_acl_cache, 0x01);
KSYMTAB_FUNC(nfs_invalidate_atime, "");
SYMBOL_FLAGS(nfs_invalidate_atime, 0x01);
KSYMTAB_FUNC(nfs4_label_alloc, "");
SYMBOL_FLAGS(nfs4_label_alloc, 0x01);
KSYMTAB_FUNC(nfs_setsecurity, "");
SYMBOL_FLAGS(nfs_setsecurity, 0x01);
KSYMTAB_FUNC(nfs_fhget, "");
SYMBOL_FLAGS(nfs_fhget, 0x01);
KSYMTAB_FUNC(nfs_update_delegated_mtime, "");
SYMBOL_FLAGS(nfs_update_delegated_mtime, 0x01);
KSYMTAB_FUNC(nfs_setattr, "");
SYMBOL_FLAGS(nfs_setattr, 0x01);
KSYMTAB_FUNC(nfs_setattr_update_inode, "");
SYMBOL_FLAGS(nfs_setattr_update_inode, 0x01);
KSYMTAB_FUNC(nfs_getattr, "");
SYMBOL_FLAGS(nfs_getattr, 0x01);
KSYMTAB_FUNC(nfs_get_lock_context, "");
SYMBOL_FLAGS(nfs_get_lock_context, 0x01);
KSYMTAB_FUNC(nfs_put_lock_context, "");
SYMBOL_FLAGS(nfs_put_lock_context, 0x01);
KSYMTAB_FUNC(nfs_close_context, "");
SYMBOL_FLAGS(nfs_close_context, 0x01);
KSYMTAB_FUNC(alloc_nfs_open_context, "");
SYMBOL_FLAGS(alloc_nfs_open_context, 0x01);
KSYMTAB_FUNC(get_nfs_open_context, "");
SYMBOL_FLAGS(get_nfs_open_context, 0x01);
KSYMTAB_FUNC(put_nfs_open_context, "");
SYMBOL_FLAGS(put_nfs_open_context, 0x01);
KSYMTAB_FUNC(nfs_inode_attach_open_context, "");
SYMBOL_FLAGS(nfs_inode_attach_open_context, 0x01);
KSYMTAB_FUNC(nfs_file_set_open_context, "");
SYMBOL_FLAGS(nfs_file_set_open_context, 0x01);
KSYMTAB_FUNC(nfs_revalidate_inode, "");
SYMBOL_FLAGS(nfs_revalidate_inode, 0x01);
KSYMTAB_FUNC(nfs_inc_attr_generation_counter, "");
SYMBOL_FLAGS(nfs_inc_attr_generation_counter, 0x01);
KSYMTAB_FUNC(nfs_fattr_init, "");
SYMBOL_FLAGS(nfs_fattr_init, 0x01);
KSYMTAB_FUNC(nfs_alloc_fattr, "");
SYMBOL_FLAGS(nfs_alloc_fattr, 0x01);
KSYMTAB_FUNC(nfs_alloc_fattr_with_label, "");
SYMBOL_FLAGS(nfs_alloc_fattr_with_label, 0x01);
KSYMTAB_FUNC(nfs_alloc_fhandle, "");
SYMBOL_FLAGS(nfs_alloc_fhandle, 0x01);
KSYMTAB_FUNC(_nfs_display_fhandle_hash, "");
SYMBOL_FLAGS(_nfs_display_fhandle_hash, 0x01);
KSYMTAB_FUNC(_nfs_display_fhandle, "");
SYMBOL_FLAGS(_nfs_display_fhandle, 0x01);
KSYMTAB_FUNC(nfs_refresh_inode, "");
SYMBOL_FLAGS(nfs_refresh_inode, 0x01);
KSYMTAB_FUNC(nfs_post_op_update_inode, "");
SYMBOL_FLAGS(nfs_post_op_update_inode, 0x01);
KSYMTAB_FUNC(nfs_post_op_update_inode_force_wcc, "");
SYMBOL_FLAGS(nfs_post_op_update_inode_force_wcc, 0x01);
KSYMTAB_FUNC(nfs_alloc_inode, "");
SYMBOL_FLAGS(nfs_alloc_inode, 0x01);
KSYMTAB_FUNC(nfs_free_inode, "");
SYMBOL_FLAGS(nfs_free_inode, 0x01);
KSYMTAB_DATA(nfsiod_workqueue, "");
SYMBOL_FLAGS(nfsiod_workqueue, 0x01);
KSYMTAB_DATA(nfs_net_id, "");
SYMBOL_FLAGS(nfs_net_id, 0x01);
KSYMTAB_DATA(nfs_sops, "");
SYMBOL_FLAGS(nfs_sops, 0x01);
KSYMTAB_FUNC(nfs_sb_active, "");
SYMBOL_FLAGS(nfs_sb_active, 0x01);
KSYMTAB_FUNC(nfs_sb_deactive, "");
SYMBOL_FLAGS(nfs_sb_deactive, 0x01);
KSYMTAB_FUNC(nfs_client_for_each_server, "");
SYMBOL_FLAGS(nfs_client_for_each_server, 0x01);
KSYMTAB_FUNC(nfs_statfs, "");
SYMBOL_FLAGS(nfs_statfs, 0x01);
KSYMTAB_FUNC(nfs_show_options, "");
SYMBOL_FLAGS(nfs_show_options, 0x01);
KSYMTAB_FUNC(nfs_show_devname, "");
SYMBOL_FLAGS(nfs_show_devname, 0x01);
KSYMTAB_FUNC(nfs_show_path, "");
SYMBOL_FLAGS(nfs_show_path, 0x01);
KSYMTAB_FUNC(nfs_show_stats, "");
SYMBOL_FLAGS(nfs_show_stats, 0x01);
KSYMTAB_FUNC(nfs_umount_begin, "");
SYMBOL_FLAGS(nfs_umount_begin, 0x01);
KSYMTAB_FUNC(nfs_auth_info_match, "");
SYMBOL_FLAGS(nfs_auth_info_match, 0x01);
KSYMTAB_FUNC(nfs_try_get_tree, "");
SYMBOL_FLAGS(nfs_try_get_tree, 0x01);
KSYMTAB_FUNC(nfs_reconfigure, "");
SYMBOL_FLAGS(nfs_reconfigure, 0x01);
KSYMTAB_FUNC(nfs_kill_super, "");
SYMBOL_FLAGS(nfs_kill_super, 0x01);
KSYMTAB_DATA(nfs_callback_nr_threads, "");
SYMBOL_FLAGS(nfs_callback_nr_threads, 0x01);
KSYMTAB_DATA(nfs_callback_set_tcpport, "");
SYMBOL_FLAGS(nfs_callback_set_tcpport, 0x01);
KSYMTAB_DATA(nfs_idmap_cache_timeout, "");
SYMBOL_FLAGS(nfs_idmap_cache_timeout, 0x01);
KSYMTAB_DATA(nfs4_disable_idmapping, "");
SYMBOL_FLAGS(nfs4_disable_idmapping, 0x01);
KSYMTAB_DATA(max_session_slots, "");
SYMBOL_FLAGS(max_session_slots, 0x01);
KSYMTAB_DATA(max_session_cb_slots, "");
SYMBOL_FLAGS(max_session_cb_slots, 0x01);
KSYMTAB_DATA(send_implementation_id, "");
SYMBOL_FLAGS(send_implementation_id, 0x01);
KSYMTAB_DATA(nfs4_client_id_uniquifier, "");
SYMBOL_FLAGS(nfs4_client_id_uniquifier, 0x01);
KSYMTAB_DATA(recover_lost_locks, "");
SYMBOL_FLAGS(recover_lost_locks, 0x01);
KSYMTAB_DATA(nfs_delay_retrans, "");
SYMBOL_FLAGS(nfs_delay_retrans, 0x01);
KSYMTAB_FUNC(nfs_start_io_write, "");
SYMBOL_FLAGS(nfs_start_io_write, 0x01);
KSYMTAB_FUNC(nfs_end_io_write, "");
SYMBOL_FLAGS(nfs_end_io_write, 0x01);
KSYMTAB_FUNC(nfs_dreq_bytes_left, "");
SYMBOL_FLAGS(nfs_dreq_bytes_left, 0x01);
KSYMTAB_FUNC(nfs_pgio_current_mirror, "");
SYMBOL_FLAGS(nfs_pgio_current_mirror, 0x01);
KSYMTAB_FUNC(nfs_pgheader_init, "");
SYMBOL_FLAGS(nfs_pgheader_init, 0x01);
KSYMTAB_FUNC(nfs_async_iocounter_wait, "");
SYMBOL_FLAGS(nfs_async_iocounter_wait, 0x01);
KSYMTAB_FUNC(nfs_release_request, "");
SYMBOL_FLAGS(nfs_release_request, 0x01);
KSYMTAB_FUNC(nfs_generic_pg_test, "");
SYMBOL_FLAGS(nfs_generic_pg_test, 0x01);
KSYMTAB_FUNC(nfs_pgio_header_alloc, "");
SYMBOL_FLAGS(nfs_pgio_header_alloc, 0x01);
KSYMTAB_FUNC(nfs_pgio_header_free, "");
SYMBOL_FLAGS(nfs_pgio_header_free, 0x01);
KSYMTAB_FUNC(nfs_initiate_pgio, "");
SYMBOL_FLAGS(nfs_initiate_pgio, 0x01);
KSYMTAB_FUNC(nfs_generic_pgio, "");
SYMBOL_FLAGS(nfs_generic_pgio, 0x01);
KSYMTAB_FUNC(nfs_pageio_resend, "");
SYMBOL_FLAGS(nfs_pageio_resend, 0x01);
KSYMTAB_FUNC(nfs_pageio_init_read, "");
SYMBOL_FLAGS(nfs_pageio_init_read, 0x01);
KSYMTAB_FUNC(nfs_pageio_reset_read_mds, "");
SYMBOL_FLAGS(nfs_pageio_reset_read_mds, 0x01);
KSYMTAB_FUNC(nfs_read_alloc_scratch, "");
SYMBOL_FLAGS(nfs_read_alloc_scratch, 0x01);
KSYMTAB_DATA(snfs_available_until, "");
SYMBOL_FLAGS(snfs_available_until, 0x01);
KSYMTAB_DATA(snfs_wait_queue, "");
SYMBOL_FLAGS(snfs_wait_queue, 0x01);
KSYMTAB_FUNC(nfs_commitdata_alloc, "");
SYMBOL_FLAGS(nfs_commitdata_alloc, 0x01);
KSYMTAB_FUNC(nfs_commit_free, "");
SYMBOL_FLAGS(nfs_commit_free, 0x01);
KSYMTAB_FUNC(nfs_request_add_commit_list_locked, "");
SYMBOL_FLAGS(nfs_request_add_commit_list_locked, 0x01);
KSYMTAB_FUNC(nfs_request_add_commit_list, "");
SYMBOL_FLAGS(nfs_request_add_commit_list, 0x01);
KSYMTAB_FUNC(nfs_request_remove_commit_list, "");
SYMBOL_FLAGS(nfs_request_remove_commit_list, 0x01);
KSYMTAB_FUNC(nfs_init_cinfo, "");
SYMBOL_FLAGS(nfs_init_cinfo, 0x01);
KSYMTAB_FUNC(nfs_scan_commit_list, "");
SYMBOL_FLAGS(nfs_scan_commit_list, 0x01);
KSYMTAB_FUNC(nfs_pageio_init_write, "");
SYMBOL_FLAGS(nfs_pageio_init_write, 0x01);
KSYMTAB_FUNC(nfs_pageio_reset_write_mds, "");
SYMBOL_FLAGS(nfs_pageio_reset_write_mds, 0x01);
KSYMTAB_FUNC(nfs_writeback_update_inode, "");
SYMBOL_FLAGS(nfs_writeback_update_inode, 0x01);
KSYMTAB_FUNC(nfs_commitdata_release, "");
SYMBOL_FLAGS(nfs_commitdata_release, 0x01);
KSYMTAB_FUNC(nfs_initiate_commit, "");
SYMBOL_FLAGS(nfs_initiate_commit, 0x01);
KSYMTAB_FUNC(nfs_init_commit, "");
SYMBOL_FLAGS(nfs_init_commit, 0x01);
KSYMTAB_FUNC(nfs_retry_commit, "");
SYMBOL_FLAGS(nfs_retry_commit, 0x01);
KSYMTAB_FUNC(nfs_commit_inode, "");
SYMBOL_FLAGS(nfs_commit_inode, 0x01);
KSYMTAB_FUNC(nfs_write_inode, "");
SYMBOL_FLAGS(nfs_write_inode, 0x01);
KSYMTAB_FUNC(nfs_filemap_write_and_wait_range, "");
SYMBOL_FLAGS(nfs_filemap_write_and_wait_range, 0x01);
KSYMTAB_FUNC(nfs_wb_all, "");
SYMBOL_FLAGS(nfs_wb_all, 0x01);
KSYMTAB_FUNC(nfs_path, "");
SYMBOL_FLAGS(nfs_path, 0x01);
KSYMTAB_FUNC(nfs_do_submount, "");
SYMBOL_FLAGS(nfs_do_submount, 0x01);
KSYMTAB_FUNC(nfs_submount, "");
SYMBOL_FLAGS(nfs_submount, 0x01);
KSYMTAB_DATA(__tracepoint_nfs_fsync_enter, "");
SYMBOL_FLAGS(__tracepoint_nfs_fsync_enter, 0x01);
KSYMTAB_FUNC(__traceiter_nfs_fsync_enter, "");
SYMBOL_FLAGS(__traceiter_nfs_fsync_enter, 0x01);
KSYMTAB_DATA(__SCK__tp_func_nfs_fsync_enter, "");
SYMBOL_FLAGS(__SCK__tp_func_nfs_fsync_enter, 0x01);
KSYMTAB_FUNC(__SCT__tp_func_nfs_fsync_enter, "");
SYMBOL_FLAGS(__SCT__tp_func_nfs_fsync_enter, 0x01);
KSYMTAB_DATA(__tracepoint_nfs_fsync_exit, "");
SYMBOL_FLAGS(__tracepoint_nfs_fsync_exit, 0x01);
KSYMTAB_FUNC(__traceiter_nfs_fsync_exit, "");
SYMBOL_FLAGS(__traceiter_nfs_fsync_exit, 0x01);
KSYMTAB_DATA(__SCK__tp_func_nfs_fsync_exit, "");
SYMBOL_FLAGS(__SCK__tp_func_nfs_fsync_exit, 0x01);
KSYMTAB_FUNC(__SCT__tp_func_nfs_fsync_exit, "");
SYMBOL_FLAGS(__SCT__tp_func_nfs_fsync_exit, 0x01);
KSYMTAB_DATA(__tracepoint_nfs_xdr_status, "");
SYMBOL_FLAGS(__tracepoint_nfs_xdr_status, 0x01);
KSYMTAB_FUNC(__traceiter_nfs_xdr_status, "");
SYMBOL_FLAGS(__traceiter_nfs_xdr_status, 0x01);
KSYMTAB_DATA(__SCK__tp_func_nfs_xdr_status, "");
SYMBOL_FLAGS(__SCK__tp_func_nfs_xdr_status, 0x01);
KSYMTAB_FUNC(__SCT__tp_func_nfs_xdr_status, "");
SYMBOL_FLAGS(__SCT__tp_func_nfs_xdr_status, 0x01);
KSYMTAB_DATA(__tracepoint_nfs_xdr_bad_filehandle, "");
SYMBOL_FLAGS(__tracepoint_nfs_xdr_bad_filehandle, 0x01);
KSYMTAB_FUNC(__traceiter_nfs_xdr_bad_filehandle, "");
SYMBOL_FLAGS(__traceiter_nfs_xdr_bad_filehandle, 0x01);
KSYMTAB_DATA(__SCK__tp_func_nfs_xdr_bad_filehandle, "");
SYMBOL_FLAGS(__SCK__tp_func_nfs_xdr_bad_filehandle, 0x01);
KSYMTAB_FUNC(__SCT__tp_func_nfs_xdr_bad_filehandle, "");
SYMBOL_FLAGS(__SCT__tp_func_nfs_xdr_bad_filehandle, 0x01);
KSYMTAB_FUNC(nfs_sysfs_link_rpc_client, "");
SYMBOL_FLAGS(nfs_sysfs_link_rpc_client, 0x01);
KSYMTAB_FUNC(nfs_sysfs_add_server, "");
SYMBOL_FLAGS(nfs_sysfs_add_server, 0x01);
KSYMTAB_DATA(nfs_fs_type, "");
SYMBOL_FLAGS(nfs_fs_type, 0x01);
KSYMTAB_DATA(nfs4_fs_type, "");
SYMBOL_FLAGS(nfs4_fs_type, 0x01);
KSYMTAB_FUNC(nfs_fscache_open_file, "");
SYMBOL_FLAGS(nfs_fscache_open_file, 0x01);

SYMBOL_CRC(get_nfs_version, 0x9fe43bf0);
SYMBOL_CRC(register_nfs_version, 0x118649b4);
SYMBOL_CRC(unregister_nfs_version, 0x118649b4);
SYMBOL_CRC(nfs_alloc_client, 0xf62be786);
SYMBOL_CRC(nfs_free_client, 0xbf672701);
SYMBOL_CRC(nfs_put_client, 0xbf672701);
SYMBOL_CRC(nfs_client_init_is_complete, 0x4e6f6c6d);
SYMBOL_CRC(nfs_client_init_status, 0x225c2b09);
SYMBOL_CRC(nfs_wait_client_init_complete, 0x225c2b09);
SYMBOL_CRC(nfs_get_client, 0xf62be786);
SYMBOL_CRC(nfs_mark_client_ready, 0xeee33258);
SYMBOL_CRC(nfs_init_timeout_values, 0xfc1a30ee);
SYMBOL_CRC(nfs_create_rpc_client, 0x2953d016);
SYMBOL_CRC(nfs_init_server_rpcclient, 0xa0099570);
SYMBOL_CRC(nfs_init_client, 0xb9e2c240);
SYMBOL_CRC(nfs_server_set_init_caps, 0xabe329a9);
SYMBOL_CRC(nfs_probe_server, 0xe29e146b);
SYMBOL_CRC(nfs_server_copy_userdata, 0xf85c28f6);
SYMBOL_CRC(nfs_server_insert_lists, 0xabe329a9);
SYMBOL_CRC(nfs_server_remove_lists, 0xabe329a9);
SYMBOL_CRC(nfs_alloc_server, 0x26eca8fa);
SYMBOL_CRC(nfs_free_server, 0xabe329a9);
SYMBOL_CRC(nfs_create_server, 0x34d0c3d8);
SYMBOL_CRC(nfs_clone_server, 0xddb5f6cd);
SYMBOL_CRC(nfs_force_lookup_revalidate, 0xbfe42f1a);
SYMBOL_CRC(nfs_set_verifier, 0x73760bf7);
SYMBOL_CRC(nfs_clear_verifier_delegated, 0xfdc586be);
SYMBOL_CRC(nfs_dentry_operations, 0x74694ee3);
SYMBOL_CRC(nfs_lookup, 0x85aae626);
SYMBOL_CRC(nfs_d_prune_case_insensitive_aliases, 0xfdc586be);
SYMBOL_CRC(nfs4_dentry_operations, 0x74694ee3);
SYMBOL_CRC(nfs_atomic_open, 0xea905005);
SYMBOL_CRC(nfs_atomic_open_v23, 0xea905005);
SYMBOL_CRC(nfs_add_or_obtain, 0x2da8be68);
SYMBOL_CRC(nfs_instantiate, 0xb570c0fa);
SYMBOL_CRC(nfs_create, 0x16a35c59);
SYMBOL_CRC(nfs_mknod, 0x016dfd7f);
SYMBOL_CRC(nfs_mkdir, 0x33a21527);
SYMBOL_CRC(nfs_rmdir, 0xf6319543);
SYMBOL_CRC(nfs_unlink, 0xf6319543);
SYMBOL_CRC(nfs_symlink, 0xfdb69c3e);
SYMBOL_CRC(nfs_link, 0x39030e3a);
SYMBOL_CRC(nfs_rename, 0xc2274c8a);
SYMBOL_CRC(nfs_access_zap_cache, 0xfdc586be);
SYMBOL_CRC(nfs_access_get_cached, 0xe7ac541b);
SYMBOL_CRC(nfs_access_add_cache, 0xe5e9db28);
SYMBOL_CRC(nfs_access_set_mask, 0xc38c4741);
SYMBOL_CRC(nfs_may_open, 0x655a6628);
SYMBOL_CRC(nfs_permission, 0x0be4d87e);
SYMBOL_CRC(nfs_check_flags, 0xc4ff513e);
SYMBOL_CRC(nfs_file_release, 0x7f44d3fe);
SYMBOL_CRC(nfs_file_llseek, 0xea48f515);
SYMBOL_CRC(nfs_file_read, 0x00ad7f4c);
SYMBOL_CRC(nfs_file_splice_read, 0x2eefc99b);
SYMBOL_CRC(nfs_file_mmap_prepare, 0xfd5acacb);
SYMBOL_CRC(nfs_file_fsync, 0x1d2e5c1f);
SYMBOL_CRC(nfs_truncate_last_folio, 0x22dd2048);
SYMBOL_CRC(nfs_file_write, 0xe0bd61e6);
SYMBOL_CRC(nfs_lock, 0x07714a01);
SYMBOL_CRC(nfs_flock, 0x07714a01);
SYMBOL_CRC(nfs_file_operations, 0x53d3ca21);
SYMBOL_CRC(nfs_wait_bit_killable, 0x09a60b79);
SYMBOL_CRC(nfs_drop_inode, 0x6e6eef01);
SYMBOL_CRC(nfs_clear_inode, 0x7cf48427);
SYMBOL_CRC(nfs_sync_inode, 0x6e6eef01);
SYMBOL_CRC(nfs_check_cache_invalid, 0x7c31469f);
SYMBOL_CRC(nfs_set_cache_invalid, 0x3bb5c542);
SYMBOL_CRC(nfs_zap_acl_cache, 0x7cf48427);
SYMBOL_CRC(nfs_invalidate_atime, 0x7cf48427);
SYMBOL_CRC(nfs4_label_alloc, 0xc029d003);
SYMBOL_CRC(nfs_setsecurity, 0x2a3aa8c5);
SYMBOL_CRC(nfs_fhget, 0xd02f07e5);
SYMBOL_CRC(nfs_update_delegated_mtime, 0x7cf48427);
SYMBOL_CRC(nfs_setattr, 0x48bb57c3);
SYMBOL_CRC(nfs_setattr_update_inode, 0x3a155231);
SYMBOL_CRC(nfs_getattr, 0x9e7487f5);
SYMBOL_CRC(nfs_get_lock_context, 0x844d048a);
SYMBOL_CRC(nfs_put_lock_context, 0x540fdd49);
SYMBOL_CRC(nfs_close_context, 0x166cce4f);
SYMBOL_CRC(alloc_nfs_open_context, 0x1665f94f);
SYMBOL_CRC(get_nfs_open_context, 0x9399b375);
SYMBOL_CRC(put_nfs_open_context, 0xe1387849);
SYMBOL_CRC(nfs_inode_attach_open_context, 0xe1387849);
SYMBOL_CRC(nfs_file_set_open_context, 0x84c36eff);
SYMBOL_CRC(nfs_revalidate_inode, 0x809e6ffc);
SYMBOL_CRC(nfs_inc_attr_generation_counter, 0x27b873b8);
SYMBOL_CRC(nfs_fattr_init, 0x68bb3eeb);
SYMBOL_CRC(nfs_alloc_fattr, 0x1a113166);
SYMBOL_CRC(nfs_alloc_fattr_with_label, 0x8508cae6);
SYMBOL_CRC(nfs_alloc_fhandle, 0x74ecf7cc);
SYMBOL_CRC(_nfs_display_fhandle_hash, 0xb11622ca);
SYMBOL_CRC(_nfs_display_fhandle, 0xefab16c4);
SYMBOL_CRC(nfs_refresh_inode, 0x27cf78d5);
SYMBOL_CRC(nfs_post_op_update_inode, 0x27cf78d5);
SYMBOL_CRC(nfs_post_op_update_inode_force_wcc, 0x27cf78d5);
SYMBOL_CRC(nfs_alloc_inode, 0x327be542);
SYMBOL_CRC(nfs_free_inode, 0x7cf48427);
SYMBOL_CRC(nfsiod_workqueue, 0xaef1f20d);
SYMBOL_CRC(nfs_net_id, 0xf296206e);
SYMBOL_CRC(nfs_sops, 0x9d34bda5);
SYMBOL_CRC(nfs_sb_active, 0x0a5b9d88);
SYMBOL_CRC(nfs_sb_deactive, 0x3bf2939c);
SYMBOL_CRC(nfs_client_for_each_server, 0xdc0e7d51);
SYMBOL_CRC(nfs_statfs, 0x4a1c006f);
SYMBOL_CRC(nfs_show_options, 0xfc9e3d6c);
SYMBOL_CRC(nfs_show_devname, 0xfc9e3d6c);
SYMBOL_CRC(nfs_show_path, 0x2f8d819c);
SYMBOL_CRC(nfs_show_stats, 0xfc9e3d6c);
SYMBOL_CRC(nfs_umount_begin, 0x3bf2939c);
SYMBOL_CRC(nfs_auth_info_match, 0x7d38088a);
SYMBOL_CRC(nfs_try_get_tree, 0xb0f2d320);
SYMBOL_CRC(nfs_reconfigure, 0xb0f2d320);
SYMBOL_CRC(nfs_kill_super, 0xe208f2d3);
SYMBOL_CRC(nfs_callback_nr_threads, 0xf95768b8);
SYMBOL_CRC(nfs_callback_set_tcpport, 0xf296206e);
SYMBOL_CRC(nfs_idmap_cache_timeout, 0xf296206e);
SYMBOL_CRC(nfs4_disable_idmapping, 0x3239fbdb);
SYMBOL_CRC(max_session_slots, 0xf95768b8);
SYMBOL_CRC(max_session_cb_slots, 0xf95768b8);
SYMBOL_CRC(send_implementation_id, 0xf95768b8);
SYMBOL_CRC(nfs4_client_id_uniquifier, 0xbfcc0a67);
SYMBOL_CRC(recover_lost_locks, 0x3239fbdb);
SYMBOL_CRC(nfs_delay_retrans, 0xbb0fdc8a);
SYMBOL_CRC(nfs_start_io_write, 0x487a9129);
SYMBOL_CRC(nfs_end_io_write, 0x0706e99c);
SYMBOL_CRC(nfs_dreq_bytes_left, 0xebfe0fb0);
SYMBOL_CRC(nfs_pgio_current_mirror, 0x2795f6ad);
SYMBOL_CRC(nfs_pgheader_init, 0xfc63cc90);
SYMBOL_CRC(nfs_async_iocounter_wait, 0x4a09d399);
SYMBOL_CRC(nfs_release_request, 0xf3619bc0);
SYMBOL_CRC(nfs_generic_pg_test, 0xaa359527);
SYMBOL_CRC(nfs_pgio_header_alloc, 0xa052e13d);
SYMBOL_CRC(nfs_pgio_header_free, 0x1eaa4178);
SYMBOL_CRC(nfs_initiate_pgio, 0xab9e81a2);
SYMBOL_CRC(nfs_generic_pgio, 0xf83b0dc4);
SYMBOL_CRC(nfs_pageio_resend, 0xf83b0dc4);
SYMBOL_CRC(nfs_pageio_init_read, 0x5489ce84);
SYMBOL_CRC(nfs_pageio_reset_read_mds, 0x992babb2);
SYMBOL_CRC(nfs_read_alloc_scratch, 0x40f55e12);
SYMBOL_CRC(snfs_available_until, 0x453ef122);
SYMBOL_CRC(snfs_wait_queue, 0xc5423507);
SYMBOL_CRC(nfs_commitdata_alloc, 0x3b6753a0);
SYMBOL_CRC(nfs_commit_free, 0x5f71bde6);
SYMBOL_CRC(nfs_request_add_commit_list_locked, 0xacdad865);
SYMBOL_CRC(nfs_request_add_commit_list, 0x5e575a33);
SYMBOL_CRC(nfs_request_remove_commit_list, 0x5e575a33);
SYMBOL_CRC(nfs_init_cinfo, 0x26143eab);
SYMBOL_CRC(nfs_scan_commit_list, 0xc900412d);
SYMBOL_CRC(nfs_pageio_init_write, 0xf5762f5b);
SYMBOL_CRC(nfs_pageio_reset_write_mds, 0x80e3aa4a);
SYMBOL_CRC(nfs_writeback_update_inode, 0x885fde2f);
SYMBOL_CRC(nfs_commitdata_release, 0x2c1419eb);
SYMBOL_CRC(nfs_initiate_commit, 0x88842975);
SYMBOL_CRC(nfs_init_commit, 0x628e385b);
SYMBOL_CRC(nfs_retry_commit, 0x19aee28b);
SYMBOL_CRC(nfs_commit_inode, 0xc551ed93);
SYMBOL_CRC(nfs_write_inode, 0xa39e5fb6);
SYMBOL_CRC(nfs_filemap_write_and_wait_range, 0xddbb02a6);
SYMBOL_CRC(nfs_wb_all, 0x94cace9f);
SYMBOL_CRC(nfs_path, 0xe78cc8c9);
SYMBOL_CRC(nfs_do_submount, 0xde945ac9);
SYMBOL_CRC(nfs_submount, 0x6a7efe4c);
SYMBOL_CRC(__tracepoint_nfs_fsync_enter, 0xa55d8d66);
SYMBOL_CRC(__traceiter_nfs_fsync_enter, 0xce98e2d0);
SYMBOL_CRC(__SCK__tp_func_nfs_fsync_enter, 0xc792d712);
SYMBOL_CRC(__SCT__tp_func_nfs_fsync_enter, 0xf00260c3);
SYMBOL_CRC(__tracepoint_nfs_fsync_exit, 0xa55d8d66);
SYMBOL_CRC(__traceiter_nfs_fsync_exit, 0x434ea5c8);
SYMBOL_CRC(__SCK__tp_func_nfs_fsync_exit, 0xc792d712);
SYMBOL_CRC(__SCT__tp_func_nfs_fsync_exit, 0x187e2415);
SYMBOL_CRC(__tracepoint_nfs_xdr_status, 0xa55d8d66);
SYMBOL_CRC(__traceiter_nfs_xdr_status, 0x99acb8e7);
SYMBOL_CRC(__SCK__tp_func_nfs_xdr_status, 0xc792d712);
SYMBOL_CRC(__SCT__tp_func_nfs_xdr_status, 0xf10836c6);
SYMBOL_CRC(__tracepoint_nfs_xdr_bad_filehandle, 0xa55d8d66);
SYMBOL_CRC(__traceiter_nfs_xdr_bad_filehandle, 0x99acb8e7);
SYMBOL_CRC(__SCK__tp_func_nfs_xdr_bad_filehandle, 0xc792d712);
SYMBOL_CRC(__SCT__tp_func_nfs_xdr_bad_filehandle, 0xf10836c6);
SYMBOL_CRC(nfs_sysfs_link_rpc_client, 0xcd9a5985);
SYMBOL_CRC(nfs_sysfs_add_server, 0xf36cd068);
SYMBOL_CRC(nfs_fs_type, 0x80b101dc);
SYMBOL_CRC(nfs4_fs_type, 0x80b101dc);
SYMBOL_CRC(nfs_fscache_open_file, 0xcd25bd1d);

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5a844b26, "__x86_indirect_thunk_r11" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0x2b79f1cb, "migrate_folio" },
	{ 0xf183a6d9, "locks_lock_inode_wait" },
	{ 0xfb295b0f, "lookup_noperm" },
	{ 0xb8a5ea7b, "add_swap_extent" },
	{ 0xf7e2dcc5, "fs_param_is_u32" },
	{ 0xfad69ede, "inode_newsize_ok" },
	{ 0xae612a3f, "d_drop" },
	{ 0xc9758ac0, "deactivate_super" },
	{ 0x6eacfae8, "unlock_new_inode" },
	{ 0xe8213e80, "_printk" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xd272d446, "schedule" },
	{ 0x4c2d2c43, "security_sb_mnt_opts_compat" },
	{ 0x4415c53e, "param_get_uint" },
	{ 0x05d1b355, "nlmclnt_shutdown_rpc_clnt" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xff0106da, "refcount_warn_saturate" },
	{ 0x8ce83585, "queue_delayed_work_on" },
	{ 0x9b74e79d, "unregister_sysctl_table" },
	{ 0x972c8816, "make_kuid" },
	{ 0x86fae56c, "truncate_inode_pages_final" },
	{ 0x87b89f39, "d_alloc" },
	{ 0xed2abb46, "fs_kobj" },
	{ 0xf77cb8eb, "net_ns_type_operations" },
	{ 0xb7cf2565, "__filemap_set_wb_err" },
	{ 0x9479a1e8, "strnlen" },
	{ 0xfdb994fa, "generic_perform_write" },
	{ 0xaeb40924, "shrinker_register" },
	{ 0x5a844b26, "__x86_indirect_thunk_rdx" },
	{ 0x86d206f6, "__SCT__WARN_trap" },
	{ 0x9d4d7434, "folio_mark_dirty" },
	{ 0xcc410e9c, "init_wait_var_entry" },
	{ 0x29d12a64, "bit_wait" },
	{ 0x38ae9edf, "module_put" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0x80519711, "__var_waitqueue" },
	{ 0xbd03ed67, "page_offset_base" },
	{ 0xae066b8b, "rpc_setbufsize" },
	{ 0xd70733be, "sized_strscpy" },
	{ 0x4306ccfe, "fs_context_for_submount" },
	{ 0x6eacfae8, "inode_init_once" },
	{ 0x8907fdcd, "folio_wait_private_2" },
	{ 0x8a5d79fd, "file_write_and_wait_range" },
	{ 0x9cd2a478, "errseq_check" },
	{ 0x6b412821, "idr_remove" },
	{ 0xbedeccb6, "__fscache_relinquish_volume" },
	{ 0x29d12a64, "bit_wait_io" },
	{ 0x26e1ee46, "seq_escape_mem" },
	{ 0x348d7b5a, "ilookup5" },
	{ 0x7387c0d6, "mempool_alloc_noprof" },
	{ 0x24e1fbea, "key_put" },
	{ 0xd01c679b, "generic_parse_monolithic" },
	{ 0x7a5ffe84, "init_wait_entry" },
	{ 0x6eacfae8, "inode_nohighmem" },
	{ 0xac527e8e, "perf_trace_buf_alloc" },
	{ 0x30eb8e97, "perf_trace_run_bpf_submit" },
	{ 0xa58d1754, "security_d_instantiate" },
	{ 0x8e6fe378, "down_write" },
	{ 0x7df1633e, "init_net" },
	{ 0xa157f30f, "strndup_user" },
	{ 0x8e6fe378, "up_write" },
	{ 0xe7839060, "generic_file_read_iter" },
	{ 0xec103c3c, "inode_maybe_inc_iversion" },
	{ 0xf09c19da, "rpc_clone_client_set_auth" },
	{ 0xd272d446, "synchronize_rcu" },
	{ 0x4c1e7250, "mempool_free_slab" },
	{ 0xd09b06f5, "kstrtoint" },
	{ 0x366ddfcc, "memchr" },
	{ 0x4a2c2dab, "truncate_pagecache" },
	{ 0xd272d446, "__rcu_read_unlock" },
	{ 0x716c9bcf, "put_fs_context" },
	{ 0x6a22d58c, "rpc_peeraddr2str" },
	{ 0xa38f8c89, "kmemdup_nul" },
	{ 0xaef1f20d, "system_percpu_wq" },
	{ 0x7030827f, "kobj_sysfs_ops" },
	{ 0x4aeb5613, "xa_load" },
	{ 0x582d5d4b, "bpf_trace_run5" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0xbeb1d261, "destroy_workqueue" },
	{ 0x8bc8f40f, "crc32_le" },
	{ 0xe6111b34, "_raw_write_lock" },
	{ 0x7c0c25f7, "mutex_lock" },
	{ 0x96f580ca, "set_nlink" },
	{ 0x07915875, "kmem_cache_alloc_lru_noprof" },
	{ 0x7a3574d2, "kmem_cache_free" },
	{ 0x4e858b01, "rpc_max_payload" },
	{ 0xe267f02b, "d_move" },
	{ 0x808c0ec7, "seq_putc" },
	{ 0xf25d5a0d, "rpc_proc_unregister" },
	{ 0xc3fc81b3, "const_current_task" },
	{ 0x191b4e90, "trace_event_reg" },
	{ 0xce2e2afb, "folio_mkclean" },
	{ 0xf5d8d228, "rb_erase" },
	{ 0x414f10af, "vfs_create_mount" },
	{ 0xa9df9ae9, "mark_mounts_for_expiry" },
	{ 0x9a3aa936, "folio_wait_writeback" },
	{ 0xdb25bc3d, "ida_free" },
	{ 0x16efc143, "nlmclnt_rpc_clnt" },
	{ 0x2a82613b, "rpc_clnt_swap_activate" },
	{ 0x8ce83585, "mod_delayed_work_on" },
	{ 0x4f1e5fd0, "__list_del_entry_valid_or_report" },
	{ 0xf86590d7, "rpcauth_get_gssinfo" },
	{ 0x43bf044d, "kobject_init_and_add" },
	{ 0xe6111b34, "_raw_read_unlock" },
	{ 0x86632fd6, "_find_next_bit" },
	{ 0xb4bd3058, "write_inode_now" },
	{ 0xe6111b34, "_raw_write_unlock" },
	{ 0xb5c51982, "__cpu_online_mask" },
	{ 0x402db74e, "memcmp" },
	{ 0x38cf2cbb, "d_obtain_alias" },
	{ 0xf654f750, "_totalram_pages" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0x185ae458, "folio_end_read" },
	{ 0x3d395066, "wait_for_completion_killable" },
	{ 0x412683ae, "rpc_create" },
	{ 0x86933348, "finish_no_open" },
	{ 0x66b814fd, "wake_up_var" },
	{ 0x32c46078, "__folio_start_writeback" },
	{ 0x38cf2cbb, "d_obtain_root" },
	{ 0x2750496d, "bpf_trace_run1" },
	{ 0x23a4913a, "param_ops_short" },
	{ 0xfc66744b, "idr_destroy" },
	{ 0xba82fa4a, "folio_alloc_noprof" },
	{ 0x886b59cc, "rpc_call_sync" },
	{ 0x71ccbbe0, "proc_mkdir" },
	{ 0x85acaba2, "cancel_delayed_work" },
	{ 0x91ca3d0d, "rpc_put_task_async" },
	{ 0x7aafb0d8, "unregister_pernet_subsys" },
	{ 0xb5c51982, "__cpu_possible_mask" },
	{ 0x8907fdcd, "folio_end_writeback_no_dropbehind" },
	{ 0xdc23a8da, "xdr_init_decode_pages" },
	{ 0x1d4de77c, "register_sysctl_sz" },
	{ 0x98aa1e41, "tracepoint_srcu" },
	{ 0x98990316, "netfs_read_subreq_terminated" },
	{ 0x0e9cab28, "memset" },
	{ 0x5a844b26, "__x86_indirect_thunk_r10" },
	{ 0xbd069841, "kstrtoull" },
	{ 0x7804a2a6, "lookup_constant" },
	{ 0x75251f3a, "mempool_alloc_slab" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x4eba539e, "kmem_cache_alloc_noprof" },
	{ 0x386e4ba3, "kmemdup_noprof" },
	{ 0x0c99ce48, "inode_update_time" },
	{ 0xf296206e, "nr_cpu_ids" },
	{ 0xe804603d, "__init_waitqueue_head" },
	{ 0x06a0ebb0, "rpc_exit" },
	{ 0xa28510eb, "make_kgid" },
	{ 0xae612a3f, "d_delete" },
	{ 0xe142f417, "set_default_d_op" },
	{ 0x565254fb, "__kmem_cache_create_args" },
	{ 0x23a4913a, "param_ops_string" },
	{ 0xec203997, "kasprintf" },
	{ 0x19572860, "vfs_parse_fs_qstr" },
	{ 0x37421f5b, "writeback_iter" },
	{ 0xe2f59f75, "out_of_line_wait_on_bit_lock" },
	{ 0x3edb87c2, "nfs_ssc_unregister" },
	{ 0xe6ceb2c0, "rpc_killall_tasks" },
	{ 0x3dc18a93, "down_read_killable" },
	{ 0x8e6fe378, "down_read" },
	{ 0x49feef87, "xdr_reserve_space" },
	{ 0x1decd147, "rb_replace_node" },
	{ 0xcd308ce7, "strnchr" },
	{ 0x690cdb06, "free_percpu" },
	{ 0x058c185a, "jiffies" },
	{ 0xe33556ea, "iov_iter_get_pages_alloc2" },
	{ 0x0540085b, "set_page_dirty" },
	{ 0xce4af33b, "kstrdup" },
	{ 0x2acfb7f7, "bpf_trace_run3" },
	{ 0x7ccba6d3, "__put_net" },
	{ 0x314dffaa, "trace_print_flags_seq" },
	{ 0xdd6830c7, "sprintf" },
	{ 0xbd03ed67, "vmemmap_base" },
	{ 0x82fd7238, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7ec472ba, "cpu_number" },
	{ 0x7ec472ba, "__preempt_count" },
	{ 0xb9fcd065, "call_rcu" },
	{ 0x09077599, "__filemap_get_folio_mpol" },
	{ 0xf95f8582, "vfs_pressure_ratio" },
	{ 0x1999de75, "netfs_read_folio" },
	{ 0xa4c0178c, "kvfree_call_rcu" },
	{ 0x23e7cd4a, "pcpu_alloc_noprof" },
	{ 0xae085436, "generic_read_dir" },
	{ 0x384d6d72, "kobject_del" },
	{ 0xd0b95dc4, "trace_event_buffer_reserve" },
	{ 0x464f4640, "d_add" },
	{ 0xad4575d0, "rename_lock" },
	{ 0xa5c7582d, "strsep" },
	{ 0x7c0c25f7, "mutex_unlock" },
	{ 0x3dc18a93, "down_write_killable" },
	{ 0x6eec7a0d, "filemap_fdatawait_range" },
	{ 0xb2cb147c, "mempool_create_node_noprof" },
	{ 0xeae5a0e7, "percpu_counter_add_batch" },
	{ 0x23a4913a, "param_ops_bool" },
	{ 0x2cf315cc, "groups_free" },
	{ 0xc84c7d31, "security_inode_notifysecctx" },
	{ 0x8907fdcd, "folio_end_dropbehind" },
	{ 0x3edb87c2, "nfs_ssc_register" },
	{ 0xf9d9c87b, "init_user_ns" },
	{ 0xd4e708d6, "xa_find" },
	{ 0x4e07ecb3, "invalidate_inode_pages2" },
	{ 0x8af3d851, "inode_set_ctime_current" },
	{ 0x5a844b26, "__x86_indirect_thunk_rcx" },
	{ 0xec22810d, "seq_write" },
	{ 0x98d5d341, "mempool_destroy" },
	{ 0xcde3c1aa, "__folio_put" },
	{ 0x1e54cb19, "kobject_set_name" },
	{ 0x8eb37e44, "__kmalloc_cache_noprof" },
	{ 0x97acb853, "ktime_get" },
	{ 0x5cb46e6d, "validate_usercopy_range" },
	{ 0xc6efaa34, "seq_printf" },
	{ 0xae612a3f, "dput" },
	{ 0x1f3da2df, "lockref_get" },
	{ 0x7f4fc2d5, "rpc_init_wait_queue" },
	{ 0x71798f7e, "delayed_work_timer_fn" },
	{ 0xc9758ac0, "deactivate_locked_super" },
	{ 0x5597b998, "put_rpccred" },
	{ 0xfbc777f6, "__percpu_down_read" },
	{ 0xae612a3f, "__d_lookup_unhash_wake" },
	{ 0xe6ceb2c0, "rpc_clnt_swap_deactivate" },
	{ 0x15e40135, "kobject_uevent" },
	{ 0xe6111b34, "_raw_read_lock" },
	{ 0x733ae7fc, "__fscache_invalidate" },
	{ 0x04cb8a32, "folio_mapping" },
	{ 0x7851be11, "__SCT__cond_resched" },
	{ 0x8e6fe378, "downgrade_write" },
	{ 0xfbc57bb9, "alloc_pages_noprof" },
	{ 0x3d4e2af6, "cred_fscmp" },
	{ 0x8907fdcd, "__folio_lock" },
	{ 0x16db5b6a, "filemap_dirty_folio" },
	{ 0xe64422c9, "is_bad_inode" },
	{ 0x600e1ee7, "proc_dointvec" },
	{ 0x4df25bce, "__fscache_use_cookie" },
	{ 0xfb98b4e5, "rcuwait_wake_up" },
	{ 0x67812091, "_proc_mkdir" },
	{ 0xe1106eda, "node_data" },
	{ 0xe6a2a545, "errseq_set" },
	{ 0xd4d86f7b, "rpc_clnt_xprt_switch_has_addr" },
	{ 0x23646e85, "__fs_parse" },
	{ 0x2dc117de, "sysfs_create_link_nowarn" },
	{ 0x00e6aa37, "filemap_splice_read" },
	{ 0x7b33e239, "dget_parent" },
	{ 0xbe2d4009, "nlmclnt_init" },
	{ 0x00283ffd, "__seq_puts" },
	{ 0xbf67af3a, "kill_anon_super" },
	{ 0xd4e708d6, "xa_find_after" },
	{ 0xe22f375d, "iget5_locked" },
	{ 0xdc6da1aa, "filemap_write_and_wait_range" },
	{ 0xb8170c0c, "kset_register" },
	{ 0x1f55c5b2, "kstrtoll" },
	{ 0xdf4bee3d, "alloc_workqueue_noprof" },
	{ 0xd272d446, "rcu_barrier" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0xa44c56e8, "nlmclnt_done" },
	{ 0x43a349ca, "strlen" },
	{ 0x2727f39f, "proc_symlink" },
	{ 0xe8e0a5a9, "wake_up_bit" },
	{ 0x23a4913a, "param_ops_int" },
	{ 0x3ea1bbe0, "refcount_dec_and_lock" },
	{ 0x6d20e668, "iov_iter_revert" },
	{ 0x4525ea92, "generic_write_checks" },
	{ 0xf1de9e85, "kvfree" },
	{ 0x88fdc895, "key_lookup" },
	{ 0xd272d446, "__SCT__preempt_schedule_notrace" },
	{ 0x25291be4, "setattr_should_drop_sgid" },
	{ 0x296b9459, "strchr" },
	{ 0x1ced3052, "filemap_fault" },
	{ 0xae612a3f, "d_invalidate" },
	{ 0x8a624ee3, "__mark_inode_dirty" },
	{ 0xe5fa304b, "generic_file_llseek" },
	{ 0x5af09d8b, "_raw_spin_unlock" },
	{ 0x6bded543, "get_free_pages_noprof" },
	{ 0x6792a38a, "folio_wait_private_2_killable" },
	{ 0x1de9d283, "trace_handle_return" },
	{ 0xf296206e, "nfs_debug" },
	{ 0x8e6fe378, "up_read" },
	{ 0x1bd62f57, "rpc_wait_for_completion_task" },
	{ 0xf0181eeb, "set_anon_super" },
	{ 0x6eacfae8, "drop_nlink" },
	{ 0x12ca6142, "ktime_get_with_offset" },
	{ 0x7851be11, "__SCT__might_resched" },
	{ 0xd0ea019a, "kmalloc_caches" },
	{ 0x9f2a9d73, "inode_set_ctime_to_ts" },
	{ 0x37c0b5f3, "__request_module" },
	{ 0x7eb6028e, "kmem_cache_destroy" },
	{ 0x7c0c25f7, "mutex_init_generic" },
	{ 0xf667083c, "__fscache_acquire_cookie" },
	{ 0x384d6d72, "kobject_put" },
	{ 0xe0e6c6c9, "vfs_get_tree" },
	{ 0x86c49e96, "nop_mnt_idmap" },
	{ 0x91ca3d0d, "rpc_put_task" },
	{ 0xd18017f6, "super_setup_bdi_name" },
	{ 0xe23fc198, "posix_test_lock" },
	{ 0x4ed1c97d, "filemap_fdatawrite" },
	{ 0x9a3aa936, "__folio_cancel_dirty" },
	{ 0x2da49b3a, "generic_fillattr" },
	{ 0xed9e4439, "vfs_fsync_range" },
	{ 0x533bf9ae, "ida_alloc_range" },
	{ 0x3f8c35b8, "shrinker_alloc" },
	{ 0x6eacfae8, "clear_nlink" },
	{ 0xf9d63531, "file_check_and_advance_wb_err" },
	{ 0x872f5dee, "try_module_get" },
	{ 0xa61fd7aa, "__check_object_size" },
	{ 0x023de41a, "d_alloc_parallel" },
	{ 0x3170695f, "__ipv6_addr_type" },
	{ 0x40b03471, "__init_rwsem" },
	{ 0x473b78d7, "page_put_link" },
	{ 0xdc352a3b, "__list_add_valid_or_report" },
	{ 0x6eacfae8, "clear_inode" },
	{ 0xd8b344e3, "inode_to_bdi" },
	{ 0x6f71a083, "bpf_trace_run4" },
	{ 0x563ca2e5, "__fscache_acquire_volume" },
	{ 0x4f6b040a, "ida_destroy" },
	{ 0x23a4913a, "param_ops_ulong" },
	{ 0x092a35a2, "_copy_from_user" },
	{ 0x600e1ee7, "proc_dointvec_jiffies" },
	{ 0x2a7e5601, "rpc_proc_register" },
	{ 0xd272d446, "__rcu_read_lock" },
	{ 0xa1b8e03a, "sysfs_create_file_ns" },
	{ 0xe6ceb2c0, "rpc_shutdown_client" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0xf7e2dcc5, "fs_param_is_string" },
	{ 0x8907fdcd, "folio_unlock" },
	{ 0x2469206a, "mnt_set_expiry" },
	{ 0x23a4913a, "param_ops_ushort" },
	{ 0x394c59cf, "seq_list_next" },
	{ 0xdb77fa9d, "rpc_clnt_show_stats" },
	{ 0x40a621c5, "snprintf" },
	{ 0x62cbec20, "complete" },
	{ 0xe178c77a, "filemap_map_pages" },
	{ 0x3435945f, "filemap_flush_range" },
	{ 0x49feef87, "xdr_inline_decode" },
	{ 0x49733ad6, "queue_work_on" },
	{ 0xb23d220e, "trace_raw_output_prep" },
	{ 0x3b85369e, "kobject_rename" },
	{ 0x488e1019, "security_sb_set_mnt_opts" },
	{ 0x5d3e3274, "init_special_inode" },
	{ 0x70814c31, "unregister_filesystem" },
	{ 0xd272d446, "__SCT__preempt_schedule" },
	{ 0xac491997, "seq_list_start_head" },
	{ 0xc2ccdd1e, "__init_swait_queue_head" },
	{ 0x202e9498, "generic_error_remove_folio" },
	{ 0x02ae6e9f, "__trace_trigger_soft_disabled" },
	{ 0x3435945f, "filemap_fdatawrite_range" },
	{ 0x8bcc2a64, "folio_wait_bit_killable" },
	{ 0xb730487b, "finish_wait" },
	{ 0xb8f8c02e, "rpc_wake_up" },
	{ 0x3677eb57, "xprt_find_transport_ident" },
	{ 0x269fa486, "d_make_root" },
	{ 0x3b4a56a7, "trace_event_printf" },
	{ 0x40a621c5, "scnprintf" },
	{ 0xbd03ed67, "this_cpu_off" },
	{ 0x0858ccaf, "read_cache_folio" },
	{ 0xbe2387da, "sync_filesystem" },
	{ 0x30440821, "__fscache_unuse_cookie" },
	{ 0x515f18c0, "folio_redirty_for_writepage" },
	{ 0xa03632f6, "sget_fc" },
	{ 0xfbeffd26, "d_splice_alias" },
	{ 0xfcd9cad9, "trace_event_raw_init" },
	{ 0x4e060c89, "trace_print_symbols_seq" },
	{ 0xfbe7861b, "memcpy" },
	{ 0x7f57070e, "errseq_sample" },
	{ 0x1c8e36c2, "unmap_mapping_range" },
	{ 0x6eacfae8, "ihold" },
	{ 0x6eacfae8, "inode_dio_wait" },
	{ 0x1367c27c, "generic_permission" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x8fd5ee17, "invalidate_inode_pages2_range" },
	{ 0x110b4b9f, "finish_open" },
	{ 0x6eacfae8, "iput" },
	{ 0xeace2e2d, "kset_unregister" },
	{ 0x62275444, "security_sb_clone_mnt_opts" },
	{ 0xf7e2dcc5, "fs_param_is_enum" },
	{ 0xf7e2dcc5, "fs_param_is_s32" },
	{ 0x17cfa7cd, "logfc" },
	{ 0x00f09098, "iter_file_splice_write" },
	{ 0x38db07b0, "rpc_pton" },
	{ 0xe169b089, "mod_node_page_state" },
	{ 0xde45859c, "rpc_wake_up_queued_task" },
	{ 0x7b638c16, "bpf_trace_run2" },
	{ 0xc281f1fb, "prepare_to_wait_event" },
	{ 0xe2f59f75, "out_of_line_wait_on_bit" },
	{ 0x8997c0ea, "remove_proc_subtree" },
	{ 0xffddf59c, "rpc_restart_call_prepare" },
	{ 0xf25a2863, "d_lookup" },
	{ 0x68a1b6c6, "__wake_up" },
	{ 0x02e1dca7, "free_pages" },
	{ 0x38ae9edf, "__module_get" },
	{ 0x627d5b88, "__fscache_relinquish_cookie" },
	{ 0x70814c31, "register_filesystem" },
	{ 0x34360028, "xdr_encode_opaque" },
	{ 0x9d4d7434, "folio_clear_dirty_for_io" },
	{ 0xf5d8d228, "rb_insert_color" },
	{ 0x5ae9ee26, "__per_cpu_offset" },
	{ 0x92d7bb07, "trace_print_hex_seq" },
	{ 0x5af09d8b, "_raw_spin_lock" },
	{ 0xa1447c51, "mempool_free" },
	{ 0x8c31d5dd, "generic_file_mmap_prepare" },
	{ 0xdc3051ac, "filemap_add_folio" },
	{ 0x58716555, "rpc_sleep_on" },
	{ 0x234cc97b, "rpc_run_task" },
	{ 0xe263ff7c, "keyring_alloc" },
	{ 0x25d352e7, "netfs_readahead" },
	{ 0xf827275a, "proc_create_net_data" },
	{ 0xf7897df0, "full_name_hash" },
	{ 0xd272d446, "__fentry__" },
	{ 0xdd6830c7, "sysfs_emit" },
	{ 0x4c9d7e9f, "d_prune_aliases" },
	{ 0xd9505619, "__put_cred" },
	{ 0x71d7a617, "register_pernet_subsys" },
	{ 0xf70bbac3, "rpc_cancel_tasks" },
	{ 0xaeb40924, "shrinker_free" },
	{ 0xcfbe39aa, "trace_event_buffer_commit" },
	{ 0x4d77e769, "int_sqrt" },
	{ 0xb04003c4, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x5a844b26,
	0x5a844b26,
	0x2b79f1cb,
	0xf183a6d9,
	0xfb295b0f,
	0xb8a5ea7b,
	0xf7e2dcc5,
	0xfad69ede,
	0xae612a3f,
	0xc9758ac0,
	0x6eacfae8,
	0xe8213e80,
	0xbd03ed67,
	0xd272d446,
	0x4c2d2c43,
	0x4415c53e,
	0x05d1b355,
	0xd272d446,
	0xff0106da,
	0x8ce83585,
	0x9b74e79d,
	0x972c8816,
	0x86fae56c,
	0x87b89f39,
	0xed2abb46,
	0xf77cb8eb,
	0xb7cf2565,
	0x9479a1e8,
	0xfdb994fa,
	0xaeb40924,
	0x5a844b26,
	0x86d206f6,
	0x9d4d7434,
	0xcc410e9c,
	0x29d12a64,
	0x38ae9edf,
	0x90a48d82,
	0x80519711,
	0xbd03ed67,
	0xae066b8b,
	0xd70733be,
	0x4306ccfe,
	0x6eacfae8,
	0x8907fdcd,
	0x8a5d79fd,
	0x9cd2a478,
	0x6b412821,
	0xbedeccb6,
	0x29d12a64,
	0x26e1ee46,
	0x348d7b5a,
	0x7387c0d6,
	0x24e1fbea,
	0xd01c679b,
	0x7a5ffe84,
	0x6eacfae8,
	0xac527e8e,
	0x30eb8e97,
	0xa58d1754,
	0x8e6fe378,
	0x7df1633e,
	0xa157f30f,
	0x8e6fe378,
	0xe7839060,
	0xec103c3c,
	0xf09c19da,
	0xd272d446,
	0x4c1e7250,
	0xd09b06f5,
	0x366ddfcc,
	0x4a2c2dab,
	0xd272d446,
	0x716c9bcf,
	0x6a22d58c,
	0xa38f8c89,
	0xaef1f20d,
	0x7030827f,
	0x4aeb5613,
	0x582d5d4b,
	0xbd03ed67,
	0xbeb1d261,
	0x8bc8f40f,
	0xe6111b34,
	0x7c0c25f7,
	0x96f580ca,
	0x07915875,
	0x7a3574d2,
	0x4e858b01,
	0xe267f02b,
	0x808c0ec7,
	0xf25d5a0d,
	0xc3fc81b3,
	0x191b4e90,
	0xce2e2afb,
	0xf5d8d228,
	0x414f10af,
	0xa9df9ae9,
	0x9a3aa936,
	0xdb25bc3d,
	0x16efc143,
	0x2a82613b,
	0x8ce83585,
	0x4f1e5fd0,
	0xf86590d7,
	0x43bf044d,
	0xe6111b34,
	0x86632fd6,
	0xb4bd3058,
	0xe6111b34,
	0xb5c51982,
	0x402db74e,
	0x38cf2cbb,
	0xf654f750,
	0xe54e0a6b,
	0x185ae458,
	0x3d395066,
	0x412683ae,
	0x86933348,
	0x66b814fd,
	0x32c46078,
	0x38cf2cbb,
	0x2750496d,
	0x23a4913a,
	0xfc66744b,
	0xba82fa4a,
	0x886b59cc,
	0x71ccbbe0,
	0x85acaba2,
	0x91ca3d0d,
	0x7aafb0d8,
	0xb5c51982,
	0x8907fdcd,
	0xdc23a8da,
	0x1d4de77c,
	0x98aa1e41,
	0x98990316,
	0x0e9cab28,
	0x5a844b26,
	0xbd069841,
	0x7804a2a6,
	0x75251f3a,
	0xd272d446,
	0x4eba539e,
	0x386e4ba3,
	0x0c99ce48,
	0xf296206e,
	0xe804603d,
	0x06a0ebb0,
	0xa28510eb,
	0xae612a3f,
	0xe142f417,
	0x565254fb,
	0x23a4913a,
	0xec203997,
	0x19572860,
	0x37421f5b,
	0xe2f59f75,
	0x3edb87c2,
	0xe6ceb2c0,
	0x3dc18a93,
	0x8e6fe378,
	0x49feef87,
	0x1decd147,
	0xcd308ce7,
	0x690cdb06,
	0x058c185a,
	0xe33556ea,
	0x0540085b,
	0xce4af33b,
	0x2acfb7f7,
	0x7ccba6d3,
	0x314dffaa,
	0xdd6830c7,
	0xbd03ed67,
	0x82fd7238,
	0x7ec472ba,
	0x7ec472ba,
	0xb9fcd065,
	0x09077599,
	0xf95f8582,
	0x1999de75,
	0xa4c0178c,
	0x23e7cd4a,
	0xae085436,
	0x384d6d72,
	0xd0b95dc4,
	0x464f4640,
	0xad4575d0,
	0xa5c7582d,
	0x7c0c25f7,
	0x3dc18a93,
	0x6eec7a0d,
	0xb2cb147c,
	0xeae5a0e7,
	0x23a4913a,
	0x2cf315cc,
	0xc84c7d31,
	0x8907fdcd,
	0x3edb87c2,
	0xf9d9c87b,
	0xd4e708d6,
	0x4e07ecb3,
	0x8af3d851,
	0x5a844b26,
	0xec22810d,
	0x98d5d341,
	0xcde3c1aa,
	0x1e54cb19,
	0x8eb37e44,
	0x97acb853,
	0x5cb46e6d,
	0xc6efaa34,
	0xae612a3f,
	0x1f3da2df,
	0x7f4fc2d5,
	0x71798f7e,
	0xc9758ac0,
	0x5597b998,
	0xfbc777f6,
	0xae612a3f,
	0xe6ceb2c0,
	0x15e40135,
	0xe6111b34,
	0x733ae7fc,
	0x04cb8a32,
	0x7851be11,
	0x8e6fe378,
	0xfbc57bb9,
	0x3d4e2af6,
	0x8907fdcd,
	0x16db5b6a,
	0xe64422c9,
	0x600e1ee7,
	0x4df25bce,
	0xfb98b4e5,
	0x67812091,
	0xe1106eda,
	0xe6a2a545,
	0xd4d86f7b,
	0x23646e85,
	0x2dc117de,
	0x00e6aa37,
	0x7b33e239,
	0xbe2d4009,
	0x00283ffd,
	0xbf67af3a,
	0xd4e708d6,
	0xe22f375d,
	0xdc6da1aa,
	0xb8170c0c,
	0x1f55c5b2,
	0xdf4bee3d,
	0xd272d446,
	0xe4de56b4,
	0xa44c56e8,
	0x43a349ca,
	0x2727f39f,
	0xe8e0a5a9,
	0x23a4913a,
	0x3ea1bbe0,
	0x6d20e668,
	0x4525ea92,
	0xf1de9e85,
	0x88fdc895,
	0xd272d446,
	0x25291be4,
	0x296b9459,
	0x1ced3052,
	0xae612a3f,
	0x8a624ee3,
	0xe5fa304b,
	0x5af09d8b,
	0x6bded543,
	0x6792a38a,
	0x1de9d283,
	0xf296206e,
	0x8e6fe378,
	0x1bd62f57,
	0xf0181eeb,
	0x6eacfae8,
	0x12ca6142,
	0x7851be11,
	0xd0ea019a,
	0x9f2a9d73,
	0x37c0b5f3,
	0x7eb6028e,
	0x7c0c25f7,
	0xf667083c,
	0x384d6d72,
	0xe0e6c6c9,
	0x86c49e96,
	0x91ca3d0d,
	0xd18017f6,
	0xe23fc198,
	0x4ed1c97d,
	0x9a3aa936,
	0x2da49b3a,
	0xed9e4439,
	0x533bf9ae,
	0x3f8c35b8,
	0x6eacfae8,
	0xf9d63531,
	0x872f5dee,
	0xa61fd7aa,
	0x023de41a,
	0x3170695f,
	0x40b03471,
	0x473b78d7,
	0xdc352a3b,
	0x6eacfae8,
	0xd8b344e3,
	0x6f71a083,
	0x563ca2e5,
	0x4f6b040a,
	0x23a4913a,
	0x092a35a2,
	0x600e1ee7,
	0x2a7e5601,
	0xd272d446,
	0xa1b8e03a,
	0xe6ceb2c0,
	0xd710adbf,
	0xf7e2dcc5,
	0x8907fdcd,
	0x2469206a,
	0x23a4913a,
	0x394c59cf,
	0xdb77fa9d,
	0x40a621c5,
	0x62cbec20,
	0xe178c77a,
	0x3435945f,
	0x49feef87,
	0x49733ad6,
	0xb23d220e,
	0x3b85369e,
	0x488e1019,
	0x5d3e3274,
	0x70814c31,
	0xd272d446,
	0xac491997,
	0xc2ccdd1e,
	0x202e9498,
	0x02ae6e9f,
	0x3435945f,
	0x8bcc2a64,
	0xb730487b,
	0xb8f8c02e,
	0x3677eb57,
	0x269fa486,
	0x3b4a56a7,
	0x40a621c5,
	0xbd03ed67,
	0x0858ccaf,
	0xbe2387da,
	0x30440821,
	0x515f18c0,
	0xa03632f6,
	0xfbeffd26,
	0xfcd9cad9,
	0x4e060c89,
	0xfbe7861b,
	0x7f57070e,
	0x1c8e36c2,
	0x6eacfae8,
	0x6eacfae8,
	0x1367c27c,
	0xcb8b6ec6,
	0x8fd5ee17,
	0x110b4b9f,
	0x6eacfae8,
	0xeace2e2d,
	0x62275444,
	0xf7e2dcc5,
	0xf7e2dcc5,
	0x17cfa7cd,
	0x00f09098,
	0x38db07b0,
	0xe169b089,
	0xde45859c,
	0x7b638c16,
	0xc281f1fb,
	0xe2f59f75,
	0x8997c0ea,
	0xffddf59c,
	0xf25a2863,
	0x68a1b6c6,
	0x02e1dca7,
	0x38ae9edf,
	0x627d5b88,
	0x70814c31,
	0x34360028,
	0x9d4d7434,
	0xf5d8d228,
	0x5ae9ee26,
	0x92d7bb07,
	0x5af09d8b,
	0xa1447c51,
	0x8c31d5dd,
	0xdc3051ac,
	0x58716555,
	0x234cc97b,
	0xe263ff7c,
	0x25d352e7,
	0xf827275a,
	0xf7897df0,
	0xd272d446,
	0xdd6830c7,
	0x4c9d7e9f,
	0xd9505619,
	0x71d7a617,
	0xf70bbac3,
	0xaeb40924,
	0xcfbe39aa,
	0x4d77e769,
	0xb04003c4,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__x86_indirect_thunk_r11\0"
	"__x86_indirect_thunk_rax\0"
	"migrate_folio\0"
	"locks_lock_inode_wait\0"
	"lookup_noperm\0"
	"add_swap_extent\0"
	"fs_param_is_u32\0"
	"inode_newsize_ok\0"
	"d_drop\0"
	"deactivate_super\0"
	"unlock_new_inode\0"
	"_printk\0"
	"__ref_stack_chk_guard\0"
	"schedule\0"
	"security_sb_mnt_opts_compat\0"
	"param_get_uint\0"
	"nlmclnt_shutdown_rpc_clnt\0"
	"__stack_chk_fail\0"
	"refcount_warn_saturate\0"
	"queue_delayed_work_on\0"
	"unregister_sysctl_table\0"
	"make_kuid\0"
	"truncate_inode_pages_final\0"
	"d_alloc\0"
	"fs_kobj\0"
	"net_ns_type_operations\0"
	"__filemap_set_wb_err\0"
	"strnlen\0"
	"generic_perform_write\0"
	"shrinker_register\0"
	"__x86_indirect_thunk_rdx\0"
	"__SCT__WARN_trap\0"
	"folio_mark_dirty\0"
	"init_wait_var_entry\0"
	"bit_wait\0"
	"module_put\0"
	"__ubsan_handle_out_of_bounds\0"
	"__var_waitqueue\0"
	"page_offset_base\0"
	"rpc_setbufsize\0"
	"sized_strscpy\0"
	"fs_context_for_submount\0"
	"inode_init_once\0"
	"folio_wait_private_2\0"
	"file_write_and_wait_range\0"
	"errseq_check\0"
	"idr_remove\0"
	"__fscache_relinquish_volume\0"
	"bit_wait_io\0"
	"seq_escape_mem\0"
	"ilookup5\0"
	"mempool_alloc_noprof\0"
	"key_put\0"
	"generic_parse_monolithic\0"
	"init_wait_entry\0"
	"inode_nohighmem\0"
	"perf_trace_buf_alloc\0"
	"perf_trace_run_bpf_submit\0"
	"security_d_instantiate\0"
	"down_write\0"
	"init_net\0"
	"strndup_user\0"
	"up_write\0"
	"generic_file_read_iter\0"
	"inode_maybe_inc_iversion\0"
	"rpc_clone_client_set_auth\0"
	"synchronize_rcu\0"
	"mempool_free_slab\0"
	"kstrtoint\0"
	"memchr\0"
	"truncate_pagecache\0"
	"__rcu_read_unlock\0"
	"put_fs_context\0"
	"rpc_peeraddr2str\0"
	"kmemdup_nul\0"
	"system_percpu_wq\0"
	"kobj_sysfs_ops\0"
	"xa_load\0"
	"bpf_trace_run5\0"
	"random_kmalloc_seed\0"
	"destroy_workqueue\0"
	"crc32_le\0"
	"_raw_write_lock\0"
	"mutex_lock\0"
	"set_nlink\0"
	"kmem_cache_alloc_lru_noprof\0"
	"kmem_cache_free\0"
	"rpc_max_payload\0"
	"d_move\0"
	"seq_putc\0"
	"rpc_proc_unregister\0"
	"const_current_task\0"
	"trace_event_reg\0"
	"folio_mkclean\0"
	"rb_erase\0"
	"vfs_create_mount\0"
	"mark_mounts_for_expiry\0"
	"folio_wait_writeback\0"
	"ida_free\0"
	"nlmclnt_rpc_clnt\0"
	"rpc_clnt_swap_activate\0"
	"mod_delayed_work_on\0"
	"__list_del_entry_valid_or_report\0"
	"rpcauth_get_gssinfo\0"
	"kobject_init_and_add\0"
	"_raw_read_unlock\0"
	"_find_next_bit\0"
	"write_inode_now\0"
	"_raw_write_unlock\0"
	"__cpu_online_mask\0"
	"memcmp\0"
	"d_obtain_alias\0"
	"_totalram_pages\0"
	"__fortify_panic\0"
	"folio_end_read\0"
	"wait_for_completion_killable\0"
	"rpc_create\0"
	"finish_no_open\0"
	"wake_up_var\0"
	"__folio_start_writeback\0"
	"d_obtain_root\0"
	"bpf_trace_run1\0"
	"param_ops_short\0"
	"idr_destroy\0"
	"folio_alloc_noprof\0"
	"rpc_call_sync\0"
	"proc_mkdir\0"
	"cancel_delayed_work\0"
	"rpc_put_task_async\0"
	"unregister_pernet_subsys\0"
	"__cpu_possible_mask\0"
	"folio_end_writeback_no_dropbehind\0"
	"xdr_init_decode_pages\0"
	"register_sysctl_sz\0"
	"tracepoint_srcu\0"
	"netfs_read_subreq_terminated\0"
	"memset\0"
	"__x86_indirect_thunk_r10\0"
	"kstrtoull\0"
	"lookup_constant\0"
	"mempool_alloc_slab\0"
	"__x86_return_thunk\0"
	"kmem_cache_alloc_noprof\0"
	"kmemdup_noprof\0"
	"inode_update_time\0"
	"nr_cpu_ids\0"
	"__init_waitqueue_head\0"
	"rpc_exit\0"
	"make_kgid\0"
	"d_delete\0"
	"set_default_d_op\0"
	"__kmem_cache_create_args\0"
	"param_ops_string\0"
	"kasprintf\0"
	"vfs_parse_fs_qstr\0"
	"writeback_iter\0"
	"out_of_line_wait_on_bit_lock\0"
	"nfs_ssc_unregister\0"
	"rpc_killall_tasks\0"
	"down_read_killable\0"
	"down_read\0"
	"xdr_reserve_space\0"
	"rb_replace_node\0"
	"strnchr\0"
	"free_percpu\0"
	"jiffies\0"
	"iov_iter_get_pages_alloc2\0"
	"set_page_dirty\0"
	"kstrdup\0"
	"bpf_trace_run3\0"
	"__put_net\0"
	"trace_print_flags_seq\0"
	"sprintf\0"
	"vmemmap_base\0"
	"__ubsan_handle_shift_out_of_bounds\0"
	"cpu_number\0"
	"__preempt_count\0"
	"call_rcu\0"
	"__filemap_get_folio_mpol\0"
	"vfs_pressure_ratio\0"
	"netfs_read_folio\0"
	"kvfree_call_rcu\0"
	"pcpu_alloc_noprof\0"
	"generic_read_dir\0"
	"kobject_del\0"
	"trace_event_buffer_reserve\0"
	"d_add\0"
	"rename_lock\0"
	"strsep\0"
	"mutex_unlock\0"
	"down_write_killable\0"
	"filemap_fdatawait_range\0"
	"mempool_create_node_noprof\0"
	"percpu_counter_add_batch\0"
	"param_ops_bool\0"
	"groups_free\0"
	"security_inode_notifysecctx\0"
	"folio_end_dropbehind\0"
	"nfs_ssc_register\0"
	"init_user_ns\0"
	"xa_find\0"
	"invalidate_inode_pages2\0"
	"inode_set_ctime_current\0"
	"__x86_indirect_thunk_rcx\0"
	"seq_write\0"
	"mempool_destroy\0"
	"__folio_put\0"
	"kobject_set_name\0"
	"__kmalloc_cache_noprof\0"
	"ktime_get\0"
	"validate_usercopy_range\0"
	"seq_printf\0"
	"dput\0"
	"lockref_get\0"
	"rpc_init_wait_queue\0"
	"delayed_work_timer_fn\0"
	"deactivate_locked_super\0"
	"put_rpccred\0"
	"__percpu_down_read\0"
	"__d_lookup_unhash_wake\0"
	"rpc_clnt_swap_deactivate\0"
	"kobject_uevent\0"
	"_raw_read_lock\0"
	"__fscache_invalidate\0"
	"folio_mapping\0"
	"__SCT__cond_resched\0"
	"downgrade_write\0"
	"alloc_pages_noprof\0"
	"cred_fscmp\0"
	"__folio_lock\0"
	"filemap_dirty_folio\0"
	"is_bad_inode\0"
	"proc_dointvec\0"
	"__fscache_use_cookie\0"
	"rcuwait_wake_up\0"
	"_proc_mkdir\0"
	"node_data\0"
	"errseq_set\0"
	"rpc_clnt_xprt_switch_has_addr\0"
	"__fs_parse\0"
	"sysfs_create_link_nowarn\0"
	"filemap_splice_read\0"
	"dget_parent\0"
	"nlmclnt_init\0"
	"__seq_puts\0"
	"kill_anon_super\0"
	"xa_find_after\0"
	"iget5_locked\0"
	"filemap_write_and_wait_range\0"
	"kset_register\0"
	"kstrtoll\0"
	"alloc_workqueue_noprof\0"
	"rcu_barrier\0"
	"__ubsan_handle_load_invalid_value\0"
	"nlmclnt_done\0"
	"strlen\0"
	"proc_symlink\0"
	"wake_up_bit\0"
	"param_ops_int\0"
	"refcount_dec_and_lock\0"
	"iov_iter_revert\0"
	"generic_write_checks\0"
	"kvfree\0"
	"key_lookup\0"
	"__SCT__preempt_schedule_notrace\0"
	"setattr_should_drop_sgid\0"
	"strchr\0"
	"filemap_fault\0"
	"d_invalidate\0"
	"__mark_inode_dirty\0"
	"generic_file_llseek\0"
	"_raw_spin_unlock\0"
	"get_free_pages_noprof\0"
	"folio_wait_private_2_killable\0"
	"trace_handle_return\0"
	"nfs_debug\0"
	"up_read\0"
	"rpc_wait_for_completion_task\0"
	"set_anon_super\0"
	"drop_nlink\0"
	"ktime_get_with_offset\0"
	"__SCT__might_resched\0"
	"kmalloc_caches\0"
	"inode_set_ctime_to_ts\0"
	"__request_module\0"
	"kmem_cache_destroy\0"
	"mutex_init_generic\0"
	"__fscache_acquire_cookie\0"
	"kobject_put\0"
	"vfs_get_tree\0"
	"nop_mnt_idmap\0"
	"rpc_put_task\0"
	"super_setup_bdi_name\0"
	"posix_test_lock\0"
	"filemap_fdatawrite\0"
	"__folio_cancel_dirty\0"
	"generic_fillattr\0"
	"vfs_fsync_range\0"
	"ida_alloc_range\0"
	"shrinker_alloc\0"
	"clear_nlink\0"
	"file_check_and_advance_wb_err\0"
	"try_module_get\0"
	"__check_object_size\0"
	"d_alloc_parallel\0"
	"__ipv6_addr_type\0"
	"__init_rwsem\0"
	"page_put_link\0"
	"__list_add_valid_or_report\0"
	"clear_inode\0"
	"inode_to_bdi\0"
	"bpf_trace_run4\0"
	"__fscache_acquire_volume\0"
	"ida_destroy\0"
	"param_ops_ulong\0"
	"_copy_from_user\0"
	"proc_dointvec_jiffies\0"
	"rpc_proc_register\0"
	"__rcu_read_lock\0"
	"sysfs_create_file_ns\0"
	"rpc_shutdown_client\0"
	"__kmalloc_noprof\0"
	"fs_param_is_string\0"
	"folio_unlock\0"
	"mnt_set_expiry\0"
	"param_ops_ushort\0"
	"seq_list_next\0"
	"rpc_clnt_show_stats\0"
	"snprintf\0"
	"complete\0"
	"filemap_map_pages\0"
	"filemap_flush_range\0"
	"xdr_inline_decode\0"
	"queue_work_on\0"
	"trace_raw_output_prep\0"
	"kobject_rename\0"
	"security_sb_set_mnt_opts\0"
	"init_special_inode\0"
	"unregister_filesystem\0"
	"__SCT__preempt_schedule\0"
	"seq_list_start_head\0"
	"__init_swait_queue_head\0"
	"generic_error_remove_folio\0"
	"__trace_trigger_soft_disabled\0"
	"filemap_fdatawrite_range\0"
	"folio_wait_bit_killable\0"
	"finish_wait\0"
	"rpc_wake_up\0"
	"xprt_find_transport_ident\0"
	"d_make_root\0"
	"trace_event_printf\0"
	"scnprintf\0"
	"this_cpu_off\0"
	"read_cache_folio\0"
	"sync_filesystem\0"
	"__fscache_unuse_cookie\0"
	"folio_redirty_for_writepage\0"
	"sget_fc\0"
	"d_splice_alias\0"
	"trace_event_raw_init\0"
	"trace_print_symbols_seq\0"
	"memcpy\0"
	"errseq_sample\0"
	"unmap_mapping_range\0"
	"ihold\0"
	"inode_dio_wait\0"
	"generic_permission\0"
	"kfree\0"
	"invalidate_inode_pages2_range\0"
	"finish_open\0"
	"iput\0"
	"kset_unregister\0"
	"security_sb_clone_mnt_opts\0"
	"fs_param_is_enum\0"
	"fs_param_is_s32\0"
	"logfc\0"
	"iter_file_splice_write\0"
	"rpc_pton\0"
	"mod_node_page_state\0"
	"rpc_wake_up_queued_task\0"
	"bpf_trace_run2\0"
	"prepare_to_wait_event\0"
	"out_of_line_wait_on_bit\0"
	"remove_proc_subtree\0"
	"rpc_restart_call_prepare\0"
	"d_lookup\0"
	"__wake_up\0"
	"free_pages\0"
	"__module_get\0"
	"__fscache_relinquish_cookie\0"
	"register_filesystem\0"
	"xdr_encode_opaque\0"
	"folio_clear_dirty_for_io\0"
	"rb_insert_color\0"
	"__per_cpu_offset\0"
	"trace_print_hex_seq\0"
	"_raw_spin_lock\0"
	"mempool_free\0"
	"generic_file_mmap_prepare\0"
	"filemap_add_folio\0"
	"rpc_sleep_on\0"
	"rpc_run_task\0"
	"keyring_alloc\0"
	"netfs_readahead\0"
	"proc_create_net_data\0"
	"full_name_hash\0"
	"__fentry__\0"
	"sysfs_emit\0"
	"d_prune_aliases\0"
	"__put_cred\0"
	"register_pernet_subsys\0"
	"rpc_cancel_tasks\0"
	"shrinker_free\0"
	"trace_event_buffer_commit\0"
	"int_sqrt\0"
	"module_layout\0"
;

MODULE_INFO(depends, "lockd,sunrpc,netfs");


MODULE_INFO(srcversion, "3F95F26073AC751CA789A93");
