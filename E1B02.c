#include<stdio.h>
#include<stdlib.h>
void f(void);
int main() 
{ 
	printf("EEEE  1  BBB     000      2     H  H  W   W   W   2    \n");
   	printf("E     1  B  B   0   0   2   2   H  H  W   W   W  2  2  \n");
   	printf("EEEE  1  BBB    0   0      2    HHHH  W   W   W    2   \n");
   	printf("E     1  B  B   0   0    2      H  H  W   W   W   2    \n");
   	printf("EEEE  1  BBB     000    222222  H  H   WWW WWW   2222  \n");
	f();
	printf("Hello\n");
	printf("�w����{\n");
	printf("welcome\n");
	printf("�o�OE1B02���ɧ���HW2\n");
	f();
	printf("�K�X����1\n");
	printf("�K�X�O�|���\n");
	printf("�K�X����2\n");
	printf("�K�X= @$%%!��$@& \n");
	printf("�K�X����3\n");
	printf("�@�ӲŸ����@�ӼƦr\n");//��Ӧʤ���O�@�ӼƦr 
	printf("�u���T�����|\n");
	printf("�Y��J���~�T���{���N�|����\n");
	f();
	int n,pass;
	do
	{
		printf("�п�J�K�X");
		scanf("%d",&pass);
		n++;
		if(n>=3)
		{
			printf("��J�W�L3��\n");
			printf("\a");
			break;
		}
	}while(pass!=2024);
	system("CLS");
	f();
	printf("    �����T����---A or a\n");
	printf("    99���k��-----B or b\n");
	printf("    ����---------C or c\n");
	f();
	char option,w;
	int i,j;
	printf("��J�A�����:\n");
	scanf("%c",&option);
	switch(option)
	{
		case'a':
		case'A':
			printf("��Ja~n���r��\n");
			scanf("%c",&w);
			while(w>n)
			{
				printf("��J���~�A�Э��s��J\a\n");
			} 
			for(i=1;i<=w;i++)
			{
				for(j=1;j<=i;j++)
					printf("%c",w);
				printf("\n");
			}
				
		case'b':
		case'B':
			
		case'c':
		case'C':
			break;
			
	}
    return 0;
}
void f(void)
{
	printf("==============================\n");
}



