#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
void s(void);
void ran(void);
void table(void);
void bb(int);
void cc(int);
char seat[9][9]={0};
//個人風格的畫面
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
	char ans;
	char options;
	//密碼設定 
	for(n=1;n<=3;n++)//用迴圈設定3次機會 
	{
		printf("Enter password,please\n");
		scanf("%d",&pass);
		if(pass==2024)
		{
			printf("Correct\n");
			break;//如果正確就跳離迴圈 
		}
		else
		{
			printf("Error\n");
		}
	}
	if(n>3) return 0;//超過3次就結束程式 
	system("CLS");//清除螢幕
	//個人風格主選單 
	ran();//產生10個隨機座位的函式，放在迴圈外面以免每按一次a選項
	//就重新產生新的隨機座位 
	while(1){
	printf("--------------[ BookingSystem ]--------------\n");
	printf("|       a.Available seats                   |\n");
	printf("|       b.Computer randomly selects a posit |\n");
	printf("|       c.Choose your own position          |\n");
	printf("|       d.exist                             |\n");
	printf("--------------[ BookingSystem ]--------------\n");
	printf("Please enter 'a','b','c'or'd'.\n");
	scanf(" %c",&options);
	fflush(stdin);//清理緩衝區 
	switch (options)
	{
		case 'a':
    		table();//列印出隨機座位表 
    		system("pause");
    		system("CLS");
        break;
		case 'b':
			printf("How many seats do you need?(1~4)");
			scanf("%d",&seats);
			while(seats>4||seats<1)//設定人數1~4人才能夠安排隨機座位 
			{
				printf("Maximum of 4 people,minimum 1 person. Please re-enter.\n");
				scanf("%d",&seats);
			}
			bb(seats);//安排隨機座位 
			system("CLS");
			break;	
		case 'c':
			printf("How many seats do you need?");
			scanf("%d",&seats);
			while(seats<1)//設定最少選擇一個座位 
			{
				printf("Minimum 1 person.Please re-enter.\n");
				scanf("%d",&seats);
			}
			cc(seats);//選擇座位 
			system("pause");
			system("CLS");
			break;
		case 'd':
			printf("Continue?(y/n)\n");
			scanf(" %c",&ans);
			while(ans!='y'&&ans!='Y'&&ans!='n'&&ans!='N')//設定只能輸入y或是n 
			{
				printf("error!\n");
				printf("Continue?(y/n)\n");
				scanf(" %c",&ans);
			}
			if(ans=='y'||ans=='Y')//輸入y返回主選單 
			{
				system("CLS");
				break;
			}
			else //輸入n返回作業系統 
			return 0;
	}
}	
}
void s(void)//生成=的函式 
{
	printf("------------------------------------------\n");
}
void ran(void)//生成10個隨機座位的函式 
{
	int count,row=0,col=0,i=0,j=0;
	for (i=9;i>0;i--) //將陣列元素設成- 
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
void table(void)//列印出10個隨機座位的結果 
{
	int i=0,j=0;
	for (j=0;j<9;j++) //列印座位表的數字列 
	{
        printf(" %d",j+1);//因為陣列從0開始，所以j+1 
    }
    printf("\n");
	for (i=9;i>0;i--)//列印座位表的數字行，從9~1 
	{
		printf("%d",i);
   		for (j=0;j<9;j++) 
        {
        	printf("%c ",seat[i][j]);
		}
        		printf("\n");
    }
}
void bb(int seats)//隨機座位函式 
{
    int n=0,row=0,col=0,i=0,j=0;
    char ans;
    srand(time(NULL));//初始化隨機數生成器
    if(seats==4)//當使用者輸入4個位置時 
    {
        while (1)
        {
            row=rand() % 10;//隨機生成0~9的數字，%10餘數0~9
            col=rand() % 10;//隨機生成0~9的數字，%10餘數0~9
            if (col+3<9&&seat[row][col]=='-'&&seat[row][col+1]=='-'&&seat[row][col+2]=='-'&&seat[row][col+3]=='-')
            {//設定最大範圍不會超出邊界值，檢查這列是否符合4個都是- 
                seat[row][col]='@';//如果符合就把-改成@ 
                seat[row][col+1]='@';
                seat[row][col+2]='@';
                seat[row][col+3]='@';
                break;
            }
            else if (row+1<9&&col+1<9&&seat[row][col]=='-'&&seat[row+1][col]=='-'&&seat[row][col+ 1]=='-'&&seat[row+1][col+1]=='-')
            {//設定最大範圍不會超出邊界值，檢查相鄰前後兩列各兩位是否為- 
                seat[row][col]='@';//如果符合就把-改成@ 
                seat[row+1][col]='@';
                seat[row][col+1]='@';
                seat[row+1][col+1]='@';
                break;
            }
        }
    }
    else if(seats<=3&&seats>0)//當輸入介於1~3 
    {
    	while (1)
        {
            row=rand() % 10; 
            col=rand() % 10; 
            if (seats==1&&seat[row][col]=='-')
            {//當只要一個位置時，檢查是否有-
				seat[row][col] = '@';//如果符合就把-改成@
                break;
            }
            else if(col+2<10&&seats==2&&seat[row][col]=='-'&&seat[row][col+1]=='-')
            {//當需要兩個位置時，檢查是否有連續的兩個-且在同列 
            	seat[row][col] = '@';//如果符合就把-改成@
            	seat[row][col+1] = '@';
            	break;
			}
			else if(col+3<10&&seats==3&&seat[row][col]=='-'&&seat[row][col+1]=='-'&&seat[row][col+2]=='-')
			{//當需要三個位置時，檢查是否有連續的三個-且在同列
				seat[row][col] = '@';//如果符合就把-改成@
            	seat[row][col+1] = '@';
            	seat[row][col+2] = '@';
            	break;
			}
        }
        	
	} 
	table();//更新座位表 
    printf("Are you satisfied with the seating arrangement?(y/n)");
	scanf(" %c",&ans);
	if(ans=='y'||ans=='Y')//如果滿意 
	{	
		for (i=9;i>=0;i--)
           	for (j=0;j<9;j++)
            	if (seat[i][j]=='@')
            	{seat[i][j]='*';} //就把@改成*表示有人座了 
    } 
	else//不滿意 
	{
		for (i=9;i>=0;i--)
           	for(j=0;j<9;j++)
                if (seat[i][j]=='@')
                {seat[i][j]='-';} //就把@改回- 
    } 
}
void cc(int seats)//自選座位 
{
	int row,col,i,j,n=0;
	printf("Please select your seat!(Row-Column)\n");
	printf("Press Enter after entering each seat\n");
	//輸入完一個座位按一下enter 
	while(1)
	{
		scanf("%d-%d",&row,&col);
		fflush(stdin);
		if(row>9||col>9||row<1||col<1)//檢查是否符合座位表範圍 
		{
			printf("Invalid format,please re-enter(Row-Column)\n");
		}
		if(seat[row][col-1]=='*')//如果使用者所選的位置有人 
		{//提醒使用者這個位置已經有人了 
			printf("This seat is already occupied,please re-enter(Row-Column)\n");
			table();//展示座位表給使用者，方便他重選位置 
		} 
		if(seat[row][col-1]=='-')//如果這個位置沒人 
		{	
			seat[row][col-1]='@';//把-改成@ 
			table(); //展示座位表給使用者看 
            n++;//選位置次數加一 
        }
        if(n==seats)//如果選位置次數等於一開始輸入的位置個數 
        {
			printf("If you are satisfied with this seat, press any key\n");
        	break;//跳離迴圈 
    	}
    } 
   	for (i=9;i>=0;i--)
        for(j=0;j<9;j++)
            if (seat[i][j]=='@')//記錄下剛才的選擇 
            {seat[i][j]='*';} 
	
}
