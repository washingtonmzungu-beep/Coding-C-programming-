#include<stdio.h>
#include<string.h>
int main()
{
 char u[3965]="Washingtonmzungu@gmail.com",p[3965]="2020";
 char u1[3965],p1[3965];
 printf("Enter your username\n");
 scanf("%s",u1);
 printf("Enter your password\n");
 scanf("%s",p1);
 if(strcmp(u,u1)==0&&strcmp(p,p1)==0)
 {
 printf("login successful");
 }
 else{
 printf("login unsuccessful");
 }
return 0;
}