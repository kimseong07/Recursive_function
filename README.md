# Recursive_function
## Factorial
```
int Factorial(int i)
{
	if (i == 0)
 {
		return 1;
 }
	else
 {
		return(i * Factorial(i-1));
 }
}

int main()
{
	int a;
	cin >> a;
	cout << "1부터" << a << "의곱 =" << Factorial(a) << endl;
 
	return 0;
}
```
### Fibona
```
int Fibo(int i)
{
	if (i == 1 || i == 2)
	{
		return 1;
	}
	else
	{
		return Fibo(i - 1) + Fibo(i - 2);
	}
}	
int main()
{
	int i;
	for (i = 1; i <= 15; i++)
	{
		cout << Fibo(i) << endl;
	}
 
	return 0;
}
```
#### ++
```
int main()
{
	int a;
	int sum;

	cin >> a;
	sum = a * (a + 1) / 2;
	cout << "1부터 " << a << "까지 연속한수를 더하면 " << sum << endl;

	return 0;
}
```
##### Gaus
```
int Gaus(int i)
{
	if (i < 0)
	{
		return 0;
	}
	else
	{
		return i + Gaus(i - 1);
	}
}
int main()
{
	int a;
	cin >> a;
	cout << "1부터 " << a << "까지 연속한수를 더하면 " << Gaus(a) << endl;
 
	r
```
##### Hanoi
```
void Hanoi(int a, char b, char c, char d)
{
	if (a == 1)
	{
		cout << "1을 " << b << "에서 " << d << "로 이동" << endl;
	}
	else
	{
		Hanoi(a - 1, b, d, c);
		cout << a << "를(을) " << b << "에서 " << d << "로 이동" << endl;
		Hanoi(a - 1, c, b, d);
	}
}
int main()
{
	Hanoi(3, 'A', 'B', 'C');
 
	return 0;
}
```
###### reciprocal numbers
```
int rad = 1;
int rev(int a)
{
	if (a == 0)
	{
		return 0;
	}
	else
	{
		int result = rev(a / 10) + (a % 10) * rad;
		rad *= 10;
		return result;
	}
}
int main()
{
	int n;
	cin >> n;
	cout << rev(n);
}
```
