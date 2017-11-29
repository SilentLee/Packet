#pragma once

inline VOID READ_PT_VISITOR_REGIST(BYTE *buffer, S_PT_VISITOR_REGIST &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

}

inline VOID READ_PT_VISITOR_REGIST_SUCC_U(BYTE *buffer, S_PT_VISITOR_REGIST_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadBytes((BYTE*) parameter.NICKNAME, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.BIND_ACCOUNT_TYPE, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.BIND_ACCOUNT, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.CELLPHONE_NO, sizeof(CHAR) * 32);
	Stream->ReadInt32(&parameter.INTEGRAL_POINTS);
	Stream->ReadInt32(&parameter.LEVEL);
	Stream->ReadInt32(&parameter.DIAMONDS);
	Stream->ReadInt32(&parameter.COINS);
	Stream->ReadInt32(&parameter.WIN_TIMES);
	Stream->ReadInt32(&parameter.BATTLE_TIMES);
	Stream->ReadFloat(&parameter.WIN_RATE);
	Stream->ReadInt32(&parameter.SHOT_DOWN_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_JUNIOR_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_MIDDLE_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_SENIOR_PLANES);
	Stream->ReadDWORD_PTR(&parameter.SESSION_ID);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_CANNONBALL);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_CANNONBALL);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_CANNONBALL);
	Stream->ReadInt32(&parameter.STAR_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_1_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_2_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_3_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_4_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_5_NUM);
	Stream->ReadInt32(&parameter.STAR_REWARDS_NUM);
	Stream->ReadInt32(&parameter.FREE_REWARDS_NUM);
	Stream->ReadInt64(&parameter.WIN_REWARDS_1_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_2_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_3_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_4_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_5_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.LAST_STAR_REWARDS_ACQUIRE_TIME);
	Stream->ReadInt64(&parameter.LAST_FREE_REWARDS_ACQUIRE_TIME);
}

inline VOID READ_PT_VISITOR_REGIST_FAIL_U(BYTE *buffer, S_PT_VISITOR_REGIST_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_USER_NAME_REGIST(BYTE *buffer, S_PT_USER_NAME_REGIST &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadBytes((BYTE*) parameter.NICKNAME, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);
}

inline VOID READ_PT_USER_NAME_REGIST_SUCC_U(BYTE *buffer, S_PT_USER_NAME_REGIST_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadBytes((BYTE*) parameter.NICKNAME, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.BIND_ACCOUNT_TYPE, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.BIND_ACCOUNT, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.CELLPHONE_NO, sizeof(CHAR) * 32);
	Stream->ReadInt32(&parameter.INTEGRAL_POINTS);
	Stream->ReadInt32(&parameter.LEVEL);
	Stream->ReadInt32(&parameter.DIAMONDS);
	Stream->ReadInt32(&parameter.COINS);
	Stream->ReadInt32(&parameter.WIN_TIMES);
	Stream->ReadInt32(&parameter.BATTLE_TIMES);
	Stream->ReadFloat(&parameter.WIN_RATE);
	Stream->ReadInt32(&parameter.SHOT_DOWN_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_JUNIOR_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_MIDDLE_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_SENIOR_PLANES);
	Stream->ReadDWORD_PTR(&parameter.SESSION_ID);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_CANNONBALL);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_CANNONBALL);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_CANNONBALL);
	Stream->ReadInt32(&parameter.STAR_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_1_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_2_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_3_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_4_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_5_NUM);
	Stream->ReadInt32(&parameter.STAR_REWARDS_NUM);
	Stream->ReadInt32(&parameter.FREE_REWARDS_NUM);
	Stream->ReadInt64(&parameter.WIN_REWARDS_1_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_2_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_3_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_4_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_5_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.LAST_STAR_REWARDS_ACQUIRE_TIME);
	Stream->ReadInt64(&parameter.LAST_FREE_REWARDS_ACQUIRE_TIME);
}

