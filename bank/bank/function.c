#include"header.h"
int i;

void Balance_inquiry() {
	printf("\n");
	printf("                                           %d�� ���ҽ��ϴ�. \n\n\n", Customer[i].money);
	
}//�ܾ���ȸ

void Deposit(int selected_money){
	printf("\n\n\n");
	printf("                          �Ա��մϴ�.\n\n\n");
	Customer[i].money += selected_money;
	printf("                    %d�� ���ҽ��ϴ�.\n\n\n", Customer[i].money);
}//�Ա� 

void Withdraw(int selected_money) {
	printf("\n\n\n");
	printf("					����մϴ�.\n\n\n");
	
	if (selected_money > Customer[i].money)

	printf("					�ܾ��� �����մϴ�. ��ݵ��� �ʾҽ��ϴ�. \n\n");
	else {

	Customer[i].money -= selected_money;
	printf("					%d�� ���ҽ��ϴ�.\n", Customer[i].money);
	}
}//���

void Interest_deposit(int selected_money) {
	printf("\n\n\n");
	printf("���� ���ڴ� 2% �Դϴ�.\n\n\n");
	printf("���� ����� �����մϴ�.\n\n\n");
	printf("1�� �Ŀ��� %lf ���� �˴ϴ�.\n\n\n", Customer[i].money *1.02);
}
//���� ���� ���� 
void Interest_installment(int selected_money) {
	printf("\n\n\n");
	printf("								���� ���ڴ� 5% �Դϴ�.\n");
	printf("								���� ����� �Ұ����մϴ�.\n");
	printf("								1�� �Ŀ��� %lf ���� �˴ϴ�.\n", Customer[i].money *1.05);

}//���� ���� ���� 
