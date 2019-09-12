#include<stdio.h>
//Ansh Tyagi IT 11912079
int main(){
	int n;
	for (int i = 0; i <=100; ++i)
	{
		n=i%10;
		if (n>=5 && n<=8)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}