//{
//	printf("hehe\n");//�����������
//	//����Ļ�����hehe
//	//������print function��printf����ӡ����-�ǿ⺯��-��c���Ա����ṩ���ĺ�������Ҫ���к�#include
//		return 0;//����0 ��ǰ��ǰ���Ӧint main  void main �ǹ�ʱ��д��
//}
//int main����
//{
//	char ch = 'A';
//	printf("%c\n", ch);
//	//��ӡ�ַ���ʽ������
//{	int age = 20;
//printf("%d\n", age);
//getchar();
//%d��ӡ����ʮ��������
//	//%d����ӡ����
//	//%c����ӡ�ַ�
//	//%f����ӡ�������֡���ӡС��
//	float f = 5.0;//�����������ڴ�����ռ�
//	printf("%f\n", f);
//	double d = 3.14;
//	printf("%lf\n", d);
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(char));//���Ὺ��1���ֽڵĿռ䡪8������λ
//	printf("%d\n", sizeof(short)); //����2���ֽڣ�short�Ƕ�����-2^16=65535
//	printf("%d\n", sizeof(int));  //4���ֽ�
//	printf("%d\n", sizeof(long));//8���ֽڻ���4���ֽڣ�ֻҪ��>=int�Ϳ���
//	printf("%d\n", sizeof(float));//4���ֽ�
//	printf("%d\n", sizeof(double));//8���ֽ�
//	//bit-����λ������е���С��λ-���һ��2����λ��
//	//byte-�ֽڡ�һ���ֽ�8������λ�Ĵ�С����10110011
//	//kb����1024��byte
//	short  age = 20;//���ڴ����������ֽ�=16��bit�������ͼӱ�����=����;
//	float weight = 95.6f;//���ڴ������ĸ��ֽڴ��С��
//
//	//��ʦ��ʼ������
//#include <stdio.h>
//	int num1 = 20 //ȫ�ֱ����������ڴ����{}֮���
//		int main()
//	{
//		int num1 = 10;//������{}֮�ڵ�
//		return 0;
//	}
//	//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ��������ᣬ����bug
//	//���ֲ�������ȫ�ֱ�����������ͬʱ���ֲ���������
//
//	//�����������
//	int sum1 = 0;
//	int sum2 = 0;
//	int sum = 0;
//	//�������ݡ�ʹ�����뺯��scanf
//	scanf("%d%d", &sum1, &sum2);//&��ȡ��ַ����
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
//���������������������-ȫ�ֱ����������̶��ǿ��Եģ��ֲ�����ֻ�������{}
//#include <stdio.h>
//int main()
//{
//	//int num = 521;
//	extern int a;
//	printf("�Ұ���=%d\n", a ); //������
//	getchar();
//		return 0;


//�ֲ��������������ڽ�{��ʼ����}����
//ȫ�ֱ������������ڣ���main����������������һ���ģ�Ҳ�����������������
//#define _CRT_SECURE_NO_WARNINGS//scanf��strcpy-strlen-strcat-����ȫ�ġ�����Դ�ļ��ĵ�һ��
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d%d", &a, &b);//���뺯��10
//	sum = a + b;
//	printf("��=%d\n", sum);
//	getchar();
//		return 0;
//}
//����
//int main����
//{
//	int num = 4;
//	3;
//	100;
//	3.14;//���泣��
//}

//int main()
//{
//	const int  a = 4;//const�����ԣ����������һ��ֵ�ı����const���Ρ�const���ε��ǳ�����
//printf("%d\n", a);
//a = 5;
//printf("%d\n", a);
//getchar();
//return 0;
//}
////ö�ٳ���-eunm
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
////#define����ı�ʶ������
//#define MAX 10
//�ַ���+ת���ַ�+ע��
//#define _crt_secure_no_warnings
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//	printf("%d\n", strlen("c:\test\342\test.c"));
//	printf("%c\n", '\132');//\���֡���ʾ8�����ַ�
//	printf("%c\n", '\x61');//\x���ֱ�ʾʮ������
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ�𣿣�1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//	return 0;
//}
//		


