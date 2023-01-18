
#include<stdio.h>
void fibo(int n);
int main(){
    int c;
   int n;
   printf("enter a positive no.");
    scanf("%d",&n);
    fibo(n);
    //printf("%d",c);
}
void fibo(int n){
   
    
    int t=0;
    int y=1;
    int nt=0;
//printf("the fibonacci series is %d,%d,",t,y);
    while(nt<=n){
        printf("%d ",nt);
        t=y;
        y=nt;
        nt=t+y;}
    }
