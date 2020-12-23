#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char name[20];
long int no;
char message[20];
struct login
{
    char fname[30];
    char lname[30];
    char username[30];
    char password[20];
};
struct feedback
{
	char name[40];
	long int number;
	char message[100];


}f;
FILE *b;

void login (void);
void registration (void);
void menu();
void menude();
void choosecollegebased();
void nationwise();
void statewise();
void nationcse();
void nationece();
void statecse();
void stateece();
void statenirf();
void nationnirf();
void feedback();
void updatecollegestate();
void updatecollegenation();






int main (void)
{
    int a;
    int option;
    int c;
    
	printf("\t\t\t##################################################################");
    printf("\n\t\t\t############                                        ############");
    printf("\n\t\t\t############                COLLEGE GENERATOR       ############");
    printf("\n\t\t\t############                                        ############");
    printf("\n\t\t\t################################################################");
    printf("\n\t\t\t---------------------------------------------------------------------------\n");
    printf("\n\t\t\tenter a key to continue");
    getchar();
    system("CLS");

	printf("\t\t\tpress 1 for user\n \t\t\tpress 2 for developer\n");
	scanf("%d",&a);
	if(a==1){

    printf("\t\t\t\tPress '1' to Register\n\t\t\t\tPress '2' to Login\n\n");
    scanf("%d",&option);

    getchar();           // catching newline.

    if(option == 1)
        {
            system("CLS");
            registration();
        }

    else if(option == 2)
        {
            system("CLS");
            login();
        }}
        else if(a == 2){
	    system("CLS");

		int i,j=0;
		char p[20]={'T','e','a','m','_','3','0'},password[20],ch;
		printf("\n\n\n\n\t\t\t\t\t\t\t\t\tEnter password : ");
		scanf("%s",password);
		if(!strcmp(password,p)){
			menude();
		}
		else{
			system("cls");
			while(strcmp(password,p)){
				printf("\n\n\n\t\t\t\t\t\t\t\t\tInvalid Password!!\n");
				printf("\t\t\t\t\t\t\t\t\tEnter your password again : ");
				scanf("%s",password);
			}
			if(!strcmp(password,p)){
					menude();
			}
		}

	}


	return 0;
}







void menu(){
    int ch;
printf("\nMENU");
		printf("\n\t\t\t1.choose rank based on state and nation \n\t\t\t2.state nirf\n\t\t\t3.nationnirf\n\t\t\t4.feedback\n\t\t\t5.quit");
		printf("enter your choice");
		scanf("%d",&ch);
		while(1){
			switch(ch){


				case 1:choosecollegebased();break;


				case 2:statenirf();break;
				case 3:nationnirf();break;
				case 4:feedback();break;
				case 5:exit(1);break;
				default:printf("\n\t\t\tinvalid input enter correct one\n");
				        printf("enter correct one");
				        scanf("%d",&ch);
                        break;



			}



		}




}
void menude(){
    int ch;
printf("\n\t\t\tMENU\n\n");
printf("\n\t\t\t1.updatecollegenation\n\n\t\t\t2.updatecollegestate\n\n\t\\n\t\t\t4.quit\n");
printf("\t\t\tenter your choice\n");
		scanf("%d",&ch);
		while(1){
			switch(ch){
				case 1:updatecollegenation();
				case 2:updatecollegestate();

				case 4:exit(1);break;
				default:printf("invalid input");
}}

}


void login(void)
{
    char username[30],password[20];
    FILE *log;

     log=fopen("login.dat","r");
    if (log == NULL)
    {
        fputs("Error at opening File!", stderr);
        exit(1);
    }

    struct login l;

    printf("\n\t\t\t\tPlease Enter your login credentials below\n\n");
    printf("Username:  ");
    scanf("%s",username);
    printf("Password: ");
    printf("\n");
    scanf("%s",password);
    printf("%s\n",username);
    printf("%s\n",password);
    while(fread(&l,sizeof(l),1,log))
        {
             printf("%s",l.username);
             printf("%s",l.password);
        if(strcmp(username,l.username)==0 && strcmp(password,l.password)==0)

            {
                printf("\nSuccessful Login\n");
				menu();
            }
        else
            {
                printf("\nsuccessful login");
				menu();
            }
        }

    fclose(log);

    return;
}

