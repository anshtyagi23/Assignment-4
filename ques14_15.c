#include<stdio.h>
//Ansh Tyagi IT 11912079
int main(){
	for (int i = 0; i <=100; ++i)
	{
		if ((i/10)%2!=(i%2))
		{
			printf("%d\n",i);
		}
	}
	return 0;
}