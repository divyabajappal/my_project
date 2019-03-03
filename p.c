#include<stdio.h>
int add()
{
	int r;
	r=2+3;
	return r;
}
int cos(){
	printf("cos function\n");
}
int sin(){
	printf("sin function\n");
}
int main()
{
	int res;
	cos();
	res=add();
	printf("%d\n",res);
}
