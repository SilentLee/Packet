#pragma once
//#include <windows.h>
//
typedef enum BATTLE_PROTOCOL
{
	BATTLE_PT_VERSION	= 0x4000000,

	PT_BATTLE_SEARCH_ROOM,
	/*
	INT							:		ROOM_TYPE
	*/
	PT_BATTLE_SEARCH_ROOM_SUCC_U,
	/*
	DWORD_PTR		:		ROOM_ID
	INT							:		ROOM_TYPE
	INT							:		ROOM_STATUS
	INT							:		CURRENT_USER_COUNT
	INT							:		SIDE_IN_GAME
	*/
	PT_BATTLE_SEARCH_ROOM_FAIL_U,
	/*
	DWORD					:		ERROR_CODE
	*/
	PT_BATTLE_START_GAME_M,
	/*
	INT							:		ROOM_TYPE
	INT64						:		START_TIME
	INT							:		ROOM_STATUS
	INT							:		SIDE_IN_GAME
	*/
	PT_BATTLE_ARRANGE_WEAPON,
	/*
	INT							:		WEAPON_TYPE
	INT							:		COORDINATE_X
	INT							:		COORDINATE_Y
	FLOAT					:		POS_X
	FLOAT					:		POS_Y
	INT							:		SPEED
	INT							:		TROOPS_IN
	*/
	PT_BATTLE_ARRANGE_WEAPON_SUCC_M,
	/*
	INT							:		WEAPON_TYPE
	INT							:		WEAPON_TAG
	INT							:		COORDINATE_X
	INT							:		COORDINATE_Y
	FLOAT					:		POS_X
	FLOAT					:		POS_Y
	INT							:		SPEED
	INT							:		TROOPS_IN
	*/
	PT_BATTLE_ARRANGE_WEAPON_FAIL_U,
	/*
	DWORD					:		ERROR_CODE
	*/
	PT_BATTLE_UPDATE_SITUATION_M,
	/*
	INT							:		REMAINING_GAME_TIME
	INT							:		BLUE_TROOPS_DATA_LENGTH
	INT							:		RED_TROOPS_DATA_LENGTH
	INT							:		BLUE_TROOPS_ACTION_DATA_LENGTH
	INT							:		RED_TROOPS_ACTION_DATA_LENGTH
	BYTE						:		DATA[4000]
	*/
	BATTLE_PT_END
};
