 /*program to chack that a no is same on reversing*/
#include<stdio.h>
main()
{
    int x,p,rev=0,t;\
    printf("enter a no to print");
    scanf("%d",&x);
    t=x;
    while(x>0)
    {
        p=x%10;  //it will give the last digit of x as reminder
        rev=rev*10+p;  //it will store the value of p
        x=x/10; // it will give the quotent
    }
    if(t==rev)
        printf("%d is a pallendrone no",t);
    else
        printf("%d is not a pallendrone no",t);
}
