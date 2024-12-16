#include<stdio.h>

void search(int *arr, int size, int value){
    int count = 0;
    for(int i = 0;i<size;i++){
        if(*(arr+i) == value){
            count++;
        }
    }
     if(count ==0){
        printf("Phan tu khong ton tai trong mang ");
    }else{
        printf("Phan tu %d ton tai o trong mang ", value);
    }
}

int main(){

    int arr[]={1,2,3,5,6,8};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int value = 8;
    search(arr,size,value);
    return 0;
}