//	char arr1[] = "abc";//����-\0���������ַ����ڵ�
//	char arr2[] = { 'a', 'b', 'c','\0'};//\0���ַ����Ľ�����־
//printf("%s\n", arr1);
//printf("%s\n", arr2);
//char arr1[] = "abc";
//char arr2[] = { 'a', 'b', 'c',0 };
//printf("%d\n", strlen(arr1));
//printf("%d\n", strlen(arr2));//strlen�����ַ�������
//return 0;
//����Ĵ�С��Ҫ�ó���������
//int n = 10;
//int arr[n] = { 0 };//�����������Ӷ���
//��һ����3���ڶ������ֵ��abcֱ������\0-�ڼ����ַ������ȵ�ʱ����\0��\0��ת���ַ�������ԭ������˼ת����
//���ݴ洢�������ʱ�򣬴洢���Ƕ����ƣ��ڴ洢�ַ���ʱ����ַ����롪��ASCLL��
//a-97
//A-65��
//ת���ַ�

//{
//	printf("abc\n");
//	printf("C:\\test\\32\\test.c\n");//\tˮƽ�Ʊ���൱��tab 
//	printf("%c\n", '\'');
//	//\n�ǻ���
//	//\\����б�ܿ��Ա��ԭ������˼
		//return 0;
//#include <stdio.h>
//#include<string.h>

//{
//	int line = 0;
//	printf("�������");
//	while (line < 2000000)
//	{
//		printf("дһ�д���:%d\n",line);
//		line++;
//	}
//	printf("��offer");
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;//�Զ��庯��
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
//	printf("sum=%d\n", sum);//�⺯��
//	return 0;
//}
//����
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };//����һ�����10���������ֵ�����
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	printf("%d\n", arr[0]);//�±�ķ�ʽ����Ԫ��
//	return 0;
//}
//������
//%ȡģ 
//����������
//int main()
//{
//	int a = 5 / 2;//��
//	int b = 5 % 2;//%ȡ����
//	printf("%d\n", b);
//	printf("%d\n", a);
//	int c =b  << 2;//intռ4���ֽڣ�32������λ����ʾ��32������λ�����ƶ�����λ��
//	int d = b >> 2;//�����ƶ�
//	printf("%d\n", d);
//	printf("%d\n", c);
//
//}
//������λ����
//&��λ��
//|��λ��
//^��λ���
//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	int c = a&b;//��λ�����������������-001
//	int d = a | b;//��λ�룬��������һ�����������ġ���111
//	int e = a^b;//��Ӧ�Ķ�����λ��ͬ����Ϊ0����Ӧ�Ķ�����λ���죬��Ϊ1
//	printf("%d\n", d);
//	printf("%d\n", c);
//	printf("%d\n", e);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	a = 20;//��ֵ
//	//==�ж��Ƿ����
//	a = a + 10;
//	a = a - 20;
//	a = a & 2;
//	//��Ŀ������
//	//˫Ŀ������
//	//��Ŀ������//
//	int a = 10;//��ʮ������0Ϊ�٣���0Ϊ�棬��������0Ϊ�٣�1Ϊ��
//	int b = -a+15;
//	int c = +3;
//	int arr[10] = { 0 };//10������Ԫ�ص�����
//	int sz = 0;
//	printf("%d\n", sizeof(arr));//10*sizeof(int)=40
//	//��������Ԫ�ظ���
//	//����=�����ܴ�С/ÿ��Ԫ�صĴ�С
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz=%d\n", sz);
//	printf("%d\n", a);
//	printf("%d\n", !a);//��̾�ž��ǽ����ɼ٣��ٱ����
//	printf("%d\n", b);
//	printf("%d\n", c);
//	printf("%d\n", sizeof(a));//����ʡ����ߵ�(),������Ǳ�������ʱ��
//	printf("%d\n", sizeof(int));//sizeof������Ǳ���/����������ռ�ռ��С����λ���ֽڡ���Ҫͷ�ļ�#include  <string.h>
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
//	scanf("%d%d", &a, &b);//����һ����Ӣ���µ�����
//	if (a>b )
//		printf("%d\n", a);
//else
//printf("%d\n", b);
//return 0;
//}
//��ҵ
//char ch[10] = "hello bit";//hello bit���ǾŸ��ַ��ڼ�\n����ʮ���ַ������ÿ��ԷŽ�ȥ
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
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };//�������ÿ��Ԫ�ص�����������
//	int b;
//		printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(arr));//����Ĵ�С����7*4���ֽڡ�7*4*8��������λ
//	b = sizeof(arr) / sizeof(a);//Ԫ�ظ���
//	printf("%d\n", b);
//	return 0;
//}
//#include <stdio.h>
//int main()
//	int a = 0;
//	int b = ~a;
//	//��λȡ���������ƣ�
//	//1010~֮��Ϊ0101
//	printf("%d\n", b);//��ӡ�����������ԭ��
//	//ԭ�룬���룬����
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001//��һ��1��ʾ����λ
//}

