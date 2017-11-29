#pragma once

inline VOID READ_PT_DOUBLE_BATTLE_SEARCH_ROOM(BYTE *buffer, S_PT_DOUBLE_BATTLE_SEARCH_ROOM &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

}

inline VOID READ_PT_DOUBLE_BATTLE_SEARCH_ROOM_SUCC_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_SEARCH_ROOM_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD_PTR(&parameter.ROOM_ID);
	Stream->ReadInt32(&parameter.ROOM_STATUS);
	Stream->ReadInt32(&parameter.CURRENT_USER_COUNT);
}

inline VOID READ_PT_DOUBLE_BATTLE_SEARCH_ROOM_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_SEARCH_ROOM_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_DOUBLE_BATTLE_UPDATE_USER_LIST_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_UPDATE_USER_LIST_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.LENGTH);
	Stream->ReadBytes((BYTE*) parameter.USER_LIST, sizeof(CHAR) * 500);
	Stream->ReadInt32(&parameter.CURRENT_USER_COUNT);
}

inline VOID READ_PT_DOUBLE_BATTLE_USER_LEAVE_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_USER_LEAVE_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
}

inline VOID READ_PT_DOUBLE_BATTLE_START_GAME_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_START_GAME_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt64(&parameter.START_TIME);
	Stream->ReadInt32(&parameter.ROOM_STATUS);
}

