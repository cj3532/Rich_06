#include "view.h"
#include <stdio.h>
#include <stdlib.h>

/*
* ���� void output_map(Game *game);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ���ã������Ϸ�ĵ�ͼ
* ���ߣ�
*/
void output_map(Game *game)
{
<<<<<<< HEAD
	int i;
	char **map;
	map = init_print_map(game);
	for(i=0;i < game->player_num;i++)
	{
		player_place(game->players[i],map);
	}
	print(map);
	return;
=======

>>>>>>> whutzy/master
}

/*
* ���� void show_current_player(Game *game);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ���ã���ʾ��ǰ���
* ���ߣ�
*/
void show_current_player(Game *game)
{
<<<<<<< HEAD
	Player current_player;
	int current_player_index;
	current_player_index = game->current_player_index;
	current_player = game->players[current_player_index];
	printf("%s> \n",current_player.name);
	return;
}

/**
*��ʼ����ͼ 
**/
char ** init_print_map(Game *game)
{
	int i,j;
	char **map;
	int index_top,index_left,index_right,index_buttom;
	index_top = 0; index_left = 67; index_right = 28; index_buttom = 61;
	map = (char**) malloc(8*sizeof(char*));
	for(i=0;i<8;i++)
	{
		map[i] = (char*) malloc(28*sizeof(char));
		for(j=0;j<28;j++)
		{
			map[i][j] = ' ';
			if(i == 0)
			{
				map[i][j] = game->map[index_top].type;
				//���������е��� 
				if(game->map[index_top].tools_type != NULL)
				{
					map[i][j] = game->map[index_top].tools_type;
				}
				index_top++;
			}
			if(i == 7)
			{
				map[i][j] = game->map[index_buttom].type;
				//���������е��� 
				if(game->map[index_buttom].tools_type != NULL)
				{
					map[i][j] = game->map[index_buttom].tools_type;
				}
				index_buttom--;
			}
			if( j == 0 && i != 0 && i != 7)
			{
				map[i][j] = game->map[index_left].type;
				//���������е��� 
				if(game->map[index_left].tools_type != NULL)
				{
					map[i][j] = game->map[index_left].tools_type;
				}
				index_left--;
			}
			if(j == 27 && i != 0 && i != 7)
			{
				map[i][j] = game->map[index_right].type;
				//���������е��� 
				if(game->map[index_right].tools_type != NULL)
				{
					map[i][j] = game->map[index_right].tools_type;
				}
				index_right++;
			}
		}
	}
	return map;
} 

/**
*��map�б�ע�������λ�� 
**/
void player_place(Player player,char **map)
{
	int index_top,index_left,index_right,index_buttom;
	index_top = 0; index_left = 67; index_right = 29; index_buttom = 61; 
	unsigned int pos = player.pos;
	if(pos >= 0 && pos <= 27)
	{
		map[0][pos] = player.acronym;
	}
	else if(pos > 27 && pos < 34)
	{
		map[pos-27][27] = player.acronym;
	}
	else if(pos > 33 && pos < 62)
	{
		map[7][61-pos] = player.acronym;
	}
	else
	{
		map[68-pos][0] = player.acronym;
	}
	return;
}

/**
*��ӡ��ͼ 
**/
void print(char **map)
{
	int i,j;
	for(i=0;i<8;i++)
	{
		for(j=0;j<28;j++)
		{
			printf("%c ",map[i][j]);
		}
		printf("\n");
	}
	return;
}
=======
>>>>>>> whutzy/master

}
