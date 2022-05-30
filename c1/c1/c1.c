//#include <stdio.h>
//int是整型的意思
//main前面的int表示main函数调用返回的一个整型值
//int main()//主函数-程序的入口 main函数有且仅有一个
//{
//	printf("1\n");
//	printf("2\n");
//	printf("1\n");
//	printf("2");
//	return 0;//返回0
//}
//char-字符类型
//int main()
//{
//	//char ch = 'A';//内存
//	//printf("%c\n", ch);//%c--打印字符格式的数据
//	int age = 20;
//	printf("%d\n", age);//%d--打印整型十进制数据
//	return 0;
//}
#include <stdio.h>
struct BOOK
{
	char name[20];
	short price;
};
int main()
{
	struct BOOK b = { "最强大脑",1000 };
	//printf("书本名：%s\n", b.name);
	//printf("价格：%d\z", b.price);
	struct BOOK* p = &b;
	printf("书本名：%s\n", (*p).name);
	printf("价格：%d\n", (*p).price);
	printf("书本名：%s\n", p->name);
	printf("价格：%d\n", p->price);
	return 0;
}