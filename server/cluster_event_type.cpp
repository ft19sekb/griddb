﻿/*
	Copyright (c) 2017 TOSHIBA Digital Solutions Corporation

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU Affero General Public License as
	published by the Free Software Foundation, either version 3 of the
	License, or (at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU Affero General Public License for more details.

	You should have received a copy of the GNU Affero General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
/*!
	@file
	@brief Implimentation of functions for event type
*/
#include "data_type.h"
#include "cluster_event_type.h"

#define CASE_EVENT(eventType) \
	case eventType:           \
		return #eventType

const char8_t* getEventTypeName(EventType eventType) {
	switch (eventType) {
		CASE_EVENT(CONNECT);
		CASE_EVENT(DISCONNECT);
		CASE_EVENT(LOGIN);
		CASE_EVENT(LOGOUT);
		CASE_EVENT(GET_PARTITION_ADDRESS);
		CASE_EVENT(GET_TIME_SERIES);
		CASE_EVENT(PUT_TIME_SERIES);
		CASE_EVENT(DELETE_TIME_SERIES);
		CASE_EVENT(CREATE_INDEX);
		CASE_EVENT(DELETE_INDEX);
		CASE_EVENT(CREATE_EVENT_NOTIFICATION);
		CASE_EVENT(DELETE_EVENT_NOTIFICATION);
		CASE_EVENT(FLUSH_LOG);
		CASE_EVENT(COMMIT_TRANSACTION);
		CASE_EVENT(ABORT_TRANSACTION);
		CASE_EVENT(QUERY_COLLECTION_GEOMETRY_RELATED);
		CASE_EVENT(QUERY_COLLECTION_GEOMETRY_WITH_EXCLUSION);
		CASE_EVENT(APPEND_TIME_SERIES_ROW);
		CASE_EVENT(GET_TIME_SERIES_ROW);
		CASE_EVENT(GET_TIME_SERIES_ROW_RELATED);
		CASE_EVENT(INTERPOLATE_TIME_SERIES_ROW);
		CASE_EVENT(AGGREGATE_TIME_SERIES);
		CASE_EVENT(QUERY_TIME_SERIES_TQL);
		CASE_EVENT(QUERY_TIME_SERIES_RANGE);
		CASE_EVENT(QUERY_TIME_SERIES_SAMPLING);
		CASE_EVENT(PUT_TIME_SERIES_ROW);
		CASE_EVENT(PUT_TIME_SERIES_ROWSET);
		CASE_EVENT(DELETE_TIME_SERIES_ROW);
		CASE_EVENT(GET_CONTAINER_PROPERTIES);
		CASE_EVENT(GET_TIME_SERIES_MULTIPLE_ROWS);
		CASE_EVENT(GET_PARTITION_CONTAINER_NAMES);
		CASE_EVENT(DROP_CONTAINER);
		CASE_EVENT(EXECUTE_MULTIPLE_QUERIES);
		CASE_EVENT(GET_MULTIPLE_CONTAINER_ROWS);
		CASE_EVENT(PUT_MULTIPLE_CONTAINER_ROWS);
		CASE_EVENT(CLOSE_RESULT_SET);
		CASE_EVENT(FETCH_RESULT_SET);
		CASE_EVENT(CREATE_TRIGGER);
		CASE_EVENT(DELETE_TRIGGER);
		CASE_EVENT(GET_CONTAINER);
		CASE_EVENT(PUT_CONTAINER);
		CASE_EVENT(GET_ROW);
		CASE_EVENT(QUERY_TQL);
		CASE_EVENT(PUT_ROW);
		CASE_EVENT(PUT_MULTIPLE_ROWS);
		CASE_EVENT(UPDATE_ROW_BY_ID);
		CASE_EVENT(REMOVE_ROW);
		CASE_EVENT(REMOVE_ROW_BY_ID);
		CASE_EVENT(GET_MULTIPLE_ROWS);
		CASE_EVENT(CREATE_TRANSACTION_CONTEXT);
		CASE_EVENT(CLOSE_TRANSACTION_CONTEXT);
		CASE_EVENT(CREATE_MULTIPLE_TRANSACTION_CONTEXTS);
		CASE_EVENT(CLOSE_MULTIPLE_TRANSACTION_CONTEXTS);
		CASE_EVENT(GET_USERS);
		CASE_EVENT(PUT_USER);
		CASE_EVENT(DROP_USER);
		CASE_EVENT(GET_DATABASES);
		CASE_EVENT(PUT_DATABASE);
		CASE_EVENT(DROP_DATABASE);
		CASE_EVENT(PUT_PRIVILEGE);
		CASE_EVENT(DROP_PRIVILEGE);
		CASE_EVENT(SQL_GET_CONTAINER);
		CASE_EVENT(PARTIAL_TQL);
		CASE_EVENT(SQL_EXECUTE_QUERY);
		CASE_EVENT(SQL_CANCEL_QUERY);
		CASE_EVENT(SQL_TEST);
		CASE_EVENT(SQL_ACK_GET_CONTAINER);
		CASE_EVENT(SQL_RECV_SYNC_REQUEST);
		CASE_EVENT(SQL_CHECK_STATUS);
		CASE_EVENT(BACK_GROUND);
		CASE_EVENT(CONTINUE_CREATE_INDEX);
		CASE_EVENT(CONTINUE_ALTER_CONTAINER);
		CASE_EVENT(REPLICATION_LOG);
		CASE_EVENT(REPLICATION_ACK);
		CASE_EVENT(REPLICATION_LOG2);
		CASE_EVENT(REPLICATION_ACK2);
		CASE_EVENT(CS_HEARTBEAT);
		CASE_EVENT(CS_HEARTBEAT_RES);
		CASE_EVENT(CS_NOTIFY_CLUSTER);
		CASE_EVENT(CS_NOTIFY_CLUSTER_RES);
		CASE_EVENT(CS_UPDATE_PARTITION);
		CASE_EVENT(CS_JOIN_CLUSTER);
		CASE_EVENT(CS_LEAVE_CLUSTER);
		CASE_EVENT(CS_INCREASE_CLUSTER);
		CASE_EVENT(CS_DECREASE_CLUSTER);
		CASE_EVENT(CS_SHUTDOWN_NODE_NORMAL);
		CASE_EVENT(CS_SHUTDOWN_NODE_FORCE);
		CASE_EVENT(CS_GOSSIP);
		CASE_EVENT(CS_SHUTDOWN_CLUSTER);
		CASE_EVENT(CS_COMPLETE_CHECKPOINT_FOR_SHUTDOWN);
		CASE_EVENT(CS_COMPLETE_CHECKPOINT_FOR_RECOVERY);
		CASE_EVENT(CS_TIMER_CHECK_CLUSTER);
		CASE_EVENT(CS_TIMER_NOTIFY_CLUSTER);
		CASE_EVENT(CS_TIMER_NOTIFY_CLIENT);
		CASE_EVENT(CS_TIMER_CHECK_LOAD_BALANCE);
		CASE_EVENT(CS_ORDER_DROP_PARTITION);
		CASE_EVENT(TXN_SHORTTERM_SYNC_REQUEST);
		CASE_EVENT(TXN_SHORTTERM_SYNC_START);
		CASE_EVENT(TXN_SHORTTERM_SYNC_START_ACK);
		CASE_EVENT(TXN_SHORTTERM_SYNC_LOG);
		CASE_EVENT(TXN_SHORTTERM_SYNC_LOG_ACK);
		CASE_EVENT(TXN_SHORTTERM_SYNC_END);
		CASE_EVENT(TXN_SHORTTERM_SYNC_END_ACK);
		CASE_EVENT(TXN_LONGTERM_SYNC_REQUEST);
		CASE_EVENT(TXN_LONGTERM_SYNC_START);
		CASE_EVENT(TXN_LONGTERM_SYNC_START_ACK);
		CASE_EVENT(TXN_LONGTERM_SYNC_CHUNK);
		CASE_EVENT(TXN_LONGTERM_SYNC_CHUNK_ACK);
		CASE_EVENT(TXN_LONGTERM_SYNC_LOG);
		CASE_EVENT(TXN_LONGTERM_SYNC_LOG_ACK);
		CASE_EVENT(TXN_SYNC_TIMEOUT);
		CASE_EVENT(TXN_SYNC_CHECK_END);

		CASE_EVENT(TXN_LONGTERM_SYNC_PREPARE_ACK); 
		CASE_EVENT(TXN_LONGTERM_SYNC_RECOVERY_ACK);

		CASE_EVENT(SYC_SHORTTERM_SYNC_LOG);
		CASE_EVENT(SYC_LONGTERM_SYNC_LOG);
		CASE_EVENT(SYC_LONGTERM_SYNC_CHUNK);
		CASE_EVENT(TXN_CHANGE_PARTITION_TABLE);
		CASE_EVENT(TXN_CHANGE_PARTITION_STATE);
		CASE_EVENT(TXN_DROP_PARTITION);
		CASE_EVENT(CHUNK_EXPIRE_PERIODICALLY);
		CASE_EVENT(ADJUST_STORE_MEMORY_PERIODICALLY);
		CASE_EVENT(PARTITION_GROUP_START);
		CASE_EVENT(PARTITION_START);
		CASE_EVENT(EXECUTE_CP);
		CASE_EVENT(PARTITION_END);
		CASE_EVENT(PARTITION_GROUP_END);
		CASE_EVENT(WRITE_LOG_PERIODICALLY);
		CASE_EVENT(CLEANUP_CP_DATA);
		CASE_EVENT(CLEANUP_LOG_FILES);
		CASE_EVENT(CP_TXN_PREPARE_LONGTERM_SYNC);
		CASE_EVENT(CP_TXN_STOP_LONGTERM_SYNC);
		CASE_EVENT(UPDATE_DATA_STORE_STATUS);
		CASE_EVENT(EXECUTE_JOB);
		CASE_EVENT(CONTROL_JOB);
		CASE_EVENT(PUT_LARGE_CONTAINER);
		CASE_EVENT(UPDATE_CONTAINER_STATUS);
		CASE_EVENT(CREATE_LARGE_INDEX);
		CASE_EVENT(DROP_LARGE_INDEX);
		CASE_EVENT(UPDATE_MULTIPLE_ROWS_BY_ID_SET);
		CASE_EVENT(REMOVE_MULTIPLE_ROWS_BY_ID_SET);

	default:
		break;
	}
	return "UNDEF_EVENT_TYPE";
}
