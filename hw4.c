#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void s(void);
void aa(int);
void bb(int);
void cc(int);
void dd(int);
//�ǥͦ��Z���c 
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
//�w�ﭶ�� 
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
	char option,cho;
	//��J�K�X 
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
	//�D��� 
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
			printf("��Jn(5~50)���ǥ�\n");
			scanf("%d",&peo);
			while(peo<5||peo>50)//�����J�H�Ƥ���5~50 
			{
				printf("���s��J(5~50)���ǥ�\n");
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
			system("CLS");    
            dd(peo);
            system("pause");
			break;
		case 'e':
			printf("�O�_���}(y/n)?\n");
			scanf(" %c",&cho);
			while(cho!='y'&&cho!='Y'&&cho!='n'&&cho!='N')
			{
				printf("���~�A�Э��s��J�O�_���}(y/n)");
				scanf(" %c",&cho);
			}
			if(cho=='y'||cho=='Y')
				return 0;
			else
				break;
	}
	}
	
	return 0;
}
void s(void)
{
	printf("====================================================\n");
}
void aa(int peo)//��J���Z�禡 
{
	int i=0;
	printf("��J�ǥͦW�r�B�Ǹ�(6���)�B���z�B�ƾǡB�^��(0~100)���Z\n");
    printf("�ΪŮ�j�}\n");
	for (i=0;i<peo;i++)
    {
    	printf("��%d��ǥ�",i+1);
        scanf("%s %s %f %f %f", student[i].name, student[i].num, &student[i].physics, &student[i].math, &student[i].english);
        while (strlen(student[i].num) != 6)//�p��r����סA�p�G�Ǹ����O����� 
        {
            printf("�Ǹ����~�A�Э��s��J(6���)\n");//���s��J 
            scanf("%s", student[i].num);
        }
        while(student[i].physics<0||student[i].physics>100)//�p�G���z���Z���b0~100���� 
        {
        	printf("���z���Z���~�A�Э��s��J(0~100)\n");//���s��J 
            scanf("%f",&student[i].physics);
		}
		while(student[i].math<0||student[i].math>100)//�p�G�ƾǦ��Z���b0~100����
        {
        	printf("�ƾǦ��Z���~�A�Э��s��J(0~100)\n");//���s��J 
            scanf("%f",&student[i].math);
		}
		while(student[i].english<0||student[i].english>100)//�p�G�^�妨�Z���b0~100����
        {
        	printf("�^�妨�Z���~�A�Э��s��J(0~100)\n");//���s��J 
            scanf("%f",&student[i].english);
		}	
    }	
}
void bb(int peo)//�C�La�����G�A�H�έp�⥭�� 
{
    int i=0;
    float sum=0,avg=0;
    for(i=0;i<peo;i++)
    {
    	sum=student[i].physics+student[i].math+student[i].english;
    	avg=sum/3;
        printf("�ǥ�:%s �Ǹ�:%s ���z(��):%3.1f �ƾ�(��):%3.1f  �^��(��):%3.1f ����(��):%3.1f\t\n", student[i].name, student[i].num, student[i].physics, student[i].math, student[i].english,avg);
    }
}
void cc(int peo)//�d�ߦ��Z 
{
	char name[10];
	int ok=0,i=0,tag=0;
	float sum=0,avg=0;
	printf("�n�d�ߪ��ǥͩm�W:\n");
	scanf("%s",name);
	for(i=0;i<peo;i++)
	{
		ok=strcmp(student[i].name,name);//�����Ӧr�ꪺ���e�O�_�ۦP
		if(ok==0)//�ۦP�|�^��0 
		{
			tag=1;
			sum=student[i].physics+student[i].math+student[i].english;
    		avg=sum/3;
			printf("�ǥ�:%s �Ǹ�:%s ���z(��):%3.1f �ƾ�(��):%3.1f  �^��(��):%3.1f ����(��):%3.1f\t\n", student[i].name, student[i].num, student[i].physics, student[i].math, student[i].english,avg);
		}
	}
	if(tag==0)
		printf("��Ƥ��s�b\n");
}
void dd(int peo)//���Z�ƦW 
{
    int i=0,j=0;
    float sum[peo],avg[peo],temp;
    struct grades tempStudent[peo]; //�Ȯɦs��ǥͦ��Z 
    printf("�ƦW:\n");
    //�p�⥭�� 
    for (i=0;i<peo;i++)
    {
        tempStudent[i]=student[i];
        sum[i]=tempStudent[i].physics+tempStudent[i].math+tempStudent[i].english;
        avg[i]=sum[i]/3;
    }
    //�Q�ή�w�ƧǪk�ӱƤj�p 
    for(i=0;i<peo-1;i++)
    {
        for(j=0;j<peo-1-i;j++)
        {
            if(avg[j]<avg[j+1])
            {
                //�洫������ 
                temp=avg[j+1];
                avg[j+1]=avg[j];
                avg[j]=temp;
                // // �洫 student�����ǥ͵��c
                struct grades tempStudent=student[j+1];
                student[j+1]=student[j];
                student[j]=tempStudent;
            }
        }
    }
    //��ܱƦW 
    for(i=0;i<peo;i++)
    {
       printf("��%d�W: �ǥ�%s �Ǹ�:%s ����(��):%3.1f\n", i + 1,student[i].name,student[i].num, avg[i]);
    }
}


