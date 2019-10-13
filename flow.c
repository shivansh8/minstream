#include<stdio.h>
int main()
{
	unsigned long long x = 0;
	int bits=0;
	x--;
	while(x>0)
	{
		bits++;
		x = x/2;
	}
	printf("%d bits used to store llu on your system\n",bits);
	return 0;
}
