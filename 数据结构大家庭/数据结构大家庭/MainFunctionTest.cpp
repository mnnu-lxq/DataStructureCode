// .cpp: 定义控制台应用程序的入口点。
//

#include <iostream>
#include "illegalParameterValue.h"

using std::cout;
using std::cin;
using std::endl;

int abc(int a, int b, int c)
{
	if (a <= 0 || b <= 0 || c <= 0)
	{
		throw illegalParameterValue("All parameters should be > 0");
	}
	return a + b + c;
}

int main()
{
	cout << "Fuck 数据结构" << endl;

	try
	{
		cout << abc(2, 0, 4) << endl;
	}
	catch (illegalParameterValue e)
	{
		e.outPutMessage();
		return 1;
	}
	

	cin.get();
    return 0;
}