void registration(void)
{
    char firstname[15];
    FILE *log;

    log=fopen("login.dat","a+");
    if (log == NULL)
    {
        fputs("Error at opening File!", stderr);
        exit(1);
    }


    struct login l;

    printf("\n\t\t\tWelcome to college generator. We need to enter some details for registration.\n\n");
    printf("\n\t\t\tEnter First Name:\n");
    scanf("%c",l.fname);
    printf("\n\t\t\tEnter Surname:\n");
    scanf("%s",l.lname);

    printf("\t\t\tThank you.\nNow please choose a username and password as credentials for system login.\n");

    printf("\n\t\t\tEnter Username:\n");
    scanf("%s",l.username);
    printf("\n\t\t\tEnter Password:\n");
    scanf("%s",l.password);


    fwrite(&l,sizeof(l),1,log);
    fclose(log);

    printf("\nConfirming details...\n...\nWelcome, %s!\n\n",firstname);
    printf("\nRegistration Successful!\n");
    printf("Press any key to continue...");
        getchar();
    system("CLS");
    login();
}
void choosecollegebased(){
	int choose;
	printf("\n\t\t\tenter 1'for nation wide \n\t\t\tand 2 for state wide\n");
	scanf("%d",&choose);
	if(choose==1)
	nationwise();
    else if(choose==2)
		statewise();
	else
		printf("Invalid input");

}
void nationwise(){
    int option;
    system("cls");

	printf("\n\t\t\tWHICH BRANCH SCORES DO YOU WANT?\n");
	printf("\n1.CSE\n2.ECE");
	while(1){
		printf("\t\t\tenter your option\n");
		scanf("%d",&option);
		switch(option){
			case 1:nationcse();break;
            case 2:nationece();break;

            default:printf("\n\t\t\tinvalid input please enter valid input");


		}


	}


}
void statewise(){
    int option;
	printf("\n\t\t\tWHICH BRANCH SCORES DO YOU WANT\n");
	printf("\n\t\t\t1.CSE\n2.ECE\n");
	while(1){
		printf("\t\t\tenter your option");
		scanf("%d",&option);
		switch(option){
			case 1:statecse();break;
			case 2:stateece();break;

			default:printf("\n\t\t\tinvalid input please enter valid input");


		}

	}
}
void nationcse(){
    int back,rank;
	printf("\n\t\t\tenter your rank\n");
	scanf("%d",&rank);
	if(rank<1350){
	printf("\n\t\t\tthe college you got based on your score is nit tiruchi");

	printf("\n\t\t\tenter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("\n\t\t\tenter correct input");
	 scanf("%d",&back);
	 menu();
	 }
	}
	else if(rank>1350&&rank<3560){
	  printf("\n\t\t\tthe college you got based on your score is nit warangal");
	  printf("\n\t\t\tenter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("\n\t\t\tenter correct input");
	 scanf("%d",&back);
	 menu();
	 }}
	  else if(rank>3560&&rank<4115){
	  printf("\n\t\t\tthe college you got based on your score is nit rourkela");
	  printf("\n\t\t\tenter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("\n\t\t\tenter correct input");
	 scanf("%d",&back);
	 menu();
	 }}
	  else if(rank>4115&&rank<4200){
	  printf("\n\t\t\tthe college you got based on your score is nit allahabad");
	  printf("\n\t\t\tenter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("\n\t\t\tenter correct input");
	 scanf("%d",&back);
	 menu();
	 }}
	  else if(rank>4200&&rank<4476){
	  printf("\n\t\t\tthe college you got based on your score is nit calicut");
	  printf("\n\t\t\tenter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("\n\t\t\tenter correct input");
	 scanf("%d",&back);
	 menu();
	 }}
	  else if(rank>4589&&rank<5102){
	   printf("\n\t\t\tthe college you got based on your score is nit jaipur");
	   printf("\n\t\t\tenter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("\n\t\tenter correct input");
	 scanf("%d",&back);
	 menu();
	 }}
	   else if(rank>5102&&rank<5301){
	   printf("\n\t\t\tthe college you got based on your score is vnit nagpur ");
	   printf("\n\t\t\tenter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("\n\t\t\tenter correct input");
	 scanf("%d",&back);
	 menu();
	 }}
	   else if(rank>5301&&rank<6102){
	   printf("\n\t\t\tthe college you got based on your score is nit delhi");
	   printf("\n\t\t\tenter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("\n\t\t\tenter correct input");
	 scanf("%d",&back);
	 menu();
	 }



	   }
	   else if(rank>6102&&rank<7105){
	   printf("\n\t\t\tthe college you got based on your score is nit bhopal");
	   printf("\n\t\t\tenter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("\n\t\t\tenter correct input");
	 scanf("%d",&back);
	 menu();
	 }}
	   else if(rank>7105&&rank<8321){
	   printf("\n\t\t\tthe college you got based on your score is nit durgapur");
	   printf("\n\t\t\tenter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("\n\t\t\tenter correct input");
	 scanf("%d",&back);
	 menu();
	 }}
	   else if(rank>8321&&rank<8999){
	   printf("\n\t\t\tthe college you got based on your score is nit jamshedpur");
	   printf("\n\t\t\tenter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("enter correct input");
	 scanf("%d",&back);
	 menu();
	 }}
       else if(rank>8999&&rank<9201){
       printf("the college you got based on your score is nit jalandar");
	   printf("enter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("enter correct input");
	 scanf("%d",&back);
	 menu();
	 }}
       else if(rank>9201&&rank<10002){
       printf("the college you got based on your score is nit hamirpur");
	   printf("enter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("enter correct input");
	 scanf("%d",&back);
	 menu();
	 }}
       else if(rank>10002&&rank<10056){
        printf("the college you got based on your score is nit puducherry");
		printf("enter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("enter correct input");
	 scanf("%d",&back);
	 menu();
	 }}



















}
void nationece(){
    int back,rank;
	printf("\n\t\t\tenter your rank");
	scanf("%d",&rank);
	if(rank<2366){
	printf("\n\t\t\tthe college get based on your sore is nit tiruchi");
	printf("\n\t\t\tenter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("\n\t\t\tenter correct input");
	 scanf("%d",&back);
	 menu();
	 }
	}
	else if(rank>2366&&rank>3078){
	  printf("\n\t\t\the college you got based on your score is nit warangal");
	  printf("\n\t\t\tenter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("\n\t\t\tenter correct input");
	 scanf("%d",&back);
	 menu();
	 }}
	  else if(rank>3078&&rank<4115){
	  printf("\n\t\t\tthe college you got based on your score is nit rourkela");
	  printf("\n\t\t\tenter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("\n\t\t\tenter correct input");
	 scanf("%d",&back);
	 menu();
	 }}
	  else if(rank>4115&&rank<4317){
	  printf("\n\t\tthe college you got based on your score is nit allahabad");
	  printf("\n\t\tenter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("\n\t\tenter correct input");
	 scanf("%d",&back);
	 menu();
	 }}
	  else if(rank>4317&&rank<4609){
	  printf("\n\t\tthe college you got based on your score is nit calicut");
	  printf("\n\t\tenter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("\n\t\tenter correct input");
	 scanf("%d",&back);
	 menu();
	 }}
	  else if(rank>4609&&rank<5782){
	   printf("\n\t\tthe college you got based on your score is nit jaipur");
	   printf("\n\t\tenter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("enter correct input");
	 scanf("%d",&back);
	 menu();
	 }}
	   else if(rank>5782&&rank<6110){
	   printf("the college you got based on your score is vnit nagpur ");
	   printf("enter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("enter correct input");
	 scanf("%d",&back);
	 menu();
	 }}
	   else if(rank>6110&&rank<6765){
	   printf("the college you got based on your score is nit delhi");
	   printf("enter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("enter correct input");
	 scanf("%d",&back);
	 menu();
	 }}
	   else if(rank>6102&&rank<6897){
	   printf("the college you got based on your score is nit bhopal");
	   printf("enter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("enter correct input");
	 scanf("%d",&back);
	 menu();
	 }}
	   else if(rank>6897&&rank<7345){
	   printf("the college you got based on your score is nit durgapur");
	   printf("enter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("enter correct input");
	 scanf("%d",&back);
	 menu();
	 }}
	   else if(rank>7345&&rank<9012){
	   printf("the college you got based on your score is nit jamshedpur");
	   printf("enter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("enter correct input");
	 scanf("%d",&back);
	 menu();
	 }}
       else if(rank>9012&&rank<9456){
       printf("the college you got based on your score is nit jalandar");
	   printf("enter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("enter correct input");
	 scanf("%d",&back);
	 menu();
	 }}
       else if(rank>9456&&rank<10012){
       printf("the college you got based on your score is nit hamirpur");
	   printf("enter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("enter correct input");
	 scanf("%d",&back);
	 menu();
	 }}
       else if(rank>10012&&rank<11234){
        printf("the college you got based on your score is nit puducherry");
		printf("enter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("enter correct input");
	 scanf("%d",&back);
	 menu();
	 }}

}





