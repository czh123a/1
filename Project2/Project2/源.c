//{
//	printf("hehe\n");//这里完成任务
//	//在屏幕上输出hehe
//	//函数—print function—printf—打印函数-是库函数-是c语言本身提供给的函数—需要打招呼#include
//		return 0;//返回0 和前边前后呼应int main  void main 是过时的写法
//}
//int main（）
//{
//	char ch = 'A';
//	printf("%c\n", ch);
//	//打印字符格式的数据
//{	int age = 20;
//printf("%d\n", age);
//getchar();
//%d打印整型十进制数据
//	//%d—打印整型
//	//%c—打印字符
//	//%f—打印浮点数字—打印小数
//	float f = 5.0;//创建变量向内存申请空间
//	printf("%f\n", f);
//	double d = 3.14;
//	printf("%lf\n", d);
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(char));//他会开辟1个字节的空间—8个比特位
//	printf("%d\n", sizeof(short)); //开辟2个字节，short是短整型-2^16=65535
//	printf("%d\n", sizeof(int));  //4个字节
//	printf("%d\n", sizeof(long));//8个字节或是4个字节，只要是>=int就可以
//	printf("%d\n", sizeof(float));//4个字节
//	printf("%d\n", sizeof(double));//8个字节
//	//bit-比特位计算机中的最小单位-存放一个2进制位的
//	//byte-字节—一个字节8个比特位的大小—如10110011
//	//kb—是1024的byte
//	short  age = 20;//向内存申请两个字节=16个bit——类型加变量名=多少;
//	float weight = 95.6f;//向内存申请四个字节存放小数
//
//	//老师开始讲变量
//#include <stdio.h>
//	int num1 = 20 //全局变量—定义在代码块{}之外的
//		int main()
//	{
//		int num1 = 10;//定义在{}之内的
//		return 0;
//	}
//	//局部变量和全局变量的名字建议不要相同，容易误会，产生bug
//	//当局部变量和全局变量的名字相同时，局部变量优先
//
//	//两个数的相加
//	int sum1 = 0;
//	int sum2 = 0;
//	int sum = 0;
//	//输入数据—使用输入函数scanf
//	scanf("%d%d", &sum1, &sum2);//&—取地址符号
//	sum = sum1 + sum2;
//	printf("sum=%d/n", sum);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int sum1 = 0;
//	int sum2 = 0;
//	int sum = 0;
//	scanf("%d%d", &sum1, &sum2);
//	sum = sum1 + sum2;
//	printf("sum=%d/n", sum);
//	return 0;
//}
//变量的作用域和生命周期-全局变量整个工程都是可以的，局部变量只是最近的{}
//#include <stdio.h>
//int main()
//{
//	//int num = 521;
//	extern int a;
//	printf("我爱你=%d\n", a ); //作用域
//	getchar();
//		return 0;


//局部变量的生命周期进{开始，出}结束
//全局变量的生命周期，和main函数的生命周期是一样的，也就是整个程序的周期
//#define _CRT_SECURE_NO_WARNINGS//scanf—strcpy-strlen-strcat-不安全的—加在源文件的第一行
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d%d", &a, &b);//输入函数10
//	sum = a + b;
//	printf("和=%d\n", sum);
//	getchar();
//		return 0;
//}
//常量
//int main（）
//{
//	int num = 4;
//	3;
//	100;
//	3.14;//字面常量
//}

//int main()
//{
//	const int  a = 4;//const常属性，如果不想让一个值改变就用const修饰—const修饰的是常变量
//printf("%d\n", a);
//a = 5;
//printf("%d\n", a);
//getchar();
//return 0;
//}
////枚举常量-eunm
//enum  Color
//{
//	red,
//	yellow,
//	blue
//};
//int main()
//{
//
//	enum Color a = blue;
//
//	return 0;
//}
////#define定义的标识符常量
//#define MAX 10
//字符串+转义字符+注释
//#define _crt_secure_no_warnings
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//	printf("%d\n", strlen("c:\test\342\test.c"));
//	printf("%c\n", '\132');//\数字—表示8进制字符
//	printf("%c\n", '\x61');//\x数字表示十六进制
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？（1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}
//		


