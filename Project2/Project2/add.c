#define _CRT_SECURE_NO_WARNINGS
/*static int g_val = 2020;*///全局变量,加上static会出现无法解析外部符号
//定义一个函数
 static int Add(int x, int y)
	 //3、static修饰的函数改变了函数的链接属性
//外部的连接属性—外部的其他源文件，只要声明一下就可以使用
//当被static修饰函数改变了函数的链接属性
 {
	int z = x + y;
	return z;
}