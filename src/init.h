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
*���� void init_player(Game *game);
*������game ָ����Ϸ���ݽṹ���ָ��,id ��ǰ��ҵ�id
*���ã���ʼ����Ϸ��ҵĲ��ظ�����
*���ߣ��Ƽ���
*/
void init_player(Game *game,int id);

/*
* ���� void init_map(Game *game);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ���ã���ʼ����Ϸ�еĵ�ͼ����
* ���ߣ�
*/
void init_map(Game *game);

/*
* ���� void init_others(Game *game);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ���ã���ʼ����Ϸ�е��������ݣ��������õ���������ڴ˽�������
* ���ߣ�
*/
void init_others(Game *game);

#endif