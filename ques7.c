#include<stdio.h>
//Ansh Tyagi IT 11912079
int main(){
	for (int i = 0; i < 100; ++i)
	{
		if (i%2==0 && i%3 != 0 && i%5 != 0 && i%15!=0)
		{
			printf("%d\n",i );	
		}
	}
	return 0;
}