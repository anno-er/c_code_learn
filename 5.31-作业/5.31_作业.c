#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<math.h>
//
///*�ַ�������*/
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
//	gets(arr);//��ȡһ�У����Զ�ȡ�ո�
//
//	//������
//	reverse(arr);
//
//	printf("%s\n",arr);
//	return 0;
//}


///*�������*/
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

/*1-100000֮�����е�������*/
//
//int main() {
//	int i = 0;
//	for ( i = 0; i <= 100000; i++)
//	{
//		//�ж�i�Ƿ�Ϊ������
//		
//		//����i��λ��n
//		
//		int tmp = i;
//		int sum = 0;
//		int n = 0;
//		while (tmp) {
//			n++;
//			tmp /= 10;
//		}
//		//����i��ÿһλ��n�η�֮��
//		tmp = i;
//		while(tmp){
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//�Ƚ�i��sum
//		if (i == sum) {
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}

/*��ӡ����*/
//int main() {
//	int rol = 0;
//	scanf("%d",&rol);
//	int i = 0;
//	//��ӡ�ϰ벿��
//	for ( i = 0; i < rol; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for ( j = 0; j < rol-1-i; j++)
//		{
//			printf(" ");
//		}
//
//		//��ӡ*
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
//	//��ӡ�°벿��
//	for (i = 0; i <rol-1; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
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


/*����ˮ����*/

int main() {
	int money = 0;
	int total = 0;
	int empty = 0;

	scanf("%d",&money);

	////���������ˮ
	//total = money;
	//empty = money;

	////����������ˮ
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