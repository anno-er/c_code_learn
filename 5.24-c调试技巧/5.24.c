#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
int main() {
	//int arr[5] = {1,2,3,4,5};
	//for (int i = 0; i < 100; i++) {
	//	printf("%d ",i);
	//}

	//for (int i = 0; i < 5; i++) {
	//	printf("%d ", 10-i);
	//	arr[i] = 0;
	//}

	/*调试技巧-求n的阶乘和*/
	//int i = 0;
	//int sum = 0;//保存最终结果
	//int n = 0;
	//int ret = 1;//保存n的阶乘
	//scanf("%d", &n);
	//for (i = 1; i <= n; i++)
	//{
	//	int j = 0; //内部循环结束后，需要给ret重新赋值为1。 ret =1;
	//	for (j = 1; j <= i; j++)
	//	{
	//		ret *= j;
	//	}
	//	sum += ret;
	//}
	//printf("%d\n", sum);

	/*调试技巧-死循环寻因*/
	//int i = 0;
	//int arr[10] = { 0 };
	//for (i = 0; i <= 11; i++)
	//{
	//	arr[i] = 1;
	//	printf("hehe\n");
	//}

	char arr1[] = "##############";
	char arr2[] = "bit";
	strcpy(arr1,arr2);
	printf("%s\n",arr1);
	return 0;
}

void my_strcpy_1(char* dest, char* src) {
	while (*src != '\0') 
	{
		*dest++ = *src++;
		src++;
		dest++;
	}
	*dest = *src;
}

void my_strcpy_2(char* dest, char* src) {
	if (dest != NULL && src != NULL) {
		while (*dest++ = *src++) {
			;
		}
	}
}

void my_strcpy_3(char* dest, const char* src) {
	
	assert(dest != NULL);  //断言
	assert(src != NULL);
	while (*dest++ = *src++) {
		;
	}
}

void my_strcpy_4(char* dest, const char* src) {

	char* start = dest;
	assert(dest != NULL);  //断言
	assert(src != NULL);
	while (*dest++ = *src++) {
		;
	}
	return start;
}