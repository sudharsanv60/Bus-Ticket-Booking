#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
//IS DONE BY MADHAN,SUDHARSON...........!
char mail[100];
char check_password[100];
int booked=0;
int total_seat=0;
int seatNum;
#define MAX_SEATS 21

int seats[MAX_SEATS];  // 0 for available, 1 for booked

char choice[50];
int fare;
int ac=500;
int non_ac=300;
int sleeper_coach=400;

struct person{
    char name[100];
    char email[100];
    char p_num[100];
    char password[100];
}p;
char dt(){

time_t current_time;
time(&current_time);
struct tm*local=localtime(&current_time);
printf("%s",asctime(local));
}

void cancel(){
    char reason[100];
    int new_fare;
    printf("enter the reason:");
    fgets(reason,sizeof(reason),stdin);
    scanf("%s",&reason);

    int seatNum;
    printf("Enter seat number to cancel (1-21): " );
    scanf("%d", &seatNum);

    if (seatNum < 1 || seatNum > MAX_SEATS) {
        printf("Invalid seat number!\n");
        return;
    }

    if (!seats[seatNum - 1]) {
        printf("Seat %d is already available (not booked).\n", seatNum);
    } else {
        seats[seatNum - 1] = 0;
        printf("Seat %d cancellation successful.\n", seatNum);
          if(strcmp(choice,"ac")==0){
               new_fare=fare-ac;
            printf("the ticket fair is:%d\n",new_fare);

   printf("*********************************************************\n");
   printf("* \t\t\tRECEIPT                         *\n");
   printf("*********************************************************\n");
   printf("Time & Date:                                            *\n");
   dt();
   printf("*********************************************************\n");
   printf("* BUS TYPES     TICKET PRICE       TOTAL PRICE          *\n");
   printf("* %s                 %d              %d              *\n",choice,ac,new_fare);
   printf("* GST AMOUNT:        180              180               *\n");
   printf("*********************************************************\n");
   int final_price;
   final_price=180+fare;
   printf("* FINAL BILL AMOUNT IS:      %d                       *\n",final_price);
   printf("*********************************************************\n");

    }else if(strcmp(choice,"non_ac")==0){
            new_fare=fare-non_ac;
            printf("the ticket fair is:%d\n",new_fare);
   printf("*********************************************************\n");
   printf("* \t\t\tRECEIPT                         *\n");
   printf("*********************************************************\n");
   printf("Time & Date:                                            *\n");
   dt();
   printf("*********************************************************\n");
   printf("* BUS TYPES     TICKET PRICE       TOTAL PRICE          *\n");
   printf("* %s             %d             %d               *\n",choice,non_ac,new_fare);
   printf("* GST AMOUNT:        180              180               *\n");
   printf("*********************************************************\n");
   int final_price;
   final_price=180+fare;
   printf("* FINAL BILL AMOUNT IS:      %d                       *\n",final_price);
   printf("*********************************************************\n");

   } else if(strcmp(choice,"sleeper_coach")==0){
            new_fare=fare-sleeper_coach;
            printf("the ticket fair is:%d\n",new_fare);
   printf("*********************************************************\n");
   printf("* \t\t\tRECEIPT                         *\n");
   printf("*********************************************************\n");
   printf("Time & Date:                                            *\n");
   dt();
   printf("*********************************************************\n");
   printf("* BUS TYPES       TICKET PRICE       TOTAL PRICE        *\n");
   printf("* %s       %d              %d             *\n",choice,sleeper_coach,new_fare);
   printf("* GST AMOUNT:         180                180            *\n");
   printf("*********************************************************\n");
   int final_price;
   final_price=180+fare;
   printf("* FINAL BILL AMOUNT IS:      %d                       *\n",final_price);
   printf("*********************************************************\n");


   }else{
            printf("    ");
}
    }
}

void bus_status(){
    printf("\nbus present in salem new bus stand...!");
}


