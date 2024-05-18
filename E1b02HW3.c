#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
void s(void);
void ran(void);
void table(void);
void bb(int);
void cc(void);
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
	int pass,n=0,j,i,seats=0;
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
	ran();
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
    		table();
    		system("pause");
    		system("CLS");
        break;
		case 'b':
			printf("How many seats do you need?(1~4)");
			scanf("%d",&seats);
			bb(seats);
			system("CLS");
			break;	
		case 'c':
			cc();
			system("pause");
			system("CLS");
			break;
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
	int count,row=0,col=0,i=0,j=0;
	for (i=9;i>0;i--) 
	{
   		for (j=0;j<9;j++) 
		{seat[i][j]='-';}
	}
        srand(time(NULL)); //初始化隨機數生成器
        count=0;
    	while (count < 10) //當小於10時進入迴圈，因為要隨機生成10個位置 
		{
        	row=rand() % 10;//隨機生成0~9的數字，%10餘數0~9 
         	col=rand() % 10;//隨機生成0~9的數字，%10餘數0~9 
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
	int i=0,j=0;
	for (j=0;j<9;j++) 
	{
        printf(" %d",j+1);
    }
    printf("\n");
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
    int n=0,row=0,col=0,i=0,j=0;
    char ans;
    srand(time(NULL));
    if(seats==4)
    {
        while (1)
        {
            row=rand() % 10; 
            col=rand() % 10; 
            if (col+3<10&&seat[row][col]=='-'&&seat[row][col+1]=='-'&&seat[row][col+2]=='-'&&seat[row][col+3]=='-')
            {
                seat[row][col]='@';
                seat[row][col+1]='@';
                seat[row][col+2]='@';
                seat[row][col+3]='@';
                break;
            }
            else if (row+1<10&&col+1<10&&seat[row][col]=='-'&&seat[row+1][col]=='-'&&seat[row][col+ 1]=='-'&&seat[row+1][col+1]=='-')
            {
                seat[row][col]='@';
                seat[row+1][col]='@';
                seat[row][col+1]='@';
                seat[row+1][col+1]='@';
                break;
            }
        }
    }
    else if(seats<=3&&seats>0)
    {
    	while (1)
        {
            row=rand() % 10; 
            col=rand() % 10; 
            if (seats==1&&seat[row][col]=='-')
            {
				seat[row][col] = '@';	
                break;
            }
            else if(col+2<10&&seats==2&&seat[row][col]=='-'&&seat[row][col+1]=='-')
            {
            	seat[row][col] = '@';
            	seat[row][col+1] = '@';
            	break;
			}
			else if(col+3<10&&seats==3&&seat[row][col]=='-'&&seat[row][col+1]=='-'&&seat[row][col+2]=='-')
			{
				seat[row][col] = '@';
            	seat[row][col+1] = '@';
            	seat[row][col+2] = '@';
            	break;
			}
        }
        	
	} 
	table();
    printf("Are you satisfied with the seating arrangement?(y/n)");
	scanf(" %c",&ans);
	if(ans=='y'||ans=='Y')
	{	
		for (i=9;i>=0;i--)
           	for (j=0;j<9;j++)
            	if (seat[i][j]=='@')
            	{seat[i][j]='*';} 
    } 
	else
	{
		for (i=9;i>=0;i--)
           	for(j=0;j<9;j++)
                if (seat[i][j]=='@')
                {seat[i][j]='-';} 
    } 
}
void cc(void)
{
	int row,col;
	printf("Please select your seat!(Row-Column)\n");
	scanf("%d-%d",&row,&col);
	while(1)
	{
		if(row>9||col>9||row<1||col<1)
		{
			printf("Invalid format,please re-enter(Row-Column)\n");
			scanf("%d-%d",&row,&col);
		}
		else if(seat[row-1][col-1]=='*')
		{
			printf("This seat is already occupied,please re-enter(Row-Column)\n");
			scanf("%d-%d",&row,&col);
		} 
		else if(seat[row-1][col-1]=='-')
		{	
			seat[row-1][col-1]='@';
			table();
			break;
        }
    } 			
}
