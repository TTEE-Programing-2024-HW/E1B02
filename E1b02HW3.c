#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
void s(void);
void ran(void);
void table(void);
void bb(int);
void cc(int);
char seat[9][9]={0};
//�ӤH���檺�e��
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
	//�K�X�]�w 
	for(n=1;n<=3;n++)//�ΰj��]�w3�����| 
	{
		printf("Enter password,please\n");
		scanf("%d",&pass);
		if(pass==2024)
		{
			printf("Correct\n");
			break;//�p�G���T�N�����j�� 
		}
		else
		{
			printf("Error\n");
		}
	}
	if(n>3) return 0;//�W�L3���N�����{�� 
	system("CLS");//�M���ù�
	//�ӤH����D��� 
	ran();//����10���H���y�쪺�禡�A��b�j��~���H�K�C���@��a�ﶵ
	//�N���s���ͷs���H���y�� 
	while(1){
	printf("--------------[ BookingSystem ]--------------\n");
	printf("|       a.Available seats                   |\n");
	printf("|       b.Computer randomly selects a posit |\n");
	printf("|       c.Choose your own position          |\n");
	printf("|       d.exist                             |\n");
	printf("--------------[ BookingSystem ]--------------\n");
	printf("Please enter 'a','b','c'or'd'.\n");
	scanf(" %c",&options);
	fflush(stdin);//�M�z�w�İ� 
	switch (options)
	{
		case 'a':
    		table();//�C�L�X�H���y��� 
    		system("pause");
    		system("CLS");
        break;
		case 'b':
			printf("How many seats do you need?(1~4)");
			scanf("%d",&seats);
			while(seats>4||seats<1)//�]�w�H��1~4�H�~����w���H���y�� 
			{
				printf("Maximum of 4 people,minimum 1 person. Please re-enter.\n");
				scanf("%d",&seats);
			}
			bb(seats);//�w���H���y�� 
			system("CLS");
			break;	
		case 'c':
			printf("How many seats do you need?");
			scanf("%d",&seats);
			while(seats<1)//�]�w�ֿ̤�ܤ@�Ӯy�� 
			{
				printf("Minimum 1 person.Please re-enter.\n");
				scanf("%d",&seats);
			}
			cc(seats);//��ܮy�� 
			system("pause");
			system("CLS");
			break;
		case 'd':
			printf("Continue?(y/n)\n");
			scanf(" %c",&ans);
			while(ans!='y'&&ans!='Y'&&ans!='n'&&ans!='N')//�]�w�u���Jy�άOn 
			{
				printf("error!\n");
				printf("Continue?(y/n)\n");
				scanf(" %c",&ans);
			}
			if(ans=='y'||ans=='Y')//��Jy��^�D��� 
			{
				system("CLS");
				break;
			}
			else //��Jn��^�@�~�t�� 
			return 0;
	}
}	
}
void s(void)//�ͦ�=���禡 
{
	printf("------------------------------------------\n");
}
void ran(void)//�ͦ�10���H���y�쪺�禡 
{
	int count,row=0,col=0,i=0,j=0;
	for (i=9;i>0;i--) //�N�}�C�����]��- 
	{
   		for (j=0;j<9;j++) 
		{seat[i][j]='-';}
	}
        srand(time(NULL)); //��l���H���ƥͦ���
        count=0;
    	while (count < 10) //��p��10�ɶi�J�j��A�]���n�H���ͦ�10�Ӧ�m 
		{
        	row=rand() % 10;//�H���ͦ�0~9���Ʀr�A%10�l��0~9 
         	col=rand() % 10;//�H���ͦ�0~9���Ʀr�A%10�l��0~9 
			if (seat[row][col]=='-') 
			{
				seat[row][col] = '*';
            	count++;
        	}
    	}
        	printf("\n");
}
void table(void)//�C�L�X10���H���y�쪺���G 
{
	int i=0,j=0;
	for (j=0;j<9;j++) //�C�L�y����Ʀr�C 
	{
        printf(" %d",j+1);//�]���}�C�q0�}�l�A�ҥHj+1 
    }
    printf("\n");
	for (i=9;i>0;i--)//�C�L�y����Ʀr��A�q9~1 
	{
		printf("%d",i);
   		for (j=0;j<9;j++) 
        {
        	printf("%c ",seat[i][j]);
		}
        		printf("\n");
    }
}
void bb(int seats)//�H���y��禡 
{
    int n=0,row=0,col=0,i=0,j=0;
    char ans;
    srand(time(NULL));//��l���H���ƥͦ���
    if(seats==4)//��ϥΪ̿�J4�Ӧ�m�� 
    {
        while (1)
        {
            row=rand() % 10;//�H���ͦ�0~9���Ʀr�A%10�l��0~9
            col=rand() % 10;//�H���ͦ�0~9���Ʀr�A%10�l��0~9
            if (col+3<9&&seat[row][col]=='-'&&seat[row][col+1]=='-'&&seat[row][col+2]=='-'&&seat[row][col+3]=='-')
            {//�]�w�̤j�d�򤣷|�W�X��ɭȡA�ˬd�o�C�O�_�ŦX4�ӳ��O- 
                seat[row][col]='@';//�p�G�ŦX�N��-�令@ 
                seat[row][col+1]='@';
                seat[row][col+2]='@';
                seat[row][col+3]='@';
                break;
            }
            else if (row+1<9&&col+1<9&&seat[row][col]=='-'&&seat[row+1][col]=='-'&&seat[row][col+ 1]=='-'&&seat[row+1][col+1]=='-')
            {//�]�w�̤j�d�򤣷|�W�X��ɭȡA�ˬd�۾F�e���C�U���O�_��- 
                seat[row][col]='@';//�p�G�ŦX�N��-�令@ 
                seat[row+1][col]='@';
                seat[row][col+1]='@';
                seat[row+1][col+1]='@';
                break;
            }
        }
    }
    else if(seats<=3&&seats>0)//���J����1~3 
    {
    	while (1)
        {
            row=rand() % 10; 
            col=rand() % 10; 
            if (seats==1&&seat[row][col]=='-')
            {//��u�n�@�Ӧ�m�ɡA�ˬd�O�_��-
				seat[row][col] = '@';//�p�G�ŦX�N��-�令@
                break;
            }
            else if(col+2<10&&seats==2&&seat[row][col]=='-'&&seat[row][col+1]=='-')
            {//��ݭn��Ӧ�m�ɡA�ˬd�O�_���s�򪺨��-�B�b�P�C 
            	seat[row][col] = '@';//�p�G�ŦX�N��-�令@
            	seat[row][col+1] = '@';
            	break;
			}
			else if(col+3<10&&seats==3&&seat[row][col]=='-'&&seat[row][col+1]=='-'&&seat[row][col+2]=='-')
			{//��ݭn�T�Ӧ�m�ɡA�ˬd�O�_���s�򪺤T��-�B�b�P�C
				seat[row][col] = '@';//�p�G�ŦX�N��-�令@
            	seat[row][col+1] = '@';
            	seat[row][col+2] = '@';
            	break;
			}
        }
        	
	} 
	table();//��s�y��� 
    printf("Are you satisfied with the seating arrangement?(y/n)");
	scanf(" %c",&ans);
	if(ans=='y'||ans=='Y')//�p�G���N 
	{	
		for (i=9;i>=0;i--)
           	for (j=0;j<9;j++)
            	if (seat[i][j]=='@')
            	{seat[i][j]='*';} //�N��@�令*��ܦ��H�y�F 
    } 
	else//�����N 
	{
		for (i=9;i>=0;i--)
           	for(j=0;j<9;j++)
                if (seat[i][j]=='@')
                {seat[i][j]='-';} //�N��@��^- 
    } 
}
void cc(int seats)//�ۿ�y�� 
{
	int row,col,i,j,n=0;
	printf("Please select your seat!(Row-Column)\n");
	printf("Press Enter after entering each seat\n");
	//��J���@�Ӯy����@�Uenter 
	while(1)
	{
		scanf("%d-%d",&row,&col);
		fflush(stdin);
		if(row>9||col>9||row<1||col<1)//�ˬd�O�_�ŦX�y���d�� 
		{
			printf("Invalid format,please re-enter(Row-Column)\n");
		}
		if(seat[row][col-1]=='*')//�p�G�ϥΪ̩ҿ諸��m���H 
		{//�����ϥΪ̳o�Ӧ�m�w�g���H�F 
			printf("This seat is already occupied,please re-enter(Row-Column)\n");
			table();//�i�ܮy����ϥΪ̡A��K�L�����m 
		} 
		if(seat[row][col-1]=='-')//�p�G�o�Ӧ�m�S�H 
		{	
			seat[row][col-1]='@';//��-�令@ 
			table(); //�i�ܮy����ϥΪ̬� 
            n++;//���m���ƥ[�@ 
        }
        if(n==seats)//�p�G���m���Ƶ���@�}�l��J����m�Ӽ� 
        {
			printf("If you are satisfied with this seat, press any key\n");
        	break;//�����j�� 
    	}
    } 
   	for (i=9;i>=0;i--)
        for(j=0;j<9;j++)
            if (seat[i][j]=='@')//�O���U��~����� 
            {seat[i][j]='*';} 
	
}
