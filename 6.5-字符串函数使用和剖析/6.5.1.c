/*本节重点介绍处理字符和字符串的库函数的使用和注意事项
* 
求字符串长度
o strlen

长度不受限制的字符串函数
o strcpy
o strcat
o strcmp

长度受限制的字符串函数介绍
o strncpy
o strncato strncmp字符串查找
o strstr
o strtok

错误信息报告
o strerror

字符操作内存操作函数
o memcpy
o memmove
o memset
o memcmp
*/


#include<stdio.h>
#include<string.h>
#include<assert.h>

/* srtlen 函数 */

//自定义实现的三种方法
//计数器的方法
//int my_strlen1(const char* str) {
//	assert(str != NULL);
//	int count = 0;
//	while (*str != '\0') //while(*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
////递归方法 不创建临时变量实现strlen
//int my_strlen2(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//
////指针-指针
//int my_strlen3(char* s)
//{
//	char* p = s;
//	while (*p != '\0')
//		p++;
//	return p - s;
//}


//int main() {
	//char arr[] = { 'a','b','c','d','e','f' };
	//int len1 = strlen("abcdef");
	////int len2 = strlen(arr);//error，错误的方法，arr没有'\0'
	//printf("%d\n", len1);


	//size_t == unsigned int 
	//strlen 返回的是size_t 3-6 为一个很大的值
//	if (strlen("abc") - strlen("abcdef")>0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}



/* strcpy 函数  字符串复制*/
//my_strcpy1(char* dest,char* src) 
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*src !='\0') {
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//
//char* my_strcpy2(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//拷贝src指向的字符串到dest指向的空间，包含‘\0’
//	while (*dest++ = *src++) {
//		;
//	}
//	//返回目的地起始地址
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//
//	strcpy(arr1, arr2);
//	printf("%s\n",arr1);
//
//	return 0;
//}


/* strcat 字符串追加函数 */

//my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;   
//	//找到目的字符串的'\0'
//	while (*dest != '\0') {
//		dest++;
//	}
//	//追加
//	while (*dest++ = *src)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world"; //源头arr2必须要有'\0'，要追加到目的地中
//	strcat(arr1, arr2);//目的地arr1必须足够大
//	printf("%s",arr1);
//	return 0;
//}


/*strcmp 字符串比较函数 */ //比较的是对应字符的ascii码值

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return(*str1 - *str2);
//
//	//if (*str1 > *str2)
//	//	return 1;
//	//else
//	//	return -1;
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	int ret = strcmp(p1, p2);  //p1<p2返回小于0的数字，相等返回0，p1>p2返回大于0的数组
//
//	printf("%d\n", ret);
//
//	return 0;
//}


/* strncpy */  //字符受限的拷贝

//char* my_strncpy(char* dest, const char* src, int num)
//{
//	char* start = dest;
//	assert(dest && src);
//	while (num && (*dest++ = *src++))
//		num--;
//	if (num)
//		while (--num)
//			*dest++ = '\0';
//	return start; 
//}
//
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "hello bit";
//	strncpy(arr1, arr2, 4);
//	return 0;
//}


/* strncat */  //字符受限的追加

//char* my_stncat(char* dest, const char* src, int count)
//{
//	char* start = dest;
//	while (*dest++)
//		;
//	dest--;
//	while (count--)
//		if (!(*dest++ = *src++))
//			return start;
//	*dest++ = '\0'; 
//	return start; 
//}
//
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "bit";
//	strncat(arr1, arr2, 4);
//	printf("%s\n", arr1);
//	return 0;
//}

