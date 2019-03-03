#include<stdio.h>
int add(float a,float b)
{
	int r;
	r=a+b;
	return r;
}
int cos(){
<<<<<<< HEAD
	printf("cos function\n"); //this is cos function
=======
	printf("cos function\n"); 
>>>>>>> float
}
int sin(){
	printf("sin function\n");
}
int main()
{
	int res;
	cos();
	res=add(3,3);
	printf("%d\n",res);
}
