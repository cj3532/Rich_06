/*
* ���������е����� 
*/

#ifndef _TYPES_H_
#define _TYPES_H_

#define MAX_PLAYER_NUM 4		// ������������ֵ
#define MAX_PLACE_NUM 70		// �ؿ������

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
	int initial_money;	// ÿλ��ҳ�ʼ�ʽ�
	int player_num;	// ��Ҹ���
	Player players[MAX_PLAYER_NUM];	// ������ݽṹ������
	int current_player_index;	// ��ǰ��ҵ��±�
	unsigned int place_num;	// ��ͼ���ȣ�����Ч�ؿ����
	Place map[MAX_PLACE_NUM];	// �ؿ����ݽṹ������
}Game;	// ��Ϸ����

typedef enum{
	START = 'S',	// ��� 'S'
	LAND = '0',		// �յ� '0'
	HOSPITAL = 'H',	// ҽԺ 'H'
	TOOLS_HOUSE = 'T',	// ������ 'T'
	GIFT_HOUSE = 'G',	// ��Ʒ�� 'G'
	PRISON = 'P',	// ���� 'P'
	MINE = '$',		// ��� '$'
	MAGIC_HOUSE = 'M',	// ħ���� 'M'
	OWN_LAND = 1,
	OTHERS_LAND = 2
}PLACE_TYPE;	// �ؿ����ͣ�ö������

typedef enum{
	BLOCK = '#',	// ·�� '#'
	BOMB = '@'		// ը�� '@'
}TOOLS_TYPE;	// �������ͣ�ö������

typedef enum{
	NORMAL = 0,	// ����
	OUT = 1		// ���Ʋ�
}PLAYER_STATUS;	// ���״̬��ö������

#endif