#include "command.h"
#include "helper.h"
#include "init.h"
#include "types.h"
#include "view.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	Game game;	// ��Ϸ���ݵĽṹ�����

	// ��ʼ��ÿλ��ҵ��ʽ�
	init_money(&game);
	// ��ʼ�����
	init_players(&game);
	// ��ʼ����ͼ
	init_map(&game);
	// ��ʼ����Ϸ�е���������
	init_others(&game);

	// �����ͼ
	output_map(&game);

	// ����Ϊ��Ϸ��Ҫ���̣��ɸ�����Ҫ�޸Ĵ���
	while (1)
	{
		// �˴�д��Ϸ��Ҫ����

		// �˴�д�ж���Ϸ�Ƿ�����Ĵ��룬���õĺ����Լ�����
		// ����������
		// if (is_game_over(&game))
		// {
		//		break;
		// }
	}

	// ��Ϸ������Դ���ͷţ����ʹ����malloc���������ڴ棬���������free���������ͷ�

	return 0;
}