//	char arr1[] = "abc";//数组-\0是隐藏在字符串内的
//	char arr2[] = { 'a', 'b', 'c','\0'};//\0是字符串的结束标志
//printf("%s\n", arr1);
//printf("%s\n", arr2);
//char arr1[] = "abc";
//char arr2[] = { 'a', 'b', 'c',0 };
//printf("%d\n", strlen(arr1));
//printf("%d\n", strlen(arr2));//strlen计算字符串长度
//return 0;
//数组的大小需要用常量来定义
//int n = 10;
//int arr[n] = { 0 };//不可以这样子定义
//第一个是3，第二个随机值，abc直至遇到\0-在计算字符串长度的时候找\0—\0是转义字符——把原来的意思转变了
//数据存储计算机的时候，存储的是二进制，在存储字符的时候给字符编码——ASCLL码
//a-97
//A-65、
//转义字符

//{
//	printf("abc\n");
//	printf("C:\\test\\32\\test.c\n");//\t水平制表符相当于tab 
//	printf("%c\n", '\'');
//	//\n是换行
//	//\\两个斜杠可以表达原来的意思
		//return 0;
//#include <stdio.h>
//#include<string.h>

//{
//	int line = 0;
//	printf("加入比特");
//	while (line < 2000000)
//	{
//		printf("写一行代码:%d\n",line);
//		line++;
//	}
//	printf("好offer");
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;//自定义函数
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	sum = Add(num1, num2);
//	sum = Add(a, b);
//	printf("sum=%d\n", sum);//库函数
//	return 0;
//}
//数组
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };//定义一个存放10个整数数字的数组
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	printf("%d\n", arr[0]);//下标的方式访问元素
//	return 0;
//}
//操作符
//%取模 
//算术操作符
//int main()
//{
//	int a = 5 / 2;//商
//	int b = 5 % 2;//%取余数
//	printf("%d\n", b);
//	printf("%d\n", a);
//	int c =b  << 2;//int占4个字节，32个比特位—表示将32个比特位向左移动两个位置
//	int d = b >> 2;//向右移动
//	printf("%d\n", d);
//	printf("%d\n", c);
//
//}
//二进制位操作
//&按位或
//|按位或
//^按位异或
//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	int c = a&b;//按位或，两个都是真才是真-001
//	int d = a | b;//按位与，两个中有一个是真就是真的——111
//	int e = a^b;//对应的二进制位相同，则为0。对应的二进制位相异，则为1
//	printf("%d\n", d);
//	printf("%d\n", c);
//	printf("%d\n", e);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	a = 20;//赋值
//	//==判断是否相等
//	a = a + 10;
//	a = a - 20;
//	a = a & 2;
//	//单目操作符
//	//双目操作符
//	//三目操作符//
//	int a = 10;//在十进制中0为假，非0为真，二进制中0为假，1为真
//	int b = -a+15;
//	int c = +3;
//	int arr[10] = { 0 };//10个整形元素的数组
//	int sz = 0;
//	printf("%d\n", sizeof(arr));//10*sizeof(int)=40
//	//计算数组元素个数
//	//个数=数组总大小/每个元素的大小
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz=%d\n", sz);
//	printf("%d\n", a);
//	printf("%d\n", !a);//感叹号就是将真变成假，假变成真
//	printf("%d\n", b);
//	printf("%d\n", c);
//	printf("%d\n", sizeof(a));//可以省略里边的(),当里边是变量名的时候
//	printf("%d\n", sizeof(int));//sizeof计算的是变量/或者类型所占空间大小，单位是字节—需要头文件#include  <string.h>
//
//	return 0;
//		
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//	{
//		int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);//括号一定是英文下的括号
//	if (a>b )
//		printf("%d\n", a);
//else
//printf("%d\n", b);
//return 0;
//}
//作业
//char ch[10] = "hello bit";//hello bit这是九个字符在加\n就是十个字符—正好可以放进去
//
//#include <stdio.h>
//
//int Max(int x , int y)
//{if (x > y)
//return x;
//else
//return y;
//}
//int main()
//{
//int num1 = 0;
//int num2= 0;
//int max;
//scanf("%d%d", &num1, &num2 );
//max = Max(num1, num2);
//printf("%d\n", max);
//return 0;
//}
//#include <stdio.h>
//#include <string.h >
//int main()
//{
//	int a = 10;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };//数组里边每个元素的类型是整形
//	int b;
//		printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(arr));//数组的大小，有7*4个字节—7*4*8个二进制位
//	b = sizeof(arr) / sizeof(a);//元素个数
//	printf("%d\n", b);
//	return 0;
//}
//#include <stdio.h>
//int main()
//	int a = 0;
//	int b = ~a;
//	//按位取反（二进制）
//	//1010~之后为0101
//	printf("%d\n", b);//打印的是这个数的原码
//	//原码，反码，补码
//	//负数在内存中存储的时候，存储的是二进制的补码
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001//第一个1表示符号位
//}

