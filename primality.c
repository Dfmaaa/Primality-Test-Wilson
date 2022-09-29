#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double wilson(int x){
	double n=(fact(x-1)+1)/(float)x;
	printf("%lf\n",n);
	return n;
}
int fact(int x){
	int y=x;
	int f=y-1;
	while(f>=1){
		y=y*f;
		f--;
	}
	printf("%d\n",y);	
	return y;
}
int main(int argc, char **argv){
	double wil=wilson(atoi(argv[1]));
	(float)abs(wil)!=wil?puts("Not prime."):puts("Prime.");
	return 0;
}
