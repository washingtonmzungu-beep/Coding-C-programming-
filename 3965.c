#include<stdio.h>

int main()
{
int pin,enteredpin,choice;
float balance,deposit, withdraw;
pin=3456;
printf("Welcome to an atm machine\nchoose an option\n");
printf("Enter your 4-digit PIN:");
scanf("%d",& enteredpin);
if(enteredpin!=pin)
{
printf("Incorrect pin!\n Access denied\n");
return 0; 
}
do{
printf("1.check balance\n2.deposit money\n3.withdraw money\n4.exit\n");
printf("Enter your choice");
scanf("%d",&choice);
switch (choice){
case1:
if(balance=deposit-withdraw){
printf("check balance:%d",balance);
}
else{
printf("insufficient funds");
}
break;
case2:
printf("Enter amount to deposit: ksh\n");
scanf("%f",& deposit);
if(deposit<=balance){
printf("Deposit successful\n");
}
else{
printf("insufficient funds\n");
}
break;
case3:
printf("Enter amount to withdraw:ksh\n");
scanf("%f",& withdraw);
if(withdraw<=balance){
printf("withdraw successful\n");
}
else{
printf("insufficient funds\n");
}
break;
case4:
printf("Thanks for using our ATM machine. Goodbye\n");
exit(0);

printf("Invalid choice!please try again");
}
}while(choice!=4);
return 0;
}