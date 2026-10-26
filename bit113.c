#include<stdio.h>
int main()
{
int maize=200,sold=30,day=1;
while(maize>0){
printf("Day %d: Remaining maize=%dkg",maize,day);
sold-=30;
day++;
}
if (maize<=0){
printf("Day %d:All maize sold",day-1);
}
return 0;
}