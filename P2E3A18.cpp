#include<stdio.h>
#include<stdlib.h>
int face(void);
int thain(void);
int ninetonine(void);

//This program is written using the subprogram method, 
//which separates the main program and content to facilitate reading and writing of the program.





int main(void)
{
	int counter=0;
	int password=2024;
	int input;
	int number;
	char con;
		
	face();
	system("pause");
	system("cls");
	
	while(counter<=3)
	{
		printf("Please Enter Your Password!!! The Password is 2024\n");
		scanf("%d",&input);
		
		if(input==password)
		{
			printf("Welcome\n");
			break;
		}
		else
		{
			printf("Error Please Try Again\n");
			counter=counter+1;
		}
	}
	if(counter==4)
	{
		printf("More than 3 errors\n\a");
		system("pause");
		return 0;
	}
	system("CLS");
	
	while(1)
	{
		system("CLS");
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("|   a.Draw a right triangle       |\n");
		printf("|   b.Show multiplication table   |\n");
		printf("|   c.THE END                     |\n");
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("\n");
		
		printf("Please enter a character between a to c\n");
		fflush(stdin);
		scanf("%c",&number);
		
		switch(number)
		{
			case'A':
			case'a':
				thain();
				system("pause");
				break;
			case'B':
			case'b':
				ninetonine();
				system("pause");
				break;
			case'C':
			case'c':
				system("CLS");
				printf("continue? [Y/N]\n");
				fflush(stdin);
				scanf("%c",&con);
				if(con=='Y'||con=='y')
				{
					system("cls");
				}
				else if(con=='N'||con=='n')
				{
					system("pause");
				   	system("cls");
				   	return 0;
				}
				else
				{
					printf("Error ENTER IT AGAIN\a\n");
				   	system("pause");
				}		
		}
	}
}
//------------------------------------------------------------------------
int face(void)
{
	printf("                      .::^^^^.                    \n");
	printf("               .:!?J5PGB#####GP5?~.               \n");
	printf("            ^?5GB&&&&&&&&&&&&&&&&#B5?^            \n");
	printf("         .!5B&&&&&&&&&&&&&&&&&&&&&&&&#P?:         \n");
	printf("        ~G#&&&&&&&&&&&&&&&&&&&&&&&&&&&&&G^        \n");
	printf("       ~#&#&&&&&&&&&&&&&&&&&&&&&&&&&&&&##?        \n");
	printf("       5&###&&&###&&#&&&&&###&###########~        \n");
	printf("       !######BBBBBBGBBBBBGPGGGGGBBBBBB#B:        \n");
	printf("        5##BGG##BBB5YGG55G57?5PBBB##GGGBG:        \n");
	printf("        !BBGYY5PY5J!7?Y!!YP~~?555JYJ7?5G5         \n");
	printf("         5BYJ??????7!^^^:^~^~!??777777?G7         \n");
	printf("       .^?GJJJJ?777??7~^^^^!??7!!!7?77?P~.        \n");
	printf("       ^77PY???JYY5J7!!~^^~~!7YY?J?777?5!7:       \n");
	printf("        ~!YY?77??7?!!~~!^^~~~!?7!77!!7?J!~.       \n");
	printf("         ~7J?7!~~^^^^^~~~^~~^^^^^^^~!7??!:        \n");
	printf("          :~?7!~~^^^^~~~^^~~^::::^^~!77~.         \n");
	printf("            ~?7~~^^^^!!~^^~!~^^^^^~!77.           \n");
	printf("            .?7!~~^^^~!!~~~~^^^^^~~!7^            \n");
	printf("             ~?7!~~~~!~~~~~~~~~^~~!7!.            \n");
	printf("              !?7!~~7J?777777!~~~~!7:             \n");
	printf("               ~77!~~!!!!!!!~^~~!!7^              \n");
	printf("               :??7!~~^^^^^^^~~!7??~.             \n");
	printf("              ^JJ?J?7!!~~~~~!!7?777J?:            \n");
	printf("             :YP????J????777??77!!7YP!.           \n");
	printf("            .:5P?7777?777777!!!!!!7?5!...         \n");
	printf("        ...:..!5?77!!!!!!~~~~~~~~!!7?:.....       \n");
	printf("    .....:::.  ~?7!!~~~~~~~~~~~~~!!?~.. .....     \n");
	printf(".........:.:.   :7!!~~~~~~~~~~~~~!?7..  .......   \n");
	printf(".............    :~77!~~~~~~~!7?YY!..:^:........ .\n");
	printf("... .........^^.   :?PP55555PPGGY: ..~!~........ .\n");
}
//------------------------------------------------------------------------
int thain(void)
{
 char n;
    int i, j, k;
    
    system("cls");
    printf("input character\n");
    fflush(stdin);
    scanf("%c", &n);

	if(n>='a' && n<='n')
	{
		for (i='a';i<=n;++i) 
		{
        	for (j=n;j>i;--j) 
			{
            	printf(" ");
        	}
        	for (k='a';k<=i;++k) 
			{
            	printf("%c",k);
        	}
        	printf("\n");
    	}
	}
	else
	{
		printf("input error\n");
	}
}
//------------------------------------------------------------------------
int ninetonine(void)
{
	int b,c,d,e,f;
	
	system("CLS");
	printf("Please enter a number between 1 to 9\n");
						
	fflush(stdin);
	scanf("%d",&c);
	if(c>=1 && c<=9)
	{
		for(d=1;d<=c;d++)
		{
			for(e=1;e<=c;e++)
			{
				printf(" %d*%d=%2d ",d,e,d*e);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Error please enter again \n");
	}
}
