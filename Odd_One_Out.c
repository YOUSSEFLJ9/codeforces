#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
	int t ;
	int element;
	element = 0;
	
	int a =0 , b = 0, c = 0;
	scanf("%d", &t);
	while(element< t)
	{
		scanf("%d %d %d", &a, &b, &c);
		printf("%d\n", a^b^c);
		element++;
	}
	return 0;
	
}