inline VOID READ_PT_USER_NAME_REGIST_FAIL_U(BYTE *buffer, S_PT_USER_NAME_REGIST_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_BIND_ACCOUNT_REGIST(BYTE *buffer, S_PT_BIND_ACCOUNT_REGIST &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadBytes((BYTE*) parameter.BIND_ACCOUNT_TYPE, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.BIND_ACCOUNT, sizeof(CHAR) * 32);
}

inline VOID READ_PT_BIND_ACCOUNT_REGIST_SUCC_U(BYTE *buffer, S_PT_BIND_ACCOUNT_REGIST_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadBytes((BYTE*) parameter.NICKNAME, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.BIND_ACCOUNT_TYPE, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.BIND_ACCOUNT, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.CELLPHONE_NO, sizeof(CHAR) * 32);
	Stream->ReadInt32(&parameter.INTEGRAL_POINTS);
	Stream->ReadInt32(&parameter.LEVEL);
	Stream->ReadInt32(&parameter.DIAMONDS);
	Stream->ReadInt32(&parameter.COINS);
	Stream->ReadInt32(&parameter.WIN_TIMES);
	Stream->ReadInt32(&parameter.BATTLE_TIMES);
	Stream->ReadFloat(&parameter.WIN_RATE);
	Stream->ReadInt32(&parameter.SHOT_DOWN_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_JUNIOR_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_MIDDLE_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_SENIOR_PLANES);
	Stream->ReadDWORD_PTR(&parameter.SESSION_ID);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_CANNONBALL);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_CANNONBALL);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_CANNONBALL);
	Stream->ReadInt32(&parameter.STAR_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_1_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_2_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_3_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_4_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_5_NUM);
	Stream->ReadInt32(&parameter.STAR_REWARDS_NUM);
	Stream->ReadInt32(&parameter.FREE_REWARDS_NUM);
	Stream->ReadInt64(&parameter.WIN_REWARDS_1_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_2_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_3_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_4_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_5_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.LAST_STAR_REWARDS_ACQUIRE_TIME);
	Stream->ReadInt64(&parameter.LAST_FREE_REWARDS_ACQUIRE_TIME);
}

inline VOID READ_PT_BIND_ACCOUNT_REGIST_FAIL_U(BYTE *buffer, S_PT_BIND_ACCOUNT_REGIST_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_CELLPHONE_NO_REGIST(BYTE *buffer, S_PT_CELLPHONE_NO_REGIST &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadBytes((BYTE*) parameter.CELLPHONE_NO, sizeof(CHAR) * 32);
	Stream->ReadInt32(&parameter.CONFIG_CODE);
}

inline VOID READ_PT_CELLPHONE_NO_REGIST_SUCC_U(BYTE *buffer, S_PT_CELLPHONE_NO_REGIST_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadBytes((BYTE*) parameter.NICKNAME, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.BIND_ACCOUNT_TYPE, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.BIND_ACCOUNT, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.CELLPHONE_NO, sizeof(CHAR) * 32);
	Stream->ReadInt32(&parameter.INTEGRAL_POINTS);
	Stream->ReadInt32(&parameter.LEVEL);
	Stream->ReadInt32(&parameter.DIAMONDS);
	Stream->ReadInt32(&parameter.COINS);
	Stream->ReadInt32(&parameter.WIN_TIMES);
	Stream->ReadInt32(&parameter.BATTLE_TIMES);
	Stream->ReadFloat(&parameter.WIN_RATE);
	Stream->ReadInt32(&parameter.SHOT_DOWN_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_JUNIOR_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_MIDDLE_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_SENIOR_PLANES);
	Stream->ReadDWORD_PTR(&parameter.SESSION_ID);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_CANNONBALL);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_CANNONBALL);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_CANNONBALL);
	Stream->ReadInt32(&parameter.STAR_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_1_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_2_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_3_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_4_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_5_NUM);
	Stream->ReadInt32(&parameter.STAR_REWARDS_NUM);
	Stream->ReadInt32(&parameter.FREE_REWARDS_NUM);
	Stream->ReadInt64(&parameter.WIN_REWARDS_1_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_2_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_3_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_4_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_5_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.LAST_STAR_REWARDS_ACQUIRE_TIME);
	Stream->ReadInt64(&parameter.LAST_FREE_REWARDS_ACQUIRE_TIME);
}

