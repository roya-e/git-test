#include<stdio.h>
int main(){
	int n ,y;
	scanf("%d" ,&n);
	int m=2*n -1 -n/2;
	
	for(int j=0 ;j<n ;j++)
	{
		for(int i=0 ;i< 2*n ;i++)
		{
			if(j> n/2)
				y=n-1-j;
			else
				y=j;	
			if(((n/2 -y)<=i && i<= (n/2+y)) || ((m -y)<=i && i<= (m+y)) )
				printf("*");
			else
				printf(" ");			
		}
		printf("\n");
	}
	return 0;
}
