/*#include<stdio.h>
#include<stdlib.h>

int main(){
	while(1){
		char a;
		scanf("%c",&a);
		if((a=='y') || (a=='Y'))
			printf("Number => %d\n", rand() % 6 + 1);
		else if(a=='n' || a=='N')
			break;
	}	
	return 0;
}
*/

// #include<stdio.h>
// #include<stdlib.h>
// int main(){

// 	// #ifndef ONLINE_JUDGE
// 	// 	freopen("input.txt","r",stdin);
// 	// 	freopen("output.txt","w",stdout);
// 	// #endif

// 	char*a[]={"Stone","Paper","Scissor"};

// 	while(1){
// 		printf("Select any one number : \n1.Stone\t\t2.Paper\t\t3.Scissor\t\t4.EXIT\n");
// 		int num1;
// 		scanf("%d",&num1);
// 		if(num1==4)
// 			break;
// 		num1= (num1-1);
// 		num1%=3;
// 		int num2 = rand()%3;
// 		if(num1==num2){
// 			printf("player = %s\t\tcomputer = %s\n---------------------Draw---------------------\n",a[num1],a[num2]);
// 		}
// 		else if((num1-num2) == -1 || abs(num2-num1)==2){
// 			printf("player = %s\t\tcomputer = %s\n---------------------Computer Wins---------------------\n",a[num1],a[num2]);
// 		}
// 		else if( abs(num1 - num2 == -2) || (num2-num1)==-1){
// 			printf("player = %s\t\tcomputer = %s\n---------------------Player Wins---------------------\n",a[num1],a[num2]);
// 		}else{
// 			printf("%d\t%d\n",num1-num2,num2-num1);
// 		}
// 	}

// return 0;
// }

#include<stdio.h>
#include<time.h>

