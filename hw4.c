#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void s(void);
void aa(int);
void bb(int);
void cc(int);
struct grades
{
    char name[10];
    char num[10];
    float physics;
    float math;
    float english;
};
struct grades student[100];
int peo = 0;
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
	int pass,n=0,peo=0;
	char option;
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
	printf("輸入選擇a,b,c,d,e:\n");
	scanf(" %c",&option);
	switch(option)
	{
		case 'a':
			system("CLS");
			printf("輸入n(5~10)筆學生\n");
			scanf("%d",&peo);
			while(peo<5||peo>50)
			{
				printf("重新輸入(5~10)筆學生\n");
				scanf("%d",&peo);
			}
			aa(peo);
			break;
		case 'b':
			system("CLS");    
            bb(peo);
            system("pause");
			break;
		case 'c':
			system("CLS");    
            cc(peo);
            system("pause");
			break;
		case 'd':
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
	printf("輸入學生名字、學號(6位數)、物理、數學、英文(0~100)成績\n");
    printf("用空格隔開\n");
	for (i=0;i<peo;i++)
    {
    	printf("第%d位學生",i+1);
        scanf("%s %s %f %f %f", student[i].name, student[i].num, &student[i].physics, &student[i].math, &student[i].english);
        while (strlen(student[i].num) != 6)
        {
            printf("學號錯誤，請重新輸入(6位數)\n");
            scanf("%s", student[i].num);
        }
        while(student[i].physics<0||student[i].physics>100)
        {
        	printf("物理成績錯誤，請重新輸入(0~100)\n");
            scanf("%f",&student[i].physics);
		}
		while(student[i].math<0||student[i].math>100)
        {
        	printf("數學成績錯誤，請重新輸入(0~100)\n");
            scanf("%f",&student[i].math);
		}
		while(student[i].english<0||student[i].english>100)
        {
        	printf("英文成績錯誤，請重新輸入(0~100)\n");
            scanf("%f",&student[i].english);
		}	
    }	
}
void bb(int peo)
{
    int i=0;
    float sum=0,avg=0;
    for(i=0;i<peo;i++)
    {
    	sum=student[i].physics+student[i].math+student[i].english;
    	avg=sum/3;
        printf("學生:%s 學號:%s 物理(分):%3.1f 數學(分):%3.1f  英文(分):%3.1f 平均(分):%3.2f\t\n", student[i].name, student[i].num, student[i].physics, student[i].math, student[i].english,avg);
    }
}
void cc(int peo)
{
	char name[10];
	int ok=0,i=0;
	printf("要查詢的學生姓名:\n");
	scanf("%s",name);
	for(i=0;i<peo;i++)
	{
		ok=strcmp(student[i].name,name);
		if(ok==0)
		{
			printf("學生:%s 學號:%s 物理(分):%3.1f 數學(分):%3.1 英文(分):%3.1f\t\n", student[i].name, student[i].num, student[i].physics, student[i].math, student[i].english);
		}
	}
	if(ok!=0)
		printf("資料不存在\n");
}

