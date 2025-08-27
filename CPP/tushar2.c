#include<stdio.h>

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	//code goes here
	int a=0,b=0,c=0;
	scanf("%d%d%d",&a,&b,&c);

	/*FINDING THE GREATEST OF THREEE NUMBERS USING NESTED IF*/
	
	if(a>b){
		if(a>c){
			printf("A is greatest\n");
		}else{
			printf("C is greatest\n");
		}
	}else{
		if(b>c)
			printf("B is greatest\n");
		else
			printf("C is greatest\n");
	}

	/*FINDING THE GREATEST OF THREE NUMBERS USING AND OPERATION*/


	if(a>b && a>c)
		printf("A is greatest\n");

	if(b>a && b>c)
		printf("B is greatest\n");

	if(c>a && c>b)
		printf("C is greatest\n");

	/*FINDING A YEAR IS LEAP OR NOT USING NESTED IF ELSE*/

	int year = 2005;
	if(year%4==0){

			if(year%100==0){

					if(year%400==0){

						printf("LEAP year\n");

					}
					else
					{
						printf("NOT LEAP\n");
					}

			}
			else
			{
				printf("LEAP\n");
			}
	}
	else
	{
		printf("NOT A LEAP YEAR\n");
	}

	/*FINDING A YEAR IS LEAP OR NOT USING OR and AND OPERATION*/

	if((year%4==0) || (year%100==0 && year%400==0)){

		printf("LEAP YEAR\n");

	}
	else{

		printf("no leap year\n");

	}

	return 0;
}
