#include<stdio.h>
void all(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Gia tri ac phan tu trong mang arr[%d] = %d\n",i,*(arr + i)); 
    }
}
int main(){
    int arr[]={2,4,6,8};
    int size = sizeof(arr)/ sizeof(arr[0]);
    all(arr,size);
    return 0;
}
