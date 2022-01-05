//结构体
#include <stdio.h>

//struct--结构体关键字   Stu--结构体标签   struct Stu--结构体类型
/*struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}s1, s2, s3;*/ //s1, s2, s3是三个全局的结构体变量
typedef struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
int main()
{
	//struct Stu s1;//局部结构体变量
	Stu s2 = { "张三", 20, "12333333333", "男" };
	return 0;
}
 
 
struct S
{
	int a;
	char ch[10];
	char arr[20];
	double d;
};
struct t
{
	char name[10];
	struct S s;
	int c;
};
int main()
{
	struct t a = { "李四", {5, "w", "456789", 3.14}, 66 };
	printf("%s\n", a.name);
	printf("%lf\n", a.s.d);
	printf("%s\n", a.s.ch);
	printf("%s\n", a.s.arr);
	return 0;
}