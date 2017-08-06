#include<stdio.h>

void fun1(char *ptr)
{
    int i = 0;
    //把小写字母变成大写
    for(; ptr[i] != '\0'; ++i)
	{
		if(ptr[i] >= 'a' && ptr[i] <= 'z')
		{
			ptr[i] -= 'a' - 'A';
		}
	}
	printf("You input %d characters\n", i-1);
	printf("To Uppercase: %s\n", ptr);
}
