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

/*函数指针的使用*/  
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
//		printf(" 请选择\n");
//		scanf("%d",&input);	
//
//		switch (input) {
//		case 0:
//			printf("退出\n");
//			break;
//		case 1: 
//			printf("输入两个操作数\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n",add(x,y));
//			break;
//		case 2:
//			printf("输入两个操作数\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", sub(x, y));
//			break;
//		case 3:
//			printf("输入两个操作数\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", mul(x, y));
//			break;
//		case 4:
//			printf("输入两个操作数\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", div(x, y));
//			break;
//		default:
//			printf("选择错误！\n");
//		}
//	} while (input);
//
//	return 0;
//}

/*改进版*/
//int main() {
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	int(*pfarr[])(int, int) = {0,add,sub,mul,div,xor};
//	do {
//		menu();
//		printf(" 请选择\n");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5) {
//			printf("输入两个操作数\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", pfarr[input](x,y));
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else {
//			printf("选择错误！\n");
//		}
//	
//	} while (input);
//}


/*指向函数指针数组的指针*/

//int main() {
//	int arr[10] = {0};
//	int(*pfarr[10])(int, int);//pfarr是一个数组，数组内包含10个函数指针
//	int(*(*ppfarr)[10])(int, int) = &pfarr;//ppfarr是一个指针，指向一个数组，数组内包含10个函数指针
//}


//回调函数--通过函数指针调用的函数

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
//int calc(int(*pf)(int,int)) {   //calc是一个回调函数
//	int x = 0;
//	int y = 0;
//	printf("输入两个操作数\n");
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
//		printf(" 请选择\n");
//		scanf("%d",&input);	
//
//		switch (input) {
//		case 0:
//			printf("退出\n");
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
//			printf("选择错误！\n");
//		}
//	} while (input);
//
//	return 0;
//}




//void Print(char* str) //Print是一个回调函数
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

/* qsort 可以对多种类型的数据进行冒泡排序 */

//void bubble_sort(int* arr, int sz) {
//	int i = 0;
//	for (i = 0; i < sz - 1; i++) {//冒泡排序的堂数
//		
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++) {//一趟冒泡排序
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





//qsort的使用
/*void qsort (void* base, size_t num, size_t size,int (*compar)(const void*,const void*));*/ //qsort原型

//#include<stdlib.h>
////比较两个int类型的函数，e1和e2是需要比较的两个数的地址  void类型的指针不能进行解应用操作，也无法进行指针运算操作
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
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);  //通过比较字符串来比较名字的大小，使用strcmp()函数比较字符串
//}
//void test3() {
//	struct stu s[3] = { {"张三",15},{"李四",12},{"王五",11} };
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






/*自定义qsort的实现*/

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
	//趟数
	for (i = 0; i < sz - 1; i++) {
		//每一趟
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++) {
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0) {
				//交换
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
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);  //通过比较字符串来比较名字的大小，使用strcmp()函数比较字符串
}
void test3() {
	struct stu s[3] = { {"张三",15},{"李四",12},{"王五",11} };
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