//{
//	int a = 10;
////	int b = a++;//先使用再++—a=1，b=0
//	//int b = ++a;//先++再使用—a=1， b=1.
//	//int b = a--;//先赋值然后在--
//	int b = a--;
//	printf("a=%d b=%d\n", a, b);
//
//}
//强制类型转换
//{
//	int a = (int)3.14;
//}
//关系操作符
//大于等于>=，<=  小于等于

//!=用于测试不相等
//==用于测试相等

//0表示假，非零表示真
//&&逻辑与，||逻辑或
//{	int a = 0;
//	int b = 5;
//	int c = a && b;//和的关系
//	int d = a || b;//或的关系
//	printf("c=%d\n", c);
//	printf("d=%d\n", d);
//	return 0;
//}
//条件操作符
//{
//	int a = 100;
//	int b = 20;
//	int max;
//	max = (a > b ? a : b);//三目操作符—a>b若成立那么运行第二个，若a<b成立那么运行第三个—exp1？
//	printf("%d\n", max)
//		;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return 0;
//}
//int main()
//{
//	int a = a;
//	int b = 20;
//	int sum = Add(a, b);//函数调用操作符
//	return 0;
//}
//	int arr[10] = { 0 };
//	//arr[4];//下标引用操作符

//操作符& *,-> .
//[1][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]//第一位是1表示一个负数
//[0][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]//在内存中是0表示正数
//原码-->反码-->补码
//只要是整数，内存中存储的都是二进制的补码
//正数--原码，反码，补码相同
//负数--存的是补码，
//原码：按照正负写出的二进制序列
//反码：原码的符号位变，其他位按位取反得到的
//补码：反码加1
//如-2
//原码：100000000000000000000000000000000010
//反码：111111111111111111111111111111111101
//补码：111111111111111111111111111111111110
//常见关键字
//int ,float,auto(自动）,struct(结构体关键字），static(静态的），typedef(类型定义-类型重定义），union(联合体），void（空），volatile,while
//关键字不可以与符号名重复
//auto int//局部变量都是自动变量
//计算机存储数据——寄存器，高速缓存，内存，硬盘
//寄存器访问速度最快，一次减少，而容量是依次增大的
//寄存器—register:访问速度最快，如果要多次使用
//register int a = 10; (根据编译器看是不是要把这个放到寄存器中，这个只是建议)
//int a = 10;//int定义的符号是有符号的
//signed int a = 8;//有符号的
//unsigned int a = -1;//无符号的，定义，即使他有符号
////例如typedef
////将unsigned int重命名为uint_32,所以uint_32也是一个类型名
//typedef unsigned int uint_32;
//int main()
//{
//
//	//观察num1和num2,这两个变量的类型是一样的
//	unsigned int num1 = 0;
//	uint_32 num2 = 0;
//
//}
//static关键字的使用

