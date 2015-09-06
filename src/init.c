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
	int initial_money;
	printf("��������ҳ�ʼ���(�ʽ�Χ1000 - 50000)��");
	scanf("%d",&initial_money);
	if(initial_money>=1000&&initial_money<=50000)
	{
		game->initial_money=initial_money;
	}else{
		game->initial_money=10000;
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
	char number[MAX_PLAYER_NUM+1] ;
	int i;	// ѭ�����Ʊ���
	printf("��ѡ��2~4λ���ظ���ң������ż��ɣ�1��Ǯ���ˣ�2����������3����С����4���𱴱�����\n");
	scanf("%s",number);
	while(analyse_players(number))
	{
		printf("��ѡ��2~4λ���ظ���ң������ż��ɣ�1��Ǯ���ˣ�2����������3����С����4���𱴱�����\n");
		scanf("%s",number);
	}
	game->player_num=strlen(number);
	for(i=0;i<strlen(number);i++)
	{
		game->players[i].id=number[i]-'0';
		game->players[i].money=game->initial_money;	// �����ӵ�е��ʽ�
		game->players[i].point=0;	//�����ӵ�еĵ���
		game->players[i].days=0;
		game->players[i].pos=0;	// ��ҵ�ǰλ�ã�0Ϊ��㣬��˳ʱ�뷽����������
		game->players[i].status=NORMAL;	// ��ҵ�״̬��������ҽԺ��Ϊ'H'���ڼ�����Ϊ'P'
		game->players[i].place_amount=0;	// �̶��ʲ��е����ص�����
		game->players[i].house_amount=0;	// �̶��ʲ��еķ��ݵ�����
		game->players[i].block_amount=0;	// ���ӵ�е�·�ϵ�����
		game->players[i].bomb_amount=0;	// ���ӵ�е�ը��������
		game->players[i].robot_amount=0;	// ���ӵ�еĻ������޵�����
		init_player(game,i,number[i]);
	}
}

/*
* ���� void init_player(Game *game,int index,char number);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ������index ��ǰ��ҵ��±�
* ������number ��ǰ��ҵ����ֱ�ʶ
* ���ã���ʼ����Ϸ��ҵĲ��ظ�����
* ���ߣ��Ƽ���
*/
void init_player(Game *game,int index,char number)
{
	switch(number)
	{
		case '1':
			strcpy(game->players[index].name,"Ǯ����");
			game->players[index].acronym='Q';
			//game->players[index].color=223322;
			break;
		case '2':
			strcpy(game->players[index].name,"������");
			game->players[index].acronym='A';
			//game->players[index].color=223322;
			break;
		case '3':
			strcpy(game->players[index].name,"��С��");
			game->players[index].acronym='S';
			//game->players[index].color=223322;
			break;
		case '4':
			strcpy(game->players[index].name,"�𱴱�");
			game->players[index].acronym='J';
			//game->players[index].color=223322;
			break;
		default:break;
	}
}

/*
* ���� int analyse_players(char *number);
* ������number �������ұ�������ָ��
* ���ã������������ұ�ź͸����Ƿ�Ϸ�
* ���ߣ��Ƽ���
*/
int analyse_players(char *number)
{
	int flag=0;										//flagΪ��ʶ����
	int count1=0,count2=0,count3=0,count4=0;		//count1,count2,count3,count4�ֱ��ʾ���1��2��3��4�ĸ�����
	int i;		// ѭ�����Ʊ���
	if(strlen(number)<2||strlen(number)>4)
	{
		flag++;
	}
	for(i=0;i<strlen(number);i++)				//ͳ�Ƹ�����ŵĸ���
	{
		switch(number[i])
		{
			case '1':
				count1++;
				break;
			case '2':
				count2++;
				break;
			case '3':
				count3++;
				break;
			case '4':
				count4++;
				break;
			default:
				flag++;
				break;
		}
	}
	if(count1>1||count2>1||count3>1||count4>1)
		{
			flag++;
		}
	return flag;
}

/*
* ���� void init_map(Game *game);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ���ã���ʼ����Ϸ�еĵ�ͼ����
* ���ߣ��Ƽ���
*/
void init_map(Game *game)
{
	int i;			// ѭ�����Ʊ���
	game->current_player_index=0;
	game->place_num=MAX_PLACE_NUM;
	//��ʼ�����S��
	game->map[0].type=START;
	game->map[0].owner=NULL;
	game->map[0].price=0;
	game->map[0].tools_type='\0';
	game->map[0].x=0;
	game->map[0].y=0;
	//��ʼ���ض�1��
	for(i=1;i<28;i++)
	{
		game->map[i].type=LAND;
		game->map[i].owner=NULL;
		game->map[i].price=200;
		game->map[i].tools_type='\0';
		game->map[i].x=0;
		game->map[i].y=i;
	}
	//��ʼ��ҽԺH��
	game->map[14].type=HOSPITAL;
	game->map[14].price=0;
	//��ʼ��������T��
	game->map[28].type=TOOLS_HOUSE;
	game->map[28].owner=NULL;
	game->map[28].price=0;
	game->map[28].tools_type='\0';
	game->map[28].x=0;
	game->map[28].y=28;
	//��ʼ���ض�2��
	for(i=1;i<7;i++)
	{
		game->map[i+28].type=LAND;
		game->map[i+28].owner=NULL;
		game->map[i+28].price=500;
		game->map[i+28].tools_type='\0';
		game->map[i+28].x=i;
		game->map[i+28].y=28;
	}
	//��ʼ����Ʒ��G��
	game->map[35].type=GIFT_HOUSE;
	game->map[35].owner=NULL;
	game->map[35].price=0;
	game->map[35].tools_type='\0';
	game->map[35].x=7;
	game->map[35].y=28;
	//��ʼ���ض�3��
	for(i=1;i<28;i++)
	{
		game->map[i+35].type=LAND;
		game->map[i+35].owner=NULL;
		game->map[i+35].price=300;
		game->map[i+35].tools_type='\0';
		game->map[i+35].x=7;
		game->map[i+35].y=28-i;
	}
	//��ʼ������P��
	game->map[49].type=PRISON;
	game->map[49].price=0;
	//��ʼ��ħ����M��
	game->map[63].type=MAGIC_HOUSE;
	game->map[63].owner=NULL;
	game->map[63].price=0;
	game->map[63].tools_type='\0';
	game->map[63].x=7;
	game->map[63].y=0;
	//��ʼ�����$��
	for(i=1;i<7;i++)
	{
		game->map[i+63].type=MINE;
		game->map[i+63].owner=NULL;
		game->map[i+63].tools_type='\0';
		game->map[i+63].x=7-i;
		game->map[i+63].y=0;
	}
	game->map[64].price=20;
	game->map[65].price=80;
	game->map[66].price=100;
	game->map[67].price=40;
	game->map[68].price=80;
	game->map[69].price=60;
}

/*
* ���� void init_others(Game *game);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ���ã���ʼ����Ϸ�е��������ݣ��������õ���������ڴ˽�������
* ���ߣ��Ƽ���
*/
void init_others(Game *game)
{
	srand(time(NULL));
}