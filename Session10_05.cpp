#include <stdio.h>

int main() {
    int arr[] = {12, 5, 8, 1, 20, 15, 3, 7, 10};
    int n = sizeof(arr) / sizeof(arr[0]); 

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int target;
    printf("Nhap vao so nguyen can tim: ");
    scanf("%d", &target);
    int start = 0, end = n - 1;
    int found = -1; 
    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == target) {
            found = mid;
            break;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    if (found != -1) {
        printf("Phan tu can tim o vi tri: %d\n", found);
    } else {
        printf("Khong tim thay phan tu trong mang.\n", target);
    }

    return 0;
}

