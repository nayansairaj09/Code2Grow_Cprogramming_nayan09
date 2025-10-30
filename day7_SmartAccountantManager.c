#include<stdio.h>
int main()
{
    int choice;
    float balance=10000.00;
    float amount,bonus;
    do{//using do loop untill the customer exit
      printf("1.DEPOSIT MONEY :\n");
      printf("2.WITHDRAW MONEY :\n");
      printf("3.CHECK BALANCE :\n");
      printf("4.EXIT :\n");
      printf("ENTER VALUE FOR CHOICE: ");
      scanf("%d",&choice); 
      
      if(choice==1) //deposit
     {
        printf("ENTER AMOUNT TO DEPOSIT:");
        scanf("%f",&amount);
        if(amount>25000)
        {
            bonus=amount*1/100; 
        balance+=amount+bonus; // bonus of 1%  
        }
        else
        {
            balance+=amount+bonus;
        }
        balance-=5; // service charge
        printf("service charge $5 appiled\n");
        printf("updated balance is:$%f\n",balance);
        }
        else if(choice==2) // withdraw
        { 
        printf("ENTER AMOUNT TO WITHDRAW: ");
        scanf("%f",&amount);
        if(amount>balance)
        {
            printf("Warning: Insufficient funds.\n");
        }
        else{
            balance-=amount;
            balance-=5;// service charge
            printf("service charge $5 is applied\n");
            printf("updated balance is :$%f\n",balance);
        }
        }
        else if(choice==3)// check bank balance
        {
        printf("your current balance is:$%f\n",balance);
        }
        else if (choice==4)
        {
            printf("THANK YOU VIST AGAIN");
        }
    }
    while(choice!=4);
return 0;

} 
