#include<stdio.h>
//Ansh Tyagi IT 11912079
int main(){
	int a,n;
	for (int i = 0; i <=100; ++i)
	{
		n=i%10;
		a=i/10;
		if ((a+n)%7==0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}