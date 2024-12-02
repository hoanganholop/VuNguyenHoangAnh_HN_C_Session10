#include<stdio.h>

int main() {
	int arr[] = { 10,20,30,40,50,60,70,80 };
	int n=sizeof(arr)/sizeof(arr[0]);
	int number, found = 0;
	printf("Nhap phan tu la so nguyen bat ky:");
	scanf_s("%d", &number);

	for (int i = 0; i < n;i++) {
		if (arr[i] == number) {
			printf("Phan tu %d o vi tri %d", number, i);
			found = 1;
		}
	}
	if (!found) {
		printf("Phan tu khong ton tai trong mang");
	}
	return 0;
}