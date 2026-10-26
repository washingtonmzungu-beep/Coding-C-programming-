#include<stdio.h>

int main()
{
    int age,permit;
    printf("Enter your age");
    scanf("%d",&age);
    printf("Goverment permit");
    scanf("%d",& permit);
    if(age>18|| permit){
    printf("eligible to vote");
    }
    else{
    printf("not eligible to vote");
    }
    return 0;
}