#include<stdio.h>

int main()
{
    int salary, experience;
    printf("Enter your salary");
    scanf("%d",&salary);
    printf("Enter work experience");
    scanf("%d",& experience);
    if(salary>40000&&experience>2){
    printf("eligible for loan");
    }
    else{
    printf("not eligible for loan");
    }
    return 0;
}