//{
//	int a = 10;
////	int b = a++;//��ʹ����++��a=1��b=0
//	//int b = ++a;//��++��ʹ�á�a=1�� b=1.
//	//int b = a--;//�ȸ�ֵȻ����--
//	int b = a--;
//	printf("a=%d b=%d\n", a, b);
//
//}
//ǿ������ת��
//{
//	int a = (int)3.14;
//}
//��ϵ������
//���ڵ���>=��<=  С�ڵ���

//!=���ڲ��Բ����
//==���ڲ������

//0��ʾ�٣������ʾ��
//&&�߼��룬||�߼���
//{	int a = 0;
//	int b = 5;
//	int c = a && b;//�͵Ĺ�ϵ
//	int d = a || b;//��Ĺ�ϵ
//	printf("c=%d\n", c);
//	printf("d=%d\n", d);
//	return 0;
//}
//����������
//{
//	int a = 100;
//	int b = 20;
//	int max;
//	max = (a > b ? a : b);//��Ŀ��������a>b��������ô���еڶ�������a<b������ô���е�������exp1��
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
//	int sum = Add(a, b);//�������ò�����
//	return 0;
//}
//	int arr[10] = { 0 };
//	//arr[4];//�±����ò�����

//������& *,-> .
//[1][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]//��һλ��1��ʾһ������
//[0][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]//���ڴ�����0��ʾ����
//ԭ��-->����-->����
//ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
//����--ԭ�룬���룬������ͬ
//����--����ǲ��룬
//ԭ�룺��������д���Ķ���������
//���룺ԭ��ķ���λ�䣬����λ��λȡ���õ���
//���룺�����1
//��-2
//ԭ�룺100000000000000000000000000000000010
//���룺111111111111111111111111111111111101
//���룺111111111111111111111111111111111110
//�����ؼ���
//int ,float,auto(�Զ���,struct(�ṹ��ؼ��֣���static(��̬�ģ���typedef(���Ͷ���-�����ض��壩��union(�����壩��void���գ���volatile,while
//�ؼ��ֲ�������������ظ�
//auto int//�ֲ����������Զ�����
//������洢���ݡ����Ĵ��������ٻ��棬�ڴ棬Ӳ��
//�Ĵ��������ٶ���죬һ�μ��٣������������������
//�Ĵ�����register:�����ٶ���죬���Ҫ���ʹ��
//register int a = 10; (���ݱ��������ǲ���Ҫ������ŵ��Ĵ����У����ֻ�ǽ���)
//int a = 10;//int����ķ������з��ŵ�
//signed int a = 8;//�з��ŵ�
//unsigned int a = -1;//�޷��ŵģ����壬��ʹ���з���
////����typedef
////��unsigned int������Ϊuint_32,����uint_32Ҳ��һ��������
//typedef unsigned int uint_32;
//int main()
//{
//
//	//�۲�num1��num2,������������������һ����
//	unsigned int num1 = 0;
//	uint_32 num2 = 0;
//
//}
//static�ؼ��ֵ�ʹ��

