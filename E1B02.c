#include<stdio.h>
#include<stdlib.h>
#include<conio.h> 
void f(void);
int main() 
{ //個人風格畫面與密碼 
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
	printf("歡迎光臨\n");
	printf("welcome\n");
	printf("這是E1B02陳怡均的HW2\n");
	f();
	printf("密碼提示1\n");
	printf("密碼是四位數\n");
	printf("密碼提示2\n");
	printf("密碼= @$%%!減$@& \n");//兩個百分比是為了印出% 
	printf("密碼提示3\n");
	printf("一個符號為一個數字\n"); 
	printf("只有三次機會\n");
	printf("若輸入錯誤三次程式將會結束\n");
	f();
	do
	{
		printf("請輸入密碼");
		scanf("%d",&pass);
		n++;//計算輸錯了幾次 
		if(n>=3)
		{
			printf("輸入超過3次\n");
			printf("\a");//發出警告音 
			return 0;//輸入超過三次程式結束 
		}
	}while(pass!=2024);//判斷密碼是否等於2024， 
	system("CLS");//清除螢幕 
	//選單 
	while(1)
	{
		f();
		printf("    直角三角形---A or a\n");
		printf("    99乘法表-----B or b\n");
		printf("    結束---------C or c\n");
		f();
		printf("請輸入你的選擇:\n");
		scanf(" %c", &option);//在%c前空格以免讀取到空白字符 
		switch(option)
		{
			case 'a':
			case 'A':
				system("CLS");
				printf("輸入a~n的字元\n");
				scanf(" %c",&w);
				while(w>'n'||w<'a')//輸入字元的ACSII大於n的ACSII或是小於a的ACSII 
				{
					printf("輸入錯誤");
					printf("重新輸入a~n的字元\n");
					scanf(" %c",&w);
				}
				num=w-'a'+1; //計算實際要執行層數，因為頭尾都要算所以加一 
				for(i=0;i<num;i++)//控制行數 
				{
					for(k=num;k>i+1;k--)//控制一行幾個空格 
						printf(" ");
					for(j=0;j<=i;j++)//控制一行幾個英文字母 
						printf("%c",w+j);//同一行每個元素依序遞增 
						w--;//下一行從w的下一個字母開始，所以減一 
					printf("\n");
				}
				printf("按任意鍵返回主選單...\n");
    			getch();//讀取字元但不顯示在螢幕上 
    			system("CLS");
    			break;
			case'b':
			case'B':
				printf("輸入1~9的整數:\n");
				scanf("%d",&a);
				while(a<1||a>9)
				{
					printf("輸入錯誤，請重新輸入:\n");
					scanf("%d",&a);
				}
				for(i=1;i<=a;i++)//外層迴圈，從1~a 
				{
					for(j=1;j<=a;j++)//內層迴圈，從1~a 
						printf("%dx%d=%3d ",i,j,i*j);
					printf("\n");
				}
				printf("按任意鍵返回主選單...\n");
    			getch();//讀取字元但不顯示在螢幕上 
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
				if(YorN=='y'||YorN=='Y')//如果是y或是Y就結束目前的switch 
					break;
				if(YorN=='n'||YorN=='N')//如果是n或是N就結束程式 
					return 0;
			}
	}
    
}
void f(void)
{
	printf("==============================\n");
}




