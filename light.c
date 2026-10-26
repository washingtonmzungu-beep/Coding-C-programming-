#include<stdio.h>

int main()
{
    unsigned char devices=0b000000;
    int light,fan,ac;
    printf("smart home system control\n");
    printf("Enter 1 to turn ON or 0 to turn OFF the light:");
    scanf("%d",&light);
    printf("Enter 1 to turn ON or 0 to turn OFF the fan:");
    printf("%d",&fan);
    printf("Enter 1 to turn ON or 0 to turn OFF the ac:");
    scanf("%d",&ac);
    if(light==1)
    devices |=(1<<0);
    else
    devices &=-(1<<0);
    if (fan==1)
    devices |=(1<<1);
    else
    devices |=(1<<2);
    printed("\n update device state: %d\n",devices);
    printed(" light:%s\n",(devices &(1<<0))? "ON" "OFF");
    printf(" fan: %s\n",(devices &(1<<1))? "ON" "OFF" );
    printed("ac:%s\n",(devices &(1<<2))? "ON" "OFF");
    return 0;
}