//void test()
//{
///*	int a = 1;*/
//	//a������ʱ�򴴽�����ȥ��ʱ������
//	static int a = 1;//��һ����̬�ľֲ�����,��static�Ͳ�������-��static���λ��ӳ����ڱ�������������   
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
//1��static���ξֲ�������ʱ��
//�ֲ������������ڱ߳�
//2��static����ȫ�ֱ���
//�ı��˱������������þ�̬��ȫ�ֱ�����ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�á�����Դ�ļ���û��ʹ����   
//int main()
//{
//	extern int  g_val;//�����ⲿ����
//	printf("%d\n", g_val);
//}
//Ҫ���õ�����Add��������
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
//���峣���ͺ�
//#include <stdio.h>
///*#define Max 100*///1��#define����ı�ʶ������
////2��#define ���Զ���ꡪ������
//int Max(int x, int y)//�����ķ���
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////��Ķ���
//#define MAX(X,Y)(X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//����
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//	//int a = Max;
//
//}
//ָ��
//��β�����ַ������˵��32λ�Ĳ���ϵͳ
//32λ��ʾ32����ַ��/������
//��ô��������͸���֮��
//         1     0
//	�Ĵ�����	 ���ÿһ����ַ��ŵ���һ������λ
//	00000000000000000000000000000000
//	00000000000000000000000000000001
//	00000000000000000000000000000010
//	 .......
//	11111111111111111111111111111111
//		 �����ӹ���2��32�η�����ַ=0.5gb
//		 ��������һ����ڴ涼��4g
//		 ����������Ӧ����һ����ַ�洢һ���ֽ�
//		 0.5*8=4gb
//#include <stdio.h>
//int main()
//{
//	int a = 10;//ȡ�ĸ��ֽڡ����ڴ��д�����һ�����������ֽ�a
//	//&aȡ��ַ
//	//printf("%p\n", &a);
//	int* p = &a;//ȡ��ַ����a�ĵ�ַ��������ָ���������int*--ָ�������a��int ,���*�����������﷨��ʽ����û��ʲôʵ�ʵļ�ֵ
//	/*printf("%p\n", p);*/
//	//��һ�ֱ�����������ŵ�ַ�ġ�ָ�����
//	*p = 20;//�����ò�����-ֱ�Ӱ�a�����20�������*�ŵ������ǲ�������������ָ�����p��
//	printf("a=%d", a);
//}
	//double d = 3.14;
	//double *p = &d;
	//*p = 6.18;
	//printf("%lf\n", *p);
	//printf("%lf\n", d);
	//printf("%d\n",sizeof(p));//ָ�������32λ��ƽ̨����4���ֽڣ�ָ�������64λ��ƽ̨����8���ֽ�
	//printf("%d\n", sizeof(d));//double���ͻ�ռ��8���ֽ�
	//printf("%d\n", sizeof(short*));
	//printf("%d\n", sizeof(int *));
	//printf("%d\n", sizeof(char*));
	//printf("%d\n", sizeof(double *));
//	char ch = 'w';
//char *pc = &ch;
//*pc = 'a';
//printf("%c\n", ch);
//printf("%d\n", sizeof(pc));//ָ����ߴ洢��ַ���洢32������λ����8����ÿ��ָ��ռ4���ֽ�
//return 0;
//}
//�ṹ�� 
//��=����+���+����+��ݺ���
//����=����+������+����+���
//���Ӷ��󡪽ṹ�塪�����Լ����������һ������
//����һ���ṹ������
//#include <string.h>
//struct  Book
//{
//	char name[20];//c���Գ������
//	short price;//55
//};//���;����ȱ��
//int main()
//{
//	struct Book b1 = { "C���Գ������", 55 };
//	
//	strcpy(b1.name, "c++");//strcpy-string copy-�ַ�������-�⺯��-string.h//�ı��ַ����������
//	printf("%s\n", b1.name);
	/*printf("������%s\n", b1.name);
	printf("�۸�%dԪ\n", b1.price);
	b1.price = 15;
	printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);*/
	/*struct Book* p = &b1;*/
	//����ָ���ӡ�������ͼ۸�
	/*printf("%s\n", (*p).name);
		printf("%d\n", (*p).price);
		printf("%s\n", p->name);
		printf("%d\n", p->price);*/
		//����д��. �ṹ�����.��Ա
		//-> �ṹ��ָ��->��Ա


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
//	struct  ren a1 = { "201916101104", "�����", "���193" };
//	printf("%s\n", a1.name);
//	printf("%s\n", a1.class );
//	printf("%s\n", a1.xuehao);
//}
//��֧��ѭ�����
//���ֽṹ
//1.˳��ṹ
//2.ѡ��ṹ
//3.ѭ���ṹ
//ÿһ��������֮����Ҫ�ӷֺ�
//���֧
//if �����ʽ1��
//���1;

//int main()
//{
//	if (-7)//��c������0��ʾ�٣�������ʾ��
//		printf("hehe");
//}
//else if (���ʽ2)
//���2;
//else
//���3;
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a >= 18 && a <50)//if���Ҫ��Բ���ŵ�
//		printf("������");
//	else if (a >=60&&a<100)
//		printf("������");
//	else if (a < 60 && a>50)
//		printf("������֮��");
//	else if (a>0 && a < 18)
//	{
//		printf("%d����δ������\n",a);
//		printf("δ�������ǲ���̸������");//һ����������һ�������
//	}
//	else
//	printf("δ֪");
//		
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)//����if�����⣬ifֻ���������else��ƥ��
//			printf("hehe\n");
//	}
//		else
//			printf("haha\n");
//	
//}
//int main()
//{
//	int num = 4;
//	//if (num = 5)//һ��=�Ǹ�ֵ������==�����ж����---������÷������
//		if (5==num)
//	{
//		printf("�Ǻ�\n");
//	}
//	return 0;
//}

