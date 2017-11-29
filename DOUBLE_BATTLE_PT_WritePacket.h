#pragma once

inline DWORD WRITE_PT_DOUBLE_BATTLE_SEARCH_ROOM(BYTE *buffer, S_PT_DOUBLE_BATTLE_SEARCH_ROOM &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);


	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_SEARCH_ROOM_SUCC_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_SEARCH_ROOM_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD_PTR(parameter.ROOM_ID);
	Stream->WriteInt32(parameter.ROOM_STATUS);
	Stream->WriteInt32(parameter.CURRENT_USER_COUNT);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_SEARCH_ROOM_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_SEARCH_ROOM_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_UPDATE_USER_LIST_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_UPDATE_USER_LIST_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.LENGTH);
	Stream->WriteBytes((BYTE*) parameter.USER_LIST, sizeof(CHAR) * 500);
	Stream->WriteInt32(parameter.CURRENT_USER_COUNT);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_USER_LEAVE_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_USER_LEAVE_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_START_GAME_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_START_GAME_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt64(parameter.START_TIME);
	Stream->WriteInt32(parameter.ROOM_STATUS);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_END_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_END_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID_1);
	Stream->WriteInt32(parameter.SHOT_DOWN_PLANES_1);
	Stream->WriteInt32(parameter.ALIVE_PLANES_1);
	Stream->WriteInt32(parameter.USER_ID_2);
	Stream->WriteInt32(parameter.SHOT_DOWN_PLANES_2);
	Stream->WriteInt32(parameter.ALIVE_PLANES_2);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_PLANE(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_PLANE &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.ROTATION);
	Stream->WriteInt32(parameter.HP);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_PLANE_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_PLANE_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.ROTATION);
	Stream->WriteInt32(parameter.HP);
	Stream->WriteInt32(parameter.PLANE_NO);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_PLANE_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_PLANE_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_PLANE(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_PLANE &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.ROTATION);
	Stream->WriteInt32(parameter.HP);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_PLANE_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_PLANE_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.ROTATION);
	Stream->WriteInt32(parameter.HP);
	Stream->WriteInt32(parameter.PLANE_NO);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_PLANE_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_PLANE_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_PLANE(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_PLANE &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.ROTATION);
	Stream->WriteInt32(parameter.HP);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_PLANE_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_PLANE_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.ROTATION);
	Stream->WriteInt32(parameter.HP);
	Stream->WriteInt32(parameter.PLANE_NO);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_PLANE_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_PLANE_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_STEALTH_PLANE(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_STEALTH_PLANE &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.ROTATION);
	Stream->WriteInt32(parameter.HP);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_STEALTH_PLANE_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_STEALTH_PLANE_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.ROTATION);
	Stream->WriteInt32(parameter.HP);
	Stream->WriteInt32(parameter.PLANE_NO);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_STEALTH_PLANE_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_STEALTH_PLANE_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_STEALTH_PLANE(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_STEALTH_PLANE &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.ROTATION);
	Stream->WriteInt32(parameter.HP);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_STEALTH_PLANE_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_STEALTH_PLANE_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.ROTATION);
	Stream->WriteInt32(parameter.HP);
	Stream->WriteInt32(parameter.PLANE_NO);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_STEALTH_PLANE_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_STEALTH_PLANE_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_STEALTH_PLANE(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_STEALTH_PLANE &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.ROTATION);
	Stream->WriteInt32(parameter.HP);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_STEALTH_PLANE_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_STEALTH_PLANE_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.ROTATION);
	Stream->WriteInt32(parameter.HP);
	Stream->WriteInt32(parameter.PLANE_NO);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_STEALTH_PLANE_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_STEALTH_PLANE_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_ANTI_STEALTH_RADAR(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_ANTI_STEALTH_RADAR &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.LENGTH);
	Stream->WriteInt32(parameter.WIDTH);
	Stream->WriteInt32(parameter.DURATION);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_ANTI_STEALTH_RADAR_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_ANTI_STEALTH_RADAR_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.LENGTH);
	Stream->WriteInt32(parameter.WIDTH);
	Stream->WriteInt32(parameter.DURATION);
	Stream->WriteInt32(parameter.RADAR_NO);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_ANTI_STEALTH_RADAR_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_ANTI_STEALTH_RADAR_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_ANTI_STEALTH_RADAR(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_ANTI_STEALTH_RADAR &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.LENGTH);
	Stream->WriteInt32(parameter.WIDTH);
	Stream->WriteInt32(parameter.DURATION);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_ANTI_STEALTH_RADAR_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_ANTI_STEALTH_RADAR_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.LENGTH);
	Stream->WriteInt32(parameter.WIDTH);
	Stream->WriteInt32(parameter.DURATION);
	Stream->WriteInt32(parameter.RADAR_NO);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_ANTI_STEALTH_RADAR_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_ANTI_STEALTH_RADAR_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_ANTI_STEALTH_RADAR(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_ANTI_STEALTH_RADAR &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.LENGTH);
	Stream->WriteInt32(parameter.WIDTH);
	Stream->WriteInt32(parameter.DURATION);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_ANTI_STEALTH_RADAR_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_ANTI_STEALTH_RADAR_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.LENGTH);
	Stream->WriteInt32(parameter.WIDTH);
	Stream->WriteInt32(parameter.DURATION);
	Stream->WriteInt32(parameter.RADAR_NO);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_ANTI_STEALTH_RADAR_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_ANTI_STEALTH_RADAR_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_MISSILE(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_MISSILE &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.LENGTH);
	Stream->WriteInt32(parameter.WIDTH);
	Stream->WriteInt32(parameter.DP);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_MISSILE_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_MISSILE_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.LENGTH);
	Stream->WriteInt32(parameter.WIDTH);
	Stream->WriteInt32(parameter.DP);
	Stream->WriteInt32(parameter.NUM_SHOT_DOWN);
	Stream->WriteBytes(parameter.NO_SHOT_DOWN, 20);
	Stream->WriteInt32(parameter.EXPOLSION_NO);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_MISSILE_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_MISSILE_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_MISSILE(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_MISSILE &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.LENGTH);
	Stream->WriteInt32(parameter.WIDTH);
	Stream->WriteInt32(parameter.DP);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_MISSILE_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_MISSILE_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.LENGTH);
	Stream->WriteInt32(parameter.WIDTH);
	Stream->WriteInt32(parameter.DP);
	Stream->WriteInt32(parameter.NUM_SHOT_DOWN);
	Stream->WriteBytes(parameter.NO_SHOT_DOWN, 20);
	Stream->WriteInt32(parameter.EXPOLSION_NO);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_MISSILE_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_MISSILE_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_MISSILE(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_MISSILE &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.LENGTH);
	Stream->WriteInt32(parameter.WIDTH);
	Stream->WriteInt32(parameter.DP);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_MISSILE_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_MISSILE_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.LENGTH);
	Stream->WriteInt32(parameter.WIDTH);
	Stream->WriteInt32(parameter.DP);
	Stream->WriteInt32(parameter.NUM_SHOT_DOWN);
	Stream->WriteBytes(parameter.NO_SHOT_DOWN, 20);
	Stream->WriteInt32(parameter.EXPOLSION_NO);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_MISSILE_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_MISSILE_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_RADAR(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_RADAR &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.LENGTH);
	Stream->WriteInt32(parameter.WIDTH);
	Stream->WriteInt32(parameter.DURATION);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_RADAR_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_RADAR_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.LENGTH);
	Stream->WriteInt32(parameter.WIDTH);
	Stream->WriteInt32(parameter.DURATION);
	Stream->WriteInt32(parameter.RADAR_NO);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_RADAR_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_RADAR_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_RADAR(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_RADAR &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.LENGTH);
	Stream->WriteInt32(parameter.WIDTH);
	Stream->WriteInt32(parameter.DURATION);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_RADAR_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_RADAR_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.LENGTH);
	Stream->WriteInt32(parameter.WIDTH);
	Stream->WriteInt32(parameter.DURATION);
	Stream->WriteInt32(parameter.RADAR_NO);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_RADAR_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_RADAR_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_RADAR(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_RADAR &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.LENGTH);
	Stream->WriteInt32(parameter.WIDTH);
	Stream->WriteInt32(parameter.DURATION);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_RADAR_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_RADAR_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.LENGTH);
	Stream->WriteInt32(parameter.WIDTH);
	Stream->WriteInt32(parameter.DURATION);
	Stream->WriteInt32(parameter.RADAR_NO);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_RADAR_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_RADAR_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_CANNONBALL(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_CANNONBALL &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.LENGTH);
	Stream->WriteInt32(parameter.WIDTH);
	Stream->WriteInt32(parameter.DP);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_CANNONBALL_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_CANNONBALL_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.LENGTH);
	Stream->WriteInt32(parameter.WIDTH);
	Stream->WriteInt32(parameter.DP);
	Stream->WriteInt32(parameter.NUM_SHOT_DOWN);
	Stream->WriteBytes(parameter.NO_SHOT_DOWN, 20);
	Stream->WriteInt32(parameter.EXPLOSION_NO);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_CANNONBALL_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_CANNONBALL_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_CANNONBALL(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_CANNONBALL &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.LENGTH);
	Stream->WriteInt32(parameter.WIDTH);
	Stream->WriteInt32(parameter.DP);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_CANNONBALL_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_CANNONBALL_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.LENGTH);
	Stream->WriteInt32(parameter.WIDTH);
	Stream->WriteInt32(parameter.DP);
	Stream->WriteInt32(parameter.NUM_SHOT_DOWN);
	Stream->WriteBytes(parameter.NO_SHOT_DOWN, 20);
	Stream->WriteInt32(parameter.EXPLOSION_NO);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_CANNONBALL_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_CANNONBALL_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_CANNONBALL(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_CANNONBALL &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.LENGTH);
	Stream->WriteInt32(parameter.WIDTH);
	Stream->WriteInt32(parameter.DP);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_CANNONBALL_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_CANNONBALL_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.X);
	Stream->WriteInt32(parameter.Y);
	Stream->WriteInt32(parameter.LENGTH);
	Stream->WriteInt32(parameter.WIDTH);
	Stream->WriteInt32(parameter.DP);
	Stream->WriteInt32(parameter.NUM_SHOT_DOWN);
	Stream->WriteBytes(parameter.NO_SHOT_DOWN, 20);
	Stream->WriteInt32(parameter.EXPLOSION_NO);
	Stream->WriteInt32(parameter.POWER);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_CANNONBALL_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_CANNONBALL_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_UPDATE_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_UPDATE_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteInt32(parameter.CURRENT_TIME);
	Stream->WriteInt32(parameter.FALL_PLANE_NUM);
	Stream->WriteBytes(parameter.PLANE_NO_BUFFER, 40);
	Stream->WriteInt32(parameter.DISABLE_RADAR_NUM);
	Stream->WriteBytes(parameter.RADAR_NO_BUFFER, 40);
	Stream->WriteInt32(parameter.DISAPPEAR_EXPLOSION_NUM);
	Stream->WriteBytes(parameter.EXPLOSION_NO_BUFFER, 40);
	Stream->WriteBytes(parameter.POWER_BUFFER, 16);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_SEARCH_ROOM(BYTE *buffer)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);


	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_SEARCH_ROOM_SUCC_U(BYTE *buffer, DWORD_PTR room_id, INT room_status, INT current_user_count)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD_PTR(room_id);
	Stream->WriteInt32(room_status);
	Stream->WriteInt32(current_user_count);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_SEARCH_ROOM_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_UPDATE_USER_LIST_M(BYTE *buffer, INT length, CHAR *user_list, INT current_user_count)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(length);
	Stream->WriteBytes((BYTE*) user_list, sizeof(CHAR) * 500);
	Stream->WriteInt32(current_user_count);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_USER_LEAVE_M(BYTE *buffer, INT user_id)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_START_GAME_M(BYTE *buffer, INT64 start_time, INT room_status)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt64(start_time);
	Stream->WriteInt32(room_status);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_END_M(BYTE *buffer, INT user_id_1, INT shot_down_planes_1, INT alive_planes_1, INT user_id_2, INT shot_down_planes_2, INT alive_planes_2)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id_1);
	Stream->WriteInt32(shot_down_planes_1);
	Stream->WriteInt32(alive_planes_1);
	Stream->WriteInt32(user_id_2);
	Stream->WriteInt32(shot_down_planes_2);
	Stream->WriteInt32(alive_planes_2);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_PLANE(BYTE *buffer, INT user_id, INT x, INT y, INT rotation, INT hp, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(rotation);
	Stream->WriteInt32(hp);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_PLANE_SUCC_M(BYTE *buffer, INT user_id, INT x, INT y, INT rotation, INT hp, INT plane_no, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(rotation);
	Stream->WriteInt32(hp);
	Stream->WriteInt32(plane_no);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_PLANE_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_PLANE(BYTE *buffer, INT user_id, INT x, INT y, INT rotation, INT hp, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(rotation);
	Stream->WriteInt32(hp);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_PLANE_SUCC_M(BYTE *buffer, INT user_id, INT x, INT y, INT rotation, INT hp, INT plane_no, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(rotation);
	Stream->WriteInt32(hp);
	Stream->WriteInt32(plane_no);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_PLANE_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_PLANE(BYTE *buffer, INT user_id, INT x, INT y, INT rotation, INT hp, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(rotation);
	Stream->WriteInt32(hp);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_PLANE_SUCC_M(BYTE *buffer, INT user_id, INT x, INT y, INT rotation, INT hp, INT plane_no, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(rotation);
	Stream->WriteInt32(hp);
	Stream->WriteInt32(plane_no);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_PLANE_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_STEALTH_PLANE(BYTE *buffer, INT user_id, INT x, INT y, INT rotation, INT hp, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(rotation);
	Stream->WriteInt32(hp);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_STEALTH_PLANE_SUCC_M(BYTE *buffer, INT user_id, INT x, INT y, INT rotation, INT hp, INT plane_no, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(rotation);
	Stream->WriteInt32(hp);
	Stream->WriteInt32(plane_no);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_STEALTH_PLANE_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_STEALTH_PLANE(BYTE *buffer, INT user_id, INT x, INT y, INT rotation, INT hp, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(rotation);
	Stream->WriteInt32(hp);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_STEALTH_PLANE_SUCC_M(BYTE *buffer, INT user_id, INT x, INT y, INT rotation, INT hp, INT plane_no, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(rotation);
	Stream->WriteInt32(hp);
	Stream->WriteInt32(plane_no);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_STEALTH_PLANE_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_STEALTH_PLANE(BYTE *buffer, INT user_id, INT x, INT y, INT rotation, INT hp, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(rotation);
	Stream->WriteInt32(hp);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_STEALTH_PLANE_SUCC_M(BYTE *buffer, INT user_id, INT x, INT y, INT rotation, INT hp, INT plane_no, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(rotation);
	Stream->WriteInt32(hp);
	Stream->WriteInt32(plane_no);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_STEALTH_PLANE_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_ANTI_STEALTH_RADAR(BYTE *buffer, INT user_id, INT x, INT y, INT length, INT width, INT duration, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(length);
	Stream->WriteInt32(width);
	Stream->WriteInt32(duration);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_ANTI_STEALTH_RADAR_SUCC_M(BYTE *buffer, INT user_id, INT x, INT y, INT length, INT width, INT duration, INT radar_no, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(length);
	Stream->WriteInt32(width);
	Stream->WriteInt32(duration);
	Stream->WriteInt32(radar_no);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_ANTI_STEALTH_RADAR_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_ANTI_STEALTH_RADAR(BYTE *buffer, INT user_id, INT x, INT y, INT length, INT width, INT duration, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(length);
	Stream->WriteInt32(width);
	Stream->WriteInt32(duration);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_ANTI_STEALTH_RADAR_SUCC_M(BYTE *buffer, INT user_id, INT x, INT y, INT length, INT width, INT duration, INT radar_no, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(length);
	Stream->WriteInt32(width);
	Stream->WriteInt32(duration);
	Stream->WriteInt32(radar_no);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_ANTI_STEALTH_RADAR_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_ANTI_STEALTH_RADAR(BYTE *buffer, INT user_id, INT x, INT y, INT length, INT width, INT duration, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(length);
	Stream->WriteInt32(width);
	Stream->WriteInt32(duration);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_ANTI_STEALTH_RADAR_SUCC_M(BYTE *buffer, INT user_id, INT x, INT y, INT length, INT width, INT duration, INT radar_no, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(length);
	Stream->WriteInt32(width);
	Stream->WriteInt32(duration);
	Stream->WriteInt32(radar_no);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_ANTI_STEALTH_RADAR_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_MISSILE(BYTE *buffer, INT user_id, INT x, INT y, INT length, INT width, INT dp, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(length);
	Stream->WriteInt32(width);
	Stream->WriteInt32(dp);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_MISSILE_SUCC_M(BYTE *buffer, INT user_id, INT x, INT y, INT length, INT width, INT dp, INT num_shot_down, BYTE *no_shot_down, INT expolsion_no, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(length);
	Stream->WriteInt32(width);
	Stream->WriteInt32(dp);
	Stream->WriteInt32(num_shot_down);
	Stream->WriteBytes(no_shot_down, 20);
	Stream->WriteInt32(expolsion_no);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_MISSILE_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_MISSILE(BYTE *buffer, INT user_id, INT x, INT y, INT length, INT width, INT dp, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(length);
	Stream->WriteInt32(width);
	Stream->WriteInt32(dp);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_MISSILE_SUCC_M(BYTE *buffer, INT user_id, INT x, INT y, INT length, INT width, INT dp, INT num_shot_down, BYTE *no_shot_down, INT expolsion_no, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(length);
	Stream->WriteInt32(width);
	Stream->WriteInt32(dp);
	Stream->WriteInt32(num_shot_down);
	Stream->WriteBytes(no_shot_down, 20);
	Stream->WriteInt32(expolsion_no);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_MISSILE_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_MISSILE(BYTE *buffer, INT user_id, INT x, INT y, INT length, INT width, INT dp, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(length);
	Stream->WriteInt32(width);
	Stream->WriteInt32(dp);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_MISSILE_SUCC_M(BYTE *buffer, INT user_id, INT x, INT y, INT length, INT width, INT dp, INT num_shot_down, BYTE *no_shot_down, INT expolsion_no, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(length);
	Stream->WriteInt32(width);
	Stream->WriteInt32(dp);
	Stream->WriteInt32(num_shot_down);
	Stream->WriteBytes(no_shot_down, 20);
	Stream->WriteInt32(expolsion_no);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_MISSILE_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_RADAR(BYTE *buffer, INT user_id, INT x, INT y, INT length, INT width, INT duration, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(length);
	Stream->WriteInt32(width);
	Stream->WriteInt32(duration);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_RADAR_SUCC_M(BYTE *buffer, INT user_id, INT x, INT y, INT length, INT width, INT duration, INT radar_no, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(length);
	Stream->WriteInt32(width);
	Stream->WriteInt32(duration);
	Stream->WriteInt32(radar_no);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_RADAR_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_RADAR(BYTE *buffer, INT user_id, INT x, INT y, INT length, INT width, INT duration, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(length);
	Stream->WriteInt32(width);
	Stream->WriteInt32(duration);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_RADAR_SUCC_M(BYTE *buffer, INT user_id, INT x, INT y, INT length, INT width, INT duration, INT radar_no, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(length);
	Stream->WriteInt32(width);
	Stream->WriteInt32(duration);
	Stream->WriteInt32(radar_no);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_RADAR_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_RADAR(BYTE *buffer, INT user_id, INT x, INT y, INT length, INT width, INT duration, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(length);
	Stream->WriteInt32(width);
	Stream->WriteInt32(duration);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_RADAR_SUCC_M(BYTE *buffer, INT user_id, INT x, INT y, INT length, INT width, INT duration, INT radar_no, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(length);
	Stream->WriteInt32(width);
	Stream->WriteInt32(duration);
	Stream->WriteInt32(radar_no);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_RADAR_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_CANNONBALL(BYTE *buffer, INT user_id, INT x, INT y, INT length, INT width, INT dp, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(length);
	Stream->WriteInt32(width);
	Stream->WriteInt32(dp);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_CANNONBALL_SUCC_M(BYTE *buffer, INT user_id, INT x, INT y, INT length, INT width, INT dp, INT num_shot_down, BYTE *no_shot_down, INT explosion_no, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(length);
	Stream->WriteInt32(width);
	Stream->WriteInt32(dp);
	Stream->WriteInt32(num_shot_down);
	Stream->WriteBytes(no_shot_down, 20);
	Stream->WriteInt32(explosion_no);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_SENIOR_CANNONBALL_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_CANNONBALL(BYTE *buffer, INT user_id, INT x, INT y, INT length, INT width, INT dp, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(length);
	Stream->WriteInt32(width);
	Stream->WriteInt32(dp);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_CANNONBALL_SUCC_M(BYTE *buffer, INT user_id, INT x, INT y, INT length, INT width, INT dp, INT num_shot_down, BYTE *no_shot_down, INT explosion_no, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(length);
	Stream->WriteInt32(width);
	Stream->WriteInt32(dp);
	Stream->WriteInt32(num_shot_down);
	Stream->WriteBytes(no_shot_down, 20);
	Stream->WriteInt32(explosion_no);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_MIDDLE_CANNONBALL_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_CANNONBALL(BYTE *buffer, INT user_id, INT x, INT y, INT length, INT width, INT dp, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(length);
	Stream->WriteInt32(width);
	Stream->WriteInt32(dp);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_CANNONBALL_SUCC_M(BYTE *buffer, INT user_id, INT x, INT y, INT length, INT width, INT dp, INT num_shot_down, BYTE *no_shot_down, INT explosion_no, INT power)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(x);
	Stream->WriteInt32(y);
	Stream->WriteInt32(length);
	Stream->WriteInt32(width);
	Stream->WriteInt32(dp);
	Stream->WriteInt32(num_shot_down);
	Stream->WriteBytes(no_shot_down, 20);
	Stream->WriteInt32(explosion_no);
	Stream->WriteInt32(power);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_INSERT_JUNIOR_CANNONBALL_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_DOUBLE_BATTLE_UPDATE_U(BYTE *buffer, INT user_id, INT current_time, INT fall_plane_num, BYTE *plane_no_buffer, INT disable_radar_num, BYTE *radar_no_buffer, INT disappear_explosion_num, BYTE *explosion_no_buffer, BYTE *power_buffer)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteInt32(current_time);
	Stream->WriteInt32(fall_plane_num);
	Stream->WriteBytes(plane_no_buffer, 40);
	Stream->WriteInt32(disable_radar_num);
	Stream->WriteBytes(radar_no_buffer, 40);
	Stream->WriteInt32(disappear_explosion_num);
	Stream->WriteBytes(explosion_no_buffer, 40);
	Stream->WriteBytes(power_buffer, 16);

	return Stream->GetLength();
}

