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
			break;
		}
	}while(pass!=2024);
	return 0;
}
void s(void)
{
	printf("====================================================\n");
}
