#pragma once

inline VOID READ_PT_BUY_COINS(BYTE *buffer, S_PT_BUY_COINS &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);
	Stream->ReadInt32(&parameter.PACKET_LEVEL);
	Stream->ReadInt32(&parameter.DIAMONDS);
	Stream->ReadInt32(&parameter.COINS);
}

inline VOID READ_PT_BUY_COINS_SUCC_U(BYTE *buffer, S_PT_BUY_COINS_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.PACKET_LEVEL);
	Stream->ReadInt32(&parameter.DIAMONDS);
	Stream->ReadInt32(&parameter.COINS);
}

inline VOID READ_PT_BUY_COINS_FAIL_U(BYTE *buffer, S_PT_BUY_COINS_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_BUY_DIAMONDS(BYTE *buffer, S_PT_BUY_DIAMONDS &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);
	Stream->ReadInt32(&parameter.PACKET_LEVEL);
	Stream->ReadInt32(&parameter.DIAMONDS);
}

inline VOID READ_PT_BUY_DIAMONDS_SUCC_U(BYTE *buffer, S_PT_BUY_DIAMONDS_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.PACKET_LEVEL);
	Stream->ReadInt32(&parameter.DIAMONDS);
}

inline VOID READ_PT_BUY_DIAMONDS_FAIL_U(BYTE *buffer, S_PT_BUY_DIAMONDS_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_BUY_CARDS(BYTE *buffer, S_PT_BUY_CARDS &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);
	Stream->ReadInt32(&parameter.COINS);
	Stream->ReadInt32(&parameter.CARD_TYPE);
	Stream->ReadBytes((BYTE*) parameter.CARD_NAME, sizeof(CHAR) * 32);
	Stream->ReadInt32(&parameter.CARD_NUM);
}

inline VOID READ_PT_BUY_CARDS_SUCC_U(BYTE *buffer, S_PT_BUY_CARDS_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.COINS);
	Stream->ReadInt32(&parameter.CARD_TYPE);
	Stream->ReadBytes((BYTE*) parameter.CARD_NAME, sizeof(CHAR) * 32);
	Stream->ReadInt32(&parameter.CARD_NUM);
}

inline VOID READ_PT_BUY_CARDS_FAIL_U(BYTE *buffer, S_PT_BUY_CARDS_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_OPEN_SUPPLY_CHEST(BYTE *buffer, S_PT_OPEN_SUPPLY_CHEST &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_ID);
	Stream->ReadBytes((BYTE*) parameter.PASSWORD, sizeof(CHAR) * 32);
	Stream->ReadInt32(&parameter.LEVEL);
	Stream->ReadInt32(&parameter.CHEST_TYPE);
	Stream->ReadBytes((BYTE*) parameter.CARD_NAME, sizeof(CHAR) * 32);
	Stream->ReadInt32(&parameter.COINS);
	Stream->ReadInt32(&parameter.DIAMONDS);
}

inline VOID READ_PT_OPEN_SUPPLY_CHEST_SUCC_U(BYTE *buffer, S_PT_OPEN_SUPPLY_CHEST_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.CHEST_TYPE);
	Stream->ReadInt32(&parameter.CHEST_NUM);
	Stream->ReadInt32(&parameter.STAR_NUM);
	Stream->ReadInt32(&parameter.COINS);
	Stream->ReadInt32(&parameter.DIAMONDS);
	Stream->ReadInt32(&parameter.CARD_1_TYPE);
	Stream->ReadInt32(&parameter.CARD_2_TYPE);
	Stream->ReadInt32(&parameter.CARD_3_TYPE);
	Stream->ReadInt32(&parameter.CARD_4_TYPE);
	Stream->ReadInt32(&parameter.CARD_5_TYPE);
	Stream->ReadInt32(&parameter.CARD_6_TYPE);
	Stream->ReadInt32(&parameter.CARD_7_TYPE);
	Stream->ReadInt32(&parameter.CARD_8_TYPE);
	Stream->ReadInt32(&parameter.CARD_1_LEVEL);
	Stream->ReadInt32(&parameter.CARD_2_LEVEL);
	Stream->ReadInt32(&parameter.CARD_3_LEVEL);
	Stream->ReadInt32(&parameter.CARD_4_LEVEL);
	Stream->ReadInt32(&parameter.CARD_5_LEVEL);
	Stream->ReadInt32(&parameter.CARD_6_LEVEL);
	Stream->ReadInt32(&parameter.CARD_7_LEVEL);
	Stream->ReadInt32(&parameter.CARD_8_LEVEL);
	Stream->ReadInt32(&parameter.CARD_1_NUM);
	Stream->ReadInt32(&parameter.CARD_2_NUM);
	Stream->ReadInt32(&parameter.CARD_3_NUM);
	Stream->ReadInt32(&parameter.CARD_4_NUM);
	Stream->ReadInt32(&parameter.CARD_5_NUM);
	Stream->ReadInt32(&parameter.CARD_6_NUM);
	Stream->ReadInt32(&parameter.CARD_7_NUM);
	Stream->ReadInt32(&parameter.CARD_8_NUM);
}