//void test()
//{
///*	int a = 1;*/
//	//a进来的时候创建，出去的时候销毁
//	static int a = 1;//是一个静态的局部变量,有static就不销毁了-被static修饰会延长周期变量的生命周期   
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//1、static修饰局部变量的时候
//局部变量生命周期边长
//2、static修饰全局变量
//改变了变量的作用域—让静态的全局变量是只能在自己所在的源文件内部使用—出了源文件就没法使用了   
//int main()
//{
//	extern int  g_val;//声明外部符号
//	printf("%d\n", g_val);
//}
//要想用得声明Add——声明
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//
//}
//定义常量和宏
//#include <stdio.h>
///*#define Max 100*///1、#define定义的标识符常量
////2、#define 可以定义宏—带参数
//int Max(int x, int y)//函数的方法
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////宏的定义
//#define MAX(X,Y)(X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//	//int a = Max;
//
//}
//指针
//如何产生地址—比如说是32位的操作系统
//32位表示32根地址线/数据线
//那么就有正电和负电之分
//         1     0
//	寄存器：	 如果每一个地址存放的是一个比特位
//	00000000000000000000000000000000
//	00000000000000000000000000000001
//	00000000000000000000000000000010
//	 .......
//	11111111111111111111111111111111
//		 这样子共有2的32次方个地址=0.5gb
//		 但是我们一般的内存都是4g
//		 所以在这里应该是一个地址存储一个字节
//		 0.5*8=4gb
//#include <stdio.h>
//int main()
//{
//	int a = 10;//取四个字节—在内存中创建了一个变量，名字叫a
//	//&a取地址
//	//printf("%p\n", &a);
//	int* p = &a;//取地址—把a的地址存起来，指针的类型是int*--指向变量的a是int ,这个*放在这里是语法形式——没有什么实际的价值
//	/*printf("%p\n", p);*/
//	//有一种变量是用来存放地址的—指针变量
//	*p = 20;//解引用操作符-直接把a变成了20——这颗*放到这里是操作符—解引用指针变量p的
//	printf("a=%d", a);
//}
	//double d = 3.14;
	//double *p = &d;
	//*p = 6.18;
	//printf("%lf\n", *p);
	//printf("%lf\n", d);
	//printf("%d\n",sizeof(p));//指针变量在32位的平台上是4个字节，指针变量在64位的平台上是8个字节
	//printf("%d\n", sizeof(d));//double类型会占用8个字节
	//printf("%d\n", sizeof(short*));
	//printf("%d\n", sizeof(int *));
	//printf("%d\n", sizeof(char*));
	//printf("%d\n", sizeof(double *));
//	char ch = 'w';
//char *pc = &ch;
//*pc = 'a';
//printf("%c\n", ch);
//printf("%d\n", sizeof(pc));//指针里边存储地址，存储32个比特位，除8就是每个指针占4个字节
//return 0;
//}
//结构体 
//人=名字+身高+年龄+身份号码
//书名=作者+出版社+定价+书号
//复杂对象—结构体—我们自己创造出来的一种类型
//创建一个结构体类型
//#include <string.h>
//struct  Book
//{
//	char name[20];//c语言程序设计
//	short price;//55
//};//这个;不可缺少
//int main()
//{
//	struct Book b1 = { "C语言程序设计", 55 };
//	
//	strcpy(b1.name, "c++");//strcpy-string copy-字符串拷贝-库函数-string.h//改变字符数组的名字
//	printf("%s\n", b1.name);
	/*printf("书名：%s\n", b1.name);
	printf("价格：%d元\n", b1.price);
	b1.price = 15;
	printf("修改后的价格：%d元\n", b1.price);*/
	/*struct Book* p = &b1;*/
	//利用指针打印出书名和价格
	/*printf("%s\n", (*p).name);
		printf("%d\n", (*p).price);
		printf("%s\n", p->name);
		printf("%d\n", p->price);*/
		//两种写法. 结构体变量.成员
		//-> 结构体指针->成员


