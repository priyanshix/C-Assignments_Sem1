#include <stdio.h>

int main()
{
    char operator;
    float fNum,sNum;
    printf("Enter An Operator(+,-,*,/):");
    scanf("%c",&operator);
    printf("Enter Two Operands:");
    scanf("%f %f",&fNum,&sNum);
    switch(operator)
    {
        case '+':
        printf("%f+%f=%f",fNum,sNum,fNum+sNum);
        break;
        case '-':
        printf("%f+%f=%f",fNum,sNum,fNum-sNum);
        break;
        case '*':
        printf("%f+%f=%f",fNum,sNum,fNum*sNum);
        break;
        case '/':
        printf("%f+%f=%f",fNum,sNum,fNum/sNum);
        break;
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int a;
    char d;
    printf("Enter A No.=",a);
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        printf("January");
        break;
        case 2:
        printf("February");
        break;
        case 3:
        printf("March");
        break;
        case 4:
        printf("April");
        break;
        case 5:
        printf("May");
        break;
        case 6:
        printf("June");
        break;
        case 7:
        printf("July");
        break;
        case 8:
        printf("August");
        break;
        case 9:
        printf("September");
        break;
        case 10:
        printf("October");
        break;
        case 11:
        printf("November");
        break;
        case 12:
        printf("December");
        break;
        
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int a[10],i,num;
    printf("Enter A No.=",num);
    scanf("%d",&num);
    for (i=0;num>0;i++)
    {
        a[i]=num%2;
        num=num/2;
    }
    printf("binary no.=",num);
  
   
    return 0;
}
