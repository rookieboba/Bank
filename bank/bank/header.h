void Balance_inquiry();
void Deposit(int selected_money);
void Withdraw(int selected_money);
void Interest_installment(int selected_money);
void Interest_deposit(int selected_money);

#include<stdio.h>
struct Person {						//구조체 선언

	char name[9];					//이름
	char resident_registration_number[25];//주민등록번호
	int Card_Password;				//카드 비밀번호
	int money;						//잔액
	char account_number[40]; //통장 번호
};

typedef struct Person Person;

Person Customer[10];					//최대 10명까지 등록할 수 있도록 하였음 
//SIZE 로 define 함 