//struct ren
//{
//	char xuehao[20];
//	char name[10];
//	char class[10];
//
//
//};
//int main()
//{
//	struct  ren a1 = { "201916101104", "陈兆昊", "测绘193" };
//	printf("%s\n", a1.name);
//	printf("%s\n", a1.class );
//	printf("%s\n", a1.xuehao);
//}
//分支和循环语句
//三种结构
//1.顺序结构
//2.选择结构
//3.循环结构
//每一条语句结束之后需要加分号
//多分支
//if （表达式1）
//语句1;

//int main()
//{
//	if (-7)//在c语言中0表示假，其他表示真
//		printf("hehe");
//}
//else if (表达式2)
//语句2;
//else
//语句3;
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a >= 18 && a <50)//if后边要放圆括号的
//		printf("成年人");
//	else if (a >=60&&a<100)
//		printf("老年人");
//	else if (a < 60 && a>50)
//		printf("成年人之后");
//	else if (a>0 && a < 18)
//	{
//		printf("%d岁是未成年人\n",a);
//		printf("未成年人是不许谈恋爱的");//一个大括号是一个代码块
//	}
//	else
//	printf("未知");
//		
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)//悬空if的问题，if只与他最近的else相匹配
//			printf("hehe\n");
//	}
//		else
//			printf("haha\n");
//	
//}
//int main()
//{
//	int num = 4;
//	//if (num = 5)//一个=是赋值，两个==才是判断相等---常量最好放在左边
//		if (5==num)
//	{
//		printf("呵呵\n");
//	}
//	return 0;
//}

//练习
//1、输出1-100之间的奇数
//2、判断一个数是否为奇数
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	if (a % 2 == 1)
//		printf("%d为奇数\n", a);
//	else
//		printf("%d为偶数\n", a);
//	return 0;
//}

	//double  a = 2;
	//a += 3;//a+=3表示a+3
	//a /= 2;//这是赋值，从上往下顺序

	//printf("%lf\n", a);
	//	int i = 0;
	//	while (i <= 100)
	//	{
	//		if (i % 2 != 1)
	//			printf("%d ", i);
	//		i++;
	//	}
	//	return 0;
	//}//妙哉妙哉
	//
	//switch case语句是一种多分支语句
	//	int day = 0;
	//	int n = 1;
	//	scanf("%d", &day);
	//	switch (day)//必须是整形表达式
	//	{
	//	//case 1://case后边的也必须是整形，也不能是变量
	//	//case 1.0://错
	//	case 1 + 0://可以这么写
	//	/*case n = 1:*///错—case后边必须是整形常量表达式
	//		printf("星期一\n");
	//		break;
	//	case 2:
	//		printf("星期二\n");
	//		break;
	//	case 3:
	//		printf("星期三\n");
	//		break;
	//	case 4:
	//		printf("星期四\n");
	//		break;
	//	case 5:
	//		printf("星期五\n");
	//		break;
	//	case 6:
	//		printf("星期六\n");
	//		break;
	//	case 7:
	//		printf("星期日\n");
	//		break;
	//
	//
	//	}
	//}
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3://case后边的break可以不放break
//	case 4:
//	case 5://你输5表示从这个地方进来，没有break就接着往下执行
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日");
//		break;
//	default://可有可无
//		printf("输入错误\n"); 
//		break;
//	}
//}

//	int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++, n++;
//			break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", n, m);
//	return 0;
//}
//
//while循环

