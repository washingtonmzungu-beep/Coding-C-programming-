#include<stdio.h>

int main()
{
int account_number;
int pin;
int attempt=3
int authenticated;
printf("welcome to tha ATM machine!\n");
printf("Enter your account number: %d", account number);
printf("Enter your pin:%d",pin);
if(account number==account.account number&&check pin(account,pin)){
authenticated=1;
}else{
printf("Invalid account number or pin. please try again.\n"):
attempts++
}
while{
printf("choose an option:\n");
printf("1.check balance\n");
printf("2.Deposit money\n");
printf("3.withdraw money\n");
printf("Exit\n");
scanf("%d",&choice);
switch(choice){
case1:
display balance(account);
break;
case2;
printf("Enter the amount to deposit:");
scanf("%f",&amount);
deposit(& account, amount);
break;
case3:
printf("Enter the amount to withdraw:%f", amount);
withdraw (& account, amount);
break;
printf("Thanks for using the ATM machine!\n");
return0;
default:
printf("Invalid choice.please choose a valid option.\n");
}
else{
printf("Account locked due to multiple failed log in attempts.\n");
}
 return 0;
}