inline VOID READ_PT_DOUBLE_BATTLE_END_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_END_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID_1);
	Stream->ReadInt32(&parameter.SHOT_DOWN_PLANES_1);
	Stream->ReadInt32(&parameter.ALIVE_PLANES_1);
	Stream->ReadInt32(&parameter.USER_ID_2);
	Stream->ReadInt32(&parameter.SHOT_DOWN_PLANES_2);
	Stream->ReadInt32(&parameter.ALIVE_PLANES_2);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_JUNIOR_PLANE(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_PLANE &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.ROTATION);
	Stream->ReadInt32(&parameter.HP);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_JUNIOR_PLANE_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_PLANE_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.ROTATION);
	Stream->ReadInt32(&parameter.HP);
	Stream->ReadInt32(&parameter.PLANE_NO);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_JUNIOR_PLANE_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_PLANE_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_MIDDLE_PLANE(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_PLANE &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.ROTATION);
	Stream->ReadInt32(&parameter.HP);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_MIDDLE_PLANE_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_PLANE_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.ROTATION);
	Stream->ReadInt32(&parameter.HP);
	Stream->ReadInt32(&parameter.PLANE_NO);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_MIDDLE_PLANE_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_PLANE_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_SENIOR_PLANE(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_PLANE &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.ROTATION);
	Stream->ReadInt32(&parameter.HP);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_SENIOR_PLANE_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_PLANE_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.ROTATION);
	Stream->ReadInt32(&parameter.HP);
	Stream->ReadInt32(&parameter.PLANE_NO);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_SENIOR_PLANE_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_PLANE_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_JUNIOR_STEALTH_PLANE(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_STEALTH_PLANE &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.ROTATION);
	Stream->ReadInt32(&parameter.HP);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_JUNIOR_STEALTH_PLANE_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_STEALTH_PLANE_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.ROTATION);
	Stream->ReadInt32(&parameter.HP);
	Stream->ReadInt32(&parameter.PLANE_NO);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_JUNIOR_STEALTH_PLANE_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_STEALTH_PLANE_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_MIDDLE_STEALTH_PLANE(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_STEALTH_PLANE &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.ROTATION);
	Stream->ReadInt32(&parameter.HP);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_MIDDLE_STEALTH_PLANE_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_STEALTH_PLANE_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.ROTATION);
	Stream->ReadInt32(&parameter.HP);
	Stream->ReadInt32(&parameter.PLANE_NO);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_MIDDLE_STEALTH_PLANE_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_STEALTH_PLANE_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_SENIOR_STEALTH_PLANE(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_STEALTH_PLANE &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.ROTATION);
	Stream->ReadInt32(&parameter.HP);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_SENIOR_STEALTH_PLANE_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_STEALTH_PLANE_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.ROTATION);
	Stream->ReadInt32(&parameter.HP);
	Stream->ReadInt32(&parameter.PLANE_NO);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_SENIOR_STEALTH_PLANE_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_STEALTH_PLANE_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_SENIOR_ANTI_STEALTH_RADAR(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_ANTI_STEALTH_RADAR &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.LENGTH);
	Stream->ReadInt32(&parameter.WIDTH);
	Stream->ReadInt32(&parameter.DURATION);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_SENIOR_ANTI_STEALTH_RADAR_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_ANTI_STEALTH_RADAR_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.LENGTH);
	Stream->ReadInt32(&parameter.WIDTH);
	Stream->ReadInt32(&parameter.DURATION);
	Stream->ReadInt32(&parameter.RADAR_NO);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_SENIOR_ANTI_STEALTH_RADAR_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_ANTI_STEALTH_RADAR_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_MIDDLE_ANTI_STEALTH_RADAR(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_ANTI_STEALTH_RADAR &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.LENGTH);
	Stream->ReadInt32(&parameter.WIDTH);
	Stream->ReadInt32(&parameter.DURATION);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_MIDDLE_ANTI_STEALTH_RADAR_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_ANTI_STEALTH_RADAR_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.LENGTH);
	Stream->ReadInt32(&parameter.WIDTH);
	Stream->ReadInt32(&parameter.DURATION);
	Stream->ReadInt32(&parameter.RADAR_NO);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_MIDDLE_ANTI_STEALTH_RADAR_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_ANTI_STEALTH_RADAR_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_JUNIOR_ANTI_STEALTH_RADAR(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_ANTI_STEALTH_RADAR &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.LENGTH);
	Stream->ReadInt32(&parameter.WIDTH);
	Stream->ReadInt32(&parameter.DURATION);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_JUNIOR_ANTI_STEALTH_RADAR_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_ANTI_STEALTH_RADAR_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.LENGTH);
	Stream->ReadInt32(&parameter.WIDTH);
	Stream->ReadInt32(&parameter.DURATION);
	Stream->ReadInt32(&parameter.RADAR_NO);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_JUNIOR_ANTI_STEALTH_RADAR_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_ANTI_STEALTH_RADAR_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_SENIOR_MISSILE(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_MISSILE &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.LENGTH);
	Stream->ReadInt32(&parameter.WIDTH);
	Stream->ReadInt32(&parameter.DP);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_SENIOR_MISSILE_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_MISSILE_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.LENGTH);
	Stream->ReadInt32(&parameter.WIDTH);
	Stream->ReadInt32(&parameter.DP);
	Stream->ReadInt32(&parameter.NUM_SHOT_DOWN);
	Stream->ReadBytes(parameter.NO_SHOT_DOWN, 20);
	Stream->ReadInt32(&parameter.EXPOLSION_NO);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_SENIOR_MISSILE_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_MISSILE_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_MIDDLE_MISSILE(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_MISSILE &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.LENGTH);
	Stream->ReadInt32(&parameter.WIDTH);
	Stream->ReadInt32(&parameter.DP);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_MIDDLE_MISSILE_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_MISSILE_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.LENGTH);
	Stream->ReadInt32(&parameter.WIDTH);
	Stream->ReadInt32(&parameter.DP);
	Stream->ReadInt32(&parameter.NUM_SHOT_DOWN);
	Stream->ReadBytes(parameter.NO_SHOT_DOWN, 20);
	Stream->ReadInt32(&parameter.EXPOLSION_NO);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_MIDDLE_MISSILE_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_MISSILE_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_JUNIOR_MISSILE(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_MISSILE &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.LENGTH);
	Stream->ReadInt32(&parameter.WIDTH);
	Stream->ReadInt32(&parameter.DP);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_JUNIOR_MISSILE_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_MISSILE_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.LENGTH);
	Stream->ReadInt32(&parameter.WIDTH);
	Stream->ReadInt32(&parameter.DP);
	Stream->ReadInt32(&parameter.NUM_SHOT_DOWN);
	Stream->ReadBytes(parameter.NO_SHOT_DOWN, 20);
	Stream->ReadInt32(&parameter.EXPOLSION_NO);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_JUNIOR_MISSILE_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_MISSILE_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_SENIOR_RADAR(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_RADAR &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.LENGTH);
	Stream->ReadInt32(&parameter.WIDTH);
	Stream->ReadInt32(&parameter.DURATION);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_SENIOR_RADAR_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_RADAR_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.LENGTH);
	Stream->ReadInt32(&parameter.WIDTH);
	Stream->ReadInt32(&parameter.DURATION);
	Stream->ReadInt32(&parameter.RADAR_NO);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_SENIOR_RADAR_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_RADAR_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_MIDDLE_RADAR(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_RADAR &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.LENGTH);
	Stream->ReadInt32(&parameter.WIDTH);
	Stream->ReadInt32(&parameter.DURATION);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_MIDDLE_RADAR_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_RADAR_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.LENGTH);
	Stream->ReadInt32(&parameter.WIDTH);
	Stream->ReadInt32(&parameter.DURATION);
	Stream->ReadInt32(&parameter.RADAR_NO);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_MIDDLE_RADAR_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_RADAR_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_JUNIOR_RADAR(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_RADAR &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.LENGTH);
	Stream->ReadInt32(&parameter.WIDTH);
	Stream->ReadInt32(&parameter.DURATION);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_JUNIOR_RADAR_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_RADAR_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.LENGTH);
	Stream->ReadInt32(&parameter.WIDTH);
	Stream->ReadInt32(&parameter.DURATION);
	Stream->ReadInt32(&parameter.RADAR_NO);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_JUNIOR_RADAR_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_RADAR_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_SENIOR_CANNONBALL(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_CANNONBALL &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.LENGTH);
	Stream->ReadInt32(&parameter.WIDTH);
	Stream->ReadInt32(&parameter.DP);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_SENIOR_CANNONBALL_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_CANNONBALL_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.LENGTH);
	Stream->ReadInt32(&parameter.WIDTH);
	Stream->ReadInt32(&parameter.DP);
	Stream->ReadInt32(&parameter.NUM_SHOT_DOWN);
	Stream->ReadBytes(parameter.NO_SHOT_DOWN, 20);
	Stream->ReadInt32(&parameter.EXPLOSION_NO);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_SENIOR_CANNONBALL_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_SENIOR_CANNONBALL_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_MIDDLE_CANNONBALL(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_CANNONBALL &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.LENGTH);
	Stream->ReadInt32(&parameter.WIDTH);
	Stream->ReadInt32(&parameter.DP);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_MIDDLE_CANNONBALL_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_CANNONBALL_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.LENGTH);
	Stream->ReadInt32(&parameter.WIDTH);
	Stream->ReadInt32(&parameter.DP);
	Stream->ReadInt32(&parameter.NUM_SHOT_DOWN);
	Stream->ReadBytes(parameter.NO_SHOT_DOWN, 20);
	Stream->ReadInt32(&parameter.EXPLOSION_NO);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_MIDDLE_CANNONBALL_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_MIDDLE_CANNONBALL_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_JUNIOR_CANNONBALL(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_CANNONBALL &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.LENGTH);
	Stream->ReadInt32(&parameter.WIDTH);
	Stream->ReadInt32(&parameter.DP);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_JUNIOR_CANNONBALL_SUCC_M(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_CANNONBALL_SUCC_M &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.X);
	Stream->ReadInt32(&parameter.Y);
	Stream->ReadInt32(&parameter.LENGTH);
	Stream->ReadInt32(&parameter.WIDTH);
	Stream->ReadInt32(&parameter.DP);
	Stream->ReadInt32(&parameter.NUM_SHOT_DOWN);
	Stream->ReadBytes(parameter.NO_SHOT_DOWN, 20);
	Stream->ReadInt32(&parameter.EXPLOSION_NO);
	Stream->ReadInt32(&parameter.POWER);
}

inline VOID READ_PT_DOUBLE_BATTLE_INSERT_JUNIOR_CANNONBALL_FAIL_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_INSERT_JUNIOR_CANNONBALL_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_DOUBLE_BATTLE_UPDATE_U(BYTE *buffer, S_PT_DOUBLE_BATTLE_UPDATE_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadInt32(&parameter.CURRENT_TIME);
	Stream->ReadInt32(&parameter.FALL_PLANE_NUM);
	Stream->ReadBytes(parameter.PLANE_NO_BUFFER, 40);
	Stream->ReadInt32(&parameter.DISABLE_RADAR_NUM);
	Stream->ReadBytes(parameter.RADAR_NO_BUFFER, 40);
	Stream->ReadInt32(&parameter.DISAPPEAR_EXPLOSION_NUM);
	Stream->ReadBytes(parameter.EXPLOSION_NO_BUFFER, 40);
	Stream->ReadBytes(parameter.POWER_BUFFER, 16);
}

