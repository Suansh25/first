#include<stdio.h>
struct book{
    char title[30];
    int pages;
    char author[30];
    int price;
};
int main(){
    struct book b1;
    printf("\nenter title,pages,author,price\n");
    scanf("%s %d %s %d",b1.title,&b1.pages,b1.author,&b1.price);
    printf("%s %d %s $%d",b1.title,b1.pages,b1.author,b1.price);
    
    return 0;
}
