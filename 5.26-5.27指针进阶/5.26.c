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

/*����ָ���ʹ��*/  
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
//int xor(int a, int b)
//{
//	return a ^ b;
//}
//
//void menu() {
//	printf("*************************\n");
//	printf(" 1:add           2:sub \n");
//	printf(" 3:mul           4:div \n");
//	printf(" 5:xor           0:exit \n");
//	printf("*************************\n");
//}

//int main() {
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	do {
//		menu();
//		printf(" ��ѡ��\n");
//		scanf("%d",&input);	
//
//		switch (input) {
//		case 0:
//			printf("�˳�\n");
//			break;
//		case 1: 
//			printf("��������������\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n",add(x,y));
//			break;
//		case 2:
//			printf("��������������\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", sub(x, y));
//			break;
//		case 3:
//			printf("��������������\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", mul(x, y));
//			break;
//		case 4:
//			printf("��������������\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", div(x, y));
//			break;
//		default:
//			printf("ѡ�����\n");
//		}
//	} while (input);
//
//	return 0;
//}

/*�Ľ���*/
//int main() {
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	int(*pfarr[])(int, int) = {0,add,sub,mul,div,xor};
//	do {
//		menu();
//		printf(" ��ѡ��\n");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5) {
//			printf("��������������\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", pfarr[input](x,y));
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else {
//			printf("ѡ�����\n");
//		}
//	
//	} while (input);
//}


/*ָ����ָ�������ָ��*/

//int main() {
//	int arr[10] = {0};
//	int(*pfarr[10])(int, int);//pfarr��һ�����飬�����ڰ���10������ָ��
//	int(*(*ppfarr)[10])(int, int) = &pfarr;//ppfarr��һ��ָ�룬ָ��һ�����飬�����ڰ���10������ָ��
//}


//�ص�����--ͨ������ָ����õĺ���

//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
//intxor (int a, int b)
//{
//	return a ^ b;
//}
//
//int calc(int(*pf)(int,int)) {   //calc��һ���ص�����
//	int x = 0;
//	int y = 0;
//	printf("��������������\n");
//	scanf("%d%d", &x, &y);
//	printf("%d\n",pf(x,y));
//}
//
//void menu() {
//	printf("*************************\n");
//	printf(" 1:add           2:sub \n");
//	printf(" 3:mul           4:div \n");
//	printf(" 5:xor           0:exit \n");
//	printf("*************************\n");
//}
//
//int main() {
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	do {
//		menu();
//		printf(" ��ѡ��\n");
//		scanf("%d",&input);	
//
//		switch (input) {
//		case 0:
//			printf("�˳�\n");
//			break;
//		case 1: 
//			calc(add);
//			break;
//		case 2:
//			calc(sub);  
//			break;
//		case 3:
//			calc(mul);
//			break;
//		case 4:
//			calc(div);
//			break;
//		default:
//			printf("ѡ�����\n");
//		}
//	} while (input);
//
//	return 0;
//}




//void Print(char* str) //Print��һ���ص�����
//{
//	printf("hehe:%s",str);
//}
//void test(void (*pf)(char*)) {
//	printf("test\n");
//	pf("bit");
//}
//int main() {
//	test(Print);
//	return 0;
//}

/* qsort ���ԶԶ������͵����ݽ���ð������ */

//void bubble_sort(int* arr, int sz) {
//	int i = 0;
//	for (i = 0; i < sz - 1; i++) {//ð�����������
//		
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++) {//һ��ð������
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main() {
//	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}





//qsort��ʹ��
/*void qsort (void* base, size_t num, size_t size,int (*compar)(const void*,const void*));*/ //qsortԭ��

//#include<stdlib.h>
////�Ƚ�����int���͵ĺ�����e1��e2����Ҫ�Ƚϵ��������ĵ�ַ  void���͵�ָ�벻�ܽ��н�Ӧ�ò�����Ҳ�޷�����ָ���������
//int cmp_int(const void* e1,const void* e2) {
//	return (*(int*)e1 - *(int*)e2);
//}
//void test1() {
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int cmp_float(const void* e1, const void* e2) {
//	if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;
//}
//void test2() {
//	float arr[10] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%f ", arr[i]);
//	}
//	printf("\n");
//}
//
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//
//int cmp_stu_by_age(const void* e1, const void* e2) {
//	return(((struct stu*)e1)->age - ((struct stu*)e2)->age);
//}
//
//#include<string.h>
//int cmp_stu_by_name(const void* e1, const void* e2) {
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);  //ͨ���Ƚ��ַ������Ƚ����ֵĴ�С��ʹ��strcmp()�����Ƚ��ַ���
//}
//void test3() {
//	struct stu s[3] = { {"����",15},{"����",12},{"����",11} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("name is %s, age is %d.\n",s[i].name, s[i].age);
//	}
//	printf("\n");
//}
//
//int main() {
//	//test1();
//	//test2(); 
//	test3();
//
//	return 0;
//}






/*�Զ���qsort��ʵ��*/

void Swap(char* buf1, char* buf2, int width) {
	int i = 0;
	for (i = 0; i < width; i++) {
		char temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
}
void my_qsort(void* base, int sz,int width,int(*cmp)(void*e1,void*e2)) {
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++) {
		//ÿһ��
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++) {
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0) {
				//����
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}	
		}
	}
}

int cmp_int(const void* e1,const void* e2) {
	return (*(int*)e1 - *(int*)e2);
}
void test1() {
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

struct stu
{
	char name[20];
	int age;
};


int cmp_stu_by_age(const void* e1, const void* e2) {
	return(((struct stu*)e1)->age - ((struct stu*)e2)->age);
}

#include<string.h>
int cmp_stu_by_name(const void* e1, const void* e2) {
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);  //ͨ���Ƚ��ַ������Ƚ����ֵĴ�С��ʹ��strcmp()�����Ƚ��ַ���
}
void test3() {
	struct stu s[3] = { {"����",15},{"����",12},{"����",11} };
	int sz = sizeof(s) / sizeof(s[0]);
	my_qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("name is %s, age is %d.\n",s[i].name, s[i].age);
	}
	printf("\n");
}


int main() {
	//test1();
	test3();
	return 0;
}