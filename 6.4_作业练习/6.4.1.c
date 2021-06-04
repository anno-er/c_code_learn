#include<stdio.h>

//int main() {
//		
//	unsigned int a = 0x1234;
//	//0x1234 = 0x 00 00 12 34
//	//    小端：34 12 00 00  大端 00 00 12 34
//	unsigned char b = *(unsigned char*)&a;
//
//	printf("%d\n", b);
//
//	return 0;
//} 

/*打印杨辉三角*/

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


/*谁是凶手*/
/*
a说：不是我
b说：是c
c说：是d
d说：c在胡说

3句真话
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


/*赛马问题*/

/*
	36匹马，6个跑道，没有计时器，请赛马确定36匹马中的前三名
	最少比赛几次
*/

/*
	25匹马，5个跑道，没有计时器，请赛马确定25匹马中的前三名
	最少比赛几次
*/

/*
	烧香问题：一种香，材质不均匀，每一根燃烧完1和小时
	拿给你两个香，确定一个15分钟的时间段
*/



/*
题目名称:猜名次
题目内容:
5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果:
A选手说:B第二 我第三;
B选手说:我第二，E第四;
C选手说:我第一，D第二;
D选手说:C最后，我第三;
E选手说:我第四，A第一;
比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
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


/*字符串左旋：
题目内容:
实现一个函数，可以左旋字符串中的k个字符。
例如:
ABCD左旋一个字符得到BCDA
ABCD左旋两个字符得到CDAB
*/


////暴力求解法
//#include<assert.h>
//#include<string.h>
//void left_move(char* a,int sz) {
//	assert(a != NULL);
//	int len = strlen(a);
//	assert(sz >= 0 && sz<=len-1);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		//左旋转一个字符
//		char tmp = *a;
//		int j = 0;
//		for (j = 0; j < len-1; j++) {
//			*(a + j) = *(a + j + 1);
//		}
//		*(a + len - 1) = tmp;
//	}
//}

//三步翻转法
/*
以左转两个为例
abcdef 左转两位
ba fedc 左右两边各自反转
cdefad	整体全部反转
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
//	//逆序左边
//	reverse(arr,arr+k-1);  
//	//逆序右边
//	reverse(arr + k, arr + len - 1);
//	//逆序整体
//	reverse(arr, arr + len - 1);
//}
//int main() {
//	char arr[] = "abcdefg";
//	int sz = 4;
//	left_move(arr, sz);
//	printf("%s\n", arr);
//	return 0;
//}


/*写一个函数，判断一个字符串是否为另一个字符串旋转之后的字符串，若是，返回1，不是，返回0*/
//#include<assert.h>
//#include<string.h>
//void left_move(char* a,int sz) {
//	assert(a != NULL);
//	int len = strlen(a);
//	assert(sz >= 0 && sz<=len-1);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		//左旋转一个字符
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

//更简单的方法
//#include<string.h>
//#include<assert.h>
//int is_left_move(char* s1,char* s2) 
//{
//	/*
//		1、在str1中追加一个str1字符串，strncat 
//		2、判断str2指向的字符串是否是str1指向的字符串的子串  strstr --找子串的函数
//	*/
//
//	//自己给自己追加的时候不能使用strcat(s1, s2);
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
题目名称:杨氏矩阵
题目内容:
有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
要求:时间复杂度小于o(N);从前往后遍历，每一个都查到
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
	//返回型参数
	int ret = FindNum(arr,k,&x,&y);
	if (ret == 1) {
		printf("找到了,下标是arr[%d][%d]\n",x,y);
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}