void statecse(){
int rank,back;
	printf("enter your rank");
	scanf("%d",&rank);
	if(rank<20000){
	printf("\n\t\tthe college get based on your score is CBIT");
	printf("\n\t\tenter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("enter correct input");
	 scanf("%d",&back);
	 menu();
	 }
	}
	else if(rank>20000&&rank>35000){
	  printf("\n\t\tthe college you got based on your score is vasavi ccollege of engineering");
	  printf("\n\t\tenter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("\n\t\tenter correct input");
	 scanf("%d",&back);
	 menu();
	 }}
	  else if(rank>36785){
	  printf("\n\t\tthe college you got based on your score is vnr vignan jyothi");
	  printf("\n\t\tenter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("\n\t\tenter correct input");
	 scanf("%d",&back);
	 menu();
	 }}
	  else if(rank>50000){
	  printf("\n\t\the college you got based on your score is mgit");
	  printf("\n\t\tenter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("\n\tenter correct input");
	 scanf("%d",&back);
	 menu();
	 }}
	  else if(rank>45000){
	  printf("\n\t\tthe college you got based on your score is mvsr");
	  printf("\n\t\tenter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("\n\t\tenter correct input");
	 scanf("%d",&back);
	 menu();
	 }}





}
void stateece(){
    int back,rank;
	printf("\n\t\tenter your rank");
	scanf("%d",&rank);
	if(rank<20000){
	printf("\n\t\tthe college get based on your sore is CBIT");
	printf("\n\t\tenter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("\n\t\tenter correct input");
	 scanf("%d",&back);
	 menu();
	 }
	}
	else if(rank>20000&&rank>35000){
	  printf("\n\t\tthe college you got based on your score is vasavi college of engineering");
	  printf("\n\t\tenter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("\n\t\tenter correct input");
	 scanf("%d",&back);
	 menu();
	 }}
	  else if(rank>36785){
	  printf("\n\t\the college you got based on your score is vnr vignan jyothi");
	  printf("\n\t\tenter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("\n\t\tenter correct input");
	 scanf("%d",&back);
	 menu();
	 }}
	  else if(rank>50000){
	  printf("the college you got based on your score is mgit");
	  printf("enter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("enter correct input");
	 scanf("%d",&back);
	 menu();
	 }}
	  else if(rank>45000){
	  printf("the college you got based on your score is mvsr");
	  printf("enter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("enter correct input");
	 scanf("%d",&back);
	 menu();
	 }}





}

