#include<stdio.h>

int main()
{
int pin,enteredpin,choice;
float balance,deposit, withdraw;
pin=3456;
printf("Welcome to an atm machine\nchoose an option\n");
printf("1.check balance\n2.deposit money\n3.withdraw money\n4.exit\n");
printf("Enter your choice");
scanf("%d",&choice);
switch (choice){
case1:
printf("Enter your pin\n");
scanf("%d",&pin);
if(enteredpin==pin){
printf("Access granted\n check balance\n");
}
else{
printf("Incorrect PIN\n!Access denied\n");
}
break;
case2:
printf("Enter your pin");
scanf("%d",&pin);
if(entered pin==pin){
printf("Access granted");
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
default;
printf("Invalid choice!please try again");
}
}
return 0;
}