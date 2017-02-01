#include<Windows.h>
#include<conio.h>
#include"header.h"			//이부분 먼저 봐주세요! 
#include<stdlib.h>
#include<string.h>
#define SIZE 10

void main() {

		int select;
		int check_password,money,user_password;
		int i = 0;
		int repeat = 1;
	
		char user_name[9], user_resident_registration_number[25]; //입력한 것이 저장된 것이 맞는지 비교해 보기 위해 선언 
	
		printf("\n\n\n");
		printf("                                                우리은행에 오신것을 환영합니다.");


	while (repeat) {   //종료될 때 까지 계속 반복 
		
		system("cls");
		printf("\n\n\n");
		printf("                             회원가입을 하시려면 1번, 회원이시면 2번 ,종료하시려면 0번을 눌러주세요:");
		scanf("%d", &select);

		// 시작시 선택지는 1번 2번 0번 뿐이다
	
		switch (select) {				//select 로 셋중 하나를 선택한다. 
		
		case 1:		//회원가입

		printf("\n\n\n");

		printf("                                               회원가입을 하여 주세요.");
		printf("\n\n");

		printf("                                  회원 가입을 위해 이름과 주민등록번호 13자리를 입력하세요.");
		printf("\n\n");

		printf("                                           이름:");
		scanf("%s", Customer[i].name);

		printf("\n\n");
		printf("                                           주민등록번호:");
		scanf("%s", Customer[i].resident_registration_number);

		//이름과 주민등록번호 입력

		printf("\n\n");
		printf("                                           통장과 카드를 넣어주세요.");
		printf("\n\n");
		
		char account_number_first[6];
		char account_number_second[4];
		char account_number_third[8];

		srand((unsigned int)time(NULL));

		int account_randnumber_first = 1000 + rand() % 9000;			//
		int account_randnumber_second = 100 + rand() % 900;
		int account_randnumber_third = 100000 + rand() % 900000;

		/*
		무작위 번호 선정
		단 앞자리를 살려야 한다
		xxxx-xxx-xxxxxx 이 되게 하려면 덧셈을 해야한다. 
		0으로 시작할 수 도 있으므로 수정이 필요할듯. 
		*/

		itoa(account_randnumber_first, account_number_first, 10);
		itoa(account_randnumber_second, account_number_second, 10);
		itoa(account_randnumber_third, account_number_third, 10);
			
		//문자열로 

		strcat(account_number_first, "-");
		strcat(account_number_first, account_number_second);
		strcat(account_number_first, "-");
		strcat(account_number_first, account_number_third);

		strcpy(Customer[i].account_number , account_number_first);

		//int 에서 문자열로 변경 
				
		printf("                                          넣은 통장의 계좌번호는 %s 입니다.",Customer[i].account_number);			
		printf("\n\n");

		printf("                                          넣은 카드의 비밀번호를 입력해주세요:");
		scanf("%d", &Customer[i].Card_Password);

		printf("\n\n");
			
		printf("                                         재확인을 위해 카드 비밀번호를 다시 입력해주세요:");
		scanf("%d", &check_password);

		printf("\n\n");

		/*비밀번호 확인*/

		if (check_password != Customer[i].Card_Password) {

		printf("                                    두 비밀번호가 다릅니다. 다시 입력해 주세요.");
		system("pause");
		printf("\n\n\n");
		system("cls");

		}

		else {

		system("cls");
		printf("\n\n\n");
		printf("                                            비밀번호가 확인되었습니다.");
		printf("\n\n\n");
		printf("                                            카드 설정이 완료되었습니다.");
		printf("\n\n\n");
		system("pause");
		select = 0;	//while 문 끝내기 		
		i++;		

		/*
		i 값을 증가시켜야 한다. 
		증가시키고 등록 할 경우 다음에 들어올때 다음사람으로 등록이 가능하다
		증가시키지 않으면 전에 등록했던 사람 정보를 지우고 다시 등록하게 된다. 
		i가 2에서 끝날 경우 i의 최종값은 2에서 멈춘다.
     	*/

		}
		break;

		case 2:   //가입해서 실행

		system("cls");

		printf("\n\n\n"); 
		printf("                                                        카드를 넣어주세요.");
		printf("\n\n\n");

		printf("                                            이름과 주민등록번호 13자리를 입력하세요.");
		printf("\n\n\n");
		printf("                                      이름:");
		scanf("%s", user_name);
		printf("\n\n\n");
		printf("                                      주민등록번호:");
		scanf("%s", user_resident_registration_number);

		printf("\n\n\n");
		printf("                                      카드 비밀번호:");
		scanf("%d", &user_password);
	/*
	이름 주민등록번호 카드를 세개 다 입력시킨다
	이름> 주민등록번호>카드 비밀번호 순서대로 알려줌
			
	O: 맞음 X: 틀림

	이름 |  주민등록번호 | 카드비밀번호
   ------+---------------+--------------	 
	O    |       O       |     O		환영합니다. 
	O    |       O       |     X		비밀번호가 틀렸습니다.
	O    |       X       |     O		주민등록번호가 다릅니다.
	O    |       X       |     X		주민등록번호가 다릅니다.

	*/ 
	int check = 0;		//등록된 이름인지 아닌지를 알아보기 위한 변수 

	for (int i = 0; i < SIZE; i++) {	

	//최대 10명까지 등록 가능하므로 ,10명을 다 비교해 본다.

		if (strcmp(user_name, Customer[i].name) == 0) {    
			check = 1; 
	
	//입력한 이름이 등록된 이름일 경우  

			if (strcmp(user_resident_registration_number, Customer[i].resident_registration_number) != 0) { 

	//등록된 이름과 주민등록번호가 매치되지 않을 경우 
		
		printf("\n\n\n");
		printf("                                               주민등록번호가 다릅니다.");
		printf("\n\n\n");		
		system("pause");

				}
			else {			

	//등록된 이름과 주민등록번호가 매치될 경우	

				if (user_password != Customer[i].Card_Password) {

	//등록된 이름과 주민등록번호는 매치되고 비밀번호는 맞지 않을 경우 
		
		printf("\n\n\n");
		printf("                                              비밀번호가 틀렸습니다.");
		printf("\n\n\n");
		printf("                                              다시 입력해 주십시오.");
		printf("\n\n\n");
		system("pause");

				}

				else {	
	//등록된 이름과 주민등록번호 카드 비밀번호 까지 다 맞을경우 		
		
		int turtle = 1;
		while (turtle) {

	//로그인 하여 할 수 있는 것

		system("cls");
		printf("\n\n\n");
		printf("                                                   환영합니다. %s 님", Customer[i].name);
		printf("\n\n\n");
		printf("                               1.예금조회");
		printf("\n\n");
		printf("                               2.입금/무통장 송금");
		printf("\n\n");
		printf("                               3.예금출금");
		printf("\n\n");
		printf("                               4.이자"); //수정
		printf("\n\n");
		printf("                               5.대출"); //수정 
		printf("\n\n");
		printf("                               6.계좌이체");
		printf("\n\n");
		printf("                               7.도움말");
		printf("\n\n");
		printf("                               0.나가기");
		printf("\n\n\n\n");
		printf("                                                   선택:");
		scanf("%d", &select);

		system("cls");

		switch (select) {

		case 1:

		printf("\n\n\n");
		Balance_inquiry();

		system("pause");
		
		break;

		case 2:

		printf("\n\n\n");
		printf("                                       입금할 금액을 입력하시오:");			
		scanf("%d", &money);
		Deposit(money);

		system("pause");		

		break;

		case 3:
										
		printf("\n\n\n");
		printf("                                        출금할 금액을 입력하시오:");
		scanf("%d", &money);
		Withdraw(money);
		
		system("pause");
		
		break;

		case 4:

		printf("\n\n\n");
		printf("               1번:예금 이자 설명  ");
		printf("\n\n\n");
		printf("               2번:적금 이자 설명 ");
		printf("\n\n\n");
		printf("               3번:대출 이자 설명  ");
		printf("\n\n\n");
		printf("               0번:종료");
		printf("\n\n\n");
		printf("\n\n\n");
		printf("                                                        선택:");
		scanf("%d", &select);
		printf("\n\n\n");

		switch (select) {

		case 1:

		Interest_deposit(Customer[i].money);
		break;

		case 2:

		Interest_installment(Customer[i].money);
		break;

		case 3:

		printf("                                  대출 금액은 %lf 입니다.",Customer[i].loan * 1.1);
	
		break;

		case 0:

		printf("                                   다시 선택해 주십시오.");
		break;

		default:
		printf("                                   잘못 누르셨습니다.");

		}

		system("pause");
		
		break;

		case 5:										//대출 (미완성)

		printf("\n\n\n");
		int borrow;	
		printf("                            대출 받을 금액을 입력하십시요:");
		scanf("%d", &borrow);
		Customer[i].loan += borrow;

		system("pause");
	

		break;

		case 6:		
		//계좌이체 
				
		int j,temporary_money;
		int check = 0;
		char temporary[40];						
										
	
		printf("\n\n\n");
		printf("							내 계좌번호 :%s", Customer[i].account_number);
		//계좌번호 확인 										
		
		printf("\n\n\n");
		printf("\n\n\n");
		printf("			송금할 계좌번호를 입력해주세요.  ");
		printf("\n\n\n");
		printf(" 			");
		scanf("%s",&temporary);			

		/*
		scanf("%s",temporary) == scanf("%s",&temporary[0]);
		scanf("%s",&temporary) -> pointer to temporary[40])
		http://stackoverflow.com/questions/5406935/reading-a-string-with-scanf
		http://stackoverflow.com/questions/37479203/using-s-with-array
		*/

		printf("\n\n\n");
		for (j = 0; j < SIZE; j++) {
			if (strcmp(&temporary, Customer[j].account_number) == 0) {
		//이름이 같을 경우 
				check = 1;

				if (strcmp(&temporary, Customer[i].account_number) == 0) {
		//자신의 계좌와 이름이 같을 경우

		system("cls");
		printf("\n\n\n");		
		printf("					자신에게는 계좌이체를 할 수 없습니다.");
		printf("\n\n\n");
					}
				else {		
		system("cls");
		printf("\n\n\n");
		printf("			       송금할 금액을 입력해주세요:");
		scanf("%d", &temporary_money);
		Withdraw(temporary_money);						//로그인된 사람 통장에서 출금
		Customer[j].money += temporary_money;			//계좌번호가 같은 사람 통장에 돈을 입금			
		printf("\n\n\n");
		printf("       %s님의 계좌에서 %s님의 계좌로 %d원이 송금되었습니다.", 
			Customer[i].name, Customer[j].name, temporary_money);
				}
			}
		}
		
		// 계좌번호 틀렸을 때를 선언
		if (check == 0) {
			printf("\n\n\n");
			printf("                                 계좌이체에 실패하였습니다.             ");
			printf("\n\n\n");
		}
		system("pause");

		break;

		case 7:
		//	도움말
										
		int select;										
		int password;
		int changed_password,check_password;		
		//변경할 비밀번호 와 재확인	
																									
		printf("\n\n\n");
		printf("\n\n\n");
		printf("					 1. 비밀번호 변경 ");
		printf("\n\n\n");
		printf("					 2. 계좌번호 조회 ");

		printf("\n\n\n");
		printf(" 						         선택:");
		scanf("%d", &select);

		switch (select) {

		case 1:

		system("cls");
		printf("\n\n\n");
		printf("\n\n\n");
											
		printf("                        비밀번호 변경을 시작합니다.");
		printf("\n\n\n");
		printf("						비밀번호를 입력해주세요: ");
		scanf("%d", &password);

		/*
		비밀번호 입력 성공할 경우 
		*/

		if (password == Customer[i].Card_Password) {
		printf("\n\n\n");
		printf("						신원이 확인 되었습니다.");
		printf("\n\n\n");
		printf("						바꾸실 비밀번호 4자리를 입력하세요:");
		scanf("%d", &changed_password);


		printf("\n\n\n");
		printf("						다시 한번 입력하십시요.");
		scanf("%d", &check_password);

		//재확인

		if (changed_password == check_password) {

		printf("\n\n\n");
		printf("                       비밀번호가 변경되었습니다.");
		Customer[i].Card_Password = changed_password;
												
		}
		else {
			printf("\n\n\n");
			printf("				   입력한 두 비밀번호가 다릅니다. 다시 입력하십시요.");
			 }
		}

		else

		printf("					  비밀번호가 틀렸습니다. 다시 입력하십시오.");

		printf("\n\n\n");
		
		break;

		case 2:

		system("cls");
		printf("\n\n\n");
		printf("\n\n\n");
		printf("								  당신의 계좌번호는 %s 입니다."
										, Customer[i].account_number);
		printf("\n\n\n");

		break;

		default:

		printf("\n\n\n");
		printf("											 잘못 누르셨습니다.");
		printf("\n\n\n");

		}

		system("pause");
		
		break;

		case 0:														//나가기

		turtle = 0;
		system("cls");
		break;

		default:

		printf("											   잘못 누르셨습니다.");
		printf("\n\n\n");
								}	//이름,비밀번호,주민번호 모두 맞았을 경우 할 수 있는 switch의 끝
							}		//로그인 해서 할 수 있는 while(d) 의 끝
						}			//로그인 했을 때
					}				//등록된 이름과 주민등록번호가 매치될 경우 
				}					//이름이 등록되어 있는 경우	
			}						//for 문 

	if (check == 0) {
		printf("\n\n\n");
		printf("                                           등록되지 않는 이름입니다.");
		printf("\n\n\n");

		}
		
		break;	

		default:

		printf("\n\n\n");
		printf("											   종료합니다.");
		printf("\n\n\n");		
		repeat = 0;

				}//전체 switch 끝			
			} //while 끝		
		}//main 끝