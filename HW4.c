#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
//This time I typed a longer program than last time and did not use subprograms to write, so that I could complete the assignment in a more confusing program. 
{
	int ID ;
	char name[10] ;
	int scoreA ;
	int scoreB ;
	int scoreC ;
};
int main(void)
{
	int a,b,i,max=0,j=0,tmp,num[10]={0,1,2,3,4,5,6,7,8,9};
	char ch,c[10];
	struct student student[10];
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
		system("pause");
		system("CLS");
	}
	while(1)
	{
		printf("Please Enter Your Password!!! The Password is 2024\n");
		scanf("%d",&a);
		if(a==2024)
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
	printf("----------[Grade System]----------\n");
	printf("|  a. Enter student grades       |\n");
	printf("|  b.Show student grades         |\n");
	printf("|  c.Search student grades       |\n");
	printf("|  d.Grades ranking              |\n");
	printf("|  e.System end                  |\n");
  	fflush(stdin);
  	scanf("%c",&ch);
	system("CLS");
	
	switch(ch)
	{
		case'A':
		case'a':
			fflush(stdin);            
			printf("Please Enter The Number Of people(5~10): ");
			scanf("%d",&max); 
			while(max<5 || max>10)
   			{
				printf("Error\n");
				printf("Please Enter The Number Of people(5~10): ");
				scanf("%d",&max); 
			}
  			system("CLS");
  			
			for(i=0;i<max;i++)
			{
				printf("Please enter the name of student %d \n",i+1);
				scanf("%s",&student[i].name);
				while(1)
				{
					printf("Please enter the ID of student %d (six digits) \n");
        			scanf("%d",&student[i].ID);
        			if(student[i].ID>=100000&&student[i].ID<=999999)
					{
						break;
					}
    				printf("Error\n");
				}
    			while(1)
				{
					printf("Please enter Math score\n");
					scanf("%d",&student[i].scoreA);
						if(student[i].scoreA>=0 && student[i].scoreA<=100)
						{
							break;
						}
					printf("Error\n");
				}
				while(1)
				{
					printf("Please enter Physics score\n");
					scanf("%d",&student[i].scoreB);
						if(student[i].scoreB>=0&&student[i].scoreB<=100)
						{
							break;
						}
					printf("Error\n");
				}
				while(1)
				{
					printf("Please enter English score:\n");
					scanf("%d",&student[i].scoreC);
						if(student[i].scoreC>=0&&student[i].scoreC<=100)
						{
							break;
						}
					printf("Error\n");
				}
			}
			system("pause");
			system("CLS");
			goto start;

		case'B':
		case'b':
        	for(i=0;i<max;i++)
			{
				printf("Name: %s\n",student[i].name);
				printf("ID: %d\n",student[i].ID);
				printf("Math grades: %d\n",student[i].scoreA);
				printf("Physics grades: %d\n",student[i].scoreB);
				printf("English grades: %d\n",student[i].scoreC);
				printf("Average score: %.1f\n",(float)(student[i].scoreA+student[i].scoreB+student[i].scoreC)/3);
			}
			system("pause");
			system("CLS");
			goto start;
			 
		case'C':
		case'c':
			printf("Please enter the name you want to search for: \n");
			scanf("%s",&c);
			for(i=0;i<max;i++)
			{
				if(strcmp(c,student[i].name)==0 )
				{
					printf("Name: %s\n",student[i].name);
					printf("ID: %d\n",student[i].ID);
					printf("Math grades: %d\n",student[i].scoreA);
					printf("Physics grades: %d\n",student[i].scoreB);
					printf("English grades: %d\n",student[i].scoreC);
					printf("Average score: %.1f\n",(float)(student[i].scoreA+student[i].scoreB+student[i].scoreC)/3);
				}
				if(i!=0 && i!=1 && i!=2 && i!=3 && i!=4 && i!=5 && i!=6 && i!=7 && i!=8 && i!=9)
				{
					printf("No such person found\n");
				}
    		}
			system("pause");
			system("CLS");
			goto start;
			
		case'D':
		case'd':
			for(i=0;i<max;i++)
			{
				for(j=i+1;j<max;j++)
				{
					if((float)(student[i].scoreA+student[i].scoreB+student[i].scoreC)/3<(float)(student[j].scoreA+student[j].scoreB+student[j].scoreC)/3);
					{
						tmp=num[i];
						num[i]=num[j];
						num[j]=tmp;
					}
				}
			}
			for(i=0;i<max;i++)
			{
				printf("Name: %s\n",student[num[i]].name);
				printf("ID: %d\n",student[num[i]].ID);
				printf("Average score: %.1f\n",(float)(student[num[i]].scoreA+student[num[i]].scoreB+student[num[i]].scoreC)/3);
			}
			system("pause");
			goto start;
			
		case'E':
	    case'e':
			printf("Are you sure you want to leave? (Y/N)");
			fflush(stdin);
			scanf("%c", &ch);
			while(ch!='Y' && ch!='y' && ch!='N' && ch!='n')
			{
				system("CLS");
				printf("Error\n");
				printf("Please enter the character\n");
				scanf("%c", &ch);
			}
    		if(ch=='Y' || ch=='y')
    		{
				return 0;
			}
			else
			{
				goto start;
			}
			default:
				printf("Error\n");
				printf("Press any comment to return to the main menu\n");
				system("pause");
				system("CLS");
				goto start;
		}
		system("pause");
		return 0;
	}
