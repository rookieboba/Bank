#include"header.h"
int i;

void Balance_inquiry() {
	printf("\n");
	printf("                                           %d원 남았습니다. \n\n\n", Customer[i].money);
	
}//잔액조회

void Deposit(int selected_money){
	printf("\n\n\n");
	printf("                          입금합니다.\n\n\n");
	Customer[i].money += selected_money;
	printf("                    %d원 남았습니다.\n\n\n", Customer[i].money);
}//입금 

void Withdraw(int selected_money) {
	printf("\n\n\n");
	printf("					출금합니다.\n\n\n");
	
	if (selected_money > Customer[i].money)

	printf("					잔액이 부족합니다. 출금되지 않았습니다. \n\n");
	else {

	Customer[i].money -= selected_money;
	printf("					%d원 남았습니다.\n", Customer[i].money);
	}
}//출금

void Interest_deposit(int selected_money) {
	printf("\n\n\n");
	printf("예금 이자는 2% 입니다.\n\n\n");
	printf("예금 출금이 가능합니다.\n\n\n");
	printf("1년 후에는 %lf 원이 됩니다.\n\n\n", Customer[i].money *1.02);
}
//예금 이자 설명 
void Interest_installment(int selected_money) {
	printf("\n\n\n");
	printf("								적금 이자는 5% 입니다.\n");
	printf("								예금 출금이 불가능합니다.\n");
	printf("								1년 후에는 %lf 원이 됩니다.\n", Customer[i].money *1.05);

}//적금 이자 설명 
