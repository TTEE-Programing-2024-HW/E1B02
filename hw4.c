#include<stdio.h>
#include<stdlib.h>
void s(void);
void aa(void);
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
	printf("�K�X����1:\n");
	printf("4�ӼƦr\n");
	printf("�K�X����2:\n");
	printf("L:��|R:�k|U:�W|D:�U\n");
	printf("�K�X����3:\n");
	printf("�Ĥ@�ӼƦr:RDLDR\n");
	printf("�ĤG�ӼƦr:DRUL\n");
	printf("�ĤT�ӼƦr:RDLDR\n");
	printf("�ĥ|�ӼƦr:RDLDR+RDLDR\n");
	s();
	int pass,n=0;
	char option;
	do
	{
		if(n<3)
		{
			printf("�п�J�K�X:\n");
			scanf("%d",&pass);
			n++;
		}
		else
		{
			printf("��J�W�L�T��!!\n");
			return 0;
		}
	}while(pass!=2024);
	while(1)
	{
	system("CLS");
	printf("============[Grade System]=============\n");
	printf("||                                    ||\n");
	printf("||       a.Enter student grades       ||\n");
	printf("||      b.Display student grades      ||\n");
	printf("||     c.Search for student grades    ||\n");
	printf("||      d.Grade ranking               ||\n");
	printf("||       e. Exit system           ^ ^ ||\n");
	printf("||                                 v  ||\n");
	printf("=============[Grade System]=============\n");
	printf("��J���a,b,c,d,e:\n");
	scanf(" %c",&option);
	switch(option)
	{
		case 'a':
			system("CLS");
			aa();	
			
	}
	}
	
	return 0;
}
void s(void)
{
	printf("====================================================\n");
}
void aa(void)
{
	int n=0;
	struct student
	{
		char name[10];
		char num[10];
		int physics;
		int math;
		int english;
	}grades;
	printf("��Jn(5~10)���ǥ�\n");
	scanf("%d",&n);
	while(n<5||n>50)
	{
		printf("���s��Jn(5~10)���ǥ�\n");
		scanf("%d",&n);
	}
		
}
