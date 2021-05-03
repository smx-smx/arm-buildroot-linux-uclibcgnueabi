/*
 * urcu/map/urcu-memb.h
 *
 * Userspace RCU header -- name mapping to allow multiple flavors to be
 * used in the same executable.
 *
 * Copyright (c) 2009 Mathieu Desnoyers <mathieu.desnoyers@efficios.com>
 * Copyright (c) 2009 Paul E. McKenney, IBM Corporation.
 *
 * LGPL-compatible code should include this header with :
 *
 * #define _LGPL_SOURCE
 * #include <urcu.h>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 *
 * IBM's contributions to this file may be relicensed under LGPLv2 or later.
 */

#define rcu_read_lock			urcu_memb_read_lock
#define _rcu_read_lock			_urcu_memb_read_lock
#define rcu_read_unlock			urcu_memb_read_unlock
#define _rcu_read_unlock		_urcu_memb_read_unlock
#define rcu_read_ongoing		urcu_memb_read_ongoing
#define _rcu_read_ongoing		_urcu_memb_read_ongoing
#define rcu_quiescent_state		urcu_memb_quiescent_state
#define _rcu_quiescent_state		_urcu_memb_quiescent_state
#define rcu_thread_offline		urcu_memb_thread_offline
#define rcu_thread_online		urcu_memb_thread_online
#define rcu_register_thread		urcu_memb_register_thread
#define rcu_unregister_thread		urcu_memb_unregister_thread
#define rcu_init			urcu_memb_init
#define rcu_exit			urcu_memb_exit
#define synchronize_rcu			urcu_memb_synchronize_rcu
#define rcu_reader			urcu_memb_reader
#define rcu_gp				urcu_memb_gp

#define get_cpu_call_rcu_data		urcu_memb_get_cpu_call_rcu_data
#define get_call_rcu_thread		urcu_memb_get_call_rcu_thread
#define create_call_rcu_data		urcu_memb_create_call_rcu_data
#define set_cpu_call_rcu_data		urcu_memb_set_cpu_call_rcu_data
#define get_default_call_rcu_data	urcu_memb_get_default_call_rcu_data
#define get_call_rcu_data		urcu_memb_get_call_rcu_data
#define get_thread_call_rcu_data	urcu_memb_get_thread_call_rcu_data
#define set_thread_call_rcu_data	urcu_memb_set_thread_call_rcu_data
#define create_all_cpu_call_rcu_data	urcu_memb_create_all_cpu_call_rcu_data
#define free_all_cpu_call_rcu_data	urcu_memb_free_all_cpu_call_rcu_data
#define call_rcu			urcu_memb_call_rcu
#define call_rcu_data_free		urcu_memb_call_rcu_data_free
#define call_rcu_before_fork		urcu_memb_call_rcu_before_fork
#define call_rcu_after_fork_parent	urcu_memb_call_rcu_after_fork_parent
#define call_rcu_after_fork_child	urcu_memb_call_rcu_after_fork_child
#define rcu_barrier			urcu_memb_barrier

#define defer_rcu			urcu_memb_defer_rcu
#define rcu_defer_register_thread	urcu_memb_defer_register_thread
#define rcu_defer_unregister_thread	urcu_memb_defer_unregister_thread
#define rcu_defer_barrier		urcu_memb_defer_barrier
#define rcu_defer_barrier_thread	urcu_memb_defer_barrier_thread
#define rcu_defer_exit			urcu_memb_defer_exit

#define rcu_flavor			urcu_memb_flavor

#define urcu_register_rculfhash_atfork		\
		urcu_memb_register_rculfhash_atfork
#define urcu_unregister_rculfhash_atfork	\
		urcu_memb_unregister_rculfhash_atfork


/* Aliases for ABI(6) compat */

#define alias_rcu_flavor		rcu_flavor_memb

/* src/urcu.c */
#define alias_rcu_read_lock		rcu_read_lock_memb
#define alias_rcu_read_unlock		rcu_read_unlock_memb
#define alias_rcu_read_ongoing		rcu_read_ongoing_memb
#define alias_rcu_register_thread	rcu_register_thread_memb
#define alias_rcu_unregister_thread	rcu_unregister_thread_memb
#define alias_rcu_init			rcu_init_memb
#define alias_synchronize_rcu		synchronize_rcu_memb
#define alias_rcu_reader		rcu_reader_memb
#define alias_rcu_gp			rcu_gp_memb

/* src/urcu-call-rcu-impl.h */
#define alias_get_cpu_call_rcu_data	get_cpu_call_rcu_data_memb
#define alias_get_call_rcu_thread	get_call_rcu_thread_memb
#define alias_create_call_rcu_data	create_call_rcu_data_memb
#define alias_set_cpu_call_rcu_data	set_cpu_call_rcu_data_memb
#define alias_get_default_call_rcu_data	get_default_call_rcu_data_memb
#define alias_get_call_rcu_data		get_call_rcu_data_memb
#define alias_get_thread_call_rcu_data	get_thread_call_rcu_data_memb
#define alias_set_thread_call_rcu_data	set_thread_call_rcu_data_memb
#define alias_create_all_cpu_call_rcu_data	\
		create_all_cpu_call_rcu_data_memb