inline VOID READ_PT_CELLPHONE_NO_REGIST_FAIL_U(BYTE *buffer, S_PT_CELLPHONE_NO_REGIST_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_USER_NAME_LOGIN(BYTE *buffer, S_PT_USER_NAME_LOGIN &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadBytes((BYTE*) parameter.USER_NAME, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);
}

inline VOID READ_PT_USER_NAME_LOGIN_SUCC_U(BYTE *buffer, S_PT_USER_NAME_LOGIN_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadBytes((BYTE*) parameter.NICKNAME, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.BIND_ACCOUNT_TYPE, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.BIND_ACCOUNT, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.CELLPHONE_NO, sizeof(CHAR) * 32);
	Stream->ReadInt32(&parameter.INTEGRAL_POINTS);
	Stream->ReadInt32(&parameter.LEVEL);
	Stream->ReadInt32(&parameter.DIAMONDS);
	Stream->ReadInt32(&parameter.COINS);
	Stream->ReadInt32(&parameter.WIN_TIMES);
	Stream->ReadInt32(&parameter.BATTLE_TIMES);
	Stream->ReadFloat(&parameter.WIN_RATE);
	Stream->ReadInt32(&parameter.SHOT_DOWN_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_JUNIOR_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_MIDDLE_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_SENIOR_PLANES);
	Stream->ReadDWORD_PTR(&parameter.SESSION_ID);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_CANNONBALL);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_CANNONBALL);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_CANNONBALL);
	Stream->ReadInt32(&parameter.STAR_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_1_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_2_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_3_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_4_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_5_NUM);
	Stream->ReadInt32(&parameter.STAR_REWARDS_NUM);
	Stream->ReadInt32(&parameter.FREE_REWARDS_NUM);
	Stream->ReadInt64(&parameter.WIN_REWARDS_1_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_2_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_3_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_4_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_5_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.LAST_STAR_REWARDS_ACQUIRE_TIME);
	Stream->ReadInt64(&parameter.LAST_FREE_REWARDS_ACQUIRE_TIME);
}

inline VOID READ_PT_USER_NAME_LOGIN_FAIL_U(BYTE *buffer, S_PT_USER_NAME_LOGIN_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_BIND_ACCOUNT_LOGIN(BYTE *buffer, S_PT_BIND_ACCOUNT_LOGIN &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadBytes((BYTE*) parameter.BIND_ACCOUNT_TYPE, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.BIND_ACCOUNT, sizeof(CHAR) * 32);
}

inline VOID READ_PT_BIND_ACCOUNT_LOGIN_SUCC_U(BYTE *buffer, S_PT_BIND_ACCOUNT_LOGIN_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadBytes((BYTE*) parameter.NICKNAME, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.BIND_ACCOUNT_TYPE, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.BIND_ACCOUNT, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.CELLPHONE_NO, sizeof(CHAR) * 32);
	Stream->ReadInt32(&parameter.INTEGRAL_POINTS);
	Stream->ReadInt32(&parameter.LEVEL);
	Stream->ReadInt32(&parameter.DIAMONDS);
	Stream->ReadInt32(&parameter.COINS);
	Stream->ReadInt32(&parameter.WIN_TIMES);
	Stream->ReadInt32(&parameter.BATTLE_TIMES);
	Stream->ReadFloat(&parameter.WIN_RATE);
	Stream->ReadInt32(&parameter.SHOT_DOWN_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_JUNIOR_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_MIDDLE_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_SENIOR_PLANES);
	Stream->ReadDWORD_PTR(&parameter.SESSION_ID);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_CANNONBALL);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_CANNONBALL);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_CANNONBALL);
	Stream->ReadInt32(&parameter.STAR_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_1_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_2_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_3_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_4_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_5_NUM);
	Stream->ReadInt32(&parameter.STAR_REWARDS_NUM);
	Stream->ReadInt32(&parameter.FREE_REWARDS_NUM);
	Stream->ReadInt64(&parameter.WIN_REWARDS_1_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_2_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_3_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_4_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_5_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.LAST_STAR_REWARDS_ACQUIRE_TIME);
	Stream->ReadInt64(&parameter.LAST_FREE_REWARDS_ACQUIRE_TIME);
}