//{
//	int i = 0;//初始化
//	while (i < 10)//判断
//		//
//		i++;//调整
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			/*break;*///如果以后在某一个循环里找到了一个想要的结果那么就可以使用break;跳出循环,用于永久终止循环的
//			continue;//continue是用于终止本次循环的，也就是本次循环中的continue后边的代码不会再执行，而是直接跳转到while语句的判断部分。进行下一次循环的入口判断
//		printf("%d\n", i); 
//		i++;
//	}
//	/*while (1)
//		printf("hehe\n");*/
//	return 0;
//}

//int main()
//{
//	int ch = 0;//ctrl+z结束程序
//	//EOF-end of file->-1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);//getchar表示输入函数—putchar表示输出函数
//	}

//	int ch = getchar();//getchar()表示输入一个字符，这句话的意思是输入一个字符，赋值给ch
//	putchar(ch);//putchar()表示输出一个字符，和printf(）一样
//	printf("%c\n", ch);
//}
//#include <stdio.h>
//int main()
//{
//	int ch = 0;
//int ret = 0;
//char password[20] = { 0 };
//printf("请输入密码\n");
//scanf("%s", password);//输入函数--输入缓冲区--输入密码并存放于passsword数组中——scanf()函数读取空格前边的东西
////你会输入回车--\n,这样子输入缓冲区还剩一个\n,下边getchar(),就出来了
////解决
////getchar();如果是123456 12就不行了
//while ((ch = getchar()) != '\n')//很重要
//{
//	;
//}
//
//printf("请确认(Y/N)\n");
//ret = getchar();//输入函数--从输入缓冲区里拿
//if (ret == 'y')
//{
//	printf("确认成功\n");
//}
//else
//{printf("放弃确认\n");
//}
//return 0;
//
//}
//输入一个字符，输出满足相应条件的字符
//int main()
//
//{int ch = 0;
//	while ((ch = getchar()) != EOF)//只有在ctrl z的时候在终止程序—不输入ctrl z的时候永远不会停止循环
//	{
//		if (ch<'0' || ch>'9')//||表示或
//			continue;//如满足条件直接，直接跳过后边的代码，进行条件的判断，只有在输入大于0，<9的时候才会往下进行
//		putchar(ch);
//	}
//	return 0;
//}
//for循环使用的最多的
//for (表达式1; 表达式2; 表达式3)
//表达式1;初始化部分
//表达式2;条件判断部分
//表达式3；调整部分
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)//初始化、判断、调整集中在一起
//	{
//		if (i == 5)
//			continue;//for循环里也可以有continue，也是后边都不执行了，直接到判断，i<10,然后i++
//		break;//就是跳出for语句
//		printf("%d\n", i);
//	}
//}
//要是用while语句
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
//一些建议
//1、不可在for循环体内修改变量，防止for失去控制
//int main()
//{
//	int a = 0;
//	for (a = 1; a < 10; a += 2)
//	{
//		if (a =5)//不要再for循环体内修改变量
//			printf("haa\n");
//		else
//			printf("hehe\n");
//
//	}
//}
//建议2
//2:建议for循环的控制变量的取值采用"前闭后开区间"的写法
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d", arr[9]);//注意arr[9]=10;
//	int  i = 0;
//	for (i = 0; i < 10; i++)//建议采用前闭后开的写法
////这里的10表示某种意义——10次循环——10次打印——10个元素 		
//	{
//		printf("%d", arr[i]);
//	}
//}
//变种1：
//int main()
//{
//	for (;;)
//		//for循环的初始化、调整、判断都可以被省略
//		//for循环的判断部分，如果被省略，按判断条件就是恒为：正
//		//如果不是非常熟练，不要随便省略相关的代码
//	{
//		printf("hehe\n");
//	}
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (j=0; j < 10; j++)//至于为什么这个地方会输出100个hehe，i=1时进入循环，里边循环完一遍跳出来，有i=2,里边在循环一边，共一百个
//		//这个地方不可以省略j=0，因为运行完第一次，这个j就等于10，出了内循环之后，i=2,得到的还会是j=10，省略之后会有10个hehe出现
//		{
//			printf("hehe");
//		}
//	}
//}
//变种2
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; x++, y++)//这样写是可以的注意注意！
//	{
//		printf("hehe\n");
//
//	}
//
//	return 0;
//}
//笔试题
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//这里的判断语句，是赋值诶！，0表示假，非0表示真，直接就不进去循环
//		//若是变成k=非零数，那么这个循环就会无休无止，一直出不来，然后你的风扇就会呜呜的转
//		k++;
//	printf("%d %d\n", i, k);
//	return 0;
//}
//最小公约数
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (m%n)
//	{
//		r = m%n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//打印1000到2000之间的闰年
//1、判断能被4整除却不能被100整除是闰年
//2、能被400整除是闰年
//#include <stdio.h>
//int main()
//{
//
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)//&&表示和
//		
//		{
//			printf("%d ", year);
//			count++;
//		}
//			else if (year % 400 == 0)
//			{
//			printf("%d", year);
//			count++;
//			}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//换一种写法,选择嵌套的方式

