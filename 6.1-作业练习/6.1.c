#include<stdio.h>

/*调整数组，使奇数放于偶数前面*/
void arr_adjust(int*arr,int sz) {
	int left = 0;
	int right = sz-1;

	int i = 0;
	while (left<right)
	{
		while ((left<right) && arr[left] % 2 == 1)
		{
			left++;
		}
		while ((left < right) && arr[right] % 2 == 0) {
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}

}
int main() {

	int arr[] = { 5,10,18,14,16,15,4,7,3 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	arr_adjust(arr,sz);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}