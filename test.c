/*********************************
    > File Name: test.c
    > Author: Zeno
    > Mail:340562424@qq.com 
    > Created Time: 2015年09月19日 星期六 17时57分02秒
 ********************************/
#include<stdio.h>
#include<arpa/inet.h>
int main(void)
{
	char *addr = "1.2.2.256";
	unsigned long conv_addr = inet_addr(addr);
	
	printf("%#lx \n", conv_addr);
}
