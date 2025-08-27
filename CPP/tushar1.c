#include<stdio.h>
#include<string.h>
int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n;
	scanf("%d",&n);

		//code goes here
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		printf("%d-->%d\n",i,arr[i]);
	}

	// for(int i=n-1;i>=0;i--)
	// {
	// 	// scanf("%d",&arr[i]);
	// 	printf("%d-->%d\n",i,arr[i]);
	// }

	arr[5]=1000;


	for(int i : arr)
		printf("%d\t",i);

	int itr = 1;
	int num;
	scanf("%i",&num);
	while(itr<=num){
		printf("%d\n",itr);
		itr++;
	}

	scanf("%d",&num);
	int range=0;
	scanf("%i",&range);
	for (int i = 1; i != range+1; ++i)
	{
		printf("%d x %d = %d\n",num ,i,num*i);
	}

	char name[20];
	// printf("name is = %s",name);
	scanf("%s",name);
	printf("NAME IS = %s",name);


return 0;
}