void ticket_booking(){

    char from[100];
    char to[100];
    char choice[50];
    int ac=500;
    int non_ac=300;
    int sleeper_coach=400;
    int total_number_seats;
    int fare;
    char bus[100];
    char date[10];
    char time[20];
    printf("enter the from address:\n");
    scanf("%s",&from);
    printf("enter the to address:\n");
    scanf("%s",&to);
    printf("bus available are:\n");
    printf("sri mathi\nsetc bus\nragul_dragon bus\n");
    printf("enter the bus you want:");
    scanf("%s",&bus);
    printf("\n\n\tBUS BLUE PRINT...\n");
    printf("  ╭--------╮\n");
    printf("  |      □ |\n");
    printf("  | -------|\n");
    printf(" 1| □  □ □ | 2  3\n");
    printf(" 4| □  □ □ | 5  6\n");
    printf(" 7| □  □ □ | 8  9\n");
    printf("10| □  □ □ |11 12\n");
    printf("13| □  □ □ |14 15\n");
    printf("16| □  □ □ |17 18\n");
    printf("19| □  □ □ |20 21\n");
    printf("  ╰--------╯\n");
    label:

    printf("\n--- Seat Availability ---\n");
    for (int i = 0; i < MAX_SEATS; i++) {
        printf("Seat %2d: %s\n", i + 1, seats[i] ? "Booked" : "Available");
    }


    printf("Enter seat number to book (1-21): ");
    scanf("%d", &seatNum);


    if (seatNum < 1 || seatNum > MAX_SEATS) {
        printf("Invalid seat number!\n");
        return;
    }

    if (seats[seatNum - 1]) {                   //convert into index number so seatnum-1
        printf("Seat %d is already booked.\n", seatNum);
    } else {
        seats[seatNum - 1] = 1;
        booked=1;

        printf("Seat %d booked successfully!\n", seatNum);

    }if(booked){
        total_seat++;
        printf("total no.of seats booking:%d\n",total_seat);
        fare=ac*total_seat;
        printf("total ticket price is:%d\n",fare);

   }else{
        total_seat--;
        printf("total no.of seats booking:%d\n",total_seat);

   }


   printf("BUS DETAILS ARE GIVEN BELOW\n");
    printf("select the type which you want:\n");
    printf("TYPES:ac or non_ac or sleeper_coach\n");
    scanf("%s",choice);

    printf("Enter the date:\n");
    scanf("%s",&date);
    printf("Enter the time:\n");
    printf("7.00\n11.00\n14.00\n21.00");
    scanf("%s",&time);

    dt();

    if(strcmp(choice,"ac")==0){
            fare=total_seat*ac;
            printf("the ticket fair is:%d\n",fare);

   printf("*********************************************************\n");
   printf("* \t\t\tRECEIPT                         *\n");
   printf("*********************************************************\n");
   printf("Time & Date:                                            *\n");
   dt();
   printf("*********************************************************\n");
   printf("* BUS TYPES     TICKET PRICE       TOTAL PRICE          *\n");
   printf("* %s                 %d              %d              *\n",choice,ac,fare);
   printf("* GST AMOUNT:        180              180               *\n");
   printf("*********************************************************\n");
   int final_price;
   final_price=180+fare;
   printf("* FINAL BILL AMOUNT IS:      %d                       *\n",final_price);
   printf("*********************************************************\n");

    }else if(strcmp(choice,"non_ac")==0){
            fare=total_seat*non_ac;
            printf("the ticket fair is:%d\n",fare);
   printf("*********************************************************\n");
   printf("* \t\t\tRECEIPT                         *\n");
   printf("*********************************************************\n");
   printf("Time & Date:                                            *\n");
   dt();
   printf("*********************************************************\n");
   printf("* BUS TYPES     TICKET PRICE       TOTAL PRICE          *\n");
   printf("* %s             %d             %d               *\n",choice,ac,fare);
   printf("* GST AMOUNT:        180              180               *\n");
   printf("*********************************************************\n");
   int final_price;
   final_price=180+fare;
   printf("* FINAL BILL AMOUNT IS:      %d                       *\n",final_price);
   printf("*********************************************************\n");

   } else if(strcmp(choice,"sleeper_coach")==0){
            fare=total_seat*sleeper_coach;
            printf("the ticket fair is:%d\n",fare);
   printf("*********************************************************\n");
   printf("* \t\t\tRECEIPT                         *\n");
   printf("*********************************************************\n");
   printf("Time & Date:                                            *\n");
   dt();
   printf("*********************************************************\n");
   printf("* BUS TYPES       TICKET PRICE       TOTAL PRICE        *\n");
   printf("* %s       %d              %d             *\n",choice,ac,fare);
   printf("* GST AMOUNT:         180                180            *\n");
   printf("*********************************************************\n");
   int final_price;
   final_price=180+fare;
   printf("* FINAL BILL AMOUNT IS:      %d                       *\n",final_price);
   printf("*********************************************************\n");


   }else{
            printf("enter the correct bus types\n");
}


char input,sec_input;
int option;
start:
printf("enter the option(y/n):");
scanf("% c",&input);
sec_input=input;
if(sec_input==input){

    printf("1.ticket booking\n");
    printf("2.cancel booking\n");
    printf("3.checking bus status\n");
    printf("0.exits\n");

   printf("enter the option:\n");
   scanf("%d",&option);
   switch(option){
   case 1:
         goto label;
         break;
   case 2:
         cancel();
         break;
   case 3:
         bus_status();
         break;
   case 0:
        printf("exist");
        break;
goto start;

}
}else{
printf("exist");
}
}



void new_page(){
int option;
start:
    printf("1.ticket booking\n");
    printf("2.cancel booking\n");
    printf("3.checking bus status\n");
    printf("0.exits\n");

   printf("enter the option:\n");
   scanf("%d",&option);
   switch(option){
   case 1:
        ticket_booking();
         break;
   case 2:
         cancel();
         break;
   case 3:
         bus_status();
         break;
   case 0:
        printf("exist");
        break;
goto start;
   }
}

void login(){
    printf("Enter the Email:\n");
    scanf("%s",&mail);
    printf("Enter the password:\n");
    scanf("%s",&check_password);
    new_page();

}
void sign_up(){
   FILE*ptr;

   printf("Enter the Name:\n");
    scanf("%s",&p.name);
    printf("Enter the Email:\n");
    scanf("%s",&p.email);
    printf("Enter the Phone Number:\n");
    scanf("%s",&p.p_num);
    printf("Enter the password:\n");
    scanf("%s",&p.password);
    printf("Welcome to login\n");
    ptr=fopen("demo.txt","w");
    fprintf(ptr,p.name);
    fprintf(ptr,"\n");
    fprintf(ptr,p.email);
    fprintf(ptr,"\n");
    fprintf(ptr,p.p_num);
    fprintf(ptr,"\n");
    fprintf(ptr,p.password);
    fprintf(ptr,"\n");;
    fclose(ptr);


    login();
    if((strcmp(mail,p.email))==0 && (strcmp(check_password,p.password)==0)){
            new_page();

    }else{
        printf("invaild password or email...!");

}
}



int main(){
    printf("\n\n\t\twelcom to ticket booking \n\n\n");
    system("chcp 65001");
    int opt;
    printf("1.login\n");
    printf("2.sign up\n");
    printf("Enter the option\n");
    scanf("%d",&opt);
    switch(opt){
    case 1:
        login();
        break;
    case 2:
        sign_up();
        break;
    default:
        printf("Entre the is wrong\n ");
    }

}



