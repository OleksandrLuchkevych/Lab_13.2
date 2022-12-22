#include <Windows.h>
#include <stdio.h>
#include <conio.h>

#include "Var.h"

using namespace std;
using namespace nsVar;

#define z 4

#define MAX(x, z) ((x)>(z)?(x):(z))
#define MIN_1(x, z) ((x+z)<(x*z)?(x+z):(x*z)) 
#define MIN_2(x, z) ((abs(x-z))<(z)?(abs(x-z)):(z))




#define PRINTI(w) puts("Ваше число: "); \
 printf(#w" = %d\n",w)

//#define PRINTR(w) puts ("rezult :"); \
// printf (#w"=%f\n",(float)w)
//#define RESULT_MIN(x, y) ((x)<(y)?(x):<(y))

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b;
	int w;
	char ch = '0';
	do
	{
#if (z > 5 && z < 10)
		{
			
			puts("Щоб визначити максимальне з двох числових виразів");
			puts("Введіть 2 числа: ");
			scanf_s("%d", &a);
			PRINTI(a);
			scanf_s("%d", &b);
			PRINTI(b);

			w = MAX(a, b) * MIN_1(a, b);
			PRINTI(w);
		}
#else
		{
			puts("Щоб визначити максимальне з двох числових виразів");
			puts("Введіть 2 числа: ");
			scanf_s("%d", &a);
			PRINTI(a);
			scanf_s("%d", &b);
			PRINTI(b);
	

			w = MIN_2(a, b) * MIN_2(a, b);
			PRINTI(w);
		}
#endif
		puts("Щоб повторити вказані дії, нажміть y \n");
		ch = _getch();
	} while (ch == 'y');
}


