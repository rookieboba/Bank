#include<Windows.h>
#include<conio.h>
#include"header.h"			//�̺κ� ���� ���ּ���! 
#include<stdlib.h>
#include<string.h>
#define SIZE 10

void main() {

		int select;
		int check_password,money,user_password;
		int i = 0;
		int repeat = 1;
	
		char user_name[9], user_resident_registration_number[25]; //�Է��� ���� ����� ���� �´��� ���� ���� ���� ���� 
	
		printf("\n\n\n");
		printf("                                                �츮���࿡ ���Ű��� ȯ���մϴ�.");


	while (repeat) {   //����� �� ���� ��� �ݺ� 
		
		system("cls");
		printf("\n\n\n");
		printf("                             ȸ�������� �Ͻ÷��� 1��, ȸ���̽ø� 2�� ,�����Ͻ÷��� 0���� �����ּ���:");
		scanf("%d", &select);

		// ���۽� �������� 1�� 2�� 0�� ���̴�
	
		switch (select) {				//select �� ���� �ϳ��� �����Ѵ�. 
		
		case 1:		//ȸ������

		printf("\n\n\n");

		printf("                                               ȸ�������� �Ͽ� �ּ���.");
		printf("\n\n");

		printf("                                  ȸ�� ������ ���� �̸��� �ֹε�Ϲ�ȣ 13�ڸ��� �Է��ϼ���.");
		printf("\n\n");

		printf("                                           �̸�:");
		scanf("%s", Customer[i].name);

		printf("\n\n");
		printf("                                           �ֹε�Ϲ�ȣ:");
		scanf("%s", Customer[i].resident_registration_number);

		//�̸��� �ֹε�Ϲ�ȣ �Է�

		printf("\n\n");
		printf("                                           ����� ī�带 �־��ּ���.");
		printf("\n\n");
		
		char account_number_first[6];
		char account_number_second[4];
		char account_number_third[8];

		srand((unsigned int)time(NULL));

		int account_randnumber_first = 1000 + rand() % 9000;			//
		int account_randnumber_second = 100 + rand() % 900;
		int account_randnumber_third = 100000 + rand() % 900000;

		/*
		������ ��ȣ ����
		�� ���ڸ��� ����� �Ѵ�
		xxxx-xxx-xxxxxx �� �ǰ� �Ϸ��� ������ �ؾ��Ѵ�. 
		0���� ������ �� �� �����Ƿ� ������ �ʿ��ҵ�. 
		*/

		itoa(account_randnumber_first, account_number_first, 10);
		itoa(account_randnumber_second, account_number_second, 10);
		itoa(account_randnumber_third, account_number_third, 10);
			
		//���ڿ��� 

		strcat(account_number_first, "-");
		strcat(account_number_first, account_number_second);
		strcat(account_number_first, "-");
		strcat(account_number_first, account_number_third);

		strcpy(Customer[i].account_number , account_number_first);

		//int ���� ���ڿ��� ���� 
				
		printf("                                          ���� ������ ���¹�ȣ�� %s �Դϴ�.",Customer[i].account_number);			
		printf("\n\n");

		printf("                                          ���� ī���� ��й�ȣ�� �Է����ּ���:");
		scanf("%d", &Customer[i].Card_Password);

		printf("\n\n");
			
		printf("                                         ��Ȯ���� ���� ī�� ��й�ȣ�� �ٽ� �Է����ּ���:");
		scanf("%d", &check_password);

		printf("\n\n");

		/*��й�ȣ Ȯ��*/

		if (check_password != Customer[i].Card_Password) {

		printf("                                    �� ��й�ȣ�� �ٸ��ϴ�. �ٽ� �Է��� �ּ���.");
		system("pause");
		printf("\n\n\n");
		system("cls");

		}

		else {

		system("cls");
		printf("\n\n\n");
		printf("                                            ��й�ȣ�� Ȯ�εǾ����ϴ�.");
		printf("\n\n\n");
		printf("                                            ī�� ������ �Ϸ�Ǿ����ϴ�.");
		printf("\n\n\n");
		system("pause");
		select = 0;	//while �� ������ 		
		i++;		

		/*
		i ���� �������Ѿ� �Ѵ�. 
		������Ű�� ��� �� ��� ������ ���ö� ����������� ����� �����ϴ�
		������Ű�� ������ ���� ����ߴ� ��� ������ ����� �ٽ� ����ϰ� �ȴ�. 
		i�� 2���� ���� ��� i�� �������� 2���� �����.
     	*/

		}
		break;

		case 2:   //�����ؼ� ����

		system("cls");

		printf("\n\n\n"); 
		printf("                                                        ī�带 �־��ּ���.");
		printf("\n\n\n");

		printf("                                            �̸��� �ֹε�Ϲ�ȣ 13�ڸ��� �Է��ϼ���.");
		printf("\n\n\n");
		printf("                                      �̸�:");
		scanf("%s", user_name);
		printf("\n\n\n");
		printf("                                      �ֹε�Ϲ�ȣ:");
		scanf("%s", user_resident_registration_number);

		printf("\n\n\n");
		printf("                                      ī�� ��й�ȣ:");
		scanf("%d", &user_password);
	/*
	�̸� �ֹε�Ϲ�ȣ ī�带 ���� �� �Է½�Ų��
	�̸�> �ֹε�Ϲ�ȣ>ī�� ��й�ȣ ������� �˷���
			
	O: ���� X: Ʋ��

	�̸� |  �ֹε�Ϲ�ȣ | ī���й�ȣ
   ------+---------------+--------------	 
	O    |       O       |     O		ȯ���մϴ�. 
	O    |       O       |     X		��й�ȣ�� Ʋ�Ƚ��ϴ�.
	O    |       X       |     O		�ֹε�Ϲ�ȣ�� �ٸ��ϴ�.
	O    |       X       |     X		�ֹε�Ϲ�ȣ�� �ٸ��ϴ�.

	*/ 
	int check = 0;		//��ϵ� �̸����� �ƴ����� �˾ƺ��� ���� ���� 

	for (int i = 0; i < SIZE; i++) {	

	//�ִ� 10����� ��� �����ϹǷ� ,10���� �� ���� ����.

		if (strcmp(user_name, Customer[i].name) == 0) {    
			check = 1; 
	
	//�Է��� �̸��� ��ϵ� �̸��� ���  

			if (strcmp(user_resident_registration_number, Customer[i].resident_registration_number) != 0) { 

	//��ϵ� �̸��� �ֹε�Ϲ�ȣ�� ��ġ���� ���� ��� 
		
		printf("\n\n\n");
		printf("                                               �ֹε�Ϲ�ȣ�� �ٸ��ϴ�.");
		printf("\n\n\n");		
		system("pause");

				}
			else {			

	//��ϵ� �̸��� �ֹε�Ϲ�ȣ�� ��ġ�� ���	

				if (user_password != Customer[i].Card_Password) {

	//��ϵ� �̸��� �ֹε�Ϲ�ȣ�� ��ġ�ǰ� ��й�ȣ�� ���� ���� ��� 
		
		printf("\n\n\n");
		printf("                                              ��й�ȣ�� Ʋ�Ƚ��ϴ�.");
		printf("\n\n\n");
		printf("                                              �ٽ� �Է��� �ֽʽÿ�.");
		printf("\n\n\n");
		system("pause");

				}

				else {	
	//��ϵ� �̸��� �ֹε�Ϲ�ȣ ī�� ��й�ȣ ���� �� ������� 		
		
		int turtle = 1;
		while (turtle) {

	//�α��� �Ͽ� �� �� �ִ� ��

		system("cls");
		printf("\n\n\n");
		printf("                                                   ȯ���մϴ�. %s ��", Customer[i].name);
		printf("\n\n\n");
		printf("                               1.������ȸ");
		printf("\n\n");
		printf("                               2.�Ա�/������ �۱�");
		printf("\n\n");
		printf("                               3.�������");
		printf("\n\n");
		printf("                               4.����"); //����
		printf("\n\n");
		printf("                               5.����"); //���� 
		printf("\n\n");
		printf("                               6.������ü");
		printf("\n\n");
		printf("                               7.����");
		printf("\n\n");
		printf("                               0.������");
		printf("\n\n\n\n");
		printf("                                                   ����:");
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
		printf("                                       �Ա��� �ݾ��� �Է��Ͻÿ�:");			
		scanf("%d", &money);
		Deposit(money);

		system("pause");		

		break;

		case 3:
										
		printf("\n\n\n");
		printf("                                        ����� �ݾ��� �Է��Ͻÿ�:");
		scanf("%d", &money);
		Withdraw(money);
		
		system("pause");
		
		break;

		case 4:

		printf("\n\n\n");
		printf("               1��:���� ���� ����  ");
		printf("\n\n\n");
		printf("               2��:���� ���� ���� ");
		printf("\n\n\n");
		printf("               3��:���� ���� ����  ");
		printf("\n\n\n");
		printf("               0��:����");
		printf("\n\n\n");
		printf("\n\n\n");
		printf("                                                        ����:");
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

		printf("                                  ���� �ݾ��� %lf �Դϴ�.",Customer[i].loan * 1.1);
	
		break;

		case 0:

		printf("                                   �ٽ� ������ �ֽʽÿ�.");
		break;

		default:
		printf("                                   �߸� �����̽��ϴ�.");

		}

		system("pause");
		
		break;

		case 5:										//���� (�̿ϼ�)

		printf("\n\n\n");
		int borrow;	
		printf("                            ���� ���� �ݾ��� �Է��Ͻʽÿ�:");
		scanf("%d", &borrow);
		Customer[i].loan += borrow;

		system("pause");
	

		break;

		case 6:		
		//������ü 
				
		int j,temporary_money;
		int check = 0;
		char temporary[40];						
										
	
		printf("\n\n\n");
		printf("							�� ���¹�ȣ :%s", Customer[i].account_number);
		//���¹�ȣ Ȯ�� 										
		
		printf("\n\n\n");
		printf("\n\n\n");
		printf("			�۱��� ���¹�ȣ�� �Է����ּ���.  ");
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
		//�̸��� ���� ��� 
				check = 1;

				if (strcmp(&temporary, Customer[i].account_number) == 0) {
		//�ڽ��� ���¿� �̸��� ���� ���

		system("cls");
		printf("\n\n\n");		
		printf("					�ڽſ��Դ� ������ü�� �� �� �����ϴ�.");
		printf("\n\n\n");
					}
				else {		
		system("cls");
		printf("\n\n\n");
		printf("			       �۱��� �ݾ��� �Է����ּ���:");
		scanf("%d", &temporary_money);
		Withdraw(temporary_money);						//�α��ε� ��� ���忡�� ���
		Customer[j].money += temporary_money;			//���¹�ȣ�� ���� ��� ���忡 ���� �Ա�			
		printf("\n\n\n");
		printf("       %s���� ���¿��� %s���� ���·� %d���� �۱ݵǾ����ϴ�.", 
			Customer[i].name, Customer[j].name, temporary_money);
				}
			}
		}
		
		// ���¹�ȣ Ʋ���� ���� ����
		if (check == 0) {
			printf("\n\n\n");
			printf("                                 ������ü�� �����Ͽ����ϴ�.             ");
			printf("\n\n\n");
		}
		system("pause");

		break;

		case 7:
		//	����
										
		int select;										
		int password;
		int changed_password,check_password;		
		//������ ��й�ȣ �� ��Ȯ��	
																									
		printf("\n\n\n");
		printf("\n\n\n");
		printf("					 1. ��й�ȣ ���� ");
		printf("\n\n\n");
		printf("					 2. ���¹�ȣ ��ȸ ");

		printf("\n\n\n");
		printf(" 						         ����:");
		scanf("%d", &select);

		switch (select) {

		case 1:

		system("cls");
		printf("\n\n\n");
		printf("\n\n\n");
											
		printf("                        ��й�ȣ ������ �����մϴ�.");
		printf("\n\n\n");
		printf("						��й�ȣ�� �Է����ּ���: ");
		scanf("%d", &password);

		/*
		��й�ȣ �Է� ������ ��� 
		*/

		if (password == Customer[i].Card_Password) {
		printf("\n\n\n");
		printf("						�ſ��� Ȯ�� �Ǿ����ϴ�.");
		printf("\n\n\n");
		printf("						�ٲٽ� ��й�ȣ 4�ڸ��� �Է��ϼ���:");
		scanf("%d", &changed_password);


		printf("\n\n\n");
		printf("						�ٽ� �ѹ� �Է��Ͻʽÿ�.");
		scanf("%d", &check_password);

		//��Ȯ��

		if (changed_password == check_password) {

		printf("\n\n\n");
		printf("                       ��й�ȣ�� ����Ǿ����ϴ�.");
		Customer[i].Card_Password = changed_password;
												
		}
		else {
			printf("\n\n\n");
			printf("				   �Է��� �� ��й�ȣ�� �ٸ��ϴ�. �ٽ� �Է��Ͻʽÿ�.");
			 }
		}

		else

		printf("					  ��й�ȣ�� Ʋ�Ƚ��ϴ�. �ٽ� �Է��Ͻʽÿ�.");

		printf("\n\n\n");
		
		break;

		case 2:

		system("cls");
		printf("\n\n\n");
		printf("\n\n\n");
		printf("								  ����� ���¹�ȣ�� %s �Դϴ�."
										, Customer[i].account_number);
		printf("\n\n\n");

		break;

		default:

		printf("\n\n\n");
		printf("											 �߸� �����̽��ϴ�.");
		printf("\n\n\n");

		}

		system("pause");
		
		break;

		case 0:														//������

		turtle = 0;
		system("cls");
		break;

		default:

		printf("											   �߸� �����̽��ϴ�.");
		printf("\n\n\n");
								}	//�̸�,��й�ȣ,�ֹι�ȣ ��� �¾��� ��� �� �� �ִ� switch�� ��
							}		//�α��� �ؼ� �� �� �ִ� while(d) �� ��
						}			//�α��� ���� ��
					}				//��ϵ� �̸��� �ֹε�Ϲ�ȣ�� ��ġ�� ��� 
				}					//�̸��� ��ϵǾ� �ִ� ���	
			}						//for �� 

	if (check == 0) {
		printf("\n\n\n");
		printf("                                           ��ϵ��� �ʴ� �̸��Դϴ�.");
		printf("\n\n\n");

		}
		
		break;	

		default:

		printf("\n\n\n");
		printf("											   �����մϴ�.");
		printf("\n\n\n");		
		repeat = 0;

				}//��ü switch ��			
			} //while ��		
		}//main ��