/*�����ص���ܴ����ַ����ַ����Ŀ⺯����ʹ�ú�ע������
* 
���ַ�������
o strlen

���Ȳ������Ƶ��ַ�������
o strcpy
o strcat
o strcmp

���������Ƶ��ַ�����������
o strncpy
o strncato strncmp�ַ�������
o strstr
o strtok

������Ϣ����
o strerror

�ַ������ڴ��������
o memcpy
o memmove
o memset
o memcmp
*/


#include<stdio.h>
#include<string.h>
#include<assert.h>

/* srtlen ���� */

//�Զ���ʵ�ֵ����ַ���
//�������ķ���
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
////�ݹ鷽�� ��������ʱ����ʵ��strlen
//int my_strlen2(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//
////ָ��-ָ��
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
	////int len2 = strlen(arr);//error������ķ�����arrû��'\0'
	//printf("%d\n", len1);


	//size_t == unsigned int 
	//strlen ���ص���size_t 3-6 Ϊһ���ܴ��ֵ
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



/* strcpy ����  �ַ�������*/
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
//	//����srcָ����ַ�����destָ��Ŀռ䣬������\0��
//	while (*dest++ = *src++) {
//		;
//	}
//	//����Ŀ�ĵ���ʼ��ַ
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


/* strcat �ַ���׷�Ӻ��� */

//my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;   
//	//�ҵ�Ŀ���ַ�����'\0'
//	while (*dest != '\0') {
//		dest++;
//	}
//	//׷��
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
//	char arr2[] = "world"; //Դͷarr2����Ҫ��'\0'��Ҫ׷�ӵ�Ŀ�ĵ���
//	strcat(arr1, arr2);//Ŀ�ĵ�arr1�����㹻��
//	printf("%s",arr1);
//	return 0;
//}


/*strcmp �ַ����ȽϺ��� */ //�Ƚϵ��Ƕ�Ӧ�ַ���ascii��ֵ

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//
//	//�Ƚ�
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
//	int ret = strcmp(p1, p2);  //p1<p2����С��0�����֣���ȷ���0��p1>p2���ش���0������
//
//	printf("%d\n", ret);
//
//	return 0;
//}


/* strncpy */  //�ַ����޵Ŀ���

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


/* strncat */  //�ַ����޵�׷��

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

