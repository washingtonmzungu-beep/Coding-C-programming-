#include<stdio.h>

int main()
{
    int salary;
    int experience;
    printf("Enter your salary");
    scanf("%d",&salary);
    printf("Do you have experience for more than 2years?");
    scanf("%d",& experience);
    if(salary>40000 &&experience>2){
    printf("eligible for loan");
    }
    else{
    printf("not eligible for loan");
    }
    return 0;
}