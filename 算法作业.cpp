#include <iostream>
using namespace std;
int num(int n)//n��ʾ�ж��ټ�̨��
{
	if (n == 1)
		return 1;//��n=1ʱֻ��һ���߷�return1
	if (n == 2)
		return 2;//��n=2ʱ�������߷���һ�������ף��ֿ�������ÿ����һ�ף��������߷�return 2
	if (n > 2)
		return num(n - 1) + num(n - 2);//̨��������2ʱ��һ��3��̨�׿�ʼ���㣬������ʣ��n-1����һ��ʣ��n-2

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