//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0) )|| (year % 400 == 0))
//		{
//			printf("%d", year);
//			count++;
//		}
//	}
//
//printf("\ncount%d\n", count);
//}
//打印素数
//#include<math.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		//		//判断i是否为素数
//		//		//素数判断规则
//		//		//1、试除法
//		//		for (j = 2; j < i; j++) //改写这一条代码
//		for (j = 2; j <= sqrt(i); j++)
//			//优化一下算法  数=a*b
//			//a和b中至少有一个数字<=开平方i
//
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//	 
		//算法题
#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)break;//当条件满足时，break表示从代码中跳出去
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;//继续运行代码，返回if语句
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}
//
//问1-100中有多少个9
//int main()
//{
//	int i = 0;
//		int count = 0;
//		for (i = 1; i <= 100; i++)
//		{
//			/*if ((i % 10 == 9) || (i / 10 == 9))*///逻辑运算符：或
//				//出现问题99中明明有两个9，但是在i%10==9通过之后，不在运行i/10=9
//				//相当与if......else if
//				//正确改写代码
//			if (i % 10 == 9)
//				count++;
//					if (i/10==9)//这样子两个if是并列关系
//					count++;
//		}
//		printf("count=%d\n", count);
//}
//求解1—1/2+1/3到-1/100
//int main()
//{double i = 0.0;
//double sum = 0.0;
//int a = 1;
//for (i = 1; i <= 100; i++)
//{
//	sum += a*(1 / i);
//	a = -a;
//}
//printf("%lf\n", sum);
//return 0;
//}
//比较十个数中的最大值
//int main()
//{
//	int arr[] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i =1; i < sz; i++)//计算数组中元素的个数
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//
//printf("max=%d\n", max);
//return 0;
//}
// 在程序中输出9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);//d和%之间有2的话表示打印两位数右对齐，-2d表示向左左对齐
//			
//		}
//		printf("\n");
//	}
//	
//}
//do....while循环
//do语句的语法

