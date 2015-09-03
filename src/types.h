/*
* ���������е����� 
*/

#ifndef _TYPES_H_
#define _TYPES_H_

#define MAX_PLAYER_NUM 4		// ������������ֵ
#define MAX_PLACE_NUM 68		// �ؿ������

/* ����������ݵĽṹ�� */
typedef struct Player{
	int id;		// ��ұ�ţ���1��ʼ
	char name[7];	// �������
	int money;	// �����ӵ�е��ʽ�
	int point;	//�����ӵ�еĵ���
	unsigned int pos;	// ��ҵ�ǰλ�ã�0Ϊ��㣬��˳ʱ�뷽����������
	char acronym;	// �����ʾ����Ļ�ϵķ���
	char status;	// ��ҵ�״̬��������ҽԺ��Ϊ'H'���ڼ�����Ϊ'P'
	int place_amount;	// �̶��ʲ��е����ص�����
	int house_amount;	// �̶��ʲ��еķ��ݵ�����
	int block_amount;	// ���ӵ�е�·�ϵ�����
	int bomb_amount;	// ���ӵ�е�ը��������
	int robot_amount;	// ���ӵ�еĻ������޵�����
	unsigned short color;	// �����ɫ
}Player;	// ���

/* ����ؿ����ݵĽṹ�� */
typedef struct Place{
	char type;	// ���Σ�����'0'��ʾ��ʾ�յأ�'1'��ʾé�ݣ�'2'��ʾ�󷿣�'3'��ʾĦ��¥��ΪPLACE_TYPEö������
	Player *owner;	// �������ˣ������ʲ�ownerΪnull
	int price;	//���س�ʼ���ۣ����ڿ�أ�������ǵ���
	char tools_type;	// ������õĵ��ߵ����ͣ�ΪTOOLS_TYPE����
	unsigned int x;
	unsigned int y;
}Place;		// �ؿ�

/* ������Ϸ���ݵĽṹ�� */
typedef struct Game{
	int init_money;	// ÿλ��ҳ�ʼ�ʽ�
	int player_num;	// ��Ҹ���
	Player players[MAX_PLAYER_NUM];	// ������ݽṹ������
	int current_player_index;	// ��ǰ����ڽṹ�������е��±�
	unsigned int place_num;	// ��ͼ���ȣ�����Ч�ؿ����
	Place map[MAX_PLACE_NUM];	// �ؿ����ݽṹ������
}Game;	// ��Ϸ����

typedef enum{
	START = 'S',	// ���
	LAND = '0',		// �յ�
	HOSPITAL = 'H',	// ҽԺ
	TOOLS_HOUSE = 'T',	// ������
	GIFT_HOUSE = 'G',	// ��Ʒ��
	PRISON = 'P',	// ����
	MINE = '$',		// ���
	MAGIC_HOUSE = 'M',	// ħ����
	OWN_LAND = 1,
	OTHERS_LAND = 2
}PLACE_TYPE;	// �ؿ����ͣ�ö������

typedef enum{
	BLOCK = '#',	// ·��
	BOMB = '@'		// ը��
}TOOLS_TYPE;

#endif