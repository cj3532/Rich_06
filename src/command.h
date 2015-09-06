/*
* ������Ϸ�е�����������������
*/

#ifndef _COMMAND_H_
#define _COMMAND_H_

#include "types.h"

/*
* ���� char *get_command(char *buffer, int length);
* ������buffer �����洢���������Ļ�����
* ������length �������ĳ���
* ���ã���ȡ��ǰ�������Ĳ�������
* ����ֵ��ָ��洢���������Ļ�������ָ��
* ���ߣ���̩Ȼ
*/
char *get_command(char *buffer, int length);

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
* ���� void sell_all_houses(Game *game, Player *player);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ������player ָ��������ݽṹ���ָ�룬��ʾ��ǰ���
* ���ã����۵�ǰ��ҵ����з���
* ���ߣ���̩Ȼ
*/
void sell_all_houses(Game *game, Player *player);

/*
* ���� void sell_one_house(Player *player, Place *place);
* ������player ָ��������ݽṹ���ָ�룬��ʾ��ǰ���
* ������place ָ��ؿ����ݽṹ���ָ�룬��ʾĳһ�ؿ�
* ���ã�ִ�г��۸����ָ��λ�õķ����Ķ���
* ��ע���ú�����������֤���ɵ�����ȷ��������ȷ
* ���ߣ���̩Ȼ
*/
void sell_one_house(Player *player, Place *place);

/*
* ���� void eliminate_player(Game *game, Player *player);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ������player ָ��������ݽṹ���ָ�룬��ʾ��ǰ���
* ���ã��Ը����ִ���Ʋ�����
* ���ߣ���̩Ȼ
*/
void eliminate_player(Game *game, Player *player);

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
* ���� void next_player(Game *game);
* ������game ָ����Ϸ���ݽṹ���ָ��
* ���ã���Ȩ����һ�����
* ���ߣ���̩Ȼ
*/
void next_player(Game *game);

/*
* ���� void place_bomb(Game *game,int number);
* ���� game ָ����Ϸ���ݽṹ���ָ��
* ���� number ���õ�ը�����뵱ǰλ�õ�������
* ���� ����ը��
* ����
*/
void place_bomb(Game *game,int number);

/*
* ���� void buy_bomb(Game *game);
* ���� game ָ����Ϸ���ݽṹ���ָ��
* ���� ����ը��
* ����
*/
void buy_bomb(Game *game);
#endif