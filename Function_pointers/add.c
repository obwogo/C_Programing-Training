#include <stdio.h>
int add(int a, int c, int d, int e)
{ 
	return a+c+d+e;
}

int main()
{
	int (* add_pointer)(int a, int c, int d, int e);
	add_pointer = add;
	int a = 30;
	int c = 25;
	int d = 100;
	int e = 98;
	int result = add_pointer( a,c,d,e);
	printf("result is %d\n", result);
	return result;
}
