/*
* ���������������̨����йصĺ���
*/

#ifndef _VIEW_H_
#define _VIEW_H_

#include "types.h"

/**
*��ʼ����ͼ 
**/
char ** init_print_map(Game *game);

/**
*��map�б�ע�������λ�� 
**/
void player_place(Player player,char **map);

/**
*��ӡ��ͼ 
**/
void print(char **map);

/*
* ���� void output_map(Game *game);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ���ã������Ϸ�ĵ�ͼ
* ���ߣ�
*/
void output_map(Game *game);

/*
* ���� void show_current_player(Game *game);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ���ã���ʾ��ǰ���
* ���ߣ�
*/
void show_current_player(Game *game);


#endif



