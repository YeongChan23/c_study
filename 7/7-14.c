#include <stdio.h>

void main()
{
	int a, b, c, i;
	int hap = 0;

	printf ("합계의 시작 값 ==> ");
 	scanf ("%d", &a);

	printf ("합계의 끝값 ==> ");
	scanf ("%d", &b);

	printf ("배수 ==> ");
	scanf ( "%d", &c);

	for (i = a; i <= b; i++)
	{
		if  (i % c == 0) {
			hap += i;
		}
	}

	printf("%d부터 %d까지의 %d배수의 합계 ==> %d", a, b, c, hap);

	
}

