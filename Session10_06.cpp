#include <stdio.h>

int main() {
    int arr[] = {13,54,9,34,21,67,18,34,26,18,12,5,3,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    printf("Nhap so nguyen can tim: ");
    scanf("%d", &target);
    int arr2[n];  
    int count = 0; 
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            arr2[count] = i; 
            count++;  
        }
    }
    if (count > 0) {
        printf("Phan tu %d tim thay o vi tri: ", target);
        for (int i = 0; i < count; i++) {
            printf("%d ", arr2[i]);
        }
        printf("\n");
    } else {
        printf("Khong tim thay phan tu can tim trong mang.\n");
    }

    return 0;
}

