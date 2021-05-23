//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//
//int main() {

	//int a = 0x0A;
	//printf("%d\n",a);
	//int* pa = &a;
	//char* pc = &a;
	//printf("%p\n%p\n",pa,pc);

	//int arr[10] = {0};
	//int* p = arr;//数组名首元素地址；
	// 	 *****数组名*****
	//&arr取出的是整个数组的地址
	//sizeof(arr)表示郑哥数组的大小

	//int num1, num2;
	//scanf("%d%d",&num1,&num2);

	//int sum = num1 + num2;
	//printf("%d\n",sum);

	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int* p = arr;//arr = &arr[0]
	//for (int i = 0; i < sz; i++) {
	//	printf("%d ", *p++);
	//}

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//printf("%d",& arr[9] - &arr[0]);  //指针减去指针为中间元素的个数

/************二级指针******************/
	//int a = 0;
	//int* pa = &a;

	//int** ppa = &pa;
	//**ppa = 20;

	//printf("%d", **ppa);
	//printf("%d", *pa);


/*指针数组*/
	//int a = 1;
	//int b = 2;
	//int c = 3;
	//int* arr[3] = {&a,&b,&c};
	//int i = 0;
	//for (i = 0; i < 3; i++) {
	//	printf("%d ",*(arr[i]));
	//}


//	char a[] = "abcdefg";  //八个字节，后面有空格
//	char b[] = { 'a','b','c' };  //3个字节
//	printf("%c",a[7]);
//	printf("%c",b[3]); //错误的
//
//	return 0;
//}
