#include<stdio.h>
#include<stdlib.h>

int mainn()
{

    int N;
    float r,t=0;

    printf("kac parelel direnc var;");
    scanf("%d",&N);



    for (int i=0;i<N;i++)

    {
        printf("\n %d ninci direnc:",i);
        scanf("%f",&r);
        r=1/r;
        t+=r;

    }

    t=1/t;
    printf("sonuc:%f",t);
    return 0;





}
