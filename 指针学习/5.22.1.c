//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>

//void Init(int* arr, int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		arr[i] = 0;	
//	}
//}
//
//void Print(int* arr, int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d\n", arr[i]);
//	}
//}
//void Reverse(int* arr, int sz) {
//	int left = 0;
//	int right = sz - 1;
//	while (left < right) {
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr, sz);
//	Print(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//
//	return 0;
//}

//void Print(int* arr, int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main(){
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	Print(arr1, sz);
//	Print(arr2, sz);
//
//	for (int i = 0; i < sz; i++) {
//		int temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//	Print(arr1, sz);
//	Print(arr2, sz);
//}