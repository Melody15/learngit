#include <stdio.h>
int main(void)
 {
	long j,n,a=1;
    double i=1,b;
	printf("Enter the number:");
	scanf("%d",&n);
	for(j=1;j<=n;j++){
		a*=j;
		b=1.0/a;
		i+=b;
	}
	printf("The e is :%.10f\n",i);
	return 0;
 }
