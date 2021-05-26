#include<stdio.h>

//int main() {
//
//	//char ch = 'w';
//	//char* pc;
//	//pc = &ch;  
//
//
//	char* p = "abcdefg";
//	printf("%c\n",*p);
//	printf("%s\n",p);
//
//	return 0;
//}

//int main() {
	//char arr1[] = "abcdef";
	//char arr2[] = "abcdef";

	//if (arr1 == arr2) //arr1与arr2是首元素的地址
	//{
	//	printf("1");
	//}
	//else
	//	printf("2");

	//const char *p1 = "abcdef";
	//const char *p2 = "abcdef";
	//if (p1 == p2) //p1与p2指向同一个常量字符串；
	//{
	//	printf("1");
	//}
	//else
	//	printf("2");
	//
	//return 0;
//}


/*指针数组与数组指针*/
//指针数组：存放指针的数组
//数组指针：指向数组的指针  --存放数字的地址
//int main() {

	//int arr1[] = { 1,2,3 };
	//int arr2[] = { 4,5,6 };
	//int arr3[] = { 7,8,9 };

	//int* parr[] = {arr1,arr2,arr3}; //int指针的数组
	//int i= 0;
	//for (i = 0; i < 3; i++) {
	//	int j = 0;
	//	for (j = 0; j < 3; j++) {
	//		printf("%d ",*(parr[i]+j));
	//	}
	//	printf("\n");
	//}
	//printf("%d",*(parr[0]));

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int(*parr)[10] = &arr; //数组指针--指向数组

	//char* a[5]; 
	//char* (*pa)[5] = &a;
//
//
//
//
//	return 0;
//}

/*数组指针的用法*/

//int main(){
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*parr)[10] = &arr; //数组指针--指向数组
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", (*parr)[i]);	//*pa == arr;数组名 故此行也可写成printf("%d ",*(parr+i));
//	}
//	return 0;
//}

////参数是数组形式
//void Print1(int arr[3][5], int x, int y) {
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++) {
//		for (j = 0; j < y; j++) {
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
////参数是指针的形式  一个指向包含5个int类型的数组 的指针
//void Print2(int (*p)[5], int x, int y) {
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++) {
//		for (j = 0; j < y; j++) {
//			printf("%d ", *(*(p+i)+j));  // 因为*（p+i） = p[i]
//			printf("%d ", *(p[i] + j));
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main() {
//	int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
//	Print2(arr,3,5);
//
//	return 0;
//}


/*数组参数，指针参数*/

/*一维数组传参*/

//void test(int arr[])//ok?
//{}
//void test(int arr[10])//ok?
//{}
//void test(int* arr)//ok?
//{}
//void test2(int* arr[20])//ok?
//{}
//void test2(int** arr)//ok?
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}

/*二维数组传参*/
//void test(int arr[3][3]) {
//	
//}
//void test1(int arr[][3])//行可省略，列不可省略
//{
//
//}
//void test2(int(*arr)[5])  //指向数组的指针
//{
//	
//}
//void test3(int* arr[]) {
//
//}
//
//
//
//int main() {
//	int arr[3][5] = { 0 };
//	test(arr);
//	test1(arr);
//	test2(arr);
//	test3(arr);
//	return 0;
//}

/*指针传参*/

/*一级指针传参*/
//void print(int* p, int sz)  //指针参数
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p，传给函数
//	print(p, sz);
//	return 0;
//}

/*一级指针传参*/
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}


/*函数指针*/  //指向函数的指针

//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	//函数名 与 &函数名 都是函数的地址
//	printf("%p\n", test);
//	printf("%p\n", &test);
//
//	//函数地址的储存
//	void (*p)() = test;
//	(*p)(); //调用test()函数
//	return 0;
//}

//void Print(char* str) {
//	printf("%s\n",str);
//}
//int main() {
//	void (*p)(char*) = Print;
//	(*p)("xxxxxxx");
//	return 0;
//
//}