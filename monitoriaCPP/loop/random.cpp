#include <iostream>
#include <stdlib.h>     
#include <time.h> 
using namespace std;

int main()
{
	int num;
	srand(time(0));
		num = rand() % (15 - 0 + 1);
		cout << num << endl;
}
