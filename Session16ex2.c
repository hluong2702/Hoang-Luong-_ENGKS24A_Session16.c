#include<stdio.h>

void swap(int *x ,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y = temp;
}
int main(){
    int a =5;
    int b =15;
    swap(&a,&b);
    printf("Gia tri cua a : %d\n",a);
    printf("Gia tri cua b : %d\n",b);
    return 0;
}