#define alias_free_all_cpu_call_rcu_data	\
		free_all_cpu_call_rcu_data_memb
#define alias_call_rcu			call_rcu_memb
#define alias_call_rcu_data_free	call_rcu_data_free_memb
#define alias_call_rcu_before_fork	call_rcu_before_fork_memb
#define alias_call_rcu_after_fork_parent	\
		call_rcu_after_fork_parent_memb
#define alias_call_rcu_after_fork_child	call_rcu_after_fork_child_memb
#define alias_rcu_barrier		rcu_barrier_memb

#define alias_urcu_register_rculfhash_atfork	\
		urcu_register_rculfhash_atfork_memb
#define alias_urcu_unregister_rculfhash_atfork	\
		urcu_unregister_rculfhash_atfork_memb

/* src/urcu-defer-impl.h */
#define alias_defer_rcu			defer_rcu_memb
#define alias_rcu_defer_register_thread	rcu_defer_register_thread_memb
#define alias_rcu_defer_unregister_thread	\
		rcu_defer_unregister_thread_memb
#define alias_rcu_defer_barrier		rcu_defer_barrier_memb
#define alias_rcu_defer_barrier_thread	rcu_defer_barrier_thread_memb
#define alias_rcu_defer_exit		rcu_defer_exit_memb


/* Compat identifiers for prior undocumented multiflavor usage */
#ifndef URCU_NO_COMPAT_IDENTIFIERS

#define rcu_dereference_memb		urcu_memb_dereference
#define rcu_cmpxchg_pointer_memb	urcu_memb_cmpxchg_pointer
#define rcu_xchg_pointer_memb		urcu_memb_xchg_pointer
#define rcu_set_pointer_memb		urcu_memb_set_pointer

#define rcu_memb_before_fork		urcu_memb_before_fork
#define rcu_memb_after_fork_parent	urcu_memb_after_fork_parent
#define rcu_memb_after_fork_child	urcu_memb_after_fork_child

#define rcu_read_lock_memb		urcu_memb_read_lock
#define _rcu_read_lock_memb		_urcu_memb_read_lock
#define rcu_read_unlock_memb		urcu_memb_read_unlock
#define _rcu_read_unlock_memb		_urcu_memb_read_unlock
#define rcu_read_ongoing_memb		urcu_memb_read_ongoing
#define _rcu_read_ongoing_memb		_urcu_memb_read_ongoing
#define rcu_register_thread_memb	urcu_memb_register_thread
#define rcu_unregister_thread_memb	urcu_memb_unregister_thread
#define rcu_init_memb			urcu_memb_init
#define rcu_exit_memb			urcu_memb_exit
#define synchronize_rcu_memb		urcu_memb_synchronize_rcu
#define rcu_reader_memb			urcu_memb_reader
#define rcu_gp_memb			urcu_memb_gp

#define get_cpu_call_rcu_data_memb	urcu_memb_get_cpu_call_rcu_data
#define get_call_rcu_thread_memb	urcu_memb_get_call_rcu_thread
#define create_call_rcu_data_memb	urcu_memb_create_call_rcu_data
#define set_cpu_call_rcu_data_memb	urcu_memb_set_cpu_call_rcu_data
#define get_default_call_rcu_data_memb	urcu_memb_get_default_call_rcu_data
#define get_call_rcu_data_memb		urcu_memb_get_call_rcu_data
#define get_thread_call_rcu_data_memb	urcu_memb_get_thread_call_rcu_data
#define set_thread_call_rcu_data_memb	urcu_memb_set_thread_call_rcu_data
#define create_all_cpu_call_rcu_data_memb	\
		urcu_memb_create_all_cpu_call_rcu_data
#define free_all_cpu_call_rcu_data_memb	urcu_memb_free_all_cpu_call_rcu_data
#define call_rcu_memb			urcu_memb_call_rcu
#define call_rcu_data_free_memb		urcu_memb_call_rcu_data_free
#define call_rcu_before_fork_memb	urcu_memb_call_rcu_before_fork
#define call_rcu_after_fork_parent_memb	urcu_memb_call_rcu_after_fork_parent
#define call_rcu_after_fork_child_memb	urcu_memb_call_rcu_after_fork_child
#define rcu_barrier_memb		urcu_memb_barrier

#define defer_rcu_memb			urcu_memb_defer_rcu
#define rcu_defer_register_thread_memb	urcu_memb_defer_register_thread
#define rcu_defer_unregister_thread_memb	\
		urcu_memb_defer_unregister_thread
#define rcu_defer_barrier_memb		urcu_memb_defer_barrier
#define rcu_defer_barrier_thread_memb	urcu_memb_defer_barrier_thread
#define rcu_defer_exit_memb		urcu_memb_defer_exit

#define rcu_flavor_memb			urcu_memb_flavor

#define urcu_register_rculfhash_atfork_memb	\
		urcu_memb_register_rculfhash_atfork
#define urcu_unregister_rculfhash_atfork_memb	\
		urcu_memb_unregister_rculfhash_atfork

#endif /* URCU_NO_COMPAT_IDENTIFIERS */
