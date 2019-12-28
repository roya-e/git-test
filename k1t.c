#include<stdio.h>
int main(){
	long long int a, b ,x ,y ,k;
	scanf("%lld %lld" ,&a ,&b);
	if(a>b)
	{
		x=a;
		y=b;
	}
	else
	{
		x=b;
		y=a;
	}
	while(y>0)
	{
		k = x%y;
		x=y;
		y=k;
	}
	printf("%lld %lld" ,x ,(long long)a*b/x);
	return 0;
}
