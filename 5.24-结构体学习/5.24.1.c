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
//}s1,s2,s3; //全局结构体变量定义

typedef struct Stu
{
	char* name;
	short age;
	char Tel[20];
	char sec[20];
}stu; //将struct Stu重命名为stu

void Print1(stu tmp) //按值传递
{
	printf("name:	%s\n", tmp.name);
	printf("age:	%d\n", tmp.age);
}

void Print2(stu* tmp) //按指针传递(这个比较好，不会改变)
{
	printf("name:	%s\n", tmp->name);
	printf("age:	%d\n", tmp->age);
}

int main() {
	struct Stu s1;//局部变量定义
	stu s4;
	s4.name = "lisi"; //结构体赋值
	stu s5 = {"zhangsan",15,"15249207076","男"}; //结构体初始化
	Print1(s5);
	Print2(&s5);
	return 0;
}






/*      栈区、堆区、静态区		 */		
//栈区：局部变量、函数的形参、函数的调用
//堆区：动态内存分配，malloc/free,realloc,calloc
//静态区：全局变量，静态变量







/*字符指针与字符数组赋值的问题*/
//char a[] = { 'a','b','c' };
//printf("%d\n", sizeof(a));			//3(没有‘\0’)
//printf("%s\n", a);					//abc烫烫虜$鐞岦o
//char b[] = "abc";						//4(有‘\0’)
//printf("%d\n", sizeof(b));			//abc
