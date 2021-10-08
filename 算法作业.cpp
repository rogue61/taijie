#include <iostream>
using namespace std;
int num(int n)//n表示有多少级台阶
{
	if (n == 1)
		return 1;//当n=1时只有一种走法return1
	if (n == 2)
		return 2;//当n=2时有两种走法，一次走两阶，分开两次走每次走一阶，共两次走法return 2
	if (n > 2)
		return num(n - 1) + num(n - 2);//台阶数大于2时，一共3个台阶开始推算，走两步剩下n-1，走一步剩下n-2

}
int main()
{
	int n;
	cout << num(10) << endl;
	return 0;
	
}

//
//int main()
//{
//	int f[10] = { 0 };
//	f[1] = f[2] = 1;
//	for (int i = 3; i <= 10; i++)
//	{
//		f[i] = f[i - 1] + f[i - 2];
//	}
//	for (int i = 1; i <= 10;i++)
//	{
//		cout << f[i] << endl;
//	}
//	return 0;
//}
