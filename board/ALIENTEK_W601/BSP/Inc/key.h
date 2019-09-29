#ifndef _KEY_H
#define _KEY_H
#include "sys.h"

/*********************************************************************************
			  ___   _     _____  _____  _   _  _____  _____  _   __
			 / _ \ | |   |_   _||  ___|| \ | ||_   _||  ___|| | / /
			/ /_\ \| |     | |  | |__  |  \| |  | |  | |__  | |/ /
			|  _  || |     | |  |  __| | . ` |  | |  |  __| |    \
			| | | || |_____| |_ | |___ | |\  |  | |  | |___ | |\  \
			\_| |_/\_____/\___/ \____/ \_| \_/  \_/  \____/ \_| \_/

 *	******************************************************************************
 *	������ֻ��ѧϰʹ�ã�δ���������ɣ��������������κ���;
 *	ALIENTEK W601������
 *	KEY��������
 *	����ԭ��@ALIENTEK
 *	������̳:www.openedv.com
 *	��������:2019/7/10
 *	�汾��V1.0
 *	��Ȩ���У�����ؾ���
 *	Copyright(C) �������������ӿƼ����޹�˾ 2019-2029
 *	All rights reserved
 *	******************************************************************************
 *	��ʼ�汾
 *	******************************************************************************/

/*
	KEY0 	- PA7
	KEY1 	- PA6
	KEY_UP 	- PA8
*/
#define KEY0        PAin(7)
#define KEY1       	PAin(6)
#define KEY_UP       PAin(8)

#define KEY0_PRES 		1
#define KEY1_PRES		2
#define WKUP_PRES   	3

void KEY_Init(void);
u8 KEY_Scan(u8 mode);
#endif