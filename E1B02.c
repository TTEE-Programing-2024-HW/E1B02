#include<stdio.h>
#include<stdlib.h>
void f(void);
void menu(void);
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
	while(1)
	{
		f();
		printf("    �����T����---A or a\n");
		printf("    99���k��-----B or b\n");
		printf("    ����---------C or c\n");
		f();
		char option,w,YorN;
		int i,j,k,num,n;
		printf("�п�J�A�����:\n");
		scanf(" %c", &option);
		switch(option)
		{
			case 'a':
			case 'A':
				system("CLS");
				printf("��Ja~n���r��\n");
				scanf(" %c",&w);
				while(w>'n'||w<'a')
				{
					printf("��J���~");
					printf("���s��Ja~n���r��\n");
					scanf(" %c",&w);
				}
				num=w-'a'+1;
				for(i=0;i<num;i++)
				{
					for(k=num;k>i+1;k--)
						printf(" ");
					for(j=0;j<=i;j++)
						printf("%c",w+j);
						w--;
					printf("\n");
				}
				printf("�����N���^�D���...\n");
    			getch();  
    			system("CLS");
    			break;
			case'b':
			case'B':
				printf("��J1~9�����:\n");
				scanf("%d",&n);
				while(n<1||n>9)
				{
					printf("��J���~�A�Э��s��J:\n");
					scanf("%d",&n);
				}
				for(i=1;i<=n;i++)
				{
					for(j=1;j<=n;j++)
						printf("%dx%d=%3d ",i,j,i*j);
					printf("\n");
				}
				printf("�����N���^�D���...\n");
    			getch();  
    			system("CLS");
					break;
			case'c':
			case'C':
				printf("Continue?(y or n)\n");
				scanf(" %c", &YorN);
				while(YorN!='n'&& YorN!='N' && YorN!='Y' && YorN!='y')
				{
					printf("���~�A���s��J(y or n)\n");
					scanf(" %c",&YorN);
				}	
				if(YorN=='n'||YorN=='N')
					return 0;
				if(YorN=='y'||YorN=='Y')
					break;
			}
	}
    return 0;
}
void f(void)
{
	printf("==============================\n");
}




