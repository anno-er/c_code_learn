#include<stdio.h>

//int main() {
//		
//	unsigned int a = 0x1234;
//	//0x1234 = 0x 00 00 12 34
//	//    С�ˣ�34 12 00 00  ��� 00 00 12 34
//	unsigned char b = *(unsigned char*)&a;
//
//	printf("%d\n", b);
//
//	return 0;
//} 

/*��ӡ�������*/

//int main(){
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++) {
//		for ( j = 0; j < 10; j++){
//			if (0 == j) {
//				arr[i][j] = 1;
//			}
//			if (i == j) {
//				arr[i][j]=1;
//			}
//			if (i >= 2 && j >= 1) {
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


/*˭������*/
/*
a˵��������
b˵����c
c˵����d
d˵��c�ں�˵

3���滰
*/

//int main() {
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++) {
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3) {
//			printf("killer = %c\n",killer);
//		}
//	}
//	return 0;
//}


/*��������*/

/*
	36ƥ��6���ܵ���û�м�ʱ����������ȷ��36ƥ���е�ǰ����
	���ٱ�������
*/

/*
	25ƥ��5���ܵ���û�м�ʱ����������ȷ��25ƥ���е�ǰ����
	���ٱ�������
*/

/*
	�������⣺һ���㣬���ʲ����ȣ�ÿһ��ȼ����1��Сʱ
	�ø��������㣬ȷ��һ��15���ӵ�ʱ���
*/



/*
��Ŀ����:������
��Ŀ����:
5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������:
Aѡ��˵:B�ڶ� �ҵ���;
Bѡ��˵:�ҵڶ���E����;
Cѡ��˵:�ҵ�һ��D�ڶ�;
Dѡ��˵:C����ҵ���;
Eѡ��˵:�ҵ��ģ�A��һ;
����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
*/

//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//
//	for (a = 1; a <= 5; a++) {
//		for (b = 1; b <= 5; b++) {
//			if (a == b) {
//				continue;
//			}
//			for (c = 1; c <= 5; c++) {
//				if (c == a || c == b) {
//					continue;
//				}
//				for (d = 1; d <= 5; d++) {
//					if (d == a || d == b || d == c) {
//						continue;
//					}
//					for (e = 1; e <= 5; e++) {
//						if (e == a || e == b || e == c || e == d) {
//							continue;
//						}
//						if (((a == 3) + (b == 2) == 1) && ((b == 2) + (e == 4) == 1) && ((c == 1) + (d == 2) == 1) && ((c == 5) + (d == 3) == 1) && ((e == 4) + (a == 1) == 1)) {
//							printf("a is num %d\n", a);
//							printf("b is num %d\n", b);
//							printf("c is num %d\n", c);
//							printf("d is num %d\n", d);
//							printf("e is num %d\n", e);
//						}
//					}
//				}
//			}
//		}
//	
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char* str3 = "hello bit."; 
//	char* str4 = "hello bit. ";  
//	if (str1 == str2) 
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n"); 
//	if (str3 == str4)
//		printf("str3 and str4 are same \n"); 
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}


/*�ַ���������
��Ŀ����:
ʵ��һ�����������������ַ����е�k���ַ���
����:
ABCD����һ���ַ��õ�BCDA
ABCD���������ַ��õ�CDAB
*/


////������ⷨ
//#include<assert.h>
//#include<string.h>
//void left_move(char* a,int sz) {
//	assert(a != NULL);
//	int len = strlen(a);
//	assert(sz >= 0 && sz<=len-1);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		//����תһ���ַ�
//		char tmp = *a;
//		int j = 0;
//		for (j = 0; j < len-1; j++) {
//			*(a + j) = *(a + j + 1);
//		}
//		*(a + len - 1) = tmp;
//	}
//}

//������ת��
/*
����ת����Ϊ��
abcdef ��ת��λ
ba fedc �������߸��Է�ת
cdefad	����ȫ����ת
*/

//#include<assert.h>
//#include<string.h>
//void reverse(char* left, char* right) {
//	assert(left != NULL);
//	assert(right != NULL);
//	while (right>left) {
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int k) {
//
//	assert(arr != NULL);
//	int len = strlen(arr);
//	assert(k <= len);
//	//�������
//	reverse(arr,arr+k-1);  
//	//�����ұ�
//	reverse(arr + k, arr + len - 1);
//	//��������
//	reverse(arr, arr + len - 1);
//}
//int main() {
//	char arr[] = "abcdefg";
//	int sz = 4;
//	left_move(arr, sz);
//	printf("%s\n", arr);
//	return 0;
//}


/*дһ���������ж�һ���ַ����Ƿ�Ϊ��һ���ַ�����ת֮����ַ��������ǣ�����1�����ǣ�����0*/
//#include<assert.h>
//#include<string.h>
//void left_move(char* a,int sz) {
//	assert(a != NULL);
//	int len = strlen(a);
//	assert(sz >= 0 && sz<=len-1);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		//����תһ���ַ�
//		char tmp = *a;
//		int j = 0;
//		for (j = 0; j < len-1; j++) {
//			*(a + j) = *(a + j + 1);
//		}
//		*(a + len - 1) = tmp;
//	}
//}
//int is_left_move(char* s1,char* s2) 
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++) {
//		left_move(s1, 1);
//		int ret = strcmp(s1, s2);
//		if (ret == 0) {
//			return 1;
//		}
//	}
//	return 0;
//}
//int main() {
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("NO\n");
//	return 0;
//}

//���򵥵ķ���
//#include<string.h>
//#include<assert.h>
//int is_left_move(char* s1,char* s2) 
//{
//	/*
//		1����str1��׷��һ��str1�ַ�����strncat 
//		2���ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�  strstr --���Ӵ��ĺ���
//	*/
//
//	//�Լ����Լ�׷�ӵ�ʱ����ʹ��strcat(s1, s2);
//	int len = strlen(s1);
//	int len1 = strlen(s2);
//	if (len != len1)
//	{	
//		return 0;
//	}
//	strncat(s1, s1, len);
//
//	char* ret = strstr(s1, s2);
//	if (ret == NULL) {
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main() {
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("NO\n");
//	return 0;
//}



/*
��Ŀ����:���Ͼ���
��Ŀ����:
��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
Ҫ��:ʱ�临�Ӷ�С��o(N);��ǰ���������ÿһ�����鵽
*/

/*
1 2 3
4 5 6
7 8 9

1 2 3 
2 3 4
3 4 5
*/

int FindNum(int arr[3][3],int k,int* px,int* py) {
	int x = 0;
	int y = *py - 1;
	while (x <= *px-1 && y>=0) {
		if (arr[x][y] > k) {
			y--;
		}
		else if (arr[x][y] < k) {
			x++;
		}
		else {
			*px = x;
			*py = y;
			return 1;
		}
	
	}
	return 0;
}
int main() {
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 7;
	int x = 3;
	int y = 3;
	//�����Ͳ���
	int ret = FindNum(arr,k,&x,&y);
	if (ret == 1) {
		printf("�ҵ���,�±���arr[%d][%d]\n",x,y);
	}
	else
	{
		printf("�Ҳ���\n");
	}
	return 0;
}