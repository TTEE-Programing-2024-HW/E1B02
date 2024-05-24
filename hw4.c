#include<stdio.h>
#include<stdlib.h>
void s(void);
int main()
{ 
	s();
	printf(" _      _    _        _     _      _      \n");
	printf("| |    | |  | |   _  | |   | |    | |     \n");
	printf("| |    | |  | |  | | | |   | |    | |     \n");
	printf("| |    | |  | |  | | | |   | |    | |     \n");
	printf("| |____| |  | |  | | | |   | |    | |     \n");
	printf("|  ____  |  | |  | | | |   | |____| |___  \n");	
	printf("| |    | |  | |  | | | |   |______   ___| \n");
	printf("| |    | |  | |  | | | |          | |     \n");
	printf("| |    | |  | |__| |_| |          | |     \n");
	printf("|_|    |_|  |__________|          |_|     \n");
	s();
	printf("密碼提示1:\n");
	printf("4個數字\n");
	printf("密碼提示2:\n");
	printf("L:左|R:右|U:上|D:下\n");
	printf("密碼提示3:\n");
	printf("第一個數字:RDLDR\n");
	printf("第二個數字:DRUL\n");
	printf("第三個數字:RDLDR\n");
	printf("第四個數字:RDLDR+RDLDR\n");
	s();
	int pass,n=0;
	do
	{
		if(n<3)
		{
			printf("請輸入密碼:\n");
			scanf("%d",&pass);
			n++;
		}
		else
		{
			printf("輸入超過三次!!\n");
			break;
		}
	}while(pass!=2024);
	return 0;
}
void s(void)
{
	printf("====================================================\n");
}
