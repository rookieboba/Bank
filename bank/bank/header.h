void Balance_inquiry();
void Deposit(int selected_money);
void Withdraw(int selected_money);
void Interest_installment(int selected_money);
void Interest_deposit(int selected_money);

#include<stdio.h>
struct Person {						//����ü ����

	char name[9];					//�̸�
	char resident_registration_number[25];//�ֹε�Ϲ�ȣ
	int Card_Password;				//ī�� ��й�ȣ
	int money;						//�ܾ�
	char account_number[40]; //���� ��ȣ
};

typedef struct Person Person;

Person Customer[10];					//�ִ� 10����� ����� �� �ֵ��� �Ͽ��� 
//SIZE �� define �� 
