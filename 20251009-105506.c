#include<stdio.h>

int main()
{
    int hours;
    printf("Enter the hours");
    scanf("%d",&hours);
    if(hours>=40){
    printf("qualified");
    }
    else{
    printf("not qualified");
    }
    return 0;
}