//输出1—10
//int main()
//{
//	int i = 1;
//	do
//	{
//	//	if (i == 5)
//	//		//break;//break表示跳出循环
//	//	continue;//continue表示之后的代码不执行啦，跳过代码，再进入条件
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//}
//int main()
//{
//	int i = 1  ;
//	int a = 1;
//	int ret = 1;
//	scanf("%d", &a);
//	for (i = 1; i <= a; i++)
//	{
//		ret = ret*i;
//	}
//	printf("ret=%d\n", ret);
//	
//}
//计算1的阶乘+2的阶乘一直加到10的阶乘的和
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int ret = 1;
//	int sum = 0;
//	for (a = 1; a <= 3; a++)
//	{
//		ret = 1;
//		for (i = 1; i <= a; i++)
//		{
//			
//			ret = ret*i;
//		}
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//
//}
//第二种算法
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret*n;
//		sum = sum + ret;
//	}printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int arr[] = {1,3,5,6,4,7,3,8,3,10,11,22 };
//	int k = 22;
//	//写一个代码，在arr数组（有序的）中找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到啦,下标是：%d\n", i);
//			break;
//		}
//	}
//if (i == sz)
//printf("找不到\n");
//return 0;
//}
//二分查找法,查找的得是有序的数组
//int main()
//{
//
//	int left = 0;
//	char arr[] = { 1,2,22, 3, 4, 5, 6, 7, 8, 9 };
//	int a = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int right = sz - 1;//右下标
//	scanf("%d", &a);
//	while (left <= right)//只有left<=right时才可以查找
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < a)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > a)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到啦，下标是%d\n", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("找不到");
//		}
//	}
//}
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<Windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	/*int right = sizeof(arr1) / sizeof(arr1[0])-2;*/
//	//为什么要减2呢：
//	//如char arr[]="abc";
//	//里边的元素有[a,b,c,/n]
//	//下标为[0,1,2,3],使用sizeof(arr)/sizeof(arr[0])得到的是总元素个数，要得到“c”的下标不得减2嘛
//	//上边//	char arr[] = { 1,2,22, 3, 4, 5, 6, 7, 8, 9 };
////	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
////	int right = sz - 1;//右下标
////这个数组没有最后边的"/n",char arr[]="welcome"是字符串，有/n
//	int right = strlen(arr1) - 1;//这个地方就是遇到/n,就停止，得到有多少个字符
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//想要感受变化，让程序休息一秒
//		Sleep(1000);//注意Sleep中的S必须要大写
//		system("cls");//执行系统命令的一个函数：cls清空屏幕
//		left++; right--;
//	}
//	printf("welcome to bit!!!!!!");
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i = 0;
//	int password[10] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//				break;
//		}
//		else{
//			printf("密码错误\n");
//		}
//		if (i == 3)
//		{
//			printf("密码错误，请重新退出程序\n");
//			return 0;
//
//		}
//
//	}
//}
//猜数字游戏
//1:电脑会生成一个随机数
//2；猜数字

//#include<stdlib.h>
//#include<stdio.h>
//#include<time.h>
//void menu()
//{
//	printf("************************************\n");
//	printf("****    1.play      0.exit      ****\n");
//	printf("************************************\n");
//}
////RAND_MAX是介于0—32767之的
//void game()
//{//时间戳的概念：当前计算机的时间-计算机的起始时间（1970.1月1日0.0.0）=(****秒）
//	int ret = 0;
//	int guess = 0;
//		ret=rand()%100+1;//生成1—100之间的随机数
//	/*printf("%d\n", ret);*/
//		while (1)
//		{
//			printf("请猜数字:>");
//			scanf("%d", &guess);
//			if (guess > ret)
//			{
//				printf("猜大了\n");
//			}
//			else if (guess < ret)
//			{
//				printf("猜小了\n");
//			}
//			else
//			{
//				printf("恭喜你，猜对啦！");
//				break;
//			}
//		}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do{
//		menu();
//			printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//goto语句,尽量不使用这个语句
//int main()
//{//goto语句会打乱程序的逻辑结构
//	again:
//	printf("hello bit\n");
//	goto again;
//	return 0;
//}
//goto语句的真正适合的场景如下：多次循环的跳出，goto最好有触发条件
//for (......)
//for (......)
//{
//	for (......)
//	{
//		if (disaster)
//			goto error;
//	}
//}
//.....
//error:
//if (disaster)
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char input[] = { 0 };
	//shundown -s -t 60
	//system()-执行系统命令的
	system("shutdown -s -t 60");
	again:
	printf("请注意，你的电脑在十分钟内关机，请输入：我是猪，就取消关机\n请输入>:");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)//比较两个字符串
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
		return 0;
}