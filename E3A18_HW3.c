#include<stdio.h>
#include<stdlib.h>
#include<time.h>
char sit[9][9]={{'-','-','-','-','-','-','-','-','-'},
    			{'-','-','-','-','-','-','-','-','-'},
    			{'-','-','-','-','-','-','-','-','-'},
    			{'-','-','-','-','-','-','-','-','-'},
    			{'-','-','-','-','-','-','-','-','-'},
    			{'-','-','-','-','-','-','-','-','-'},
    			{'-','-','-','-','-','-','-','-','-'},
    			{'-','-','-','-','-','-','-','-','-'},
    			{'-','-','-','-','-','-','-','-','-'}};
    
    
 int main(void)
 {
	int a,c,d,i,j,l,k,w,p;
  	int number;
  
	char b,ch,non;
	
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
	system("pause");
	system("CLS");
 
	while(1)
	{
		printf("Please Enter Your Password!!! The Password is 2024\n");
		scanf("%d",&a);
		if (a==2024)
		{
			break;
		} 
		else
		{
    		b++; 
		}
		if(b==3)
		{
			printf("\n"); 
			return 0;
		}
	}
	system("PAUSE"); 
	fflush(stdin);

	start:
    system("CLS");
	printf("|---------[BookingSystem]---------|\n");
	printf("|   a. Available seats            |\n");
	printf("|   b. Arrange for you            |\n");
	printf("|   c. Choose by yourself         |\n");
	printf("|   d. Exit                       |\n");
	printf("|---------------------------------|\n");
	printf("\n");
		
	printf("Please enter a character between a to d.\n");
	fflush(stdin);
	scanf("%c",&number);
  
	int max=8,min=0;              
	for(k=0;k<=9;k++)             
	{
		i=rand()%(max-min+1)+min;
		j=rand()%(max-min+1)+min;
  
		if(sit[i][j]==42)
		k--;
   
		sit[i][j]=42;
	}
	switch(b)
	{
	case'A':
	case'a':
		system("CLS");
		printf("\\123456789\n");
	
		for(j=1;j<10;j++)
		{
			printf("%d",10-j);
			for(l=1;l<10;l++)
    		{
				printf("%c",sit[j-1][l-1]);
			}
			printf("\n");
		}
  		system("pause");
		goto start;
		
	case'B':
 	case'b':
    	system("CLS");
    	printf("Please enter the number of people (1~4).\n");
		scanf("%d",&p);
		
		while(p<1||p>4)            
		{
			system("CLS");
			printf("The number of people is wrong, please re-enter.\n");       
    		printf("Please enter the number of people (1~4).\n");
    		scanf("%d",&p);
   		}
   		system("CLS");
    	w=0;
	while(w<=1)             
	{
    	while(k!=1)             
    	{
			i=rand()%(max-min+1)+min;
			j=rand()%(max-min+1)+min;
    			if(sit[i][j]!=42)          
     			{
					if(p==1)
					{
						sit[i][j]=64; //1人          
						k=1;
					}
					else if(p==2&&(j+1)<=8&&sit[i][j+1]!=42)
      				{
						sit[i][j]=64; //2人          
						sit[i][j+1]=64;
						k=1;
					}
    				else if(p==3&&(j+2)<=8&&sit[i][j+1]!=42&&sit[i][j+2]!=42)
					{
						sit[i][j]=64; //3人          
						sit[i][j+1]=64;
						sit[i][j+2]=64;
						k=1;
					}
					else if(p==4&&(j+1)<=8&&(i+1)>=0&&sit[i][j+1]!=42&&sit[i+1][j]!=42&&sit[i+1][j+1]!=42)
					{
						sit[i][j]=64; //4人          
						sit[i+1][j]=64;
						sit[i][j+1]=64;
						sit[i+1][j+1]=64;
						k=1;
					}
     			}
			else
			{ 
				k=0;            
    		}
    	} 
		printf("\\123456789\n");
   		for(j=1;j<10;j++)
		{
			printf("%d",10-j);
			for(l=1;l<10;l++)
    		{
    			printf("%c",sit[j-1][l-1]);
    		}
    		printf("\n");
  		}
    	printf("Do you accept this computer ranking?\n"); 
    	printf("If you do not accept it more than twice, you will be returned to the main menu.\n");
    	fflush(stdin);
    	scanf("%c",&ch);
    	while(ch!='Y'&&ch!='y'&&ch!='N'&&ch!='n')   
    	{
    		system("CLS");
    		printf("Error message please re-enter.\n");        
    		printf("Do you accept this computer ranking?\n");
    		scanf("%c",&ch);
    	}
    	if(ch=='Y'||ch=='y')          
    	{
    		for(i=8;i>=0;i--)          
    		{
    	  		for(j=0;j<=8;j++)
				{
    				if(sit[i][j]==64)
    				{ 
						sit[i][j]=45;
					} 
    	  		}
			}
    		k=0;
			goto start;
		}
    	else
    	{
    		w++;
    		k=0;
    		for(i=8;i>=0;i--)          
			{
				for(j=0;j<=8;j++)
	      		{
					if(sit[i][j]==64)
					{ 
		    			sit[i][j]=45;
		    		} 
    	  		}
			}
    		system("CLS");
    	} 
    }
	printf("It has been rejected twice and will be returned to the main menu.\n");
	printf("Click on any item to return to the main menu.\n");       
    		goto start;
   	case'C':
	case'c':
	system("CLS");
    printf("\\123456789\n");
	for(j=1;j<10;j++)
	{
		printf("%d",10-j);
	   	for(l=1;l<10;l++)
	    {
	     printf("%c",sit[j-1][l-1]);
	    }
	    printf("\n");
	}
	printf("Please enter your seat selection.\n");
    scanf("%d-%d",&i,&j);  
    if(sit[i][j]=42)
	{
   		printf("Reset, please re-enter.\n");
	}
	else if(i>9||i<1||j>9||j<1)
  	{
   		printf("Format error, please re-enter.\n"); 
  	}
  	else if(sit[i][j]!=42||i<=9||j<=9||i>=1||j>=1)
  	{
   		sit[i][j]=64;
	}
	case'D':
	case'd':
		printf("Continue?(y/n)");            
		fflush(stdin);
		scanf("%c",&ch);
		while(ch!='Y'&&ch!='y'&&ch!='N'&&ch!='n')    
   		{
    		system("CLS");
    		printf("Error message, please re-enter.\n");         
    		printf("Please enter a character.\n");
    		scanf("%c",&ch);
		}
   		if(ch=='N'||ch=='n')
		{
			return 0;
		}
   		else
   		{
			goto start;
			return 0;
		}
		default:                
			printf("Error message, please re-enter.\n");
			printf("Press any key to return to the main menu.\n");
   			system("CLS");
   			goto start;
		}      
 	system("pause");
 	return 0;
}	
