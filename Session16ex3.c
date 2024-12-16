#include<stdio.h>

int tong(int *a, int *b, int *result){

    *result = *a + *b;
}
int main(){
    int a = 10;
    int b = 17;
    int end;
    tong(&a, &b, &end);
    printf("Tong cua 2 so la %d",end);

    return 0;
}