inline VOID READ_PT_BIND_ACCOUNT_LOGIN_FAIL_U(BYTE *buffer, S_PT_BIND_ACCOUNT_LOGIN_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_CELLPHONE_NO_LOGIN(BYTE *buffer, S_PT_CELLPHONE_NO_LOGIN &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadBytes((BYTE*) parameter.CELLPHONE_NO, sizeof(CHAR) * 32);
	Stream->ReadInt32(&parameter.CONFIG_CODE);
}

inline VOID READ_PT_CELLPHONE_NO_LOGIN_SUCC_U(BYTE *buffer, S_PT_CELLPHONE_NO_LOGIN_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadBytes((BYTE*) parameter.NICKNAME, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.BIND_ACCOUNT_TYPE, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.BIND_ACCOUNT, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.CELLPHONE_NO, sizeof(CHAR) * 32);
	Stream->ReadInt32(&parameter.INTEGRAL_POINTS);
	Stream->ReadInt32(&parameter.LEVEL);
	Stream->ReadInt32(&parameter.DIAMONDS);
	Stream->ReadInt32(&parameter.COINS);
	Stream->ReadInt32(&parameter.WIN_TIMES);
	Stream->ReadInt32(&parameter.BATTLE_TIMES);
	Stream->ReadFloat(&parameter.WIN_RATE);
	Stream->ReadInt32(&parameter.SHOT_DOWN_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_JUNIOR_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_MIDDLE_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_SENIOR_PLANES);
	Stream->ReadDWORD_PTR(&parameter.SESSION_ID);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_CANNONBALL);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_CANNONBALL);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_CANNONBALL);
	Stream->ReadInt32(&parameter.STAR_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_1_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_2_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_3_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_4_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_5_NUM);
	Stream->ReadInt32(&parameter.STAR_REWARDS_NUM);
	Stream->ReadInt32(&parameter.FREE_REWARDS_NUM);
	Stream->ReadInt64(&parameter.WIN_REWARDS_1_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_2_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_3_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_4_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_5_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.LAST_STAR_REWARDS_ACQUIRE_TIME);
	Stream->ReadInt64(&parameter.LAST_FREE_REWARDS_ACQUIRE_TIME);
}

inline VOID READ_PT_CELLPHONE_NO_LOGIN_FAIL_U(BYTE *buffer, S_PT_CELLPHONE_NO_LOGIN_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_VISITOR_DEFAULT_LOGIN(BYTE *buffer, S_PT_VISITOR_DEFAULT_LOGIN &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);
}

inline VOID READ_PT_VISITOR_DEFAULT_LOGIN_SUCC_U(BYTE *buffer, S_PT_VISITOR_DEFAULT_LOGIN_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadBytes((BYTE*) parameter.NICKNAME, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.BIND_ACCOUNT_TYPE, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.BIND_ACCOUNT, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.CELLPHONE_NO, sizeof(CHAR) * 32);
	Stream->ReadInt32(&parameter.INTEGRAL_POINTS);
	Stream->ReadInt32(&parameter.LEVEL);
	Stream->ReadInt32(&parameter.DIAMONDS);
	Stream->ReadInt32(&parameter.COINS);
	Stream->ReadInt32(&parameter.WIN_TIMES);
	Stream->ReadInt32(&parameter.BATTLE_TIMES);
	Stream->ReadFloat(&parameter.WIN_RATE);
	Stream->ReadInt32(&parameter.SHOT_DOWN_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_JUNIOR_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_MIDDLE_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_SENIOR_PLANES);
	Stream->ReadDWORD_PTR(&parameter.SESSION_ID);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_CANNONBALL);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_CANNONBALL);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_CANNONBALL);
	Stream->ReadInt32(&parameter.STAR_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_1_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_2_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_3_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_4_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_5_NUM);
	Stream->ReadInt32(&parameter.STAR_REWARDS_NUM);
	Stream->ReadInt32(&parameter.FREE_REWARDS_NUM);
	Stream->ReadInt64(&parameter.WIN_REWARDS_1_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_2_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_3_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_4_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_5_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.LAST_STAR_REWARDS_ACQUIRE_TIME);
	Stream->ReadInt64(&parameter.LAST_FREE_REWARDS_ACQUIRE_TIME);
}

