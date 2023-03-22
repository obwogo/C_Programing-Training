#include <stdio.h>
int add(int a, int c, int d, int e)/* creating a fuction */
{ 
	return a+c+d+e;
}

int main()
{
	int (* add_pointer)(int a, int c, int d, int e);/* variable pointer to the function */
	add_pointer = add; /*memory allocation */
	int a = 30;
	int c = 25;
	int d = 100;
	int e = 98;
	int result = add_pointer( a,c,d,e);
	printf("result is %d\n", result);
	return result;
}
