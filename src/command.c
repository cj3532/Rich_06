#include "command.h"
#include "helper.h"
#include <stdio.h>
#include <stdlib.h>


/*
* ���� void get_command(char *buffer, int length);
* ������buffer �����洢���������Ļ�����
* ������length �������ĳ���
* ���ã���ȡ��ǰ�������Ĳ�������
* ���ߣ���̩Ȼ
*/
void get_command(char *buffer, int length)
{
	char *temp = buffer;	// ����ָ�򻺳�����ָ��

	fgets(buffer, length, stdin);
	while (*temp != '\0')
	{
		if (*temp == '\n')
		{
			*temp = '\0';	// �����з�����Ϊ'\0'
		}
		temp++;	// ָ����һ���ַ�
	}
}

/*
* ���� void parse_command(char *command);
* ������command ��ǰ�������Ĳ��������ַ���
* ���ã�������ǰ�������Ĳ������ִ����Ӧ������
* ���ߣ�
*/
void parse_command(char *command)
{

}

/*
* ���� void roll(Game *game);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ���ã���ǰ�������������
* ���ߣ�
*/
void roll(Game *game)
{

}

/*
* ���� void buy_land(Game *game);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ���ã���ǰ��ҹ���һ��δ�����������
* ���ߣ�
*/
void buy_land(Game *game)
{

}

/*
* ���� void update_land(Game *game);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ���ã���ǰ�������һ���Ѿ����������
* ���ߣ�
*/
void update_land(Game *game)
{

}

/*
* ����void pay_others_land(Game *game);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ���ã����������֧����·��
* ���ߣ�
*/
void pay_others_land(Game *game)
{

}

/*
* ���� void next_player(Game *game);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ���ã���Ȩ����һ�����
* ���ߣ�
*/
void next_player(Game *game)
{

}

/*
* ���� void help();
* ���ã���ʾ���������ʹ��˵��
* ���ߣ�
*/
void help()
{

}

/*
* ���� void quit();
* ���ã�ǿ�ƽ�����Ϸ
* ���ߣ�
*/
void quit()
{

}

/*
* ���� void sell(Game *game, int pos);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ������pos �����ڵ�ͼ�ϵľ���λ��
* ���ã���ǰ��ҳ���ָ��λ�õķ���
* ���ߣ�
*/
void sell(Game *game, int pos)
{

}

/*
* ���� void query(Player *player);
* ������player ָ��������ݽṹ���ָ�룬��ʾĳһ���
* ���ã���ʾ����ʲ���Ϣ
* ���ߣ�
*/
void query(Player *player)
{

}

/*
* ���� void step(Game *game, int number);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ������number ָ�������߲���
* ���ã�ʵ��ң�����ӹ��ܣ�����ָ��������Ĳ���
* ���ߣ�
*/
void step(Game *game, int number)
{

}