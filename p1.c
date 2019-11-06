#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>

int hello(void)
{
int x=1;
int y=x+1;
return printf("%d\n",x+y);
}





int main()
{
int d,a=1,b=2,c=3;
d=a^2+b^2+c^2;
	hello();
	printf("pid=%d , ppid=%d\ni, d=%d\n",getpid(),getppid(),d);
}
