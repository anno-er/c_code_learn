#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<iostream>
//using namespace std;



//  int main() {
//	char str1[] = "abc";
//	char str2[] = "abc";
//	const char str1[] = "abc";
//	const char str2[] = "abc";
//	const char* str1 = "abc";
//	const char* str2 = "abc";
//	cout << (str1 == str2) << endl;
//}
/********************* дһ�������������Ķ��������м���1 ***************************/
//int count_bit_one_0(unsigned int n) {
//	int count = 0;
//	while (n) {
//		if (n % 2 == 1) {
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//
//int count_bit_one_1(int n) {
//	int count = 0;
//	for (int i = 0; i < 32;i++) {
//		if ((n>>i) & 1 == 1) {
//			count++;
//		}
//	}
//	return count;
//}
//
//int count_bit_one_2(int n) {
//	int count = 0;
//	while (n) {
//		n = n & (n - 1);  //n&(n-1)�ܹ���n���ұߵ�1��Ϊ0��
//		count++;
//	}
//	return count;
//}
//
//
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	int count = count_bit_one_1(num);   //������ԭ�뷴�벹����ͬ�����ڼ�����ڴ���ǲ��룬��-1�Ĳ�����11111111111111111111111111111111
//	printf("count = %d\n",count);
//	return 0;
//}


/********************* ��������в�ͬλ�ĸ��� ***************************/

//int count_bit_dif(int a, int b) {
//	int temp = a ^ b;//a��b���
//	int count;
//	while (temp) {
//		temp = temp & (temp - 1);
//		count++;
//	}
//	return count;
//}
//
//int main() {
//	int num1, num2;
//	scanf("%d%d", &num1, &num2);
//	int count = count_bit_dif(num1, num2);
//	printf("count = %d\n", count);
//	return  0;
//}


/********************* ��ӡ�������е�����λ��ż��λ ***************************/

//void Print_1(int a) {
//	printf("����λ:");
//	for (int i = 0; i < 32; i++) {
//		if (i % 2 == 0) {
//			printf("%d ",(a >> i) & 1);
//		}
//	}
//	printf("\n");
//	printf("ż��λ:");
//	for (int i = 0; i < 32; i++) {
//		if (i % 2 != 0) {
//			printf("%d ", (a >> i) & 1);
//		}
//	}
//}
//
//void Print_2(int a) {
//	printf("����λ:");
//	for (int i = 30; i >= 0; i -= 2) {
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ:");
//	for (int i = 31; i >=0 ; i -= 2) {
//		printf("%d ", (a >> i) & 1);
//	}
//}
//
//int main() {
//	int num;
//	scanf("%d", &num);
//	Print_2(num);
//	return  0;
//}


/********************* ������������������������ʱ���� ***************************/

//void swap_1(int* a, int* b)//��Ҫ����ʵ�β��ܺͽ���
//{
//	int temp = *a;
//	*a = *b;
//	b = temp;
//}
//
//void swap_2(int* a, int* b) {
//	*a = *a ^ *b;
//	*b = *a ^ *b;
//	*a = *a ^ *b;
//}
//
//void swap_3(int* a, int* b) {
//	*a = *a + *b;
//	*b = *a - *b;
//	*a = *a - *b;
//}
//int main() {
//
//	int num1, num2;
//	scanf("%d%d", &num1, &num2);
//	printf("num1 = %d, num2= %d\n",num1,num2);
//	swap_2(&num1,&num2);
//	printf("num1 = %d, num2= %d\n", num1, num2);
//
//	return 0;
//}

/********************* ��ӡ�������� ***************************/
//void Print(int* arr, int sz) {
//	for (int i = 0; i < sz; i++) {
//		printf("%d ", *(arr + i));
//	}
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	return 0;
//}

/********************* �ַ�������(�ݹ�ʵ��) ***************************/
//int my_strlen(char* str)  //�Լ���strlen����
//{
//	int count = 0;
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string_1(char* str) {
//	int left = 0;
//	int right =my_strlen(str)-1;
//	while (left < right) {
//		char temp = str[left];
//		str[left] = str[right];
//		str[right] = temp;
//		left++;
//		right--;
//	}
//}
//
//void reverse_string_2(char* str)  //�ݹ�ʵ��
//{
//	int len = my_strlen(str) ; 
//	char temp = str[0];
//	str[0] = str[len - 1];
//	str[len - 1] = '\0';
//	if (my_strlen(str+1) >= 2) {
//		reverse_string_2(str + 1);
//	}
//	str[len - 1] = temp;
//}
//
//int main() {
//	char str[] = "abcedfg";
//	reverse_string_2(str);
//	printf("%s\n",str);
//	return 0;
//}

/********************* ����һ������ÿλ֮��(�ݹ�ʵ��) ***************************/
//int DigitSum_1(int a) {
//	static int temp = 0;
//	temp += a % 10;
//	if (a >= 10) {
//		DigitSum(a / 10);
//	}
//	return temp;
//}
//
//int DigitSum_2(int a) {
//	if (a > 9) {
//		return DigitSum_2(a / 10) + a % 10;
//	}
//	else {
//		return a;
//	}
//}
//
//int main() {
//	int num;
//	scanf("%d",&num);
//	printf("%d\n", DigitSum_1(num));
//	return 0;
//}


/***** �ݹ�ʵ��n��K�η� ******/
double Pow(int a, int b) {
	if (b < 0) {
		return (1.0/(Pow(a,-b)));
	}
	else if (b == 0) {
		return 1;
	}
	else
		return a * Pow(a, b - 1); 
}
int  main() {
	int n = 2;
	int k = 3;
	printf("Pow(%d,%d) = %lf\n",n,k,Pow(n,k));
	return 0;
}