inline VOID READ_PT_VISITOR_DEFAULT_LOGIN_FAIL_U(BYTE *buffer, S_PT_VISITOR_DEFAULT_LOGIN_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_USER_NAME_DEFAULT_LOGIN(BYTE *buffer, S_PT_USER_NAME_DEFAULT_LOGIN &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadBytes((BYTE*) parameter.USER_NAME, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);
}

inline VOID READ_PT_USER_NAME_DEFAULT_LOGIN_SUCC_U(BYTE *buffer, S_PT_USER_NAME_DEFAULT_LOGIN_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.INTEGRAL_POINTS);
	Stream->ReadInt32(&parameter.LEVEL);
	Stream->ReadInt32(&parameter.DIAMONDS);
	Stream->ReadInt32(&parameter.COINS);
	Stream->ReadInt32(&parameter.WIN_TIMES);
	Stream->ReadInt32(&parameter.BATTLE_TIMES);
	Stream->ReadFloat(&parameter.WIN_RATE);
	Stream->ReadInt32(&parameter.SHOT_DOWN_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_JUNIOR_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_MIDDLE_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_SENIOR_PLANES);
	Stream->ReadDWORD_PTR(&parameter.SESSION_ID);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_CANNONBALL);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_CANNONBALL);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_CANNONBALL);
	Stream->ReadInt32(&parameter.STAR_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_1_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_2_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_3_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_4_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_5_NUM);
	Stream->ReadInt32(&parameter.STAR_REWARDS_NUM);
	Stream->ReadInt32(&parameter.FREE_REWARDS_NUM);
	Stream->ReadInt64(&parameter.WIN_REWARDS_1_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_2_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_3_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_4_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_5_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.LAST_STAR_REWARDS_ACQUIRE_TIME);
	Stream->ReadInt64(&parameter.LAST_FREE_REWARDS_ACQUIRE_TIME);
}

inline VOID READ_PT_USER_NAME_DEFAULT_LOGIN_FAIL_U(BYTE *buffer, S_PT_USER_NAME_DEFAULT_LOGIN_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_BIND_ACCOUNT_DEFAULT_LOGIN(BYTE *buffer, S_PT_BIND_ACCOUNT_DEFAULT_LOGIN &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadBytes((BYTE*) parameter.BIND_ACCOUNT_TYPE, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.BIND_ACCOUNT, sizeof(CHAR) * 32);
}

inline VOID READ_PT_BIND_ACCOUNT_DEFAULT_LOGIN_SUCC_U(BYTE *buffer, S_PT_BIND_ACCOUNT_DEFAULT_LOGIN_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.INTEGRAL_POINTS);
	Stream->ReadInt32(&parameter.LEVEL);
	Stream->ReadInt32(&parameter.DIAMONDS);
	Stream->ReadInt32(&parameter.COINS);
	Stream->ReadInt32(&parameter.WIN_TIMES);
	Stream->ReadInt32(&parameter.BATTLE_TIMES);
	Stream->ReadFloat(&parameter.WIN_RATE);
	Stream->ReadInt32(&parameter.SHOT_DOWN_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_JUNIOR_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_MIDDLE_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_SENIOR_PLANES);
	Stream->ReadDWORD_PTR(&parameter.SESSION_ID);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_CANNONBALL);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_CANNONBALL);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_CANNONBALL);
	Stream->ReadInt32(&parameter.STAR_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_1_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_2_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_3_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_4_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_5_NUM);
	Stream->ReadInt32(&parameter.STAR_REWARDS_NUM);
	Stream->ReadInt32(&parameter.FREE_REWARDS_NUM);
	Stream->ReadInt64(&parameter.WIN_REWARDS_1_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_2_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_3_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_4_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_5_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.LAST_STAR_REWARDS_ACQUIRE_TIME);
	Stream->ReadInt64(&parameter.LAST_FREE_REWARDS_ACQUIRE_TIME);
}

