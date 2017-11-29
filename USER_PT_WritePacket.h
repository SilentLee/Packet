#pragma once

inline DWORD WRITE_PT_VISITOR_REGIST(BYTE *buffer, S_PT_VISITOR_REGIST &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);


	return Stream->GetLength();
}

inline DWORD WRITE_PT_VISITOR_REGIST_SUCC_U(BYTE *buffer, S_PT_VISITOR_REGIST_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteBytes((BYTE*) parameter.NICKNAME, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.BIND_ACCOUNT_TYPE, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.BIND_ACCOUNT, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.CELLPHONE_NO, sizeof(CHAR) * 32);
	Stream->WriteInt32(parameter.INTEGRAL_POINTS);
	Stream->WriteInt32(parameter.LEVEL);
	Stream->WriteInt32(parameter.DIAMONDS);
	Stream->WriteInt32(parameter.COINS);
	Stream->WriteInt32(parameter.WIN_TIMES);
	Stream->WriteInt32(parameter.BATTLE_TIMES);
	Stream->WriteFloat(parameter.WIN_RATE);
	Stream->WriteInt32(parameter.SHOT_DOWN_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_JUNIOR_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_MIDDLE_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_SENIOR_PLANES);
	Stream->WriteDWORD_PTR(parameter.SESSION_ID);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_PLANE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_PLANE);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_RADAR);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_RADAR);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_RADAR);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_CANNONBALL);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_CANNONBALL);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_CANNONBALL);
	Stream->WriteInt32(parameter.STAR_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_1_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_2_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_3_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_4_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_5_NUM);
	Stream->WriteInt32(parameter.STAR_REWARDS_NUM);
	Stream->WriteInt32(parameter.FREE_REWARDS_NUM);
	Stream->WriteInt64(parameter.WIN_REWARDS_1_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_2_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_3_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_4_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_5_UNLOCK_TIME);
	Stream->WriteInt64(parameter.LAST_STAR_REWARDS_ACQUIRE_TIME);
	Stream->WriteInt64(parameter.LAST_FREE_REWARDS_ACQUIRE_TIME);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_VISITOR_REGIST_FAIL_U(BYTE *buffer, S_PT_VISITOR_REGIST_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_USER_NAME_REGIST(BYTE *buffer, S_PT_USER_NAME_REGIST &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteBytes((BYTE*) parameter.NICKNAME, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_USER_NAME_REGIST_SUCC_U(BYTE *buffer, S_PT_USER_NAME_REGIST_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteBytes((BYTE*) parameter.NICKNAME, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.BIND_ACCOUNT_TYPE, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.BIND_ACCOUNT, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.CELLPHONE_NO, sizeof(CHAR) * 32);
	Stream->WriteInt32(parameter.INTEGRAL_POINTS);
	Stream->WriteInt32(parameter.LEVEL);
	Stream->WriteInt32(parameter.DIAMONDS);
	Stream->WriteInt32(parameter.COINS);
	Stream->WriteInt32(parameter.WIN_TIMES);
	Stream->WriteInt32(parameter.BATTLE_TIMES);
	Stream->WriteFloat(parameter.WIN_RATE);
	Stream->WriteInt32(parameter.SHOT_DOWN_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_JUNIOR_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_MIDDLE_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_SENIOR_PLANES);
	Stream->WriteDWORD_PTR(parameter.SESSION_ID);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_PLANE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_PLANE);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_RADAR);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_RADAR);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_RADAR);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_CANNONBALL);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_CANNONBALL);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_CANNONBALL);
	Stream->WriteInt32(parameter.STAR_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_1_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_2_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_3_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_4_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_5_NUM);
	Stream->WriteInt32(parameter.STAR_REWARDS_NUM);
	Stream->WriteInt32(parameter.FREE_REWARDS_NUM);
	Stream->WriteInt64(parameter.WIN_REWARDS_1_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_2_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_3_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_4_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_5_UNLOCK_TIME);
	Stream->WriteInt64(parameter.LAST_STAR_REWARDS_ACQUIRE_TIME);
	Stream->WriteInt64(parameter.LAST_FREE_REWARDS_ACQUIRE_TIME);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_USER_NAME_REGIST_FAIL_U(BYTE *buffer, S_PT_USER_NAME_REGIST_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BIND_ACCOUNT_REGIST(BYTE *buffer, S_PT_BIND_ACCOUNT_REGIST &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteBytes((BYTE*) parameter.BIND_ACCOUNT_TYPE, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.BIND_ACCOUNT, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BIND_ACCOUNT_REGIST_SUCC_U(BYTE *buffer, S_PT_BIND_ACCOUNT_REGIST_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteBytes((BYTE*) parameter.NICKNAME, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.BIND_ACCOUNT_TYPE, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.BIND_ACCOUNT, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.CELLPHONE_NO, sizeof(CHAR) * 32);
	Stream->WriteInt32(parameter.INTEGRAL_POINTS);
	Stream->WriteInt32(parameter.LEVEL);
	Stream->WriteInt32(parameter.DIAMONDS);
	Stream->WriteInt32(parameter.COINS);
	Stream->WriteInt32(parameter.WIN_TIMES);
	Stream->WriteInt32(parameter.BATTLE_TIMES);
	Stream->WriteFloat(parameter.WIN_RATE);
	Stream->WriteInt32(parameter.SHOT_DOWN_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_JUNIOR_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_MIDDLE_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_SENIOR_PLANES);
	Stream->WriteDWORD_PTR(parameter.SESSION_ID);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_PLANE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_PLANE);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_RADAR);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_RADAR);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_RADAR);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_CANNONBALL);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_CANNONBALL);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_CANNONBALL);
	Stream->WriteInt32(parameter.STAR_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_1_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_2_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_3_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_4_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_5_NUM);
	Stream->WriteInt32(parameter.STAR_REWARDS_NUM);
	Stream->WriteInt32(parameter.FREE_REWARDS_NUM);
	Stream->WriteInt64(parameter.WIN_REWARDS_1_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_2_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_3_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_4_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_5_UNLOCK_TIME);
	Stream->WriteInt64(parameter.LAST_STAR_REWARDS_ACQUIRE_TIME);
	Stream->WriteInt64(parameter.LAST_FREE_REWARDS_ACQUIRE_TIME);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BIND_ACCOUNT_REGIST_FAIL_U(BYTE *buffer, S_PT_BIND_ACCOUNT_REGIST_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_CELLPHONE_NO_REGIST(BYTE *buffer, S_PT_CELLPHONE_NO_REGIST &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteBytes((BYTE*) parameter.CELLPHONE_NO, sizeof(CHAR) * 32);
	Stream->WriteInt32(parameter.CONFIG_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_CELLPHONE_NO_REGIST_SUCC_U(BYTE *buffer, S_PT_CELLPHONE_NO_REGIST_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteBytes((BYTE*) parameter.NICKNAME, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.BIND_ACCOUNT_TYPE, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.BIND_ACCOUNT, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.CELLPHONE_NO, sizeof(CHAR) * 32);
	Stream->WriteInt32(parameter.INTEGRAL_POINTS);
	Stream->WriteInt32(parameter.LEVEL);
	Stream->WriteInt32(parameter.DIAMONDS);
	Stream->WriteInt32(parameter.COINS);
	Stream->WriteInt32(parameter.WIN_TIMES);
	Stream->WriteInt32(parameter.BATTLE_TIMES);
	Stream->WriteFloat(parameter.WIN_RATE);
	Stream->WriteInt32(parameter.SHOT_DOWN_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_JUNIOR_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_MIDDLE_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_SENIOR_PLANES);
	Stream->WriteDWORD_PTR(parameter.SESSION_ID);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_PLANE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_PLANE);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_RADAR);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_RADAR);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_RADAR);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_CANNONBALL);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_CANNONBALL);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_CANNONBALL);
	Stream->WriteInt32(parameter.STAR_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_1_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_2_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_3_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_4_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_5_NUM);
	Stream->WriteInt32(parameter.STAR_REWARDS_NUM);
	Stream->WriteInt32(parameter.FREE_REWARDS_NUM);
	Stream->WriteInt64(parameter.WIN_REWARDS_1_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_2_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_3_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_4_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_5_UNLOCK_TIME);
	Stream->WriteInt64(parameter.LAST_STAR_REWARDS_ACQUIRE_TIME);
	Stream->WriteInt64(parameter.LAST_FREE_REWARDS_ACQUIRE_TIME);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_CELLPHONE_NO_REGIST_FAIL_U(BYTE *buffer, S_PT_CELLPHONE_NO_REGIST_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_USER_NAME_LOGIN(BYTE *buffer, S_PT_USER_NAME_LOGIN &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteBytes((BYTE*) parameter.USER_NAME, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_USER_NAME_LOGIN_SUCC_U(BYTE *buffer, S_PT_USER_NAME_LOGIN_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteBytes((BYTE*) parameter.NICKNAME, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.BIND_ACCOUNT_TYPE, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.BIND_ACCOUNT, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.CELLPHONE_NO, sizeof(CHAR) * 32);
	Stream->WriteInt32(parameter.INTEGRAL_POINTS);
	Stream->WriteInt32(parameter.LEVEL);
	Stream->WriteInt32(parameter.DIAMONDS);
	Stream->WriteInt32(parameter.COINS);
	Stream->WriteInt32(parameter.WIN_TIMES);
	Stream->WriteInt32(parameter.BATTLE_TIMES);
	Stream->WriteFloat(parameter.WIN_RATE);
	Stream->WriteInt32(parameter.SHOT_DOWN_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_JUNIOR_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_MIDDLE_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_SENIOR_PLANES);
	Stream->WriteDWORD_PTR(parameter.SESSION_ID);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_PLANE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_PLANE);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_RADAR);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_RADAR);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_RADAR);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_CANNONBALL);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_CANNONBALL);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_CANNONBALL);
	Stream->WriteInt32(parameter.STAR_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_1_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_2_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_3_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_4_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_5_NUM);
	Stream->WriteInt32(parameter.STAR_REWARDS_NUM);
	Stream->WriteInt32(parameter.FREE_REWARDS_NUM);
	Stream->WriteInt64(parameter.WIN_REWARDS_1_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_2_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_3_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_4_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_5_UNLOCK_TIME);
	Stream->WriteInt64(parameter.LAST_STAR_REWARDS_ACQUIRE_TIME);
	Stream->WriteInt64(parameter.LAST_FREE_REWARDS_ACQUIRE_TIME);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_USER_NAME_LOGIN_FAIL_U(BYTE *buffer, S_PT_USER_NAME_LOGIN_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BIND_ACCOUNT_LOGIN(BYTE *buffer, S_PT_BIND_ACCOUNT_LOGIN &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteBytes((BYTE*) parameter.BIND_ACCOUNT_TYPE, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.BIND_ACCOUNT, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BIND_ACCOUNT_LOGIN_SUCC_U(BYTE *buffer, S_PT_BIND_ACCOUNT_LOGIN_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteBytes((BYTE*) parameter.NICKNAME, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.BIND_ACCOUNT_TYPE, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.BIND_ACCOUNT, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.CELLPHONE_NO, sizeof(CHAR) * 32);
	Stream->WriteInt32(parameter.INTEGRAL_POINTS);
	Stream->WriteInt32(parameter.LEVEL);
	Stream->WriteInt32(parameter.DIAMONDS);
	Stream->WriteInt32(parameter.COINS);
	Stream->WriteInt32(parameter.WIN_TIMES);
	Stream->WriteInt32(parameter.BATTLE_TIMES);
	Stream->WriteFloat(parameter.WIN_RATE);
	Stream->WriteInt32(parameter.SHOT_DOWN_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_JUNIOR_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_MIDDLE_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_SENIOR_PLANES);
	Stream->WriteDWORD_PTR(parameter.SESSION_ID);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_PLANE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_PLANE);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_RADAR);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_RADAR);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_RADAR);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_CANNONBALL);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_CANNONBALL);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_CANNONBALL);
	Stream->WriteInt32(parameter.STAR_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_1_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_2_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_3_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_4_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_5_NUM);
	Stream->WriteInt32(parameter.STAR_REWARDS_NUM);
	Stream->WriteInt32(parameter.FREE_REWARDS_NUM);
	Stream->WriteInt64(parameter.WIN_REWARDS_1_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_2_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_3_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_4_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_5_UNLOCK_TIME);
	Stream->WriteInt64(parameter.LAST_STAR_REWARDS_ACQUIRE_TIME);
	Stream->WriteInt64(parameter.LAST_FREE_REWARDS_ACQUIRE_TIME);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BIND_ACCOUNT_LOGIN_FAIL_U(BYTE *buffer, S_PT_BIND_ACCOUNT_LOGIN_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_CELLPHONE_NO_LOGIN(BYTE *buffer, S_PT_CELLPHONE_NO_LOGIN &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteBytes((BYTE*) parameter.CELLPHONE_NO, sizeof(CHAR) * 32);
	Stream->WriteInt32(parameter.CONFIG_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_CELLPHONE_NO_LOGIN_SUCC_U(BYTE *buffer, S_PT_CELLPHONE_NO_LOGIN_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteBytes((BYTE*) parameter.NICKNAME, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.BIND_ACCOUNT_TYPE, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.BIND_ACCOUNT, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.CELLPHONE_NO, sizeof(CHAR) * 32);
	Stream->WriteInt32(parameter.INTEGRAL_POINTS);
	Stream->WriteInt32(parameter.LEVEL);
	Stream->WriteInt32(parameter.DIAMONDS);
	Stream->WriteInt32(parameter.COINS);
	Stream->WriteInt32(parameter.WIN_TIMES);
	Stream->WriteInt32(parameter.BATTLE_TIMES);
	Stream->WriteFloat(parameter.WIN_RATE);
	Stream->WriteInt32(parameter.SHOT_DOWN_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_JUNIOR_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_MIDDLE_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_SENIOR_PLANES);
	Stream->WriteDWORD_PTR(parameter.SESSION_ID);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_PLANE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_PLANE);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_RADAR);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_RADAR);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_RADAR);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_CANNONBALL);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_CANNONBALL);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_CANNONBALL);
	Stream->WriteInt32(parameter.STAR_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_1_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_2_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_3_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_4_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_5_NUM);
	Stream->WriteInt32(parameter.STAR_REWARDS_NUM);
	Stream->WriteInt32(parameter.FREE_REWARDS_NUM);
	Stream->WriteInt64(parameter.WIN_REWARDS_1_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_2_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_3_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_4_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_5_UNLOCK_TIME);
	Stream->WriteInt64(parameter.LAST_STAR_REWARDS_ACQUIRE_TIME);
	Stream->WriteInt64(parameter.LAST_FREE_REWARDS_ACQUIRE_TIME);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_CELLPHONE_NO_LOGIN_FAIL_U(BYTE *buffer, S_PT_CELLPHONE_NO_LOGIN_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_VISITOR_DEFAULT_LOGIN(BYTE *buffer, S_PT_VISITOR_DEFAULT_LOGIN &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_VISITOR_DEFAULT_LOGIN_SUCC_U(BYTE *buffer, S_PT_VISITOR_DEFAULT_LOGIN_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteBytes((BYTE*) parameter.NICKNAME, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.BIND_ACCOUNT_TYPE, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.BIND_ACCOUNT, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.CELLPHONE_NO, sizeof(CHAR) * 32);
	Stream->WriteInt32(parameter.INTEGRAL_POINTS);
	Stream->WriteInt32(parameter.LEVEL);
	Stream->WriteInt32(parameter.DIAMONDS);
	Stream->WriteInt32(parameter.COINS);
	Stream->WriteInt32(parameter.WIN_TIMES);
	Stream->WriteInt32(parameter.BATTLE_TIMES);
	Stream->WriteFloat(parameter.WIN_RATE);
	Stream->WriteInt32(parameter.SHOT_DOWN_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_JUNIOR_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_MIDDLE_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_SENIOR_PLANES);
	Stream->WriteDWORD_PTR(parameter.SESSION_ID);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_PLANE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_PLANE);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_RADAR);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_RADAR);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_RADAR);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_CANNONBALL);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_CANNONBALL);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_CANNONBALL);
	Stream->WriteInt32(parameter.STAR_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_1_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_2_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_3_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_4_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_5_NUM);
	Stream->WriteInt32(parameter.STAR_REWARDS_NUM);
	Stream->WriteInt32(parameter.FREE_REWARDS_NUM);
	Stream->WriteInt64(parameter.WIN_REWARDS_1_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_2_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_3_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_4_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_5_UNLOCK_TIME);
	Stream->WriteInt64(parameter.LAST_STAR_REWARDS_ACQUIRE_TIME);
	Stream->WriteInt64(parameter.LAST_FREE_REWARDS_ACQUIRE_TIME);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_VISITOR_DEFAULT_LOGIN_FAIL_U(BYTE *buffer, S_PT_VISITOR_DEFAULT_LOGIN_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_USER_NAME_DEFAULT_LOGIN(BYTE *buffer, S_PT_USER_NAME_DEFAULT_LOGIN &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteBytes((BYTE*) parameter.USER_NAME, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_USER_NAME_DEFAULT_LOGIN_SUCC_U(BYTE *buffer, S_PT_USER_NAME_DEFAULT_LOGIN_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.INTEGRAL_POINTS);
	Stream->WriteInt32(parameter.LEVEL);
	Stream->WriteInt32(parameter.DIAMONDS);
	Stream->WriteInt32(parameter.COINS);
	Stream->WriteInt32(parameter.WIN_TIMES);
	Stream->WriteInt32(parameter.BATTLE_TIMES);
	Stream->WriteFloat(parameter.WIN_RATE);
	Stream->WriteInt32(parameter.SHOT_DOWN_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_JUNIOR_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_MIDDLE_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_SENIOR_PLANES);
	Stream->WriteDWORD_PTR(parameter.SESSION_ID);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_PLANE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_PLANE);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_RADAR);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_RADAR);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_RADAR);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_CANNONBALL);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_CANNONBALL);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_CANNONBALL);
	Stream->WriteInt32(parameter.STAR_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_1_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_2_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_3_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_4_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_5_NUM);
	Stream->WriteInt32(parameter.STAR_REWARDS_NUM);
	Stream->WriteInt32(parameter.FREE_REWARDS_NUM);
	Stream->WriteInt64(parameter.WIN_REWARDS_1_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_2_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_3_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_4_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_5_UNLOCK_TIME);
	Stream->WriteInt64(parameter.LAST_STAR_REWARDS_ACQUIRE_TIME);
	Stream->WriteInt64(parameter.LAST_FREE_REWARDS_ACQUIRE_TIME);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_USER_NAME_DEFAULT_LOGIN_FAIL_U(BYTE *buffer, S_PT_USER_NAME_DEFAULT_LOGIN_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BIND_ACCOUNT_DEFAULT_LOGIN(BYTE *buffer, S_PT_BIND_ACCOUNT_DEFAULT_LOGIN &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteBytes((BYTE*) parameter.BIND_ACCOUNT_TYPE, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.BIND_ACCOUNT, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BIND_ACCOUNT_DEFAULT_LOGIN_SUCC_U(BYTE *buffer, S_PT_BIND_ACCOUNT_DEFAULT_LOGIN_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.INTEGRAL_POINTS);
	Stream->WriteInt32(parameter.LEVEL);
	Stream->WriteInt32(parameter.DIAMONDS);
	Stream->WriteInt32(parameter.COINS);
	Stream->WriteInt32(parameter.WIN_TIMES);
	Stream->WriteInt32(parameter.BATTLE_TIMES);
	Stream->WriteFloat(parameter.WIN_RATE);
	Stream->WriteInt32(parameter.SHOT_DOWN_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_JUNIOR_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_MIDDLE_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_SENIOR_PLANES);
	Stream->WriteDWORD_PTR(parameter.SESSION_ID);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_PLANE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_PLANE);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_RADAR);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_RADAR);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_RADAR);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_CANNONBALL);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_CANNONBALL);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_CANNONBALL);
	Stream->WriteInt32(parameter.STAR_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_1_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_2_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_3_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_4_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_5_NUM);
	Stream->WriteInt32(parameter.STAR_REWARDS_NUM);
	Stream->WriteInt32(parameter.FREE_REWARDS_NUM);
	Stream->WriteInt64(parameter.WIN_REWARDS_1_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_2_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_3_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_4_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_5_UNLOCK_TIME);
	Stream->WriteInt64(parameter.LAST_STAR_REWARDS_ACQUIRE_TIME);
	Stream->WriteInt64(parameter.LAST_FREE_REWARDS_ACQUIRE_TIME);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BIND_ACCOUNT_DEFAULT_LOGIN_FAIL_U(BYTE *buffer, S_PT_BIND_ACCOUNT_DEFAULT_LOGIN_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_CELLPHONE_NO_DEFAULT_LOGIN(BYTE *buffer, S_PT_CELLPHONE_NO_DEFAULT_LOGIN &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteBytes((BYTE*) parameter.CELLPHONE_NO, sizeof(CHAR) * 32);
	Stream->WriteInt32(parameter.CONFIG_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_CELLPHONE_NO_DEFALUT_LOGIN_SUCC_U(BYTE *buffer, S_PT_CELLPHONE_NO_DEFALUT_LOGIN_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.INTEGRAL_POINTS);
	Stream->WriteInt32(parameter.LEVEL);
	Stream->WriteInt32(parameter.DIAMONDS);
	Stream->WriteInt32(parameter.COINS);
	Stream->WriteInt32(parameter.WIN_TIMES);
	Stream->WriteInt32(parameter.BATTLE_TIMES);
	Stream->WriteFloat(parameter.WIN_RATE);
	Stream->WriteInt32(parameter.SHOT_DOWN_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_JUNIOR_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_MIDDLE_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_SENIOR_PLANES);
	Stream->WriteDWORD_PTR(parameter.SESSION_ID);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_STEALTH_PLANE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_ANTI_STEALTH_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_MISSILE_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_RADAR_CARD);
	Stream->WriteInt32(parameter.NUM_OF_SENIOR_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.NUM_OF_MIDDLE_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.NUM_OF_JUNIOR_CANNONBALL_CARD);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_PLANE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_PLANE);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_STEALTH_PLANE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_ANTI_STEALTH_RADAR);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_MISSILE);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_RADAR);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_RADAR);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_RADAR);
	Stream->WriteInt32(parameter.LEVEL_SENIOR_CANNONBALL);
	Stream->WriteInt32(parameter.LEVEL_MIDDLE_CANNONBALL);
	Stream->WriteInt32(parameter.LEVEL_JUNIOR_CANNONBALL);
	Stream->WriteInt32(parameter.STAR_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_1_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_2_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_3_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_4_NUM);
	Stream->WriteInt32(parameter.WIN_REWARDS_5_NUM);
	Stream->WriteInt32(parameter.STAR_REWARDS_NUM);
	Stream->WriteInt32(parameter.FREE_REWARDS_NUM);
	Stream->WriteInt64(parameter.WIN_REWARDS_1_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_2_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_3_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_4_UNLOCK_TIME);
	Stream->WriteInt64(parameter.WIN_REWARDS_5_UNLOCK_TIME);
	Stream->WriteInt64(parameter.LAST_STAR_REWARDS_ACQUIRE_TIME);
	Stream->WriteInt64(parameter.LAST_FREE_REWARDS_ACQUIRE_TIME);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_CELLPHONE_NO_DEFAULT_LOGIN_FAIL_U(BYTE *buffer, S_PT_CELLPHONE_NO_DEFAULT_LOGIN_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_ADD_NICKNAME(BYTE *buffer, S_PT_ADD_NICKNAME &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteBytes((BYTE*) parameter.NICKNAME, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_ADD_NICKNAME_SUCC_U(BYTE *buffer, S_PT_ADD_NICKNAME_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteBytes((BYTE*) parameter.NICKNAME, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_ADD_NICKNAME_FAIL_U(BYTE *buffer, S_PT_ADD_NICKNAME_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_ADD_BIND_ACCOUNT(BYTE *buffer, S_PT_ADD_BIND_ACCOUNT &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteBytes((BYTE*) parameter.BIND_ACCOUNT_TYPE, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.BIND_ACCOUNT, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_ADD_BIND_ACCOUNT_SUCC_U(BYTE *buffer, S_PT_ADD_BIND_ACCOUNT_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteBytes((BYTE*) parameter.BIND_ACCOUNT_TYPE, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.BIND_ACCOUNT, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_ADD_BIND_ACCOUNT_FAIL_U(BYTE *buffer, S_PT_ADD_BIND_ACCOUNT_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_ADD_CELLPHONE_NO(BYTE *buffer, S_PT_ADD_CELLPHONE_NO &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteBytes((BYTE*) parameter.CELLPHONE_NO, sizeof(CHAR) * 32);
	Stream->WriteInt32(parameter.CONFIG_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_ADD_CELLPHONE_NO_SUCC_U(BYTE *buffer, S_PT_ADD_CELLPHONE_NO_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteBytes((BYTE*) parameter.CELLPHONE_NO, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_ADD_CELLPHONE_NO_FAIL_U(BYTE *buffer, S_PT_ADD_CELLPHONE_NO_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_UPDATE_PASSWORD(BYTE *buffer, S_PT_UPDATE_PASSWORD &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteBytes((BYTE*) parameter.OLD_PASSWORD, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.NEW_PASSWORD, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_UPDATE_PASSWORD_SUCC_U(BYTE *buffer, S_PT_UPDATE_PASSWORD_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteBytes((BYTE*) parameter.NEW_PASSWORD, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_UPDATE_PASSWORD_FAIL_U(BYTE *buffer, S_PT_UPDATE_PASSWORD_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_UPDATE_NICKNAME(BYTE *buffer, S_PT_UPDATE_NICKNAME &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteBytes((BYTE*) parameter.OLD_NICKNAME, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) parameter.NEW_NICKNAME, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_UPDATE_NICKNAME_SUCC_U(BYTE *buffer, S_PT_UPDATE_NICKNAME_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteBytes((BYTE*) parameter.NEW_NICKNAME, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_UPDATE_NICKNAME_FAIL_U(BYTE *buffer, S_PT_UPDATE_NICKNAME_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_UPDATE_CELLPHONE_NO(BYTE *buffer, S_PT_UPDATE_CELLPHONE_NO &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteBytes((BYTE*) parameter.NEW_CELLPHONE_NO, sizeof(CHAR) * 32);
	Stream->WriteInt32(parameter.CONFIG_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_UPDATE_CELLPHONE_NO_SUCC_U(BYTE *buffer, S_PT_UPDATE_CELLPHONE_NO_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteBytes((BYTE*) parameter.NEW_CELLPHONE_NO, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_UPDATE_CELLPHONE_NO_FAIL_U(BYTE *buffer, S_PT_UPDATE_CELLPHONE_NO_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_UPDATE_RECORD(BYTE *buffer, S_PT_UPDATE_RECORD &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.INTEGRAL_POINTS);
	Stream->WriteInt32(parameter.LEVEL);
	Stream->WriteInt32(parameter.DIAMONDS);
	Stream->WriteInt32(parameter.COINS);
	Stream->WriteInt32(parameter.WIN_TIMES);
	Stream->WriteInt32(parameter.BATTLE_TIMES);
	Stream->WriteFloat(parameter.WIN_RATE);
	Stream->WriteInt32(parameter.SHOT_DOWN_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_JUNIOR_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_MIDDLE_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_SENIOR_PLANES);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_UPDATE_RECORD_SUCC_U(BYTE *buffer, S_PT_UPDATE_RECORD_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.INTEGRAL_POINTS);
	Stream->WriteInt32(parameter.LEVEL);
	Stream->WriteInt32(parameter.DIAMONDS);
	Stream->WriteInt32(parameter.COINS);
	Stream->WriteInt32(parameter.WIN_TIMES);
	Stream->WriteInt32(parameter.BATTLE_TIMES);
	Stream->WriteFloat(parameter.WIN_RATE);
	Stream->WriteInt32(parameter.SHOT_DOWN_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_JUNIOR_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_MIDDLE_PLANES);
	Stream->WriteInt32(parameter.SHOT_DOWN_SENIOR_PLANES);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_UPDATE_RECORD_FAIL_U(BYTE *buffer, S_PT_UPDATE_RECORD_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_VISITOR_REGIST(BYTE *buffer)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);


	return Stream->GetLength();
}

inline DWORD WRITE_PT_VISITOR_REGIST_SUCC_U(BYTE *buffer, INT user_id, CHAR *nickname, CHAR *password, CHAR *bind_account_type, CHAR *bind_account, CHAR *cellphone_no, INT integral_points, INT level, INT diamonds, INT coins, INT win_times, INT battle_times, FLOAT win_rate, INT shot_down_planes, INT shot_down_junior_planes, INT shot_down_middle_planes, INT shot_down_senior_planes, DWORD_PTR session_id, INT num_of_junior_plane_card, INT num_of_middle_plane_card, INT num_of_senior_plane_card, INT num_of_junior_stealth_plane_card, INT num_of_middle_stealth_plane_card, INT num_of_senior_stealth_plane_card, INT num_of_senior_anti_stealth_radar_card, INT num_of_middle_anti_stealth_radar_card, INT num_of_junior_anti_stealth_radar_card, INT num_of_senior_missile_card, INT num_of_middle_missile_card, INT num_of_junior_missile_card, INT num_of_senior_radar_card, INT num_of_middle_radar_card, INT num_of_junior_radar_card, INT num_of_senior_cannonball_card, INT num_of_middle_cannonball_card, INT num_of_junior_cannonball_card, INT level_junior_plane, INT level_middle_plane, INT level_senior_plane, INT level_junior_stealth_plane, INT level_middle_stealth_plane, INT level_senior_stealth_plane, INT level_senior_anti_stealth_radar, INT level_middle_anti_stealth_radar, INT level_junior_anti_stealth_radar, INT level_senior_missile, INT level_middle_missile, INT level_junior_missile, INT level_senior_radar, INT level_middle_radar, INT level_junior_radar, INT level_senior_cannonball, INT level_middle_cannonball, INT level_junior_cannonball, INT star_num, INT win_rewards_1_num, INT win_rewards_2_num, INT win_rewards_3_num, INT win_rewards_4_num, INT win_rewards_5_num, INT star_rewards_num, INT free_rewards_num, INT64 win_rewards_1_unlock_time, INT64 win_rewards_2_unlock_time, INT64 win_rewards_3_unlock_time, INT64 win_rewards_4_unlock_time, INT64 win_rewards_5_unlock_time, INT64 last_star_rewards_acquire_time, INT64 last_free_rewards_acquire_time)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteBytes((BYTE*) nickname, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) password, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) bind_account_type, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) bind_account, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) cellphone_no, sizeof(CHAR) * 32);
	Stream->WriteInt32(integral_points);
	Stream->WriteInt32(level);
	Stream->WriteInt32(diamonds);
	Stream->WriteInt32(coins);
	Stream->WriteInt32(win_times);
	Stream->WriteInt32(battle_times);
	Stream->WriteFloat(win_rate);
	Stream->WriteInt32(shot_down_planes);
	Stream->WriteInt32(shot_down_junior_planes);
	Stream->WriteInt32(shot_down_middle_planes);
	Stream->WriteInt32(shot_down_senior_planes);
	Stream->WriteDWORD_PTR(session_id);
	Stream->WriteInt32(num_of_junior_plane_card);
	Stream->WriteInt32(num_of_middle_plane_card);
	Stream->WriteInt32(num_of_senior_plane_card);
	Stream->WriteInt32(num_of_junior_stealth_plane_card);
	Stream->WriteInt32(num_of_middle_stealth_plane_card);
	Stream->WriteInt32(num_of_senior_stealth_plane_card);
	Stream->WriteInt32(num_of_senior_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_middle_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_junior_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_senior_missile_card);
	Stream->WriteInt32(num_of_middle_missile_card);
	Stream->WriteInt32(num_of_junior_missile_card);
	Stream->WriteInt32(num_of_senior_radar_card);
	Stream->WriteInt32(num_of_middle_radar_card);
	Stream->WriteInt32(num_of_junior_radar_card);
	Stream->WriteInt32(num_of_senior_cannonball_card);
	Stream->WriteInt32(num_of_middle_cannonball_card);
	Stream->WriteInt32(num_of_junior_cannonball_card);
	Stream->WriteInt32(level_junior_plane);
	Stream->WriteInt32(level_middle_plane);
	Stream->WriteInt32(level_senior_plane);
	Stream->WriteInt32(level_junior_stealth_plane);
	Stream->WriteInt32(level_middle_stealth_plane);
	Stream->WriteInt32(level_senior_stealth_plane);
	Stream->WriteInt32(level_senior_anti_stealth_radar);
	Stream->WriteInt32(level_middle_anti_stealth_radar);
	Stream->WriteInt32(level_junior_anti_stealth_radar);
	Stream->WriteInt32(level_senior_missile);
	Stream->WriteInt32(level_middle_missile);
	Stream->WriteInt32(level_junior_missile);
	Stream->WriteInt32(level_senior_radar);
	Stream->WriteInt32(level_middle_radar);
	Stream->WriteInt32(level_junior_radar);
	Stream->WriteInt32(level_senior_cannonball);
	Stream->WriteInt32(level_middle_cannonball);
	Stream->WriteInt32(level_junior_cannonball);
	Stream->WriteInt32(star_num);
	Stream->WriteInt32(win_rewards_1_num);
	Stream->WriteInt32(win_rewards_2_num);
	Stream->WriteInt32(win_rewards_3_num);
	Stream->WriteInt32(win_rewards_4_num);
	Stream->WriteInt32(win_rewards_5_num);
	Stream->WriteInt32(star_rewards_num);
	Stream->WriteInt32(free_rewards_num);
	Stream->WriteInt64(win_rewards_1_unlock_time);
	Stream->WriteInt64(win_rewards_2_unlock_time);
	Stream->WriteInt64(win_rewards_3_unlock_time);
	Stream->WriteInt64(win_rewards_4_unlock_time);
	Stream->WriteInt64(win_rewards_5_unlock_time);
	Stream->WriteInt64(last_star_rewards_acquire_time);
	Stream->WriteInt64(last_free_rewards_acquire_time);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_VISITOR_REGIST_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_USER_NAME_REGIST(BYTE *buffer, CHAR *nickname, CHAR *password)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteBytes((BYTE*) nickname, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) password, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_USER_NAME_REGIST_SUCC_U(BYTE *buffer, INT user_id, CHAR *nickname, CHAR *password, CHAR *bind_account_type, CHAR *bind_account, CHAR *cellphone_no, INT integral_points, INT level, INT diamonds, INT coins, INT win_times, INT battle_times, FLOAT win_rate, INT shot_down_planes, INT shot_down_junior_planes, INT shot_down_middle_planes, INT shot_down_senior_planes, DWORD_PTR session_id, INT num_of_junior_plane_card, INT num_of_middle_plane_card, INT num_of_senior_plane_card, INT num_of_junior_stealth_plane_card, INT num_of_middle_stealth_plane_card, INT num_of_senior_stealth_plane_card, INT num_of_senior_anti_stealth_radar_card, INT num_of_middle_anti_stealth_radar_card, INT num_of_junior_anti_stealth_radar_card, INT num_of_senior_missile_card, INT num_of_middle_missile_card, INT num_of_junior_missile_card, INT num_of_senior_radar_card, INT num_of_middle_radar_card, INT num_of_junior_radar_card, INT num_of_senior_cannonball_card, INT num_of_middle_cannonball_card, INT num_of_junior_cannonball_card, INT level_junior_plane, INT level_middle_plane, INT level_senior_plane, INT level_junior_stealth_plane, INT level_middle_stealth_plane, INT level_senior_stealth_plane, INT level_senior_anti_stealth_radar, INT level_middle_anti_stealth_radar, INT level_junior_anti_stealth_radar, INT level_senior_missile, INT level_middle_missile, INT level_junior_missile, INT level_senior_radar, INT level_middle_radar, INT level_junior_radar, INT level_senior_cannonball, INT level_middle_cannonball, INT level_junior_cannonball, INT star_num, INT win_rewards_1_num, INT win_rewards_2_num, INT win_rewards_3_num, INT win_rewards_4_num, INT win_rewards_5_num, INT star_rewards_num, INT free_rewards_num, INT64 win_rewards_1_unlock_time, INT64 win_rewards_2_unlock_time, INT64 win_rewards_3_unlock_time, INT64 win_rewards_4_unlock_time, INT64 win_rewards_5_unlock_time, INT64 last_star_rewards_acquire_time, INT64 last_free_rewards_acquire_time)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteBytes((BYTE*) nickname, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) password, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) bind_account_type, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) bind_account, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) cellphone_no, sizeof(CHAR) * 32);
	Stream->WriteInt32(integral_points);
	Stream->WriteInt32(level);
	Stream->WriteInt32(diamonds);
	Stream->WriteInt32(coins);
	Stream->WriteInt32(win_times);
	Stream->WriteInt32(battle_times);
	Stream->WriteFloat(win_rate);
	Stream->WriteInt32(shot_down_planes);
	Stream->WriteInt32(shot_down_junior_planes);
	Stream->WriteInt32(shot_down_middle_planes);
	Stream->WriteInt32(shot_down_senior_planes);
	Stream->WriteDWORD_PTR(session_id);
	Stream->WriteInt32(num_of_junior_plane_card);
	Stream->WriteInt32(num_of_middle_plane_card);
	Stream->WriteInt32(num_of_senior_plane_card);
	Stream->WriteInt32(num_of_junior_stealth_plane_card);
	Stream->WriteInt32(num_of_middle_stealth_plane_card);
	Stream->WriteInt32(num_of_senior_stealth_plane_card);
	Stream->WriteInt32(num_of_senior_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_middle_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_junior_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_senior_missile_card);
	Stream->WriteInt32(num_of_middle_missile_card);
	Stream->WriteInt32(num_of_junior_missile_card);
	Stream->WriteInt32(num_of_senior_radar_card);
	Stream->WriteInt32(num_of_middle_radar_card);
	Stream->WriteInt32(num_of_junior_radar_card);
	Stream->WriteInt32(num_of_senior_cannonball_card);
	Stream->WriteInt32(num_of_middle_cannonball_card);
	Stream->WriteInt32(num_of_junior_cannonball_card);
	Stream->WriteInt32(level_junior_plane);
	Stream->WriteInt32(level_middle_plane);
	Stream->WriteInt32(level_senior_plane);
	Stream->WriteInt32(level_junior_stealth_plane);
	Stream->WriteInt32(level_middle_stealth_plane);
	Stream->WriteInt32(level_senior_stealth_plane);
	Stream->WriteInt32(level_senior_anti_stealth_radar);
	Stream->WriteInt32(level_middle_anti_stealth_radar);
	Stream->WriteInt32(level_junior_anti_stealth_radar);
	Stream->WriteInt32(level_senior_missile);
	Stream->WriteInt32(level_middle_missile);
	Stream->WriteInt32(level_junior_missile);
	Stream->WriteInt32(level_senior_radar);
	Stream->WriteInt32(level_middle_radar);
	Stream->WriteInt32(level_junior_radar);
	Stream->WriteInt32(level_senior_cannonball);
	Stream->WriteInt32(level_middle_cannonball);
	Stream->WriteInt32(level_junior_cannonball);
	Stream->WriteInt32(star_num);
	Stream->WriteInt32(win_rewards_1_num);
	Stream->WriteInt32(win_rewards_2_num);
	Stream->WriteInt32(win_rewards_3_num);
	Stream->WriteInt32(win_rewards_4_num);
	Stream->WriteInt32(win_rewards_5_num);
	Stream->WriteInt32(star_rewards_num);
	Stream->WriteInt32(free_rewards_num);
	Stream->WriteInt64(win_rewards_1_unlock_time);
	Stream->WriteInt64(win_rewards_2_unlock_time);
	Stream->WriteInt64(win_rewards_3_unlock_time);
	Stream->WriteInt64(win_rewards_4_unlock_time);
	Stream->WriteInt64(win_rewards_5_unlock_time);
	Stream->WriteInt64(last_star_rewards_acquire_time);
	Stream->WriteInt64(last_free_rewards_acquire_time);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_USER_NAME_REGIST_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BIND_ACCOUNT_REGIST(BYTE *buffer, CHAR *bind_account_type, CHAR *bind_account)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteBytes((BYTE*) bind_account_type, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) bind_account, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BIND_ACCOUNT_REGIST_SUCC_U(BYTE *buffer, INT user_id, CHAR *nickname, CHAR *password, CHAR *bind_account_type, CHAR *bind_account, CHAR *cellphone_no, INT integral_points, INT level, INT diamonds, INT coins, INT win_times, INT battle_times, FLOAT win_rate, INT shot_down_planes, INT shot_down_junior_planes, INT shot_down_middle_planes, INT shot_down_senior_planes, DWORD_PTR session_id, INT num_of_junior_plane_card, INT num_of_middle_plane_card, INT num_of_senior_plane_card, INT num_of_junior_stealth_plane_card, INT num_of_middle_stealth_plane_card, INT num_of_senior_stealth_plane_card, INT num_of_senior_anti_stealth_radar_card, INT num_of_middle_anti_stealth_radar_card, INT num_of_junior_anti_stealth_radar_card, INT num_of_senior_missile_card, INT num_of_middle_missile_card, INT num_of_junior_missile_card, INT num_of_senior_radar_card, INT num_of_middle_radar_card, INT num_of_junior_radar_card, INT num_of_senior_cannonball_card, INT num_of_middle_cannonball_card, INT num_of_junior_cannonball_card, INT level_junior_plane, INT level_middle_plane, INT level_senior_plane, INT level_junior_stealth_plane, INT level_middle_stealth_plane, INT level_senior_stealth_plane, INT level_senior_anti_stealth_radar, INT level_middle_anti_stealth_radar, INT level_junior_anti_stealth_radar, INT level_senior_missile, INT level_middle_missile, INT level_junior_missile, INT level_senior_radar, INT level_middle_radar, INT level_junior_radar, INT level_senior_cannonball, INT level_middle_cannonball, INT level_junior_cannonball, INT star_num, INT win_rewards_1_num, INT win_rewards_2_num, INT win_rewards_3_num, INT win_rewards_4_num, INT win_rewards_5_num, INT star_rewards_num, INT free_rewards_num, INT64 win_rewards_1_unlock_time, INT64 win_rewards_2_unlock_time, INT64 win_rewards_3_unlock_time, INT64 win_rewards_4_unlock_time, INT64 win_rewards_5_unlock_time, INT64 last_star_rewards_acquire_time, INT64 last_free_rewards_acquire_time)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteBytes((BYTE*) nickname, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) password, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) bind_account_type, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) bind_account, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) cellphone_no, sizeof(CHAR) * 32);
	Stream->WriteInt32(integral_points);
	Stream->WriteInt32(level);
	Stream->WriteInt32(diamonds);
	Stream->WriteInt32(coins);
	Stream->WriteInt32(win_times);
	Stream->WriteInt32(battle_times);
	Stream->WriteFloat(win_rate);
	Stream->WriteInt32(shot_down_planes);
	Stream->WriteInt32(shot_down_junior_planes);
	Stream->WriteInt32(shot_down_middle_planes);
	Stream->WriteInt32(shot_down_senior_planes);
	Stream->WriteDWORD_PTR(session_id);
	Stream->WriteInt32(num_of_junior_plane_card);
	Stream->WriteInt32(num_of_middle_plane_card);
	Stream->WriteInt32(num_of_senior_plane_card);
	Stream->WriteInt32(num_of_junior_stealth_plane_card);
	Stream->WriteInt32(num_of_middle_stealth_plane_card);
	Stream->WriteInt32(num_of_senior_stealth_plane_card);
	Stream->WriteInt32(num_of_senior_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_middle_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_junior_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_senior_missile_card);
	Stream->WriteInt32(num_of_middle_missile_card);
	Stream->WriteInt32(num_of_junior_missile_card);
	Stream->WriteInt32(num_of_senior_radar_card);
	Stream->WriteInt32(num_of_middle_radar_card);
	Stream->WriteInt32(num_of_junior_radar_card);
	Stream->WriteInt32(num_of_senior_cannonball_card);
	Stream->WriteInt32(num_of_middle_cannonball_card);
	Stream->WriteInt32(num_of_junior_cannonball_card);
	Stream->WriteInt32(level_junior_plane);
	Stream->WriteInt32(level_middle_plane);
	Stream->WriteInt32(level_senior_plane);
	Stream->WriteInt32(level_junior_stealth_plane);
	Stream->WriteInt32(level_middle_stealth_plane);
	Stream->WriteInt32(level_senior_stealth_plane);
	Stream->WriteInt32(level_senior_anti_stealth_radar);
	Stream->WriteInt32(level_middle_anti_stealth_radar);
	Stream->WriteInt32(level_junior_anti_stealth_radar);
	Stream->WriteInt32(level_senior_missile);
	Stream->WriteInt32(level_middle_missile);
	Stream->WriteInt32(level_junior_missile);
	Stream->WriteInt32(level_senior_radar);
	Stream->WriteInt32(level_middle_radar);
	Stream->WriteInt32(level_junior_radar);
	Stream->WriteInt32(level_senior_cannonball);
	Stream->WriteInt32(level_middle_cannonball);
	Stream->WriteInt32(level_junior_cannonball);
	Stream->WriteInt32(star_num);
	Stream->WriteInt32(win_rewards_1_num);
	Stream->WriteInt32(win_rewards_2_num);
	Stream->WriteInt32(win_rewards_3_num);
	Stream->WriteInt32(win_rewards_4_num);
	Stream->WriteInt32(win_rewards_5_num);
	Stream->WriteInt32(star_rewards_num);
	Stream->WriteInt32(free_rewards_num);
	Stream->WriteInt64(win_rewards_1_unlock_time);
	Stream->WriteInt64(win_rewards_2_unlock_time);
	Stream->WriteInt64(win_rewards_3_unlock_time);
	Stream->WriteInt64(win_rewards_4_unlock_time);
	Stream->WriteInt64(win_rewards_5_unlock_time);
	Stream->WriteInt64(last_star_rewards_acquire_time);
	Stream->WriteInt64(last_free_rewards_acquire_time);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BIND_ACCOUNT_REGIST_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_CELLPHONE_NO_REGIST(BYTE *buffer, CHAR *cellphone_no, INT config_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteBytes((BYTE*) cellphone_no, sizeof(CHAR) * 32);
	Stream->WriteInt32(config_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_CELLPHONE_NO_REGIST_SUCC_U(BYTE *buffer, INT user_id, CHAR *nickname, CHAR *password, CHAR *bind_account_type, CHAR *bind_account, CHAR *cellphone_no, INT integral_points, INT level, INT diamonds, INT coins, INT win_times, INT battle_times, FLOAT win_rate, INT shot_down_planes, INT shot_down_junior_planes, INT shot_down_middle_planes, INT shot_down_senior_planes, DWORD_PTR session_id, INT num_of_junior_plane_card, INT num_of_middle_plane_card, INT num_of_senior_plane_card, INT num_of_junior_stealth_plane_card, INT num_of_middle_stealth_plane_card, INT num_of_senior_stealth_plane_card, INT num_of_senior_anti_stealth_radar_card, INT num_of_middle_anti_stealth_radar_card, INT num_of_junior_anti_stealth_radar_card, INT num_of_senior_missile_card, INT num_of_middle_missile_card, INT num_of_junior_missile_card, INT num_of_senior_radar_card, INT num_of_middle_radar_card, INT num_of_junior_radar_card, INT num_of_senior_cannonball_card, INT num_of_middle_cannonball_card, INT num_of_junior_cannonball_card, INT level_junior_plane, INT level_middle_plane, INT level_senior_plane, INT level_junior_stealth_plane, INT level_middle_stealth_plane, INT level_senior_stealth_plane, INT level_senior_anti_stealth_radar, INT level_middle_anti_stealth_radar, INT level_junior_anti_stealth_radar, INT level_senior_missile, INT level_middle_missile, INT level_junior_missile, INT level_senior_radar, INT level_middle_radar, INT level_junior_radar, INT level_senior_cannonball, INT level_middle_cannonball, INT level_junior_cannonball, INT star_num, INT win_rewards_1_num, INT win_rewards_2_num, INT win_rewards_3_num, INT win_rewards_4_num, INT win_rewards_5_num, INT star_rewards_num, INT free_rewards_num, INT64 win_rewards_1_unlock_time, INT64 win_rewards_2_unlock_time, INT64 win_rewards_3_unlock_time, INT64 win_rewards_4_unlock_time, INT64 win_rewards_5_unlock_time, INT64 last_star_rewards_acquire_time, INT64 last_free_rewards_acquire_time)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteBytes((BYTE*) nickname, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) password, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) bind_account_type, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) bind_account, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) cellphone_no, sizeof(CHAR) * 32);
	Stream->WriteInt32(integral_points);
	Stream->WriteInt32(level);
	Stream->WriteInt32(diamonds);
	Stream->WriteInt32(coins);
	Stream->WriteInt32(win_times);
	Stream->WriteInt32(battle_times);
	Stream->WriteFloat(win_rate);
	Stream->WriteInt32(shot_down_planes);
	Stream->WriteInt32(shot_down_junior_planes);
	Stream->WriteInt32(shot_down_middle_planes);
	Stream->WriteInt32(shot_down_senior_planes);
	Stream->WriteDWORD_PTR(session_id);
	Stream->WriteInt32(num_of_junior_plane_card);
	Stream->WriteInt32(num_of_middle_plane_card);
	Stream->WriteInt32(num_of_senior_plane_card);
	Stream->WriteInt32(num_of_junior_stealth_plane_card);
	Stream->WriteInt32(num_of_middle_stealth_plane_card);
	Stream->WriteInt32(num_of_senior_stealth_plane_card);
	Stream->WriteInt32(num_of_senior_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_middle_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_junior_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_senior_missile_card);
	Stream->WriteInt32(num_of_middle_missile_card);
	Stream->WriteInt32(num_of_junior_missile_card);
	Stream->WriteInt32(num_of_senior_radar_card);
	Stream->WriteInt32(num_of_middle_radar_card);
	Stream->WriteInt32(num_of_junior_radar_card);
	Stream->WriteInt32(num_of_senior_cannonball_card);
	Stream->WriteInt32(num_of_middle_cannonball_card);
	Stream->WriteInt32(num_of_junior_cannonball_card);
	Stream->WriteInt32(level_junior_plane);
	Stream->WriteInt32(level_middle_plane);
	Stream->WriteInt32(level_senior_plane);
	Stream->WriteInt32(level_junior_stealth_plane);
	Stream->WriteInt32(level_middle_stealth_plane);
	Stream->WriteInt32(level_senior_stealth_plane);
	Stream->WriteInt32(level_senior_anti_stealth_radar);
	Stream->WriteInt32(level_middle_anti_stealth_radar);
	Stream->WriteInt32(level_junior_anti_stealth_radar);
	Stream->WriteInt32(level_senior_missile);
	Stream->WriteInt32(level_middle_missile);
	Stream->WriteInt32(level_junior_missile);
	Stream->WriteInt32(level_senior_radar);
	Stream->WriteInt32(level_middle_radar);
	Stream->WriteInt32(level_junior_radar);
	Stream->WriteInt32(level_senior_cannonball);
	Stream->WriteInt32(level_middle_cannonball);
	Stream->WriteInt32(level_junior_cannonball);
	Stream->WriteInt32(star_num);
	Stream->WriteInt32(win_rewards_1_num);
	Stream->WriteInt32(win_rewards_2_num);
	Stream->WriteInt32(win_rewards_3_num);
	Stream->WriteInt32(win_rewards_4_num);
	Stream->WriteInt32(win_rewards_5_num);
	Stream->WriteInt32(star_rewards_num);
	Stream->WriteInt32(free_rewards_num);
	Stream->WriteInt64(win_rewards_1_unlock_time);
	Stream->WriteInt64(win_rewards_2_unlock_time);
	Stream->WriteInt64(win_rewards_3_unlock_time);
	Stream->WriteInt64(win_rewards_4_unlock_time);
	Stream->WriteInt64(win_rewards_5_unlock_time);
	Stream->WriteInt64(last_star_rewards_acquire_time);
	Stream->WriteInt64(last_free_rewards_acquire_time);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_CELLPHONE_NO_REGIST_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_USER_NAME_LOGIN(BYTE *buffer, CHAR *user_name, CHAR *password)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteBytes((BYTE*) user_name, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) password, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_USER_NAME_LOGIN_SUCC_U(BYTE *buffer, INT user_id, CHAR *nickname, CHAR *password, CHAR *bind_account_type, CHAR *bind_account, CHAR *cellphone_no, INT integral_points, INT level, INT diamonds, INT coins, INT win_times, INT battle_times, FLOAT win_rate, INT shot_down_planes, INT shot_down_junior_planes, INT shot_down_middle_planes, INT shot_down_senior_planes, DWORD_PTR session_id, INT num_of_junior_plane_card, INT num_of_middle_plane_card, INT num_of_senior_plane_card, INT num_of_junior_stealth_plane_card, INT num_of_middle_stealth_plane_card, INT num_of_senior_stealth_plane_card, INT num_of_senior_anti_stealth_radar_card, INT num_of_middle_anti_stealth_radar_card, INT num_of_junior_anti_stealth_radar_card, INT num_of_senior_missile_card, INT num_of_middle_missile_card, INT num_of_junior_missile_card, INT num_of_senior_radar_card, INT num_of_middle_radar_card, INT num_of_junior_radar_card, INT num_of_senior_cannonball_card, INT num_of_middle_cannonball_card, INT num_of_junior_cannonball_card, INT level_junior_plane, INT level_middle_plane, INT level_senior_plane, INT level_junior_stealth_plane, INT level_middle_stealth_plane, INT level_senior_stealth_plane, INT level_senior_anti_stealth_radar, INT level_middle_anti_stealth_radar, INT level_junior_anti_stealth_radar, INT level_senior_missile, INT level_middle_missile, INT level_junior_missile, INT level_senior_radar, INT level_middle_radar, INT level_junior_radar, INT level_senior_cannonball, INT level_middle_cannonball, INT level_junior_cannonball, INT star_num, INT win_rewards_1_num, INT win_rewards_2_num, INT win_rewards_3_num, INT win_rewards_4_num, INT win_rewards_5_num, INT star_rewards_num, INT free_rewards_num, INT64 win_rewards_1_unlock_time, INT64 win_rewards_2_unlock_time, INT64 win_rewards_3_unlock_time, INT64 win_rewards_4_unlock_time, INT64 win_rewards_5_unlock_time, INT64 last_star_rewards_acquire_time, INT64 last_free_rewards_acquire_time)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteBytes((BYTE*) nickname, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) password, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) bind_account_type, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) bind_account, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) cellphone_no, sizeof(CHAR) * 32);
	Stream->WriteInt32(integral_points);
	Stream->WriteInt32(level);
	Stream->WriteInt32(diamonds);
	Stream->WriteInt32(coins);
	Stream->WriteInt32(win_times);
	Stream->WriteInt32(battle_times);
	Stream->WriteFloat(win_rate);
	Stream->WriteInt32(shot_down_planes);
	Stream->WriteInt32(shot_down_junior_planes);
	Stream->WriteInt32(shot_down_middle_planes);
	Stream->WriteInt32(shot_down_senior_planes);
	Stream->WriteDWORD_PTR(session_id);
	Stream->WriteInt32(num_of_junior_plane_card);
	Stream->WriteInt32(num_of_middle_plane_card);
	Stream->WriteInt32(num_of_senior_plane_card);
	Stream->WriteInt32(num_of_junior_stealth_plane_card);
	Stream->WriteInt32(num_of_middle_stealth_plane_card);
	Stream->WriteInt32(num_of_senior_stealth_plane_card);
	Stream->WriteInt32(num_of_senior_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_middle_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_junior_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_senior_missile_card);
	Stream->WriteInt32(num_of_middle_missile_card);
	Stream->WriteInt32(num_of_junior_missile_card);
	Stream->WriteInt32(num_of_senior_radar_card);
	Stream->WriteInt32(num_of_middle_radar_card);
	Stream->WriteInt32(num_of_junior_radar_card);
	Stream->WriteInt32(num_of_senior_cannonball_card);
	Stream->WriteInt32(num_of_middle_cannonball_card);
	Stream->WriteInt32(num_of_junior_cannonball_card);
	Stream->WriteInt32(level_junior_plane);
	Stream->WriteInt32(level_middle_plane);
	Stream->WriteInt32(level_senior_plane);
	Stream->WriteInt32(level_junior_stealth_plane);
	Stream->WriteInt32(level_middle_stealth_plane);
	Stream->WriteInt32(level_senior_stealth_plane);
	Stream->WriteInt32(level_senior_anti_stealth_radar);
	Stream->WriteInt32(level_middle_anti_stealth_radar);
	Stream->WriteInt32(level_junior_anti_stealth_radar);
	Stream->WriteInt32(level_senior_missile);
	Stream->WriteInt32(level_middle_missile);
	Stream->WriteInt32(level_junior_missile);
	Stream->WriteInt32(level_senior_radar);
	Stream->WriteInt32(level_middle_radar);
	Stream->WriteInt32(level_junior_radar);
	Stream->WriteInt32(level_senior_cannonball);
	Stream->WriteInt32(level_middle_cannonball);
	Stream->WriteInt32(level_junior_cannonball);
	Stream->WriteInt32(star_num);
	Stream->WriteInt32(win_rewards_1_num);
	Stream->WriteInt32(win_rewards_2_num);
	Stream->WriteInt32(win_rewards_3_num);
	Stream->WriteInt32(win_rewards_4_num);
	Stream->WriteInt32(win_rewards_5_num);
	Stream->WriteInt32(star_rewards_num);
	Stream->WriteInt32(free_rewards_num);
	Stream->WriteInt64(win_rewards_1_unlock_time);
	Stream->WriteInt64(win_rewards_2_unlock_time);
	Stream->WriteInt64(win_rewards_3_unlock_time);
	Stream->WriteInt64(win_rewards_4_unlock_time);
	Stream->WriteInt64(win_rewards_5_unlock_time);
	Stream->WriteInt64(last_star_rewards_acquire_time);
	Stream->WriteInt64(last_free_rewards_acquire_time);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_USER_NAME_LOGIN_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BIND_ACCOUNT_LOGIN(BYTE *buffer, CHAR *bind_account_type, CHAR *bind_account)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteBytes((BYTE*) bind_account_type, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) bind_account, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BIND_ACCOUNT_LOGIN_SUCC_U(BYTE *buffer, INT user_id, CHAR *nickname, CHAR *password, CHAR *bind_account_type, CHAR *bind_account, CHAR *cellphone_no, INT integral_points, INT level, INT diamonds, INT coins, INT win_times, INT battle_times, FLOAT win_rate, INT shot_down_planes, INT shot_down_junior_planes, INT shot_down_middle_planes, INT shot_down_senior_planes, DWORD_PTR session_id, INT num_of_junior_plane_card, INT num_of_middle_plane_card, INT num_of_senior_plane_card, INT num_of_junior_stealth_plane_card, INT num_of_middle_stealth_plane_card, INT num_of_senior_stealth_plane_card, INT num_of_senior_anti_stealth_radar_card, INT num_of_middle_anti_stealth_radar_card, INT num_of_junior_anti_stealth_radar_card, INT num_of_senior_missile_card, INT num_of_middle_missile_card, INT num_of_junior_missile_card, INT num_of_senior_radar_card, INT num_of_middle_radar_card, INT num_of_junior_radar_card, INT num_of_senior_cannonball_card, INT num_of_middle_cannonball_card, INT num_of_junior_cannonball_card, INT level_junior_plane, INT level_middle_plane, INT level_senior_plane, INT level_junior_stealth_plane, INT level_middle_stealth_plane, INT level_senior_stealth_plane, INT level_senior_anti_stealth_radar, INT level_middle_anti_stealth_radar, INT level_junior_anti_stealth_radar, INT level_senior_missile, INT level_middle_missile, INT level_junior_missile, INT level_senior_radar, INT level_middle_radar, INT level_junior_radar, INT level_senior_cannonball, INT level_middle_cannonball, INT level_junior_cannonball, INT star_num, INT win_rewards_1_num, INT win_rewards_2_num, INT win_rewards_3_num, INT win_rewards_4_num, INT win_rewards_5_num, INT star_rewards_num, INT free_rewards_num, INT64 win_rewards_1_unlock_time, INT64 win_rewards_2_unlock_time, INT64 win_rewards_3_unlock_time, INT64 win_rewards_4_unlock_time, INT64 win_rewards_5_unlock_time, INT64 last_star_rewards_acquire_time, INT64 last_free_rewards_acquire_time)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteBytes((BYTE*) nickname, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) password, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) bind_account_type, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) bind_account, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) cellphone_no, sizeof(CHAR) * 32);
	Stream->WriteInt32(integral_points);
	Stream->WriteInt32(level);
	Stream->WriteInt32(diamonds);
	Stream->WriteInt32(coins);
	Stream->WriteInt32(win_times);
	Stream->WriteInt32(battle_times);
	Stream->WriteFloat(win_rate);
	Stream->WriteInt32(shot_down_planes);
	Stream->WriteInt32(shot_down_junior_planes);
	Stream->WriteInt32(shot_down_middle_planes);
	Stream->WriteInt32(shot_down_senior_planes);
	Stream->WriteDWORD_PTR(session_id);
	Stream->WriteInt32(num_of_junior_plane_card);
	Stream->WriteInt32(num_of_middle_plane_card);
	Stream->WriteInt32(num_of_senior_plane_card);
	Stream->WriteInt32(num_of_junior_stealth_plane_card);
	Stream->WriteInt32(num_of_middle_stealth_plane_card);
	Stream->WriteInt32(num_of_senior_stealth_plane_card);
	Stream->WriteInt32(num_of_senior_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_middle_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_junior_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_senior_missile_card);
	Stream->WriteInt32(num_of_middle_missile_card);
	Stream->WriteInt32(num_of_junior_missile_card);
	Stream->WriteInt32(num_of_senior_radar_card);
	Stream->WriteInt32(num_of_middle_radar_card);
	Stream->WriteInt32(num_of_junior_radar_card);
	Stream->WriteInt32(num_of_senior_cannonball_card);
	Stream->WriteInt32(num_of_middle_cannonball_card);
	Stream->WriteInt32(num_of_junior_cannonball_card);
	Stream->WriteInt32(level_junior_plane);
	Stream->WriteInt32(level_middle_plane);
	Stream->WriteInt32(level_senior_plane);
	Stream->WriteInt32(level_junior_stealth_plane);
	Stream->WriteInt32(level_middle_stealth_plane);
	Stream->WriteInt32(level_senior_stealth_plane);
	Stream->WriteInt32(level_senior_anti_stealth_radar);
	Stream->WriteInt32(level_middle_anti_stealth_radar);
	Stream->WriteInt32(level_junior_anti_stealth_radar);
	Stream->WriteInt32(level_senior_missile);
	Stream->WriteInt32(level_middle_missile);
	Stream->WriteInt32(level_junior_missile);
	Stream->WriteInt32(level_senior_radar);
	Stream->WriteInt32(level_middle_radar);
	Stream->WriteInt32(level_junior_radar);
	Stream->WriteInt32(level_senior_cannonball);
	Stream->WriteInt32(level_middle_cannonball);
	Stream->WriteInt32(level_junior_cannonball);
	Stream->WriteInt32(star_num);
	Stream->WriteInt32(win_rewards_1_num);
	Stream->WriteInt32(win_rewards_2_num);
	Stream->WriteInt32(win_rewards_3_num);
	Stream->WriteInt32(win_rewards_4_num);
	Stream->WriteInt32(win_rewards_5_num);
	Stream->WriteInt32(star_rewards_num);
	Stream->WriteInt32(free_rewards_num);
	Stream->WriteInt64(win_rewards_1_unlock_time);
	Stream->WriteInt64(win_rewards_2_unlock_time);
	Stream->WriteInt64(win_rewards_3_unlock_time);
	Stream->WriteInt64(win_rewards_4_unlock_time);
	Stream->WriteInt64(win_rewards_5_unlock_time);
	Stream->WriteInt64(last_star_rewards_acquire_time);
	Stream->WriteInt64(last_free_rewards_acquire_time);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BIND_ACCOUNT_LOGIN_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_CELLPHONE_NO_LOGIN(BYTE *buffer, CHAR *cellphone_no, INT config_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteBytes((BYTE*) cellphone_no, sizeof(CHAR) * 32);
	Stream->WriteInt32(config_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_CELLPHONE_NO_LOGIN_SUCC_U(BYTE *buffer, INT user_id, CHAR *nickname, CHAR *password, CHAR *bind_account_type, CHAR *bind_account, CHAR *cellphone_no, INT integral_points, INT level, INT diamonds, INT coins, INT win_times, INT battle_times, FLOAT win_rate, INT shot_down_planes, INT shot_down_junior_planes, INT shot_down_middle_planes, INT shot_down_senior_planes, DWORD_PTR session_id, INT num_of_junior_plane_card, INT num_of_middle_plane_card, INT num_of_senior_plane_card, INT num_of_junior_stealth_plane_card, INT num_of_middle_stealth_plane_card, INT num_of_senior_stealth_plane_card, INT num_of_senior_anti_stealth_radar_card, INT num_of_middle_anti_stealth_radar_card, INT num_of_junior_anti_stealth_radar_card, INT num_of_senior_missile_card, INT num_of_middle_missile_card, INT num_of_junior_missile_card, INT num_of_senior_radar_card, INT num_of_middle_radar_card, INT num_of_junior_radar_card, INT num_of_senior_cannonball_card, INT num_of_middle_cannonball_card, INT num_of_junior_cannonball_card, INT level_junior_plane, INT level_middle_plane, INT level_senior_plane, INT level_junior_stealth_plane, INT level_middle_stealth_plane, INT level_senior_stealth_plane, INT level_senior_anti_stealth_radar, INT level_middle_anti_stealth_radar, INT level_junior_anti_stealth_radar, INT level_senior_missile, INT level_middle_missile, INT level_junior_missile, INT level_senior_radar, INT level_middle_radar, INT level_junior_radar, INT level_senior_cannonball, INT level_middle_cannonball, INT level_junior_cannonball, INT star_num, INT win_rewards_1_num, INT win_rewards_2_num, INT win_rewards_3_num, INT win_rewards_4_num, INT win_rewards_5_num, INT star_rewards_num, INT free_rewards_num, INT64 win_rewards_1_unlock_time, INT64 win_rewards_2_unlock_time, INT64 win_rewards_3_unlock_time, INT64 win_rewards_4_unlock_time, INT64 win_rewards_5_unlock_time, INT64 last_star_rewards_acquire_time, INT64 last_free_rewards_acquire_time)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteBytes((BYTE*) nickname, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) password, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) bind_account_type, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) bind_account, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) cellphone_no, sizeof(CHAR) * 32);
	Stream->WriteInt32(integral_points);
	Stream->WriteInt32(level);
	Stream->WriteInt32(diamonds);
	Stream->WriteInt32(coins);
	Stream->WriteInt32(win_times);
	Stream->WriteInt32(battle_times);
	Stream->WriteFloat(win_rate);
	Stream->WriteInt32(shot_down_planes);
	Stream->WriteInt32(shot_down_junior_planes);
	Stream->WriteInt32(shot_down_middle_planes);
	Stream->WriteInt32(shot_down_senior_planes);
	Stream->WriteDWORD_PTR(session_id);
	Stream->WriteInt32(num_of_junior_plane_card);
	Stream->WriteInt32(num_of_middle_plane_card);
	Stream->WriteInt32(num_of_senior_plane_card);
	Stream->WriteInt32(num_of_junior_stealth_plane_card);
	Stream->WriteInt32(num_of_middle_stealth_plane_card);
	Stream->WriteInt32(num_of_senior_stealth_plane_card);
	Stream->WriteInt32(num_of_senior_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_middle_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_junior_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_senior_missile_card);
	Stream->WriteInt32(num_of_middle_missile_card);
	Stream->WriteInt32(num_of_junior_missile_card);
	Stream->WriteInt32(num_of_senior_radar_card);
	Stream->WriteInt32(num_of_middle_radar_card);
	Stream->WriteInt32(num_of_junior_radar_card);
	Stream->WriteInt32(num_of_senior_cannonball_card);
	Stream->WriteInt32(num_of_middle_cannonball_card);
	Stream->WriteInt32(num_of_junior_cannonball_card);
	Stream->WriteInt32(level_junior_plane);
	Stream->WriteInt32(level_middle_plane);
	Stream->WriteInt32(level_senior_plane);
	Stream->WriteInt32(level_junior_stealth_plane);
	Stream->WriteInt32(level_middle_stealth_plane);
	Stream->WriteInt32(level_senior_stealth_plane);
	Stream->WriteInt32(level_senior_anti_stealth_radar);
	Stream->WriteInt32(level_middle_anti_stealth_radar);
	Stream->WriteInt32(level_junior_anti_stealth_radar);
	Stream->WriteInt32(level_senior_missile);
	Stream->WriteInt32(level_middle_missile);
	Stream->WriteInt32(level_junior_missile);
	Stream->WriteInt32(level_senior_radar);
	Stream->WriteInt32(level_middle_radar);
	Stream->WriteInt32(level_junior_radar);
	Stream->WriteInt32(level_senior_cannonball);
	Stream->WriteInt32(level_middle_cannonball);
	Stream->WriteInt32(level_junior_cannonball);
	Stream->WriteInt32(star_num);
	Stream->WriteInt32(win_rewards_1_num);
	Stream->WriteInt32(win_rewards_2_num);
	Stream->WriteInt32(win_rewards_3_num);
	Stream->WriteInt32(win_rewards_4_num);
	Stream->WriteInt32(win_rewards_5_num);
	Stream->WriteInt32(star_rewards_num);
	Stream->WriteInt32(free_rewards_num);
	Stream->WriteInt64(win_rewards_1_unlock_time);
	Stream->WriteInt64(win_rewards_2_unlock_time);
	Stream->WriteInt64(win_rewards_3_unlock_time);
	Stream->WriteInt64(win_rewards_4_unlock_time);
	Stream->WriteInt64(win_rewards_5_unlock_time);
	Stream->WriteInt64(last_star_rewards_acquire_time);
	Stream->WriteInt64(last_free_rewards_acquire_time);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_CELLPHONE_NO_LOGIN_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_VISITOR_DEFAULT_LOGIN(BYTE *buffer, INT user_id, CHAR *password)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteBytes((BYTE*) password, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_VISITOR_DEFAULT_LOGIN_SUCC_U(BYTE *buffer, INT user_id, CHAR *nickname, CHAR *password, CHAR *bind_account_type, CHAR *bind_account, CHAR *cellphone_no, INT integral_points, INT level, INT diamonds, INT coins, INT win_times, INT battle_times, FLOAT win_rate, INT shot_down_planes, INT shot_down_junior_planes, INT shot_down_middle_planes, INT shot_down_senior_planes, DWORD_PTR session_id, INT num_of_junior_plane_card, INT num_of_middle_plane_card, INT num_of_senior_plane_card, INT num_of_junior_stealth_plane_card, INT num_of_middle_stealth_plane_card, INT num_of_senior_stealth_plane_card, INT num_of_senior_anti_stealth_radar_card, INT num_of_middle_anti_stealth_radar_card, INT num_of_junior_anti_stealth_radar_card, INT num_of_senior_missile_card, INT num_of_middle_missile_card, INT num_of_junior_missile_card, INT num_of_senior_radar_card, INT num_of_middle_radar_card, INT num_of_junior_radar_card, INT num_of_senior_cannonball_card, INT num_of_middle_cannonball_card, INT num_of_junior_cannonball_card, INT level_junior_plane, INT level_middle_plane, INT level_senior_plane, INT level_junior_stealth_plane, INT level_middle_stealth_plane, INT level_senior_stealth_plane, INT level_senior_anti_stealth_radar, INT level_middle_anti_stealth_radar, INT level_junior_anti_stealth_radar, INT level_senior_missile, INT level_middle_missile, INT level_junior_missile, INT level_senior_radar, INT level_middle_radar, INT level_junior_radar, INT level_senior_cannonball, INT level_middle_cannonball, INT level_junior_cannonball, INT star_num, INT win_rewards_1_num, INT win_rewards_2_num, INT win_rewards_3_num, INT win_rewards_4_num, INT win_rewards_5_num, INT star_rewards_num, INT free_rewards_num, INT64 win_rewards_1_unlock_time, INT64 win_rewards_2_unlock_time, INT64 win_rewards_3_unlock_time, INT64 win_rewards_4_unlock_time, INT64 win_rewards_5_unlock_time, INT64 last_star_rewards_acquire_time, INT64 last_free_rewards_acquire_time)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteBytes((BYTE*) nickname, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) password, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) bind_account_type, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) bind_account, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) cellphone_no, sizeof(CHAR) * 32);
	Stream->WriteInt32(integral_points);
	Stream->WriteInt32(level);
	Stream->WriteInt32(diamonds);
	Stream->WriteInt32(coins);
	Stream->WriteInt32(win_times);
	Stream->WriteInt32(battle_times);
	Stream->WriteFloat(win_rate);
	Stream->WriteInt32(shot_down_planes);
	Stream->WriteInt32(shot_down_junior_planes);
	Stream->WriteInt32(shot_down_middle_planes);
	Stream->WriteInt32(shot_down_senior_planes);
	Stream->WriteDWORD_PTR(session_id);
	Stream->WriteInt32(num_of_junior_plane_card);
	Stream->WriteInt32(num_of_middle_plane_card);
	Stream->WriteInt32(num_of_senior_plane_card);
	Stream->WriteInt32(num_of_junior_stealth_plane_card);
	Stream->WriteInt32(num_of_middle_stealth_plane_card);
	Stream->WriteInt32(num_of_senior_stealth_plane_card);
	Stream->WriteInt32(num_of_senior_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_middle_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_junior_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_senior_missile_card);
	Stream->WriteInt32(num_of_middle_missile_card);
	Stream->WriteInt32(num_of_junior_missile_card);
	Stream->WriteInt32(num_of_senior_radar_card);
	Stream->WriteInt32(num_of_middle_radar_card);
	Stream->WriteInt32(num_of_junior_radar_card);
	Stream->WriteInt32(num_of_senior_cannonball_card);
	Stream->WriteInt32(num_of_middle_cannonball_card);
	Stream->WriteInt32(num_of_junior_cannonball_card);
	Stream->WriteInt32(level_junior_plane);
	Stream->WriteInt32(level_middle_plane);
	Stream->WriteInt32(level_senior_plane);
	Stream->WriteInt32(level_junior_stealth_plane);
	Stream->WriteInt32(level_middle_stealth_plane);
	Stream->WriteInt32(level_senior_stealth_plane);
	Stream->WriteInt32(level_senior_anti_stealth_radar);
	Stream->WriteInt32(level_middle_anti_stealth_radar);
	Stream->WriteInt32(level_junior_anti_stealth_radar);
	Stream->WriteInt32(level_senior_missile);
	Stream->WriteInt32(level_middle_missile);
	Stream->WriteInt32(level_junior_missile);
	Stream->WriteInt32(level_senior_radar);
	Stream->WriteInt32(level_middle_radar);
	Stream->WriteInt32(level_junior_radar);
	Stream->WriteInt32(level_senior_cannonball);
	Stream->WriteInt32(level_middle_cannonball);
	Stream->WriteInt32(level_junior_cannonball);
	Stream->WriteInt32(star_num);
	Stream->WriteInt32(win_rewards_1_num);
	Stream->WriteInt32(win_rewards_2_num);
	Stream->WriteInt32(win_rewards_3_num);
	Stream->WriteInt32(win_rewards_4_num);
	Stream->WriteInt32(win_rewards_5_num);
	Stream->WriteInt32(star_rewards_num);
	Stream->WriteInt32(free_rewards_num);
	Stream->WriteInt64(win_rewards_1_unlock_time);
	Stream->WriteInt64(win_rewards_2_unlock_time);
	Stream->WriteInt64(win_rewards_3_unlock_time);
	Stream->WriteInt64(win_rewards_4_unlock_time);
	Stream->WriteInt64(win_rewards_5_unlock_time);
	Stream->WriteInt64(last_star_rewards_acquire_time);
	Stream->WriteInt64(last_free_rewards_acquire_time);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_VISITOR_DEFAULT_LOGIN_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_USER_NAME_DEFAULT_LOGIN(BYTE *buffer, INT user_id, CHAR *user_name, CHAR *password)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteBytes((BYTE*) user_name, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) password, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_USER_NAME_DEFAULT_LOGIN_SUCC_U(BYTE *buffer, INT integral_points, INT level, INT diamonds, INT coins, INT win_times, INT battle_times, FLOAT win_rate, INT shot_down_planes, INT shot_down_junior_planes, INT shot_down_middle_planes, INT shot_down_senior_planes, DWORD_PTR session_id, INT num_of_junior_plane_card, INT num_of_middle_plane_card, INT num_of_senior_plane_card, INT num_of_junior_stealth_plane_card, INT num_of_middle_stealth_plane_card, INT num_of_senior_stealth_plane_card, INT num_of_senior_anti_stealth_radar_card, INT num_of_middle_anti_stealth_radar_card, INT num_of_junior_anti_stealth_radar_card, INT num_of_senior_missile_card, INT num_of_middle_missile_card, INT num_of_junior_missile_card, INT num_of_senior_radar_card, INT num_of_middle_radar_card, INT num_of_junior_radar_card, INT num_of_senior_cannonball_card, INT num_of_middle_cannonball_card, INT num_of_junior_cannonball_card, INT level_junior_plane, INT level_middle_plane, INT level_senior_plane, INT level_junior_stealth_plane, INT level_middle_stealth_plane, INT level_senior_stealth_plane, INT level_senior_anti_stealth_radar, INT level_middle_anti_stealth_radar, INT level_junior_anti_stealth_radar, INT level_senior_missile, INT level_middle_missile, INT level_junior_missile, INT level_senior_radar, INT level_middle_radar, INT level_junior_radar, INT level_senior_cannonball, INT level_middle_cannonball, INT level_junior_cannonball, INT star_num, INT win_rewards_1_num, INT win_rewards_2_num, INT win_rewards_3_num, INT win_rewards_4_num, INT win_rewards_5_num, INT star_rewards_num, INT free_rewards_num, INT64 win_rewards_1_unlock_time, INT64 win_rewards_2_unlock_time, INT64 win_rewards_3_unlock_time, INT64 win_rewards_4_unlock_time, INT64 win_rewards_5_unlock_time, INT64 last_star_rewards_acquire_time, INT64 last_free_rewards_acquire_time)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(integral_points);
	Stream->WriteInt32(level);
	Stream->WriteInt32(diamonds);
	Stream->WriteInt32(coins);
	Stream->WriteInt32(win_times);
	Stream->WriteInt32(battle_times);
	Stream->WriteFloat(win_rate);
	Stream->WriteInt32(shot_down_planes);
	Stream->WriteInt32(shot_down_junior_planes);
	Stream->WriteInt32(shot_down_middle_planes);
	Stream->WriteInt32(shot_down_senior_planes);
	Stream->WriteDWORD_PTR(session_id);
	Stream->WriteInt32(num_of_junior_plane_card);
	Stream->WriteInt32(num_of_middle_plane_card);
	Stream->WriteInt32(num_of_senior_plane_card);
	Stream->WriteInt32(num_of_junior_stealth_plane_card);
	Stream->WriteInt32(num_of_middle_stealth_plane_card);
	Stream->WriteInt32(num_of_senior_stealth_plane_card);
	Stream->WriteInt32(num_of_senior_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_middle_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_junior_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_senior_missile_card);
	Stream->WriteInt32(num_of_middle_missile_card);
	Stream->WriteInt32(num_of_junior_missile_card);
	Stream->WriteInt32(num_of_senior_radar_card);
	Stream->WriteInt32(num_of_middle_radar_card);
	Stream->WriteInt32(num_of_junior_radar_card);
	Stream->WriteInt32(num_of_senior_cannonball_card);
	Stream->WriteInt32(num_of_middle_cannonball_card);
	Stream->WriteInt32(num_of_junior_cannonball_card);
	Stream->WriteInt32(level_junior_plane);
	Stream->WriteInt32(level_middle_plane);
	Stream->WriteInt32(level_senior_plane);
	Stream->WriteInt32(level_junior_stealth_plane);
	Stream->WriteInt32(level_middle_stealth_plane);
	Stream->WriteInt32(level_senior_stealth_plane);
	Stream->WriteInt32(level_senior_anti_stealth_radar);
	Stream->WriteInt32(level_middle_anti_stealth_radar);
	Stream->WriteInt32(level_junior_anti_stealth_radar);
	Stream->WriteInt32(level_senior_missile);
	Stream->WriteInt32(level_middle_missile);
	Stream->WriteInt32(level_junior_missile);
	Stream->WriteInt32(level_senior_radar);
	Stream->WriteInt32(level_middle_radar);
	Stream->WriteInt32(level_junior_radar);
	Stream->WriteInt32(level_senior_cannonball);
	Stream->WriteInt32(level_middle_cannonball);
	Stream->WriteInt32(level_junior_cannonball);
	Stream->WriteInt32(star_num);
	Stream->WriteInt32(win_rewards_1_num);
	Stream->WriteInt32(win_rewards_2_num);
	Stream->WriteInt32(win_rewards_3_num);
	Stream->WriteInt32(win_rewards_4_num);
	Stream->WriteInt32(win_rewards_5_num);
	Stream->WriteInt32(star_rewards_num);
	Stream->WriteInt32(free_rewards_num);
	Stream->WriteInt64(win_rewards_1_unlock_time);
	Stream->WriteInt64(win_rewards_2_unlock_time);
	Stream->WriteInt64(win_rewards_3_unlock_time);
	Stream->WriteInt64(win_rewards_4_unlock_time);
	Stream->WriteInt64(win_rewards_5_unlock_time);
	Stream->WriteInt64(last_star_rewards_acquire_time);
	Stream->WriteInt64(last_free_rewards_acquire_time);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_USER_NAME_DEFAULT_LOGIN_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BIND_ACCOUNT_DEFAULT_LOGIN(BYTE *buffer, INT user_id, CHAR *bind_account_type, CHAR *bind_account)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteBytes((BYTE*) bind_account_type, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) bind_account, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BIND_ACCOUNT_DEFAULT_LOGIN_SUCC_U(BYTE *buffer, INT integral_points, INT level, INT diamonds, INT coins, INT win_times, INT battle_times, FLOAT win_rate, INT shot_down_planes, INT shot_down_junior_planes, INT shot_down_middle_planes, INT shot_down_senior_planes, DWORD_PTR session_id, INT num_of_junior_plane_card, INT num_of_middle_plane_card, INT num_of_senior_plane_card, INT num_of_junior_stealth_plane_card, INT num_of_middle_stealth_plane_card, INT num_of_senior_stealth_plane_card, INT num_of_senior_anti_stealth_radar_card, INT num_of_middle_anti_stealth_radar_card, INT num_of_junior_anti_stealth_radar_card, INT num_of_senior_missile_card, INT num_of_middle_missile_card, INT num_of_junior_missile_card, INT num_of_senior_radar_card, INT num_of_middle_radar_card, INT num_of_junior_radar_card, INT num_of_senior_cannonball_card, INT num_of_middle_cannonball_card, INT num_of_junior_cannonball_card, INT level_junior_plane, INT level_middle_plane, INT level_senior_plane, INT level_junior_stealth_plane, INT level_middle_stealth_plane, INT level_senior_stealth_plane, INT level_senior_anti_stealth_radar, INT level_middle_anti_stealth_radar, INT level_junior_anti_stealth_radar, INT level_senior_missile, INT level_middle_missile, INT level_junior_missile, INT level_senior_radar, INT level_middle_radar, INT level_junior_radar, INT level_senior_cannonball, INT level_middle_cannonball, INT level_junior_cannonball, INT star_num, INT win_rewards_1_num, INT win_rewards_2_num, INT win_rewards_3_num, INT win_rewards_4_num, INT win_rewards_5_num, INT star_rewards_num, INT free_rewards_num, INT64 win_rewards_1_unlock_time, INT64 win_rewards_2_unlock_time, INT64 win_rewards_3_unlock_time, INT64 win_rewards_4_unlock_time, INT64 win_rewards_5_unlock_time, INT64 last_star_rewards_acquire_time, INT64 last_free_rewards_acquire_time)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(integral_points);
	Stream->WriteInt32(level);
	Stream->WriteInt32(diamonds);
	Stream->WriteInt32(coins);
	Stream->WriteInt32(win_times);
	Stream->WriteInt32(battle_times);
	Stream->WriteFloat(win_rate);
	Stream->WriteInt32(shot_down_planes);
	Stream->WriteInt32(shot_down_junior_planes);
	Stream->WriteInt32(shot_down_middle_planes);
	Stream->WriteInt32(shot_down_senior_planes);
	Stream->WriteDWORD_PTR(session_id);
	Stream->WriteInt32(num_of_junior_plane_card);
	Stream->WriteInt32(num_of_middle_plane_card);
	Stream->WriteInt32(num_of_senior_plane_card);
	Stream->WriteInt32(num_of_junior_stealth_plane_card);
	Stream->WriteInt32(num_of_middle_stealth_plane_card);
	Stream->WriteInt32(num_of_senior_stealth_plane_card);
	Stream->WriteInt32(num_of_senior_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_middle_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_junior_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_senior_missile_card);
	Stream->WriteInt32(num_of_middle_missile_card);
	Stream->WriteInt32(num_of_junior_missile_card);
	Stream->WriteInt32(num_of_senior_radar_card);
	Stream->WriteInt32(num_of_middle_radar_card);
	Stream->WriteInt32(num_of_junior_radar_card);
	Stream->WriteInt32(num_of_senior_cannonball_card);
	Stream->WriteInt32(num_of_middle_cannonball_card);
	Stream->WriteInt32(num_of_junior_cannonball_card);
	Stream->WriteInt32(level_junior_plane);
	Stream->WriteInt32(level_middle_plane);
	Stream->WriteInt32(level_senior_plane);
	Stream->WriteInt32(level_junior_stealth_plane);
	Stream->WriteInt32(level_middle_stealth_plane);
	Stream->WriteInt32(level_senior_stealth_plane);
	Stream->WriteInt32(level_senior_anti_stealth_radar);
	Stream->WriteInt32(level_middle_anti_stealth_radar);
	Stream->WriteInt32(level_junior_anti_stealth_radar);
	Stream->WriteInt32(level_senior_missile);
	Stream->WriteInt32(level_middle_missile);
	Stream->WriteInt32(level_junior_missile);
	Stream->WriteInt32(level_senior_radar);
	Stream->WriteInt32(level_middle_radar);
	Stream->WriteInt32(level_junior_radar);
	Stream->WriteInt32(level_senior_cannonball);
	Stream->WriteInt32(level_middle_cannonball);
	Stream->WriteInt32(level_junior_cannonball);
	Stream->WriteInt32(star_num);
	Stream->WriteInt32(win_rewards_1_num);
	Stream->WriteInt32(win_rewards_2_num);
	Stream->WriteInt32(win_rewards_3_num);
	Stream->WriteInt32(win_rewards_4_num);
	Stream->WriteInt32(win_rewards_5_num);
	Stream->WriteInt32(star_rewards_num);
	Stream->WriteInt32(free_rewards_num);
	Stream->WriteInt64(win_rewards_1_unlock_time);
	Stream->WriteInt64(win_rewards_2_unlock_time);
	Stream->WriteInt64(win_rewards_3_unlock_time);
	Stream->WriteInt64(win_rewards_4_unlock_time);
	Stream->WriteInt64(win_rewards_5_unlock_time);
	Stream->WriteInt64(last_star_rewards_acquire_time);
	Stream->WriteInt64(last_free_rewards_acquire_time);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BIND_ACCOUNT_DEFAULT_LOGIN_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_CELLPHONE_NO_DEFAULT_LOGIN(BYTE *buffer, INT user_id, CHAR *cellphone_no, INT config_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteBytes((BYTE*) cellphone_no, sizeof(CHAR) * 32);
	Stream->WriteInt32(config_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_CELLPHONE_NO_DEFALUT_LOGIN_SUCC_U(BYTE *buffer, INT integral_points, INT level, INT diamonds, INT coins, INT win_times, INT battle_times, FLOAT win_rate, INT shot_down_planes, INT shot_down_junior_planes, INT shot_down_middle_planes, INT shot_down_senior_planes, DWORD_PTR session_id, INT num_of_junior_plane_card, INT num_of_middle_plane_card, INT num_of_senior_plane_card, INT num_of_junior_stealth_plane_card, INT num_of_middle_stealth_plane_card, INT num_of_senior_stealth_plane_card, INT num_of_senior_anti_stealth_radar_card, INT num_of_middle_anti_stealth_radar_card, INT num_of_junior_anti_stealth_radar_card, INT num_of_senior_missile_card, INT num_of_middle_missile_card, INT num_of_junior_missile_card, INT num_of_senior_radar_card, INT num_of_middle_radar_card, INT num_of_junior_radar_card, INT num_of_senior_cannonball_card, INT num_of_middle_cannonball_card, INT num_of_junior_cannonball_card, INT level_junior_plane, INT level_middle_plane, INT level_senior_plane, INT level_junior_stealth_plane, INT level_middle_stealth_plane, INT level_senior_stealth_plane, INT level_senior_anti_stealth_radar, INT level_middle_anti_stealth_radar, INT level_junior_anti_stealth_radar, INT level_senior_missile, INT level_middle_missile, INT level_junior_missile, INT level_senior_radar, INT level_middle_radar, INT level_junior_radar, INT level_senior_cannonball, INT level_middle_cannonball, INT level_junior_cannonball, INT star_num, INT win_rewards_1_num, INT win_rewards_2_num, INT win_rewards_3_num, INT win_rewards_4_num, INT win_rewards_5_num, INT star_rewards_num, INT free_rewards_num, INT64 win_rewards_1_unlock_time, INT64 win_rewards_2_unlock_time, INT64 win_rewards_3_unlock_time, INT64 win_rewards_4_unlock_time, INT64 win_rewards_5_unlock_time, INT64 last_star_rewards_acquire_time, INT64 last_free_rewards_acquire_time)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(integral_points);
	Stream->WriteInt32(level);
	Stream->WriteInt32(diamonds);
	Stream->WriteInt32(coins);
	Stream->WriteInt32(win_times);
	Stream->WriteInt32(battle_times);
	Stream->WriteFloat(win_rate);
	Stream->WriteInt32(shot_down_planes);
	Stream->WriteInt32(shot_down_junior_planes);
	Stream->WriteInt32(shot_down_middle_planes);
	Stream->WriteInt32(shot_down_senior_planes);
	Stream->WriteDWORD_PTR(session_id);
	Stream->WriteInt32(num_of_junior_plane_card);
	Stream->WriteInt32(num_of_middle_plane_card);
	Stream->WriteInt32(num_of_senior_plane_card);
	Stream->WriteInt32(num_of_junior_stealth_plane_card);
	Stream->WriteInt32(num_of_middle_stealth_plane_card);
	Stream->WriteInt32(num_of_senior_stealth_plane_card);
	Stream->WriteInt32(num_of_senior_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_middle_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_junior_anti_stealth_radar_card);
	Stream->WriteInt32(num_of_senior_missile_card);
	Stream->WriteInt32(num_of_middle_missile_card);
	Stream->WriteInt32(num_of_junior_missile_card);
	Stream->WriteInt32(num_of_senior_radar_card);
	Stream->WriteInt32(num_of_middle_radar_card);
	Stream->WriteInt32(num_of_junior_radar_card);
	Stream->WriteInt32(num_of_senior_cannonball_card);
	Stream->WriteInt32(num_of_middle_cannonball_card);
	Stream->WriteInt32(num_of_junior_cannonball_card);
	Stream->WriteInt32(level_junior_plane);
	Stream->WriteInt32(level_middle_plane);
	Stream->WriteInt32(level_senior_plane);
	Stream->WriteInt32(level_junior_stealth_plane);
	Stream->WriteInt32(level_middle_stealth_plane);
	Stream->WriteInt32(level_senior_stealth_plane);
	Stream->WriteInt32(level_senior_anti_stealth_radar);
	Stream->WriteInt32(level_middle_anti_stealth_radar);
	Stream->WriteInt32(level_junior_anti_stealth_radar);
	Stream->WriteInt32(level_senior_missile);
	Stream->WriteInt32(level_middle_missile);
	Stream->WriteInt32(level_junior_missile);
	Stream->WriteInt32(level_senior_radar);
	Stream->WriteInt32(level_middle_radar);
	Stream->WriteInt32(level_junior_radar);
	Stream->WriteInt32(level_senior_cannonball);
	Stream->WriteInt32(level_middle_cannonball);
	Stream->WriteInt32(level_junior_cannonball);
	Stream->WriteInt32(star_num);
	Stream->WriteInt32(win_rewards_1_num);
	Stream->WriteInt32(win_rewards_2_num);
	Stream->WriteInt32(win_rewards_3_num);
	Stream->WriteInt32(win_rewards_4_num);
	Stream->WriteInt32(win_rewards_5_num);
	Stream->WriteInt32(star_rewards_num);
	Stream->WriteInt32(free_rewards_num);
	Stream->WriteInt64(win_rewards_1_unlock_time);
	Stream->WriteInt64(win_rewards_2_unlock_time);
	Stream->WriteInt64(win_rewards_3_unlock_time);
	Stream->WriteInt64(win_rewards_4_unlock_time);
	Stream->WriteInt64(win_rewards_5_unlock_time);
	Stream->WriteInt64(last_star_rewards_acquire_time);
	Stream->WriteInt64(last_free_rewards_acquire_time);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_CELLPHONE_NO_DEFAULT_LOGIN_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_ADD_NICKNAME(BYTE *buffer, INT user_id, CHAR *nickname)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteBytes((BYTE*) nickname, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_ADD_NICKNAME_SUCC_U(BYTE *buffer, CHAR *nickname)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteBytes((BYTE*) nickname, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_ADD_NICKNAME_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_ADD_BIND_ACCOUNT(BYTE *buffer, INT user_id, CHAR *bind_account_type, CHAR *bind_account)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteBytes((BYTE*) bind_account_type, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) bind_account, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_ADD_BIND_ACCOUNT_SUCC_U(BYTE *buffer, CHAR *bind_account_type, CHAR *bind_account)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteBytes((BYTE*) bind_account_type, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) bind_account, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_ADD_BIND_ACCOUNT_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_ADD_CELLPHONE_NO(BYTE *buffer, INT user_id, CHAR *cellphone_no, INT config_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteBytes((BYTE*) cellphone_no, sizeof(CHAR) * 32);
	Stream->WriteInt32(config_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_ADD_CELLPHONE_NO_SUCC_U(BYTE *buffer, CHAR *cellphone_no)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteBytes((BYTE*) cellphone_no, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_ADD_CELLPHONE_NO_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_UPDATE_PASSWORD(BYTE *buffer, INT user_id, CHAR *old_password, CHAR *new_password)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteBytes((BYTE*) old_password, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) new_password, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_UPDATE_PASSWORD_SUCC_U(BYTE *buffer, CHAR *new_password)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteBytes((BYTE*) new_password, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_UPDATE_PASSWORD_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_UPDATE_NICKNAME(BYTE *buffer, INT user_id, CHAR *old_nickname, CHAR *new_nickname)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteBytes((BYTE*) old_nickname, sizeof(CHAR) * 32);
	Stream->WriteBytes((BYTE*) new_nickname, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_UPDATE_NICKNAME_SUCC_U(BYTE *buffer, CHAR *new_nickname)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteBytes((BYTE*) new_nickname, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_UPDATE_NICKNAME_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_UPDATE_CELLPHONE_NO(BYTE *buffer, INT user_id, CHAR *new_cellphone_no, INT config_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteBytes((BYTE*) new_cellphone_no, sizeof(CHAR) * 32);
	Stream->WriteInt32(config_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_UPDATE_CELLPHONE_NO_SUCC_U(BYTE *buffer, CHAR *new_cellphone_no)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteBytes((BYTE*) new_cellphone_no, sizeof(CHAR) * 32);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_UPDATE_CELLPHONE_NO_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_UPDATE_RECORD(BYTE *buffer, INT user_id, INT integral_points, INT level, INT diamonds, INT coins, INT win_times, INT battle_times, FLOAT win_rate, INT shot_down_planes, INT shot_down_junior_planes, INT shot_down_middle_planes, INT shot_down_senior_planes)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(integral_points);
	Stream->WriteInt32(level);
	Stream->WriteInt32(diamonds);
	Stream->WriteInt32(coins);
	Stream->WriteInt32(win_times);
	Stream->WriteInt32(battle_times);
	Stream->WriteFloat(win_rate);
	Stream->WriteInt32(shot_down_planes);
	Stream->WriteInt32(shot_down_junior_planes);
	Stream->WriteInt32(shot_down_middle_planes);
	Stream->WriteInt32(shot_down_senior_planes);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_UPDATE_RECORD_SUCC_U(BYTE *buffer, INT integral_points, INT level, INT diamonds, INT coins, INT win_times, INT battle_times, FLOAT win_rate, INT shot_down_planes, INT shot_down_junior_planes, INT shot_down_middle_planes, INT shot_down_senior_planes)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(integral_points);
	Stream->WriteInt32(level);
	Stream->WriteInt32(diamonds);
	Stream->WriteInt32(coins);
	Stream->WriteInt32(win_times);
	Stream->WriteInt32(battle_times);
	Stream->WriteFloat(win_rate);
	Stream->WriteInt32(shot_down_planes);
	Stream->WriteInt32(shot_down_junior_planes);
	Stream->WriteInt32(shot_down_middle_planes);
	Stream->WriteInt32(shot_down_senior_planes);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_UPDATE_RECORD_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

