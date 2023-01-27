#include<stdio.h>
    struct num{
        int n1;
        int n2;
    }t1;
    struct den{
        int d1;
        int d2;
    }t2;
    void main(){
        printf("enter the numerator values\n");
        scanf("%d %d",&t1.n1,&t1.n2);
        printf("enter the values of denominator\n");
        scanf("%d %d",&t2.d1,&t2.d2);
        printf("the output is %d/%d",(t1.n1*t1.n2),(t2.d1*t2.d2));
        
    }
