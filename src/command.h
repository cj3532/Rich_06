/*
* ������Ϸ�е�����������������
*/

#ifndef _COMMAND_H_
#define _COMMAND_H_

#include "types.h"

/*
* ���� void get_command(char *buffer, int length);
* ������buffer �����洢���������Ļ�����
* ������length �������ĳ���
* ���ã���ȡ��ǰ�������Ĳ�������
* ���ߣ���̩Ȼ
*/
void get_command(char *buffer, int length);

/*
* ���� void parse_command(char *command);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ������command ��ǰ�������Ĳ��������ַ���
* ���ã�������ǰ�������Ĳ������ִ����Ӧ������
* ���ߣ���̩Ȼ
*/
void parse_command(Game *game, char *command);

/*
* ���� void roll(Game *game);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ���ã���ǰ�������������
* ���ߣ���̩Ȼ
*/
void roll(Game *game);

/*
* ���� void buy_land(Game *game);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ���ã���ǰ��ҹ���һ��δ�����������
* ���ߣ���̩Ȼ
*/
void buy_land(Game *game);

/*
* ���� void update_land(Game *game);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ���ã���ǰ�������һ���Ѿ����������
* ���ߣ���̩Ȼ
*/
void update_land(Game *game);

/*
* ���� void pay_others_land(Game *game);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ���ã����������֧����·��
* ���ߣ���̩Ȼ
*/
void pay_others_land(Game *game);

/*
* ���� void next_player(Game *game);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ���ã���Ȩ����һ�����
* ���ߣ���̩Ȼ
*/
void next_player(Game *game);

/*
* ���� void help();
* ���ã���ʾ���������ʹ��˵��
* ���ߣ���̩Ȼ
*/
void help();

/*
* ���� void quit();
* ���ã�ǿ�ƽ�����Ϸ
* ���ߣ���̩Ȼ
*/
void quit();

/*
* ���� void sell(Game *game, int pos);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ������pos �����ڵ�ͼ�ϵľ���λ��
* ���ã���ǰ��ҳ���ָ��λ�õķ���
* ���ߣ���̩Ȼ
*/
void sell(Game *game, int pos);

/*
* ���� void query(Game *game, Player *player);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ������player ָ��������ݽṹ���ָ�룬��ʾĳһ���
* ���ã���ʾ����ʲ���Ϣ
* ���ߣ���̩Ȼ
*/
void query(Game *game, Player *player);

/*
* ���� void step(Game *game, int number);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ������number ָ�������߲���
* ���ã�ʵ��ң�����ӹ��ܣ�����ָ��������Ĳ���
* ���ߣ���̩Ȼ
*/
void step(Game *game, int number);

#endif