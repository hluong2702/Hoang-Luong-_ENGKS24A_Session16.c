#include <stdio.h> 

    void delete(int *arr, int size, int index){
    if (index < 0 || index >= size) {
        printf("khong hop le.\n");
        return;
    }

    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
}

void all(int *arr, int size) {
    for (int i = 0; i < size-1; i++) {
        printf("Gia tri cac phan tu trong mang arr[%d] = %d\n",i,arr[i]); 
    }
}

int main() {
    int arr[] = {1,2,6,5,8};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int index = 2;
    delete(arr,size, index);
    printf("\nMang sau khi xoa phan tu:\n");
    all(arr, size);

    return 0;
}
