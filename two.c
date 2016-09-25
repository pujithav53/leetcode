#include<stdio.h>
#define bool int

int main()
{
bool ispowerofFour(int x)
{
	return !(x&(x-1));
}
	ispowerofFour(20)? printf("yes/y\n"):printf("no/n\n");
	ispowerofFour(16)? printf("yes/y\n"):printf("no/n\n");

}