#include <iostream>
#include <math.h>

using namespace std;

// Declarando função
void soma(int x, int y);
//////////////////////////////////
void mult(int x, int y)
{
	int s;
	s = x * y;
	cout << "A multiplicação de " << x << "*" << y << " = " << s << endl;
}
int main()
{
	int retorno;
	int v1 = 9, v2 = 7;
	soma(5, 2);
	soma(2.3, 2.9);
	mult(4, 9);
	return 0;
}
int maior(int x[])
{
	int maior = 0;
	for (int i = 0; i < 10; i++) {
		if (maior < x[i]) {
			maior = x[i];
		}
	}
	return maior;
}
void soma(int x, int y)
{
	int s;
	s = x + y;
	cout << "A soma de " << x << "+" << y << " = " << s << endl;
}
