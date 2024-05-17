#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
void s(void);
void ran(void);
void table(void);
void bb(int);
char seat[9][9]={0};
int main()
{
	printf("H   H    W       W    3 3   \n");
	printf("H   H    W   W   W   3   3  \n");
	printf("H   H    W   W   W      3   \n");
	printf("HHHHH    W   W   W    3     \n");
	printf("H   H    W   W   W      3   \n");
	printf("H   H    W   W   W  3    3  \n");
	printf("H   H      W   W     3 3    \n");
	s();
	printf("Welcome\n");
	printf("This is HW3 for E1b02.\n");
	s();
	printf("Password hint 1\n");
	printf("The password is four digits.\n");
	printf("Password hint 2\n");
	printf("the first number:-4   \n");
	printf("the second number:xu/6\n");
	printf("the third number:-4   \n");
	printf("the last number:n4    \n");
	printf("Password hint 3\n");
	printf("hint 2 is related to Chinese\n");
	s();
	int pass,n=0,i,j,seats=0;
	int count,row=0,col=0;
	
	char options;
	for(n=1;n<=3;n++)
	{
		printf("Enter password,please\n");
		scanf("%d",&pass);
		if(pass==2024)
		{
			printf("Correct\n");
			break;
		}
		else
		{
			printf("Error\n");
		}
	}
	if(n>3) return 0;
	system("CLS");
	while(1){
	printf("--------------[ BookingSystem ]--------------\n");
	printf("|       a.Available seats                   |\n");
	printf("|       b.Computer randomly selects a posit |\n");
	printf("|       c.Choose your own position          |\n");
	printf("|       d.exist                             |\n");
	printf("--------------[ BookingSystem ]--------------\n");
	printf("Please enter 'a','b','c'or'd'.\n");
	scanf(" %c",&options);
	switch (options)
	{
		case 'a':
    		ran();
    		table();
    		system("pause");
    		system("CLS");
        break;
		case 'b':
			printf("How many seats do you need?(1~4)");
			scanf("%d",&seats);
			bb(seats);
			table(); // 再次顯示座位表
            system("pause");
            system("CLS");
			break;
			
		case 'c':
		case 'd':
			break;
	}
}
	
}
void s(void)
{
	printf("------------------------------------------\n");
}
void ran(void)
{
	int i,j;
	int count,row=0,col=0;
	for (i=9;i>0;i--) 
	{
   		for (j=0;j<9;j++) 
		{seat[i][j]='-';}
	}
		for (j=0;j<9;j++) 
		{
        	printf(" %d",j+1);
        }
        srand(time(NULL)); //初始化隨機數生成器
        count=0;
    	while (count < 10) //當小於10時進入迴圈，因為要隨機生成10個位置 
		{
        	row=rand() % 9;//隨機生成0~8的數字，%9餘數0~8 
         	col=rand() % 9;//隨機生成0~8的數字，%9餘數0~8 
			if (seat[row][col]=='-') 
			{
				seat[row][col] = '*';
            	count++;
        	}
    	}
        	printf("\n");
}
void table(void)
{
	int i,j;
	for (i=9;i>0;i--)
	{
		printf("%d",i);
   		for (j=0;j<9;j++) 
        {
        	printf("%c ",seat[i][j]);
		}
        		printf("\n");
    }
}
void bb(int seats) 
{
    int n=0,row=0,col=0;
    if(seats<=3)
    {
	while(n<seats) 
    {
        row=rand()%9;
        col=rand()%9;
        if (seat[row][col] == '-') 
        {
            seat[row][col] = '@';
            n++;
        }
    }
}
}