//��ϰ
//1�����1-100֮�������
//2���ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	if (a % 2 == 1)
//		printf("%dΪ����\n", a);
//	else
//		printf("%dΪż��\n", a);
//	return 0;
//}

	//double  a = 2;
	//a += 3;//a+=3��ʾa+3
	//a /= 2;//���Ǹ�ֵ����������˳��

	//printf("%lf\n", a);
	//	int i = 0;
	//	while (i <= 100)
	//	{
	//		if (i % 2 != 1)
	//			printf("%d ", i);
	//		i++;
	//	}
	//	return 0;
	//}//��������
	//
	//switch case�����һ�ֶ��֧���
	//	int day = 0;
	//	int n = 1;
	//	scanf("%d", &day);
	//	switch (day)//���������α��ʽ
	//	{
	//	//case 1://case��ߵ�Ҳ���������Σ�Ҳ�����Ǳ���
	//	//case 1.0://��
	//	case 1 + 0://������ôд
	//	/*case n = 1:*///��case��߱��������γ������ʽ
	//		printf("����һ\n");
	//		break;
	//	case 2:
	//		printf("���ڶ�\n");
	//		break;
	//	case 3:
	//		printf("������\n");
	//		break;
	//	case 4:
	//		printf("������\n");
	//		break;
	//	case 5:
	//		printf("������\n");
	//		break;
	//	case 6:
	//		printf("������\n");
	//		break;
	//	case 7:
	//		printf("������\n");
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
//	case 3://case��ߵ�break���Բ���break
//	case 4:
//	case 5://����5��ʾ������ط�������û��break�ͽ�������ִ��
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��");
//		break;
//	default://���п���
//		printf("�������\n"); 
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
//whileѭ��

//{
//	int i = 0;//��ʼ��
//	while (i < 10)//�ж�
//		//
//		i++;//����
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			/*break;*///����Ժ���ĳһ��ѭ�����ҵ���һ����Ҫ�Ľ����ô�Ϳ���ʹ��break;����ѭ��,����������ֹѭ����
//			continue;//continue��������ֹ����ѭ���ģ�Ҳ���Ǳ���ѭ���е�continue��ߵĴ��벻����ִ�У�����ֱ����ת��while�����жϲ��֡�������һ��ѭ��������ж�
//		printf("%d\n", i); 
//		i++;
//	}
//	/*while (1)
//		printf("hehe\n");*/
//	return 0;
//}

//int main()
//{
//	int ch = 0;//ctrl+z��������
//	//EOF-end of file->-1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);//getchar��ʾ���뺯����putchar��ʾ�������
//	}

