//20304 �輺��
#include <iostream>
#include <stdio.h>
using namespace std;

//���丮���Լ�
//int Factorial(int i)
//{
//	if (i == 0)
// {
//		return 1;
// }
//	else
// {
//		return(i * Factorial(i-1));
// }
//}
//
//int main()
//{
//	int a;
//	cin >> a;
//	cout << "1����" << a << "�ǰ� =" << Factorial(a) << endl;
// 
//	return 0;
//}

//�Ǻ���ġ����
//int Fibo(int i)
//{
//	if (i == 1 || i == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fibo(i - 1) + Fibo(i - 2);
//	}
//}	
//int main()
//{
//	int i;
//	for (i = 1; i <= 15; i++)
//	{
//		cout << Fibo(i) << endl;
//	}
// 
//	return 0;
//}

//���ʽ�����
//int main()
//{
//	int a;
//	int sum;
//
//	cin >> a;
//	sum = a * (a + 1) / 2;
//	cout << "1���� " << a << "���� �����Ѽ��� ���ϸ� " << sum << endl;
//
//	return 0;
//}

//���ʽ� ����2
//int Gaus(int i)
//{
//	if (i < 0)
//	{
//		return 0;
//	}
//	else
//	{
//		return i + Gaus(i - 1);
//	}
//}
//int main()
//{
//	int a;
//	cin >> a;
//	cout << "1���� " << a << "���� �����Ѽ��� ���ϸ� " << Gaus(a) << endl;
// 
//	return 0;
//}

//���ʽ�����3
//int main()
//{
//	int total = 1;
//	int a;
//	cin >> a;
//
//	for (int i = 0; i < a; i++)
//	{
//		total *= i + 1;
//	}
//
//	cout << "1���� " << a << " �ǰ� = " << total << endl;
//	return 0;
//}

//�ϳ���ž 
//void Hanoi(int a, char b, char c, char d)
//{
//	if (a == 1)
//	{
//		cout << "1�� " << b << "���� " << d << "�� �̵�" << endl;
//	}
//	else
//	{
//		Hanoi(a - 1, b, d, c);
//		cout << a << "��(��) " << b << "���� " << d << "�� �̵�" << endl;
//		Hanoi(a - 1, c, b, d);
//	}
//}
//int main()
//{
//	Hanoi(3, 'A', 'B', 'C');
// 
//	return 0;
//}

//����
//int rad = 1;
//int rev(int a)
//{
//	if (a == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		int result = rev(a / 10) + (a % 10) * rad;
//		rad *= 10;
//		return result;
//	}
//}
//int main()
//{
//	int n;
//	cin >> n;
//	cout << rev(n);
//}