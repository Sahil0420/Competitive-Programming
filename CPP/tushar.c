#include<stdio.h>

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n;
	scanf("%d",&n);

	printf("%i\n",n);

	int arr[n]={0};

	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	for(int i=0;i<n;i++){
		printf("%d = %d\t",i,arr[i]);
	}


	int ar[] = {1,2,3,4,5,6};
	printf("new array=%d",ar[4]);

	int siz = sizeof(ar)/sizeof(ar[0]);

	for(int i=0;i<siz;i++)
		printf("%d\t",ar[i]);

	for(int i : ar)
		printf("\n%d",i);

	for(int i=siz-1;i>=0;i--)
		printf("\t%d",ar[i]);

return 0;
}


