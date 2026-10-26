#include<stdio.h>
int main()
{
int maize=200,sold=30,day=0;
while(maize>0){
++day;

maize-=sold;

}
if (maize<=0){
maize=0;
printf("Day %d\n",day);
printf("maize left =%dkg\n",maize);
printf("all stock sold for: %d days\n",day);

return 0;
}
}