/*program to find L.C.M of two numbers*/
#include<stdio.h>
main()
{
    int a,b,l;
    printf("enter 1st number");
    scanf("%d",&a);
    printf("enter 2st number");
    scanf("%d",&b);
    for(l=1;l<=a*b;l++)
        if(l%a==0&&l%b==0)
    {
        break;
    }
    printf("L.C.M of %d And %d is : %d",a,b,l);
}