//	int ch = getchar();//getchar()��ʾ����һ���ַ�����仰����˼������һ���ַ�����ֵ��ch
//	putchar(ch);//putchar()��ʾ���һ���ַ�����printf(��һ��
//	printf("%c\n", ch);
//}
//#include <stdio.h>
//int main()
//{
//	int ch = 0;
//int ret = 0;
//char password[20] = { 0 };
//printf("����������\n");
//scanf("%s", password);//���뺯��--���뻺����--�������벢�����passsword�����С���scanf()������ȡ�ո�ǰ�ߵĶ���
////�������س�--\n,���������뻺������ʣһ��\n,�±�getchar(),�ͳ�����
////���
////getchar();�����123456 12�Ͳ�����
//while ((ch = getchar()) != '\n')//����Ҫ
//{
//	;
//}
//
//printf("��ȷ��(Y/N)\n");
//ret = getchar();//���뺯��--�����뻺��������
//if (ret == 'y')
//{
//	printf("ȷ�ϳɹ�\n");
//}
//else
//{printf("����ȷ��\n");
//}
//return 0;
//
//}
//����һ���ַ������������Ӧ�������ַ�
//int main()
//
//{int ch = 0;
//	while ((ch = getchar()) != EOF)//ֻ����ctrl z��ʱ������ֹ���򡪲�����ctrl z��ʱ����Զ����ֹͣѭ��
//	{
//		if (ch<'0' || ch>'9')//||��ʾ��
//			continue;//����������ֱ�ӣ�ֱ��������ߵĴ��룬�����������жϣ�ֻ�����������0��<9��ʱ��Ż����½���
//		putchar(ch);
//	}
//	return 0;
//}
//forѭ��ʹ�õ�����
//for (���ʽ1; ���ʽ2; ���ʽ3)
//���ʽ1;��ʼ������
//���ʽ2;�����жϲ���
//���ʽ3����������
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)//��ʼ�����жϡ�����������һ��
//	{
//		if (i == 5)
//			continue;//forѭ����Ҳ������continue��Ҳ�Ǻ�߶���ִ���ˣ�ֱ�ӵ��жϣ�i<10,Ȼ��i++
//		break;//��������for���
//		printf("%d\n", i);
//	}
//}
//Ҫ����while���
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
//һЩ����
//1��������forѭ�������޸ı�������ֹforʧȥ����
//int main()
//{
//	int a = 0;
//	for (a = 1; a < 10; a += 2)
//	{
//		if (a =5)//��Ҫ��forѭ�������޸ı���
//			printf("haa\n");
//		else
//			printf("hehe\n");
//
//	}
//}
//����2
//2:����forѭ���Ŀ��Ʊ�����ȡֵ����"ǰ�պ�����"��д��
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d", arr[9]);//ע��arr[9]=10;
//	int  i = 0;
//	for (i = 0; i < 10; i++)//�������ǰ�պ󿪵�д��
////�����10��ʾĳ�����塪��10��ѭ������10�δ�ӡ����10��Ԫ�� 		
//	{
//		printf("%d", arr[i]);
//	}
//}
//����1��
//int main()
//{
//	for (;;)
//		//forѭ���ĳ�ʼ�����������ж϶����Ա�ʡ��
//		//forѭ�����жϲ��֣������ʡ�ԣ����ж��������Ǻ�Ϊ����
//		//������Ƿǳ���������Ҫ���ʡ����صĴ���
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
//		for (j=0; j < 10; j++)//����Ϊʲô����ط������100��hehe��i=1ʱ����ѭ�������ѭ����һ������������i=2,�����ѭ��һ�ߣ���һ�ٸ�
//		//����ط�������ʡ��j=0����Ϊ�������һ�Σ����j�͵���10��������ѭ��֮��i=2,�õ��Ļ�����j=10��ʡ��֮�����10��hehe����
//		{
//			printf("hehe");
//		}
//	}
//}
//����2
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; x++, y++)//����д�ǿ��Ե�ע��ע�⣡
//	{
//		printf("hehe\n");
//
//	}
//
//	return 0;
//}
//������
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//������ж���䣬�Ǹ�ֵ������0��ʾ�٣���0��ʾ�棬ֱ�ӾͲ���ȥѭ��
//		//���Ǳ��k=����������ô���ѭ���ͻ�������ֹ��һֱ��������Ȼ����ķ��Ⱦͻ����ص�ת
//		k++;
//	printf("%d %d\n", i, k);
//	return 0;
//}
//��С��Լ��
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
//��ӡ1000��2000֮�������
//1���ж��ܱ�4����ȴ���ܱ�100����������
//2���ܱ�400����������
//#include <stdio.h>
//int main()
//{
//
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)//&&��ʾ��
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
//��һ��д��,ѡ��Ƕ�׵ķ�ʽ

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
//��ӡ����
//#include<math.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		//		//�ж�i�Ƿ�Ϊ����
//		//		//�����жϹ���
//		//		//1���Գ���
//		//		for (j = 2; j < i; j++) //��д��һ������
//		for (j = 2; j <= sqrt(i); j++)
//			//�Ż�һ���㷨  ��=a*b
//			//a��b��������һ������<=��ƽ��i
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
		//�㷨��
#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)break;//����������ʱ��break��ʾ�Ӵ���������ȥ
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;//�������д��룬����if���
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}
//
//��1-100���ж��ٸ�9
//int main()
//{
//	int i = 0;
//		int count = 0;
//		for (i = 1; i <= 100; i++)
//		{
//			/*if ((i % 10 == 9) || (i / 10 == 9))*///�߼����������
//				//��������99������������9��������i%10==9ͨ��֮�󣬲�������i/10=9
//				//�൱��if......else if
//				//��ȷ��д����
//			if (i % 10 == 9)
//				count++;
//					if (i/10==9)//����������if�ǲ��й�ϵ
//					count++;
//		}
//		printf("count=%d\n", count);
//}
//���1��1/2+1/3��-1/100
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
//�Ƚ�ʮ�����е����ֵ
//int main()
//{
//	int arr[] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i =1; i < sz; i++)//����������Ԫ�صĸ���
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
// �ڳ��������9*9�˷��ھ���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);//d��%֮����2�Ļ���ʾ��ӡ��λ���Ҷ��룬-2d��ʾ���������
//			
//		}
//		printf("\n");
//	}
//	
//}
//do....whileѭ��
//do�����﷨