inline VOID READ_PT_BIND_ACCOUNT_DEFAULT_LOGIN_FAIL_U(BYTE *buffer, S_PT_BIND_ACCOUNT_DEFAULT_LOGIN_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_CELLPHONE_NO_DEFAULT_LOGIN(BYTE *buffer, S_PT_CELLPHONE_NO_DEFAULT_LOGIN &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadBytes((BYTE*) parameter.CELLPHONE_NO, sizeof(CHAR) * 32);
	Stream->ReadInt32(&parameter.CONFIG_CODE);
}

inline VOID READ_PT_CELLPHONE_NO_DEFALUT_LOGIN_SUCC_U(BYTE *buffer, S_PT_CELLPHONE_NO_DEFALUT_LOGIN_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.INTEGRAL_POINTS);
	Stream->ReadInt32(&parameter.LEVEL);
	Stream->ReadInt32(&parameter.DIAMONDS);
	Stream->ReadInt32(&parameter.COINS);
	Stream->ReadInt32(&parameter.WIN_TIMES);
	Stream->ReadInt32(&parameter.BATTLE_TIMES);
	Stream->ReadFloat(&parameter.WIN_RATE);
	Stream->ReadInt32(&parameter.SHOT_DOWN_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_JUNIOR_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_MIDDLE_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_SENIOR_PLANES);
	Stream->ReadDWORD_PTR(&parameter.SESSION_ID);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_STEALTH_PLANE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_MISSILE_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_RADAR_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_SENIOR_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_MIDDLE_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.NUM_OF_JUNIOR_CANNONBALL_CARD);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_STEALTH_PLANE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_ANTI_STEALTH_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_MISSILE);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_RADAR);
	Stream->ReadInt32(&parameter.LEVEL_SENIOR_CANNONBALL);
	Stream->ReadInt32(&parameter.LEVEL_MIDDLE_CANNONBALL);
	Stream->ReadInt32(&parameter.LEVEL_JUNIOR_CANNONBALL);
	Stream->ReadInt32(&parameter.STAR_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_1_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_2_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_3_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_4_NUM);
	Stream->ReadInt32(&parameter.WIN_REWARDS_5_NUM);
	Stream->ReadInt32(&parameter.STAR_REWARDS_NUM);
	Stream->ReadInt32(&parameter.FREE_REWARDS_NUM);
	Stream->ReadInt64(&parameter.WIN_REWARDS_1_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_2_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_3_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_4_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.WIN_REWARDS_5_UNLOCK_TIME);
	Stream->ReadInt64(&parameter.LAST_STAR_REWARDS_ACQUIRE_TIME);
	Stream->ReadInt64(&parameter.LAST_FREE_REWARDS_ACQUIRE_TIME);
}

