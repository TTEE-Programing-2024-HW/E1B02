#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void s(void);
void aa(int);
void bb(void);
struct grades
{
	char name[10];
	char num[10];
	int physics;
	int math;
	int english;
};
	struct grades student[100];
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
	int pass,n=0,peo=0;
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
			printf("��Jn(5~10)���ǥ�\n");
			scanf("%d",&peo);
			while(peo<5||peo>50)
			{
				printf("���s��J(5~10)���ǥ�\n");
				scanf("%d",&peo);
			}
			aa(peo);
			break;
		case 'b':
			system("CLS");	
			bb();
			break;
	}
	}
	
	return 0;
}
void s(void)
{
	printf("====================================================\n");
}
void aa(int peo)
{
	int i=0;
	printf("��J�ǥͦW�r�B�Ǹ�(6���)�B���z�B�ƾǡB�^��(0~100)���Z\n");
    printf("�ΪŮ�j�}\n");
	for (i=0;i<peo;i++)
    {
    	printf("��%d��ǥ�",i+1);
        scanf("%s %s %d %d %d", student[i].name, student[i].num, &student[i].physics, &student[i].math, &student[i].english);
        while (strlen(student[i].num) != 6)
        {
            printf("�Ǹ����~�A�Э��s��J(6���)\n");
            scanf("%s", student[i].num);
        }
        while(student[i].physics<0||student[i].physics>100)
        {
        	printf("���z���Z���~�A�Э��s��J(0~100)\n");
            scanf("%d",&student[i].physics);
		}
		while(student[i].math<0||student[i].math>100)
        {
        	printf("�ƾǦ��Z���~�A�Э��s��J(0~100)\n");
            scanf("%d",&student[i].math);
		}
		while(student[i].english<0||student[i].english>100)
        {
        	printf("�^�妨�Z���~�A�Э��s��J(0~100)\n");
            scanf("%d",&student[i].english);
		}	
    }	
}
void bb(void)
{
	int n=0,i=0;
	struct grades student[100];
	for (i=0;i<n;i++)
    {
    	printf("�ǥ�    �Ǹ�    ���z(��)    �ƾ�(��)    �^��(��)\n");
    	printf("%s %s %d %d %d", student[i].name, student[i].num, &student[i].physics, &student[i].math, &student[i].english);
	}
}
