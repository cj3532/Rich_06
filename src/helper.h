/*
* ���������еĸ�������
*/

#ifndef _HELPER_H_
#define _HELPER_H_

#include "types.h"

/*
* ���� int get_roll_number();
* ���ã���ȡ����������õĵ�����Ϊ1��6���������õ���������ڳ����ʼ��ʱ��������
* ����ֵ������������õĵ�����Ϊ1��6֮��
* ���ߣ���̩Ȼ
*/
int get_roll_number();

/*
* ���� int get_tools_amount(Player *player);
* ������player ָ��������ݽṹ���ָ�룬��ʾĳһ���
* ���ã���ȡָ����ҵĵ��ߵ�����
* ����ֵ��ָ����ҵĵ��ߵ�����
* ���ߣ���̩Ȼ
*/
int get_tools_amount(Player *player);

/*
* ���� void str_tolower(char *str);
* ������str ָ���ַ�����ָ��
* ���ã����ַ����е���ĸ��ΪСд��ʽ
* ���ߣ���̩Ȼ
*/
void str_tolower(char *str);

#endif