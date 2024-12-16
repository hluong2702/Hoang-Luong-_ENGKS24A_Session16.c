#include<stdio.h>

void bubbleSort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {         
        for (int j = 0; j < size - i - 1; j++) {  
            if (*(arr + j) > *(arr + j + 1)) { 
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void all(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Gia tri ac phan tu trong mang arr[%d] = %d\n",i,*(arr + i)); 
    }
}

int main(){
    int arr[] = {9, 8, 6, 27,3,2};  
    int size = sizeof(arr) / sizeof(arr[0]); 
    bubbleSort(arr, size);
    all(arr, size); 

    return 0;
}
