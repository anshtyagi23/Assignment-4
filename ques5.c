#include<stdio.h>
//Ansh Tyagi IT 11912079
int main(){
	int a;
	printf("Enter a number\n");
	scanf("%d",&a);
	for (int i = 0; i <= a; ++i)
	{
		if (i%3==0 || i%7==0)
		{
			printf("%d\n",i );
		}
	}
	return 0;
}