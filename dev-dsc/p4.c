#include<stdio.h>

void main()
    int a[3],b[3],c[3],i;

    printf("Enter a value \n");
    for(i=0;i<4;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<4;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<4;i++){
        int sum= 0;
        sum[i]=a[i]+b[i];
        sum=c[i];
        printf("%d",c[i]);
    }
getch();
}