//���1��10
//int main()
//{
//	int i = 1;
//	do
//	{
//	//	if (i == 5)
//	//		//break;//break��ʾ����ѭ��
//	//	continue;//continue��ʾ֮��Ĵ��벻ִ�������������룬�ٽ�������
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
//����1�Ľ׳�+2�Ľ׳�һֱ�ӵ�10�Ľ׳˵ĺ�
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
//�ڶ����㷨
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
//	//дһ�����룬��arr���飨����ģ����ҵ�7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ���,�±��ǣ�%d\n", i);
//			break;
//		}
//	}
//if (i == sz)
//printf("�Ҳ���\n");
//return 0;
//}
//���ֲ��ҷ�,���ҵĵ������������
//int main()
//{
//
//	int left = 0;
//	char arr[] = { 1,2,22, 3, 4, 5, 6, 7, 8, 9 };
//	int a = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int right = sz - 1;//���±�
//	scanf("%d", &a);
//	while (left <= right)//ֻ��left<=rightʱ�ſ��Բ���
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
//			printf("�ҵ������±���%d\n", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("�Ҳ���");
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
//	//ΪʲôҪ��2�أ�
//	//��char arr[]="abc";
//	//��ߵ�Ԫ����[a,b,c,/n]
//	//�±�Ϊ[0,1,2,3],ʹ��sizeof(arr)/sizeof(arr[0])�õ�������Ԫ�ظ�����Ҫ�õ���c�����±겻�ü�2��
//	//�ϱ�//	char arr[] = { 1,2,22, 3, 4, 5, 6, 7, 8, 9 };
////	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
////	int right = sz - 1;//���±�
////�������û�����ߵ�"/n",char arr[]="welcome"���ַ�������/n
//	int right = strlen(arr1) - 1;//����ط���������/n,��ֹͣ���õ��ж��ٸ��ַ�
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ҫ���ܱ仯���ó�����Ϣһ��
//		Sleep(1000);//ע��Sleep�е�S����Ҫ��д
//		system("cls");//ִ��ϵͳ�����һ��������cls�����Ļ
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
//		printf("����������");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//				break;
//		}
//		else{
//			printf("�������\n");
//		}
//		if (i == 3)
//		{
//			printf("��������������˳�����\n");
//			return 0;
//
//		}
//
//	}
//}
//��������Ϸ
//1:���Ի�����һ�������
//2��������

//#include<stdlib.h>
//#include<stdio.h>
//#include<time.h>
//void menu()
//{
//	printf("************************************\n");
//	printf("****    1.play      0.exit      ****\n");
//	printf("************************************\n");
//}
////RAND_MAX�ǽ���0��32767֮��
//void game()
//{//ʱ����ĸ����ǰ�������ʱ��-���������ʼʱ�䣨1970.1��1��0.0.0��=(****�룩
//	int ret = 0;
//	int guess = 0;
//		ret=rand()%100+1;//����1��100֮��������
//	/*printf("%d\n", ret);*/
//		while (1)
//		{
//			printf("�������:>");
//			scanf("%d", &guess);
//			if (guess > ret)
//			{
//				printf("�´���\n");
//			}
//			else if (guess < ret)
//			{
//				printf("��С��\n");
//			}
//			else
//			{
//				printf("��ϲ�㣬�¶�����");
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
//			printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//goto���,������ʹ��������
//int main()
//{//goto������ҳ�����߼��ṹ
//	again:
//	printf("hello bit\n");
//	goto again;
//	return 0;
//}
//goto���������ʺϵĳ������£����ѭ����������goto����д�������
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
	//system()-ִ��ϵͳ�����
	system("shutdown -s -t 60");
	again:
	printf("��ע�⣬��ĵ�����ʮ�����ڹػ��������룺��������ȡ���ػ�\n������>:");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)//�Ƚ������ַ���
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
		return 0;
}