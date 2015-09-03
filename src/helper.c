#include "helper.h"
#include <stdlib.h>
#include <ctype.h>

/*
* ���� get_roll_number();
* ���ã���ȡ����������õĵ�����Ϊ1��6���������õ���������ڳ����ʼ��ʱ��������
* ����ֵ������������õĵ�����Ϊ1��6֮��
* ���ߣ���̩Ȼ
*/
int get_roll_number()
{
	return rand() % 6 + 1;
}

/*
* ���� int get_tools_amount(Player *player);
* ������player ָ��������ݽṹ���ָ�룬��ʾĳһ���
* ���ã���ȡָ����ҵĵ��ߵ�����
* ����ֵ��ָ����ҵĵ��ߵ�����
* ���ߣ���̩Ȼ
*/
int get_tools_amount(Player *player)
{
	return player -> block_amount + player -> bomb_amount + player -> robot_amount;
}

/*
* ���� void str_tolower(char *str);
* ������str ָ���ַ�����ָ��
* ���ã����ַ����е���ĸ��ΪСд��ʽ
* ���ߣ���̩Ȼ
*/
void str_tolower(char *str)
{
	char *temp = str;	// ����ָ���ַ�����ָ��

	while (*temp != '\0')
	{
		if (isalpha(*temp))
		{
			*temp = tolower(*temp);	// ����ĸ��ΪСд��ʽ
		}
		temp++;
	}
}