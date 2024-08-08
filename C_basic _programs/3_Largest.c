#include<stdio.h>
#include<conio.h>
int main(){
    clrscr();
    int a,b,c;
    printf("Enter three numbers :");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b){
        if(a>c){
            printf("a is largest %d\n",a);
        }else{
            printf("c is larger %d\n",b);
        }
    }else{
        if(b>c){
            printf("b is larger %d\n",b);
        }else{
            printf("c is larger %d\n",c);
        }
    }
    getch();
    return 0;
}