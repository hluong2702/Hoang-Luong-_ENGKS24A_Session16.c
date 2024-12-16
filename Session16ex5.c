#include<stdio.h>

void update(int *arr, int size, int index,int value){

            if(index>= size || index <0){
            printf("Khong hop le ");
            return ;
        }
        arr[index] = value;
    
}
void all(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Gia tri ac phan tu trong mang arr[%d] = %d\n",i,*(arr + i)); 
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,8};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int index = 2;
    int value = 27;
    update(arr,size,index,value);
    all(arr,size);

    return 0;
}