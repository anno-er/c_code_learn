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

	//if (arr1 == arr2) //arr1��arr2����Ԫ�صĵ�ַ
	//{
	//	printf("1");
	//}
	//else
	//	printf("2");

	//const char *p1 = "abcdef";
	//const char *p2 = "abcdef";
	//if (p1 == p2) //p1��p2ָ��ͬһ�������ַ�����
	//{
	//	printf("1");
	//}
	//else
	//	printf("2");
	//
	//return 0;
//}


/*ָ������������ָ��*/
//ָ�����飺���ָ�������
//����ָ�룺ָ�������ָ��  --������ֵĵ�ַ
//int main() {

	//int arr1[] = { 1,2,3 };
	//int arr2[] = { 4,5,6 };
	//int arr3[] = { 7,8,9 };

	//int* parr[] = {arr1,arr2,arr3}; //intָ�������
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
	//int(*parr)[10] = &arr; //����ָ��--ָ������

	//char* a[5]; 
	//char* (*pa)[5] = &a;
//
//
//
//
//	return 0;
//}

/*����ָ����÷�*/

//int main(){
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*parr)[10] = &arr; //����ָ��--ָ������
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", (*parr)[i]);	//*pa == arr;������ �ʴ���Ҳ��д��printf("%d ",*(parr+i));
//	}
//	return 0;
//}

////������������ʽ
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
////������ָ�����ʽ  һ��ָ�����5��int���͵����� ��ָ��
//void Print2(int (*p)[5], int x, int y) {
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++) {
//		for (j = 0; j < y; j++) {
//			printf("%d ", *(*(p+i)+j));  // ��Ϊ*��p+i�� = p[i]
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


/*���������ָ�����*/

/*һά���鴫��*/

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

/*��ά���鴫��*/
//void test(int arr[3][3]) {
//	
//}
//void test1(int arr[][3])//�п�ʡ�ԣ��в���ʡ��
//{
//
//}
//void test2(int(*arr)[5])  //ָ�������ָ��
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

/*ָ�봫��*/

/*һ��ָ�봫��*/
//void print(int* p, int sz)  //ָ�����
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
//	//һ��ָ��p����������
//	print(p, sz);
//	return 0;
//}

/*һ��ָ�봫��*/
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


/*����ָ��*/  //ָ������ָ��

//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	//������ �� &������ ���Ǻ����ĵ�ַ
//	printf("%p\n", test);
//	printf("%p\n", &test);
//
//	//������ַ�Ĵ���
//	void (*p)() = test;
//	(*p)(); //����test()����
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