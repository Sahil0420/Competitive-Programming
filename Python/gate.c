#include<stdio.h>
#include<math.h>


int f(int x , int y){
	for(int i=0;i<y;i++)
		x = x+x+y;
	return x;
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("inputf.in" , "r" , stdin);
		freopen("outputf.in" , "w" , stdout);
	#endif

	int x=0, y=20;
	printf("%d\n" , f(x,y));
	printf("%f\n",pow(2,20));
	printf("%f",pow(2,10));



	return 0;
}