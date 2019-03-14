#include <iostream>

using namespace std;

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int a;
	int b;

	a=2;
	b=7;

	printf("a的值是：%d\n", a);
	printf("b的值是：%d\n", b);
	printf("a+b=%d\n", a+b);

	std::cout<<"浮点型四则运算"<<std::endl<<"请输入计算式："<<std::endl;
	float c;
	char s;
	cin>>s;
	c = char(s);
	cout<<"计算结果："<<c<<endl;


	return 0;
}
