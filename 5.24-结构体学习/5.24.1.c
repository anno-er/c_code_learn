#define _CRT_SECURE_NO_WARNINGS 1

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

//struct Stu
//{
//	char* name;
//	short age;
//	char Tel[20];
//	char sec[20];
//}s1,s2,s3; //ȫ�ֽṹ���������

typedef struct Stu
{
	char* name;
	short age;
	char Tel[20];
	char sec[20];
}stu; //��struct Stu������Ϊstu

void Print1(stu tmp) //��ֵ����
{
	printf("name:	%s\n", tmp.name);
	printf("age:	%d\n", tmp.age);
}

void Print2(stu* tmp) //��ָ�봫��(����ȽϺã�����ı�)
{
	printf("name:	%s\n", tmp->name);
	printf("age:	%d\n", tmp->age);
}

int main() {
	struct Stu s1;//�ֲ���������
	stu s4;
	s4.name = "lisi"; //�ṹ�帳ֵ
	stu s5 = {"zhangsan",15,"15249207076","��"}; //�ṹ���ʼ��
	Print1(s5);
	Print2(&s5);
	return 0;
}






/*      ջ������������̬��		 */		
//ջ�����ֲ��������������βΡ������ĵ���
//��������̬�ڴ���䣬malloc/free,realloc,calloc
//��̬����ȫ�ֱ�������̬����







/*�ַ�ָ�����ַ����鸳ֵ������*/
//char a[] = { 'a','b','c' };
//printf("%d\n", sizeof(a));			//3(û�С�\0��)
//printf("%s\n", a);					//abc����̔$琌�o
//char b[] = "abc";						//4(�С�\0��)
//printf("%d\n", sizeof(b));			//abc
