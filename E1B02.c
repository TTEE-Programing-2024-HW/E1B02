#include<stdio.h>
#include<stdlib.h>
#include<conio.h> 
void f(void);
int main() 
{ //�ӤH����e���P�K�X 
	char option,w,YorN;
	int n=0,pass;
	int i,j,k,num,a;
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
	printf("�K�X= @$%%!��$@& \n");//��Ӧʤ���O���F�L�X% 
	printf("�K�X����3\n");
	printf("�@�ӲŸ����@�ӼƦr\n"); 
	printf("�u���T�����|\n");
	printf("�Y��J���~�T���{���N�|����\n");
	f();
	do
	{
		printf("�п�J�K�X");
		scanf("%d",&pass);
		n++;//�p�����F�X�� 
		if(n>=3)
		{
			printf("��J�W�L3��\n");
			printf("\a");//�o�Xĵ�i�� 
			return 0;//��J�W�L�T���{������ 
		}
	}while(pass!=2024);//�P�_�K�X�O�_����2024�A 
	system("CLS");//�M���ù� 
	//��� 
	while(1)
	{
		f();
		printf("    �����T����---A or a\n");
		printf("    99���k��-----B or b\n");
		printf("    ����---------C or c\n");
		f();
		printf("�п�J�A�����:\n");
		scanf(" %c", &option);//�b%c�e�Ů�H�KŪ����ťզr�� 
		switch(option)
		{
			case 'a':
			case 'A':
				system("CLS");
				printf("��Ja~n���r��\n");
				scanf(" %c",&w);
				while(w>'n'||w<'a')//��J�r����ACSII�j��n��ACSII�άO�p��a��ACSII 
				{
					printf("��J���~");
					printf("���s��Ja~n���r��\n");
					scanf(" %c",&w);
				}
				num=w-'a'+1; //�p���ڭn����h�ơA�]���Y�����n��ҥH�[�@ 
				for(i=0;i<num;i++)//������ 
				{
					for(k=num;k>i+1;k--)//����@��X�ӪŮ� 
						printf(" ");
					for(j=0;j<=i;j++)//����@��X�ӭ^��r�� 
						printf("%c",w+j);//�P�@��C�Ӥ����̧ǻ��W 
						w--;//�U�@��qw���U�@�Ӧr���}�l�A�ҥH��@ 
					printf("\n");
				}
				printf("�����N���^�D���...\n");
    			getch();//Ū���r��������ܦb�ù��W 
    			system("CLS");
    			break;
			case'b':
			case'B':
				printf("��J1~9�����:\n");
				scanf("%d",&a);
				while(a<1||a>9)
				{
					printf("��J���~�A�Э��s��J:\n");
					scanf("%d",&a);
				}
				for(i=1;i<=a;i++)//�~�h�j��A�q1~a 
				{
					for(j=1;j<=a;j++)//���h�j��A�q1~a 
						printf("%dx%d=%3d ",i,j,i*j);
					printf("\n");
				}
				printf("�����N���^�D���...\n");
    			getch();//Ū���r��������ܦb�ù��W 
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
				if(YorN=='y'||YorN=='Y')//�p�G�Oy�άOY�N�����ثe��switch 
					break;
				if(YorN=='n'||YorN=='N')//�p�G�On�άON�N�����{�� 
					return 0;
			}
	}
    
}
void f(void)
{
	printf("==============================\n");
}




