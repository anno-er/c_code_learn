#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
#include<ctype.h>
//int main()
//{
//
///* srtncpy - 字符串比较*/
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//
//	//int ret = strcmp(p1, p2);
//	int ret = strncpy(p1, p2, 6);
//	printf("%d\n,ret");
//	return 0;
//}


/*查找字符串函数 strstr*/
//char *strstr( const char* str, const char* substr );
// NULL -- 空指针
//NULL/Null --'\0'

//char* my_strstr(const char* p1,const char* p2)
//{
//	assert(p1 && p2);
//	char* s1 = (char*)p1;
//	char* s2 = (char*)p2;
//	char* cur = (char*)p1;
//
//	if (*p2 == '\0') {
//		return (char*)p1;
//	}
//	//
//	while (*cur) {
//		s1 = cur;
//		s2 = (char*)p2;
//		while ((*s1 == *s2) && *s2 && *s2 ) {
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0') {
//			return cur;
//		}
//		if (*s1 == '\0') {
//			return NULL;
//		}
//		cur++;
//	}
//}
//
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "def";
//	char* ret = strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("子串不存在！\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


/* strtok  切割字符串函数*/  // char * strtok( char * str, const char * sep );
//点分十进制
//int main() {
//	char arr[] = "cdl@foxmain.com";
//	char* p = "@.";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL;ret = strtok(NULL,p)){
//		printf("%s\n",ret);
//	}
//
//	//char* ret = strtok(arr, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	//切割字符串
//	return 0;
//}

/*strerrou 错误报告函数*/ //把错误码翻译成错误信息

//int main() {
//	//错误码	错误信息
//	//0		-	No error
//	//1		-	Operation not permitted
//	//2		-	No such file or directory
//	//.....
//
//	//errno是一个全局的错误码的变量
//	//当c语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到erron中
//	/*char* str = strerror(errno);
//	printf("%s\n", str);*/
//
//	FILE* pFile;
//	pFile = fopen("test.txt", "r");
//	if (pFile == NULL)
//		printf("%s\n", strerror(errno));
//	else
//		printf("success!\n");
//	return 0;
//}


/*字符分类*/
//int main() {
//	char ch = 'a';
//	int ret = islower(ch);
//	printf("%d\n", ret);
//	return 0;
//}


/*字符转换 */ //tolower / toupper
//int main() {
//	char ch1 = toupper('w');
//	char ch2 = tolower('W');
//	putchar(ch1);
//	putchar(ch2);
//	return 0;
//}

/**************************** 内存操作函数 ***************************/
// memcpy 内存拷贝 void * memcpy ( void * destination, const void * source, size_t num );

//void* my_memcpy(void* dest,const void* src,size_t num ){
//	void* start = dest;
//	assert(dest && src);
//	while (num--) {
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return start;
//}
//
//
//struct S {
//	char name[20];
//	int age;
//};
//int main() {
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	memcpy(arr2, arr1, sizeof(arr1));
//
//	struct S arr3[] = { {"张三",20},{"李四",30} };
//	struct S arr4[3] = { 0 };
//	my_memcpy(arr4, arr3, sizrof(arr3));
//
//	int i = 0;
//
//	return 0;
//}

//memmove 处理内存重叠的拷贝，也可以处理重叠的内存拷贝
//void * memmove ( void * destination, const void * source, size_t num );

//void* my_memmove(void* dest, const void* src, size_t count) {
//	assert(dest && src);
//	void* start = dest;
//	if (dest<src)
//	{
//		//前->后
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//后->前
//		while (count--) {
//			*((char*)dest+count) = *((char*)src+count);	
//		}
//	}
//	return start;
//}
//int main() {
//
//	int arr5[] = { 1,2,3,4,5,6,7,8,9,10 };
//	memmove(arr5 , arr5 + 2, 20);
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", arr5[i]);
//	}
//	return 0;
//}


/* memcmp 内存比较 */  // int memcmp ( const void * ptr1, const void* ptr2,size_t num );

//int main() {
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}

/*memset 内存设置*/  //void* memset(void* dest,int c,size_t count)

int main() {
	char arr[10] = "";
	memset(arr, '#', 10);

	int arr1[10] = { 0 };
	memset(arr1, 1, 40);

	return 0;
}