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
	printf("歡迎光臨\n");
	printf("welcome\n");
	printf("這是E1B02陳怡均的HW2\n");
	f();
	printf("密碼提示1\n");
	printf("密碼是四位數\n");
	printf("密碼提示2\n");
	printf("密碼= @$%%!減$@& \n");
	printf("密碼提示3\n");
	printf("一個符號為一個數字\n");//兩個百分比是一個數字 
	printf("只有三次機會\n");
	printf("若輸入錯誤三次程式將會結束\n");
	f();
	int n,pass;
	do
	{
		printf("請輸入密碼");
		scanf("%d",&pass);
		n++;
		if(n>=3)
		{
			printf("輸入超過3次\n");
			printf("\a");
			break;
		}
	}while(pass!=2024);
	system("CLS");
	while(1)
	{
		f();
		printf("    直角三角形---A or a\n");
		printf("    99乘法表-----B or b\n");
		printf("    結束---------C or c\n");
		f();
		char option,w,YorN;
		int i,j,k,num,n;
		printf("請輸入你的選擇:\n");
		scanf(" %c", &option);
		switch(option)
		{
			case 'a':
			case 'A':
				system("CLS");
				printf("輸入a~n的字元\n");
				scanf(" %c",&w);
				while(w>'n'||w<'a')
				{
					printf("輸入錯誤");
					printf("重新輸入a~n的字元\n");
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
				printf("按任意鍵返回主選單...\n");
    			getch();  
    			system("CLS");
    			break;
			case'b':
			case'B':
				printf("輸入1~9的整數:\n");
				scanf("%d",&n);
				while(n<1||n>9)
				{
					printf("輸入錯誤，請重新輸入:\n");
					scanf("%d",&n);
				}
				for(i=1;i<=n;i++)
				{
					for(j=1;j<=n;j++)
						printf("%dx%d=%3d ",i,j,i*j);
					printf("\n");
				}
				printf("按任意鍵返回主選單...\n");
    			getch();  
    			system("CLS");
					break;
			case'c':
			case'C':
				printf("Continue?(y or n)\n");
				scanf(" %c", &YorN);
				while(YorN!='n'&& YorN!='N' && YorN!='Y' && YorN!='y')
				{
					printf("錯誤，重新輸入(y or n)\n");
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