inline VOID READ_PT_CELLPHONE_NO_DEFAULT_LOGIN_FAIL_U(BYTE *buffer, S_PT_CELLPHONE_NO_DEFAULT_LOGIN_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_ADD_NICKNAME(BYTE *buffer, S_PT_ADD_NICKNAME &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadBytes((BYTE*) parameter.NICKNAME, sizeof(CHAR) * 32);
}

inline VOID READ_PT_ADD_NICKNAME_SUCC_U(BYTE *buffer, S_PT_ADD_NICKNAME_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadBytes((BYTE*) parameter.NICKNAME, sizeof(CHAR) * 32);
}

inline VOID READ_PT_ADD_NICKNAME_FAIL_U(BYTE *buffer, S_PT_ADD_NICKNAME_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_ADD_BIND_ACCOUNT(BYTE *buffer, S_PT_ADD_BIND_ACCOUNT &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadBytes((BYTE*) parameter.BIND_ACCOUNT_TYPE, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.BIND_ACCOUNT, sizeof(CHAR) * 32);
}

inline VOID READ_PT_ADD_BIND_ACCOUNT_SUCC_U(BYTE *buffer, S_PT_ADD_BIND_ACCOUNT_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadBytes((BYTE*) parameter.BIND_ACCOUNT_TYPE, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.BIND_ACCOUNT, sizeof(CHAR) * 32);
}

inline VOID READ_PT_ADD_BIND_ACCOUNT_FAIL_U(BYTE *buffer, S_PT_ADD_BIND_ACCOUNT_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_ADD_CELLPHONE_NO(BYTE *buffer, S_PT_ADD_CELLPHONE_NO &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadBytes((BYTE*) parameter.CELLPHONE_NO, sizeof(CHAR) * 32);
	Stream->ReadInt32(&parameter.CONFIG_CODE);
}

inline VOID READ_PT_ADD_CELLPHONE_NO_SUCC_U(BYTE *buffer, S_PT_ADD_CELLPHONE_NO_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadBytes((BYTE*) parameter.CELLPHONE_NO, sizeof(CHAR) * 32);
}

inline VOID READ_PT_ADD_CELLPHONE_NO_FAIL_U(BYTE *buffer, S_PT_ADD_CELLPHONE_NO_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_UPDATE_PASSWORD(BYTE *buffer, S_PT_UPDATE_PASSWORD &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadBytes((BYTE*) parameter.OLD_PASSWORD, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.NEW_PASSWORD, sizeof(CHAR) * 32);
}

inline VOID READ_PT_UPDATE_PASSWORD_SUCC_U(BYTE *buffer, S_PT_UPDATE_PASSWORD_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadBytes((BYTE*) parameter.NEW_PASSWORD, sizeof(CHAR) * 32);
}

inline VOID READ_PT_UPDATE_PASSWORD_FAIL_U(BYTE *buffer, S_PT_UPDATE_PASSWORD_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_UPDATE_NICKNAME(BYTE *buffer, S_PT_UPDATE_NICKNAME &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadBytes((BYTE*) parameter.OLD_NICKNAME, sizeof(CHAR) * 32);
	Stream->ReadBytes((BYTE*) parameter.NEW_NICKNAME, sizeof(CHAR) * 32);
}

inline VOID READ_PT_UPDATE_NICKNAME_SUCC_U(BYTE *buffer, S_PT_UPDATE_NICKNAME_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadBytes((BYTE*) parameter.NEW_NICKNAME, sizeof(CHAR) * 32);
}

inline VOID READ_PT_UPDATE_NICKNAME_FAIL_U(BYTE *buffer, S_PT_UPDATE_NICKNAME_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_UPDATE_CELLPHONE_NO(BYTE *buffer, S_PT_UPDATE_CELLPHONE_NO &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadBytes((BYTE*) parameter.NEW_CELLPHONE_NO, sizeof(CHAR) * 32);
	Stream->ReadInt32(&parameter.CONFIG_CODE);
}

inline VOID READ_PT_UPDATE_CELLPHONE_NO_SUCC_U(BYTE *buffer, S_PT_UPDATE_CELLPHONE_NO_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadBytes((BYTE*) parameter.NEW_CELLPHONE_NO, sizeof(CHAR) * 32);
}

inline VOID READ_PT_UPDATE_CELLPHONE_NO_FAIL_U(BYTE *buffer, S_PT_UPDATE_CELLPHONE_NO_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_UPDATE_RECORD(BYTE *buffer, S_PT_UPDATE_RECORD &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.INTEGRAL_POINTS);
	Stream->ReadInt32(&parameter.LEVEL);
	Stream->ReadInt32(&parameter.DIAMONDS);
	Stream->ReadInt32(&parameter.COINS);
	Stream->ReadInt32(&parameter.WIN_TIMES);
	Stream->ReadInt32(&parameter.BATTLE_TIMES);
	Stream->ReadFloat(&parameter.WIN_RATE);
	Stream->ReadInt32(&parameter.SHOT_DOWN_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_JUNIOR_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_MIDDLE_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_SENIOR_PLANES);
}

inline VOID READ_PT_UPDATE_RECORD_SUCC_U(BYTE *buffer, S_PT_UPDATE_RECORD_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.INTEGRAL_POINTS);
	Stream->ReadInt32(&parameter.LEVEL);
	Stream->ReadInt32(&parameter.DIAMONDS);
	Stream->ReadInt32(&parameter.COINS);
	Stream->ReadInt32(&parameter.WIN_TIMES);
	Stream->ReadInt32(&parameter.BATTLE_TIMES);
	Stream->ReadFloat(&parameter.WIN_RATE);
	Stream->ReadInt32(&parameter.SHOT_DOWN_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_JUNIOR_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_MIDDLE_PLANES);
	Stream->ReadInt32(&parameter.SHOT_DOWN_SENIOR_PLANES);
}

inline VOID READ_PT_UPDATE_RECORD_FAIL_U(BYTE *buffer, S_PT_UPDATE_RECORD_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