void statenirf(){
    int back;
	FILE *fp;
	char s;
	fp=fopen("nirfstate.txt","r");
	while((s=fgetc(fp))!=EOF){
		printf("%c",s);
	}
	printf("enter 1 for menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("enter correct input");
	 scanf("%d",&back);
	 menu();

	 }

}
void nationnirf(){
    int back;
	FILE *fp;
	char s;
	fp=fopen("nirfnation.txt","r");
	while((s=fgetc(fp))!=EOF){
		printf("%c",s);

	}
	printf("enter 1 for to go back to menu");
	scanf("%d",&back);
	if(back==1)
	 menu();
	 else{
	 printf("enter correct input");
	 scanf("%d",&back);
	 menu();
	 }

}
void feedback(){
    int back;
	printf("enter name\n");
	gets(name);
	printf("enter phone number\n");
	scanf("%ld",&no);
	printf("enter your message\n");
	gets(message);
	printf("record has been successfully added\n");
	 printf("enter number 1 to go menu\n");
	 scanf("%d",&back);
	 if(back==1)
	 menu();








	}






void updatecollegestate(){
    int no;
    char a[100];
    char ans;
	int back;
while(1)
{
printf("\n\t\tEnter college details\n");
printf("\n\t\t\enter rank:");
scanf("%d",&no);
getchar();
printf("\n\t\tenter college name");
gets(a);


printf("\n\t\tRecord has been added successfully");




break;
}
printf("press 1 for back");
scanf("%d",&back);
if(back==1)
menu();






}
void updatecollegenation(){
    int no;
    char a[100];
    char ans;
	int back;
while(1)
{
printf("\n\t\t\tEnter college details\n");
printf("\n\t\t\tenter rank:");
scanf("%d",&no);
getchar();
printf("enter college name");
gets(a);


printf("\nRecord has been added successfully");


break;
}
printf("press 1 for back");
scanf("%d",&back);
if(back==1)
menude();


}




