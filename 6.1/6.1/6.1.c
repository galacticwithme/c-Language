#define _CRT_SECURE_NO_WARNINGS
////在一个有序数组中查看具体的某个数字n
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	int k, left, right, mid;//left左下标，mid为中值
//	k = 7, left = 0;
//	right = sizeof(arr) / sizeof(arr[0]) - 1;
// 	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (k > arr[mid])
//			left = mid + 1;
//		else if (k < arr[mid])
//			right = mid - 1;
//		else
//		{
//			printf("找到了，下标是%d,\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到");
//	return 0;
//}
////多个字符从两端移动，向中间汇聚
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//int main()
//{
//	int left = 0;
//	char arr1[] = "welcome to school";
//	char arr2[] = "                 ";
//	int right = strlen(arr1) - 1;//strlen计算字符串长度
//	while (right >= left)
//	{
//			arr2[left] = arr1[left];
//			arr2[right] = arr1[right];
//			printf("%s\n", arr2);
//			Sleep(1000);//休息一秒
//			system("cls");//执行系统命令的一个函数-cls 清空屏幕
//			left++;
//			right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//编写代码实现模拟用户登录情景并且只能登录三次
#include<stdio.h>
int main()
{
	int i;
	char password[20] = { 0 };
	for (i = 0;i < 3;i++)
	{
		printf("请输入密码：");
		scanf("%s", password);
		if (strcmp(password , "123456")==0)//==不能用来比较两个字符串是否相等，应该使用一个库函数—strcmp
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	return 0;
}