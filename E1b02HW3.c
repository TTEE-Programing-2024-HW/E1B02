#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
void s(void);
void ran(void);
void table(void);
void bb(int);
void cc(int);
char seat[9][9]={0};
//Personal style picture
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
	//Password setting 
	for(n=1;n<=3;n++)//Set 3 opportunities using loop 
	{
		printf("Enter password,please\n");
		scanf("%d",&pass);
		if(pass==2024)
		{
			printf("Correct\n");
			break;//If correct, jump out of the loop 
		}
		else
		{
			printf("Error\n");
		}
	}
	if(n>3) return 0;//End the program if it exceeds 3 times 
	system("CLS");//Clear the screen
	//Personal style main menu
	ran();//Function to generate 10 random seats
	while(1){
	printf("--------------[ BookingSystem ]--------------\n");
	printf("|       a.Available seats                   |\n");
	printf("|       b.Computer randomly selects a posit |\n");
	printf("|       c.Choose your own position          |\n");
	printf("|       d.exist                             |\n");
	printf("--------------[ BookingSystem ]--------------\n");
	printf("Please enter 'a','b','c'or'd'.\n");
	scanf(" %c",&options);
	fflush(stdin);//Clear the buffer
	switch (options)
	{
		case 'a':
    		table();//Print out random seating chart
    		system("pause");
    		system("CLS");
        break;
		case 'b':
			printf("How many seats do you need?(1~4)");
			scanf("%d",&seats);
			while(seats>4||seats<1)//Set the number of people to 1~4 people to arrange random seats
			{
				printf("Maximum of 4 people,minimum 1 person. Please re-enter.\n");
				scanf("%d",&seats);
			}
			bb(seats);//Arrange random seats
			system("CLS");
			break;	
		case 'c':
			printf("How many seats do you need?");
			scanf("%d",&seats);
			while(seats<1)//Set at least one seat to be selected
			{
				printf("Minimum 1 person.Please re-enter.\n");
				scanf("%d",&seats);
			}
			cc(seats);//select seats
			system("pause");
			system("CLS");
			break;
		case 'd':
			printf("Continue?(y/n)\n");
			scanf(" %c",&ans);
			while(ans!='y'&&ans!='Y'&&ans!='n'&&ans!='N')//Set only y or n can be entered 
			{
				printf("error!\n");
				printf("Continue?(y/n)\n");
				scanf(" %c",&ans);
			}
			if(ans=='y'||ans=='Y')//Enter y to return to the main menu
			{
				system("CLS");
				break;
			}
			else //Input n to return the operating system
			return 0;
	}
}	
}
void s(void)//function that generates =
{
	printf("------------------------------------------\n");
}
void ran(void)//Function to generate 10 random seats 
{
	int count,row=0,col=0,i=0,j=0;
	for (i=9;i>0;i--) //Set array elements to - 
	{
   		for (j=0;j<9;j++) 
		{seat[i][j]='-';}
	}
        srand(time(NULL)); //Initialize the random number generator
        count=0;
    	while (count < 10) 
		//When it is less than 10, it enters a loop because 10 positions are randomly generated.
		{
        	row=rand() % 10;//Randomly generate numbers from 0 to 9, %10 remainder 0 to 9
         	col=rand() % 10;//Randomly generate numbers from 0 to 9, %10 remainder 0 to 9
			if (seat[row][col]=='-') 
			{
				seat[row][col] = '*';
            	count++;
        	}
    	}
        	printf("\n");
}
void table(void)//Print out the results of 10 random seats
{
	int i=0,j=0;
	for (j=0;j<9;j++) //Print the number column of the seating chart 
	{
        printf(" %d",j+1);//Since the array starts at 0, j+1 
    }
    printf("\n");
	for (i=9;i>0;i--)//Print the number row of the seating chart, from 9 to 1
	{
		printf("%d",i);
   		for (j=0;j<9;j++) 
        {
        	printf("%c ",seat[i][j]);
		}
        		printf("\n");
    }
}
void bb(int seats)//Random seat function
{
    int n=0,row=0,col=0,i=0,j=0;
    char ans;
    srand(time(NULL));//Initialize random number generator
    if(seats==4)//When the user enters 4 locations
    {
        while (1)
        {
            row=rand() % 10;//Randomly generate numbers from 0 to 9, %10 remainder 0 to 9
            col=rand() % 10;//Randomly generate numbers from 0 to 9, %10 remainder 0 to 9
            if (col+3<9&&seat[row][col]=='-'&&seat[row][col+1]=='-'&&seat[row][col+2]=='-'&&seat[row][col+3]=='-')
            {//Set the maximum range so that it does not exceed the boundary value. Check whether this column meets the 4 values-
                seat[row][col]='@';//If it matches, change - to @
                seat[row][col+1]='@';
                seat[row][col+2]='@';
                seat[row][col+3]='@';
                break;
            }
            else if (row+1<9&&col+1<9&&seat[row][col]=='-'&&seat[row+1][col]=='-'&&seat[row][col+ 1]=='-'&&seat[row+1][col+1]=='-')
            {//Set the maximum range so that it does not exceed the boundary value, and check whether the two digits in the adjacent two columns are -
                seat[row][col]='@';//If it matches, change - to @
                seat[row+1][col]='@';
                seat[row][col+1]='@';
                seat[row+1][col+1]='@';
                break;
            }
        }
    }
    else if(seats<=3&&seats>0)//When the input is between 1~3
    {
    	while (1)
        {
            row=rand() % 10; 
            col=rand() % 10; 
            if (seats==1&&seat[row][col]=='-')
            {//When only one position is required, check if there is -
				seat[row][col] = '@';//If it matches, change - to @
                break;
            }
            else if(col+2<10&&seats==2&&seat[row][col]=='-'&&seat[row][col+1]=='-')
            {//When two positions are needed, check whether there are two consecutive ones in the same column 
            	seat[row][col] = '@';//If it matches, change - to @
            	seat[row][col+1] = '@';
            	break;
			}
			else if(col+3<10&&seats==3&&seat[row][col]=='-'&&seat[row][col+1]=='-'&&seat[row][col+2]=='-')
			{//When three positions are needed, check whether there are three consecutive ones - and in the same column
				seat[row][col] = '@';//If it matches, change - to @
            	seat[row][col+1] = '@';
            	seat[row][col+2] = '@';
            	break;
			}
        }
        	
	} 
	table();//Update seating chart
    printf("Are you satisfied with the seating arrangement?(y/n)");
	scanf(" %c",&ans);
	if(ans=='y'||ans=='Y')//If satisfied 
	{	
		for (i=9;i>=0;i--)
           	for (j=0;j<9;j++)
            	if (seat[i][j]=='@')
            	{seat[i][j]='*';} //Change @ to * 
    } 
	else//Not satisfied
	{
		for (i=9;i>=0;i--)
           	for(j=0;j<9;j++)
                if (seat[i][j]=='@')
                {seat[i][j]='-';}//Just change @ back to -
    } 
}
void cc(int seats)//Seat of your choice
{
	int row,col,i,j,n=0;
	printf("Please select your seat!(Row-Column)\n");
	printf("Press Enter after entering each seat\n");
	//After entering a seat, press enter
	while(1)
	{
		scanf("%d-%d",&row,&col);
		fflush(stdin);
		if(row>9||col>9||row<1||col<1)//Check whether it matches the seating chart range
		{
			printf("Invalid format,please re-enter(Row-Column)\n");
		}
		if(seat[row][col-1]=='*')//If there is someone in the location selected by the user 
		{//Alert users that this location is already occupied
			printf("This seat is already occupied,please re-enter(Row-Column)\n");
			table();//Display the seating chart to the user so that he or she can reselect a seat 
		} 
		if(seat[row][col-1]=='-')//If there is no one at this location
		{	
			seat[row][col-1]='@';//Change - to @
			table(); //Show seating chart to users 
            n++;//Add one to the number of times you choose a location 
        }
        if(n==seats)//If the number of selected positions is equal to the number of positions entered at the beginning 
        {
			printf("If you are satisfied with this seat, press any key\n");
        	break;//Jump out of the loop
    	}
    } 
   	for (i=9;i>=0;i--)
        for(j=0;j<9;j++)
            if (seat[i][j]=='@')//Record the choice you just made
            {seat[i][j]='*';} 
	
}
