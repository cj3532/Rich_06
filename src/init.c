#include "init.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
* ���� void init_money(Game *game);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ���ã���ʼ��ÿλ��ҵ��ʽ𣬳�ʼ�ʽ�Χ1000 - 50000��Ĭ��10000
* ���ߣ��Ƽ���
*/
void init_money(Game *game)
{
	int init_money;
	printf("��������ҳ�ʼ���(�ʽ�Χ1000 - 50000)��");
	scanf("%d",&init_money);
	if(init_money>=1000&&init_money<=50000)
	{
		game->init_money=init_money;
	}else{
		game->init_money=10000;
	}
}

/*
* ���� void init_players(Game *game);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ���ã���ʼ����Ϸ�е��������
* ���ߣ�
*/
void init_players(Game *game)
{
	int player_num;
	printf("��������Ҹ�������Ҹ�����ΧΪ2~4����");
	scanf("%d",&player_num);
	while(player_num<2||player_num>4)
	{
		printf("������������Ҹ�������Ҹ�����ΧΪ2~4����");
		scanf("%d",&player_num);
	}
	game->player_num=player_num;
	game->current_player_index=1;
	game->place_num=MAX_PLACE_NUM;
	for(int i=0;i<player_num;i++)
	{
		game->players[i].id=i+1;
		game->players[i].money=game->init_money;	// �����ӵ�е��ʽ�
		game->players[i].point=0;	//�����ӵ�еĵ���
		game->players[i].pos=0;	// ��ҵ�ǰλ�ã�0Ϊ��㣬��˳ʱ�뷽����������
		game->players[i].status=0;	// ��ҵ�״̬��������ҽԺ��Ϊ'H'���ڼ�����Ϊ'P'
		game->players[i].place_amount=0;	// �̶��ʲ��е����ص�����
		game->players[i].house_amount=0;	// �̶��ʲ��еķ��ݵ�����
		game->players[i].block_amount=0;	// ���ӵ�е�·�ϵ�����
		game->players[i].bomb_amount=0;	// ���ӵ�е�ը��������
		game->players[i].robot_amount=0;	// ���ӵ�еĻ������޵�����
		init_player(game,game->players[i].id);
	}
}

/*
*���� void init_player(Game *game);
*������id ��ǰ��ҵ�id
*���ã���ʼ����Ϸ��ҵĲ��ظ�����
*���ߣ��Ƽ���
*/
void init_player(Game *game,int id)
{
	switch(id)
	{
		case 1:
			strcpy(game->players[id-1].name,"Ǯ����");
			game->players[id-1].acronym='Q';
			//game->players[id-1].color=223322;
			break;
		case 2:
			strcpy(game->players[id-1].name,"������");
			game->players[id-1].acronym='A';
			//game->players[id-1].color=223322;
			break;
		case 3:
			strcpy(game->players[id-1].name,"��С��");
			game->players[id-1].acronym='S';
			//game->players[id-1].color=223322;
			break;
		case 4:
			strcpy(game->players[id-1].name,"�𱴱�");
			game->players[id-1].acronym='J';
			//game->players[id-1].color=223322;
			break;
		default:break;
	}
}

/*
* ���� void init_map(Game *game);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ���ã���ʼ����Ϸ�еĵ�ͼ����
* ���ߣ�
*/
void init_map(Game *game)
{

}

/*
* ���� void init_others(Game *game);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ���ã���ʼ����Ϸ�е��������ݣ��������õ���������ڴ˽�������
* ���ߣ�
*/
void init_others(Game *game)
{
	srand(time(NULL));
}