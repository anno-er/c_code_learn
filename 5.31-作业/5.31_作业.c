#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<math.h>
//
///*字符串逆序*/
//
//char* reverse(char* str) {
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//
//	while (left<right) {
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//	return str;
//}
//
//int main() {
//	char arr[255] = {0};
//	//scanf("%s",arr);
//	gets(arr);//读取一行，可以读取空格
//
//	//逆序函数
//	reverse(arr);
//
//	printf("%s\n",arr);
//	return 0;
//}


///*计算求和*/
//int main() {
//	
//	int n = 0;
//	int a = 0;
//	scanf("%d%d",&a,&n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for ( i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d",sum);
//	return 0;
//}

/*1-100000之间所有的自幂数*/
//
//int main() {
//	int i = 0;
//	for ( i = 0; i <= 100000; i++)
//	{
//		//判断i是否为自幂数
//		
//		//计算i的位数n
//		
//		int tmp = i;
//		int sum = 0;
//		int n = 0;
//		while (tmp) {
//			n++;
//			tmp /= 10;
//		}
//		//计算i的每一位的n次方之和
//		tmp = i;
//		while(tmp){
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//比较i和sum
//		if (i == sum) {
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}

/*打印菱形*/
//int main() {
//	int rol = 0;
//	scanf("%d",&rol);
//	int i = 0;
//	//打印上半部分
//	for ( i = 0; i < rol; i++)
//	{
//		//打印空格
//		int j = 0;
//		for ( j = 0; j < rol-1-i; j++)
//		{
//			printf(" ");
//		}
//
//		//打印*
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		
//		printf("\n");
//		
//		
//	}
//
//	//打印下半部分
//	for (i = 0; i <rol-1; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		j = 0;
//		for (j = 0; j < 2*(rol-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		
//	}
//	return 0;
//}


/*喝汽水问题*/

int main() {
	int money = 0;
	int total = 0;
	int empty = 0;

	scanf("%d",&money);

	////买回来的汽水
	//total = money;
	//empty = money;

	////换回来的汽水
	//while (empty >= 2) {
	//	total += empty / 2;
	//	empty=empty / 2 + empty % 2;
	//}

	if (money == 0) {
		total = 0;
	}
	else {
		total = money * 2 - 1;
	}
	
	printf("total = %d", total);

	return 0;
}