inline VOID READ_PT_OPEN_SUPPLY_CHEST_FAIL_U(BYTE *buffer, S_PT_OPEN_SUPPLY_CHEST_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_LOAD_CARDS_ON_SALE(BYTE *buffer, S_PT_LOAD_CARDS_ON_SALE &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.USER_LEVEL);
}

inline VOID READ_PT_LOAD_CARDS_ON_SALE_SUCC_U(BYTE *buffer, S_PT_LOAD_CARDS_ON_SALE_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.KINDS_OF_CARDS_ON_SALE);
	Stream->ReadInt32(&parameter.CARD_1);
	Stream->ReadInt32(&parameter.CARD_1_COST);
	Stream->ReadInt32(&parameter.CARD_2);
	Stream->ReadInt32(&parameter.CARD_2_COST);
	Stream->ReadInt32(&parameter.CARD_3);
	Stream->ReadInt32(&parameter.CARD_3_COST);
	Stream->ReadInt32(&parameter.CARD_4);
	Stream->ReadInt32(&parameter.CARD_4_COST);
	Stream->ReadInt32(&parameter.CARD_5);
	Stream->ReadInt32(&parameter.CARD_5_COST);
	Stream->ReadInt32(&parameter.CARD_6);
	Stream->ReadInt32(&parameter.CARD_6_COST);
	Stream->ReadInt32(&parameter.CARD_7);
	Stream->ReadInt32(&parameter.CARD_7_COST);
	Stream->ReadInt32(&parameter.CARD_8);
	Stream->ReadInt32(&parameter.CARD_8_COST);
	Stream->ReadInt32(&parameter.CARD_9);
	Stream->ReadInt32(&parameter.CARD_9_COST);
}

inline VOID READ_PT_LOAD_CARDS_ON_SALE_FAIL_U(BYTE *buffer, S_PT_LOAD_CARDS_ON_SALE_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_UPGRADE_CARD(BYTE *buffer, S_PT_UPGRADE_CARD &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.CARD_TYPE);
	Stream->ReadInt32(&parameter.CARD_LEVEL);
}

inline VOID READ_PT_UPGRADE_CARD_SUCC_U(BYTE *buffer, S_PT_UPGRADE_CARD_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.CARD_TYPE);
	Stream->ReadInt32(&parameter.CARD_LEVEL);
	Stream->ReadInt32(&parameter.CARD_UPGRADE_COST);
	Stream->ReadInt32(&parameter.CARD_NUM_UPGRADE_NEED);
}

inline VOID READ_PT_UPGRADE_CARD_FAIL_U(BYTE *buffer, S_PT_UPGRADE_CARD_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

inline VOID READ_PT_ACQUIRE_CHEST(BYTE *buffer, S_PT_ACQUIRE_CHEST &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.CHEST_TYPE);
}

inline VOID READ_PT_ACQUIRE_CHEST_SUCC_U(BYTE *buffer, S_PT_ACQUIRE_CHEST_SUCC_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadInt32(&parameter.CHEST_TYPE);
	Stream->ReadInt64(&parameter.ACQUIRE_TIME);
	Stream->ReadInt64(&parameter.UNLOCK_TIME);
}

inline VOID READ_PT_ACQUIRE_CHEST_FAIL_U(BYTE *buffer, S_PT_ACQUIRE_CHEST_FAIL_U &parameter)
{
	CStreamSP Stream;
	Stream->SetBuffer(buffer);

	Stream->ReadDWORD(&parameter.ERROR_CODE);
}

