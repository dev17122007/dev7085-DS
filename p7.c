#include<stdio.h>

void main()
{
    int a[10],largest, i;

    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < 5; i++)
        a[i] = a[i] + 10;

    printf("Array after adding 10:\n");
    for(i = 0; i < 5; i++)
        printf("%d ", a[i]);


    largest=a[0];

    for(i=1;i<9;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
    }
    printf("largest value is %d", largest);

    getch();
}
