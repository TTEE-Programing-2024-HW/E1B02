#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
void s(void);
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
	int pass,n=0,i,j;
	int count,row=0,col=0;
	char seat[9][9]={0};
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
			for (i=8;i>0;i--) 
			{
   			 	for (j=0;j<9;j++) 
				{seat[i][j]='-';}
			}
			for (j=0;j<9;j++) 
			{
        		printf(" %d",j+1);
        	}
        	srand(time(NULL)); //��l���H���ƥͦ���
        	count=0;
    		while (count < 10) //��p��10�ɶi�J�j��A�]���n�H���ͦ�10�Ӧ�m 
			{
        		row=rand() % 9;//�H���ͦ�0~8���Ʀr�A%9�l��0~8 
         		col=rand() % 9;//�H���ͦ�0~8���Ʀr�A%9�l��0~8 
				if (seat[row][col]=='-') 
				{
					seat[row][col] = '*';
            		count++;
        		}
    		}
        	printf("\n");
			for (i=8;i>0;i--)
			{
				printf("%d",i+1);
   				for (j=0;j<9;j++) 
        		{printf("%c ",seat[i][j]);}
        		printf("\n");
    		}
    		system("pause");
    		system("CLS");
        break;
		case 'b':
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
