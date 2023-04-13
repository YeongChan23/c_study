#include <stdio.h>

void main()
{
	printf("%d", 100, 200);//대응할 %d가 없어서 100 하나만 출력
	printf("\n");
	printf("%d %d", 100);//대응할 숫자가 없어서 쓰레기값이 출력
	printf("\n");
}
