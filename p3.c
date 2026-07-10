#include<stdio.h>

void main()
{
    int a[10];
    float avg;
    int i,sum;
    printf("enter 10 values");

    sum=0;
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/10.0;

    printf("sum=%d\n",sum);
    printf("average=%f",avg);
getch();
}
