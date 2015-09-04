/*
* ���������ʼ��ģ��Ĵ���
*/

#ifndef _INIT_H_
#define _INIT_H_

#include "types.h"

/*
* ���� void init_money(Game *game);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ���ã���ʼ��ÿλ��ҵ��ʽ𣬳�ʼ�ʽ�Χ1000 - 50000��Ĭ��10000
* ���ߣ��Ƽ���
*/
void init_money(Game *game);

/*
* ���� void init_players(Game *game);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ���ã���ʼ����Ϸ�е��������
* ���ߣ��Ƽ���
*/
void init_players(Game *game);

/*
* ���� void init_player(Game *game,int index,char number);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ������index ��ǰ��ҵ��±�
* ������number ��ǰ��ҵ����ֱ�ʶ
* ���ã���ʼ����Ϸ��ҵĲ��ظ�����
* ���ߣ��Ƽ���
*/
void init_player(Game *game,int index,char number);

/*
* ���� int analyse_players(char *number);
* ������number �������ұ�������ָ��
* ���ã������������ұ���Ƿ�Ϸ�
* ���ߣ��Ƽ���
*/
int analyse_players(char *number);

/*
* ���� void init_map(Game *game);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ���ã���ʼ����Ϸ�еĵ�ͼ����
* ���ߣ��Ƽ���
*/
void init_map(Game *game);

/*
* ���� void init_others(Game *game);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ���ã���ʼ����Ϸ�е��������ݣ��������õ���������ڴ˽�������
* ���ߣ��Ƽ���
*/
void init_others(Game *game);

#endif