#include <stdio.h>

int main()
{
    int i = 1;
    switch(i)
    {
        case i:  
        printf("case 1 executed");
        break;
        case i + 1:
        printf("case 2 executed");
        break;
        default:
        printf("default block executed");
        break;
    }
 return 0;
}
/*q.2*/
#include <stdio.h>

int main()
{
    int a;
    printf("Enter a no.:",a);
    scanf("%d",&a);
    if (a%5==0 && a%7==0)
    printf("%d is divisible by 5 and 7",a);
    else
    printf("%d is not divisible by 5 and 7",a);

    return 0;
}
/*q.3*/
#include <stdio.h>

int main()
{
    int i;
    for(i>0;i<=90;i+=15)
    {
        printf("\n %d",i);
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int a,b,c,d,e;
    printf("a=",a);
    scanf("%d",&a);
    printf("b=",b);
    scanf("%d",&b);
    printf("c=",c);
    scanf("%d",&c);
    printf("d=",d);
    scanf("%d",&d);
    printf("e=",e);
    scanf("%d",&e);
    if (a>b && a>c && a>d && a>e)
    printf("%d is largest no.",a);
    else if (b>c && b>d && b>e)
    printf("%d is largest no.",b);
    else if (c>d && c>e)
    printf("%d is largest no.",c);
    else if(d>e)
    printf("%d is largest no.",d);
    else
     printf("%d is largest no.",e);
     
     
    
    return 0;
}

