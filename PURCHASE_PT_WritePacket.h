#pragma once

inline DWORD WRITE_PT_BUY_COINS(BYTE *buffer, S_PT_BUY_COINS &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);
	Stream->WriteInt32(parameter.PACKET_LEVEL);
	Stream->WriteInt32(parameter.DIAMONDS);
	Stream->WriteInt32(parameter.COINS);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BUY_COINS_SUCC_U(BYTE *buffer, S_PT_BUY_COINS_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.PACKET_LEVEL);
	Stream->WriteInt32(parameter.DIAMONDS);
	Stream->WriteInt32(parameter.COINS);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BUY_COINS_FAIL_U(BYTE *buffer, S_PT_BUY_COINS_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BUY_DIAMONDS(BYTE *buffer, S_PT_BUY_DIAMONDS &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);
	Stream->WriteInt32(parameter.PACKET_LEVEL);
	Stream->WriteInt32(parameter.DIAMONDS);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BUY_DIAMONDS_SUCC_U(BYTE *buffer, S_PT_BUY_DIAMONDS_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.PACKET_LEVEL);
	Stream->WriteInt32(parameter.DIAMONDS);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BUY_DIAMONDS_FAIL_U(BYTE *buffer, S_PT_BUY_DIAMONDS_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BUY_CARDS(BYTE *buffer, S_PT_BUY_CARDS &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);
	Stream->WriteInt32(parameter.COINS);
	Stream->WriteInt32(parameter.CARD_TYPE);
	Stream->WriteBytes((BYTE*) parameter.CARD_NAME, sizeof(CHAR) * 32);
	Stream->WriteInt32(parameter.CARD_NUM);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BUY_CARDS_SUCC_U(BYTE *buffer, S_PT_BUY_CARDS_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.COINS);
	Stream->WriteInt32(parameter.CARD_TYPE);
	Stream->WriteBytes((BYTE*) parameter.CARD_NAME, sizeof(CHAR) * 32);
	Stream->WriteInt32(parameter.CARD_NUM);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BUY_CARDS_FAIL_U(BYTE *buffer, S_PT_BUY_CARDS_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_OPEN_SUPPLY_CHEST(BYTE *buffer, S_PT_OPEN_SUPPLY_CHEST &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_ID);
	Stream->WriteBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);
	Stream->WriteInt32(parameter.LEVEL);
	Stream->WriteInt32(parameter.CHEST_TYPE);
	Stream->WriteBytes((BYTE*) parameter.CARD_NAME, sizeof(CHAR) * 32);
	Stream->WriteInt32(parameter.COINS);
	Stream->WriteInt32(parameter.DIAMONDS);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_OPEN_SUPPLY_CHEST_SUCC_U(BYTE *buffer, S_PT_OPEN_SUPPLY_CHEST_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.CHEST_TYPE);
	Stream->WriteInt32(parameter.CHEST_NUM);
	Stream->WriteInt32(parameter.STAR_NUM);
	Stream->WriteInt32(parameter.COINS);
	Stream->WriteInt32(parameter.DIAMONDS);
	Stream->WriteInt32(parameter.CARD_1_TYPE);
	Stream->WriteInt32(parameter.CARD_2_TYPE);
	Stream->WriteInt32(parameter.CARD_3_TYPE);
	Stream->WriteInt32(parameter.CARD_4_TYPE);
	Stream->WriteInt32(parameter.CARD_5_TYPE);
	Stream->WriteInt32(parameter.CARD_6_TYPE);
	Stream->WriteInt32(parameter.CARD_7_TYPE);
	Stream->WriteInt32(parameter.CARD_8_TYPE);
	Stream->WriteInt32(parameter.CARD_1_LEVEL);
	Stream->WriteInt32(parameter.CARD_2_LEVEL);
	Stream->WriteInt32(parameter.CARD_3_LEVEL);
	Stream->WriteInt32(parameter.CARD_4_LEVEL);
	Stream->WriteInt32(parameter.CARD_5_LEVEL);
	Stream->WriteInt32(parameter.CARD_6_LEVEL);
	Stream->WriteInt32(parameter.CARD_7_LEVEL);
	Stream->WriteInt32(parameter.CARD_8_LEVEL);
	Stream->WriteInt32(parameter.CARD_1_NUM);
	Stream->WriteInt32(parameter.CARD_2_NUM);
	Stream->WriteInt32(parameter.CARD_3_NUM);
	Stream->WriteInt32(parameter.CARD_4_NUM);
	Stream->WriteInt32(parameter.CARD_5_NUM);
	Stream->WriteInt32(parameter.CARD_6_NUM);
	Stream->WriteInt32(parameter.CARD_7_NUM);
	Stream->WriteInt32(parameter.CARD_8_NUM);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_OPEN_SUPPLY_CHEST_FAIL_U(BYTE *buffer, S_PT_OPEN_SUPPLY_CHEST_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_LOAD_CARDS_ON_SALE(BYTE *buffer, S_PT_LOAD_CARDS_ON_SALE &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.USER_LEVEL);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_LOAD_CARDS_ON_SALE_SUCC_U(BYTE *buffer, S_PT_LOAD_CARDS_ON_SALE_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.KINDS_OF_CARDS_ON_SALE);
	Stream->WriteInt32(parameter.CARD_1);
	Stream->WriteInt32(parameter.CARD_1_COST);
	Stream->WriteInt32(parameter.CARD_2);
	Stream->WriteInt32(parameter.CARD_2_COST);
	Stream->WriteInt32(parameter.CARD_3);
	Stream->WriteInt32(parameter.CARD_3_COST);
	Stream->WriteInt32(parameter.CARD_4);
	Stream->WriteInt32(parameter.CARD_4_COST);
	Stream->WriteInt32(parameter.CARD_5);
	Stream->WriteInt32(parameter.CARD_5_COST);
	Stream->WriteInt32(parameter.CARD_6);
	Stream->WriteInt32(parameter.CARD_6_COST);
	Stream->WriteInt32(parameter.CARD_7);
	Stream->WriteInt32(parameter.CARD_7_COST);
	Stream->WriteInt32(parameter.CARD_8);
	Stream->WriteInt32(parameter.CARD_8_COST);
	Stream->WriteInt32(parameter.CARD_9);
	Stream->WriteInt32(parameter.CARD_9_COST);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_LOAD_CARDS_ON_SALE_FAIL_U(BYTE *buffer, S_PT_LOAD_CARDS_ON_SALE_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_UPGRADE_CARD(BYTE *buffer, S_PT_UPGRADE_CARD &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.CARD_TYPE);
	Stream->WriteInt32(parameter.CARD_LEVEL);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_UPGRADE_CARD_SUCC_U(BYTE *buffer, S_PT_UPGRADE_CARD_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.CARD_TYPE);
	Stream->WriteInt32(parameter.CARD_LEVEL);
	Stream->WriteInt32(parameter.CARD_UPGRADE_COST);
	Stream->WriteInt32(parameter.CARD_NUM_UPGRADE_NEED);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_UPGRADE_CARD_FAIL_U(BYTE *buffer, S_PT_UPGRADE_CARD_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_ACQUIRE_CHEST(BYTE *buffer, S_PT_ACQUIRE_CHEST &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.CHEST_TYPE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_ACQUIRE_CHEST_SUCC_U(BYTE *buffer, S_PT_ACQUIRE_CHEST_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(parameter.CHEST_TYPE);
	Stream->WriteInt64(parameter.ACQUIRE_TIME);
	Stream->WriteInt64(parameter.UNLOCK_TIME);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_ACQUIRE_CHEST_FAIL_U(BYTE *buffer, S_PT_ACQUIRE_CHEST_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(parameter.ERROR_CODE);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BUY_COINS(BYTE *buffer, INT user_id, CHAR *password, INT packet_level, INT diamonds, INT coins)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteBytes((BYTE*) password, sizeof(CHAR) * 32);
	Stream->WriteInt32(packet_level);
	Stream->WriteInt32(diamonds);
	Stream->WriteInt32(coins);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BUY_COINS_SUCC_U(BYTE *buffer, INT packet_level, INT diamonds, INT coins)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(packet_level);
	Stream->WriteInt32(diamonds);
	Stream->WriteInt32(coins);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BUY_COINS_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BUY_DIAMONDS(BYTE *buffer, INT user_id, CHAR *password, INT packet_level, INT diamonds)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteBytes((BYTE*) password, sizeof(CHAR) * 32);
	Stream->WriteInt32(packet_level);
	Stream->WriteInt32(diamonds);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BUY_DIAMONDS_SUCC_U(BYTE *buffer, INT packet_level, INT diamonds)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(packet_level);
	Stream->WriteInt32(diamonds);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BUY_DIAMONDS_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BUY_CARDS(BYTE *buffer, INT user_id, CHAR *password, INT coins, INT card_type, CHAR *card_name, INT card_num)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteBytes((BYTE*) password, sizeof(CHAR) * 32);
	Stream->WriteInt32(coins);
	Stream->WriteInt32(card_type);
	Stream->WriteBytes((BYTE*) card_name, sizeof(CHAR) * 32);
	Stream->WriteInt32(card_num);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BUY_CARDS_SUCC_U(BYTE *buffer, INT coins, INT card_type, CHAR *card_name, INT card_num)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(coins);
	Stream->WriteInt32(card_type);
	Stream->WriteBytes((BYTE*) card_name, sizeof(CHAR) * 32);
	Stream->WriteInt32(card_num);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_BUY_CARDS_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_OPEN_SUPPLY_CHEST(BYTE *buffer, INT user_id, CHAR *password, INT level, INT chest_type, CHAR *card_name, INT coins, INT diamonds)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_id);
	Stream->WriteBytes((BYTE*) password, sizeof(CHAR) * 32);
	Stream->WriteInt32(level);
	Stream->WriteInt32(chest_type);
	Stream->WriteBytes((BYTE*) card_name, sizeof(CHAR) * 32);
	Stream->WriteInt32(coins);
	Stream->WriteInt32(diamonds);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_OPEN_SUPPLY_CHEST_SUCC_U(BYTE *buffer, INT chest_type, INT chest_num, INT star_num, INT coins, INT diamonds, INT card_1_type, INT card_2_type, INT card_3_type, INT card_4_type, INT card_5_type, INT card_6_type, INT card_7_type, INT card_8_type, INT card_1_level, INT card_2_level, INT card_3_level, INT card_4_level, INT card_5_level, INT card_6_level, INT card_7_level, INT card_8_level, INT card_1_num, INT card_2_num, INT card_3_num, INT card_4_num, INT card_5_num, INT card_6_num, INT card_7_num, INT card_8_num)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(chest_type);
	Stream->WriteInt32(chest_num);
	Stream->WriteInt32(star_num);
	Stream->WriteInt32(coins);
	Stream->WriteInt32(diamonds);
	Stream->WriteInt32(card_1_type);
	Stream->WriteInt32(card_2_type);
	Stream->WriteInt32(card_3_type);
	Stream->WriteInt32(card_4_type);
	Stream->WriteInt32(card_5_type);
	Stream->WriteInt32(card_6_type);
	Stream->WriteInt32(card_7_type);
	Stream->WriteInt32(card_8_type);
	Stream->WriteInt32(card_1_level);
	Stream->WriteInt32(card_2_level);
	Stream->WriteInt32(card_3_level);
	Stream->WriteInt32(card_4_level);
	Stream->WriteInt32(card_5_level);
	Stream->WriteInt32(card_6_level);
	Stream->WriteInt32(card_7_level);
	Stream->WriteInt32(card_8_level);
	Stream->WriteInt32(card_1_num);
	Stream->WriteInt32(card_2_num);
	Stream->WriteInt32(card_3_num);
	Stream->WriteInt32(card_4_num);
	Stream->WriteInt32(card_5_num);
	Stream->WriteInt32(card_6_num);
	Stream->WriteInt32(card_7_num);
	Stream->WriteInt32(card_8_num);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_OPEN_SUPPLY_CHEST_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_LOAD_CARDS_ON_SALE(BYTE *buffer, INT user_level)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(user_level);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_LOAD_CARDS_ON_SALE_SUCC_U(BYTE *buffer, INT kinds_of_cards_on_sale, INT card_1, INT card_1_cost, INT card_2, INT card_2_cost, INT card_3, INT card_3_cost, INT card_4, INT card_4_cost, INT card_5, INT card_5_cost, INT card_6, INT card_6_cost, INT card_7, INT card_7_cost, INT card_8, INT card_8_cost, INT card_9, INT card_9_cost)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(kinds_of_cards_on_sale);
	Stream->WriteInt32(card_1);
	Stream->WriteInt32(card_1_cost);
	Stream->WriteInt32(card_2);
	Stream->WriteInt32(card_2_cost);
	Stream->WriteInt32(card_3);
	Stream->WriteInt32(card_3_cost);
	Stream->WriteInt32(card_4);
	Stream->WriteInt32(card_4_cost);
	Stream->WriteInt32(card_5);
	Stream->WriteInt32(card_5_cost);
	Stream->WriteInt32(card_6);
	Stream->WriteInt32(card_6_cost);
	Stream->WriteInt32(card_7);
	Stream->WriteInt32(card_7_cost);
	Stream->WriteInt32(card_8);
	Stream->WriteInt32(card_8_cost);
	Stream->WriteInt32(card_9);
	Stream->WriteInt32(card_9_cost);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_LOAD_CARDS_ON_SALE_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_UPGRADE_CARD(BYTE *buffer, INT card_type, INT card_level)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(card_type);
	Stream->WriteInt32(card_level);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_UPGRADE_CARD_SUCC_U(BYTE *buffer, INT card_type, INT card_level, INT card_upgrade_cost, INT card_num_upgrade_need)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(card_type);
	Stream->WriteInt32(card_level);
	Stream->WriteInt32(card_upgrade_cost);
	Stream->WriteInt32(card_num_upgrade_need);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_UPGRADE_CARD_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_ACQUIRE_CHEST(BYTE *buffer, INT chest_type)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(chest_type);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_ACQUIRE_CHEST_SUCC_U(BYTE *buffer, INT chest_type, INT64 acquire_time, INT64 unlock_time)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteInt32(chest_type);
	Stream->WriteInt64(acquire_time);
	Stream->WriteInt64(unlock_time);

	return Stream->GetLength();
}

inline DWORD WRITE_PT_ACQUIRE_CHEST_FAIL_U(BYTE *buffer, DWORD error_code)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->WriteDWORD(error_code);

	return Stream->GetLength();
}

