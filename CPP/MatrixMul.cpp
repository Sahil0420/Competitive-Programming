#include<iostream>

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif

	std::cout<<"Enter a number of rows and columns [MATRIX 1] : ";
	int row1,col1;
	std::cin>>row1>>col1;
	std::cout<<"Enter a number of rows and columns [MATRIX 2] : ";
	int row2,col2;
	std::cin>>row2>>col2;
	if(row1 == col2){
		int mat1[row1][col1]={0};
		int mat2[row2][col2]={0};
		int result[row1][col2]={0};
		
		for(int i=0;i<row1;i++){
			for(int j=0;j<col1;j++)
				std::cin>>mat1[i][j];
		}

		for(int i=0;i<row1;i++){
			for(int j=0;j<col1;j++)
				std::cin>>mat2[i][j]; 
		}

		for(int i=0;i<row1;i++){
			for(int j=0;j<col2;j++){
				for(int k=0;k<col1;k++){
					result[i][j]+=(mat1[i][k]*mat2[k][j]);
				}
				std::cout<<"\nMULTIPLICATION OF THE MATRIX :::\t"<<result[i][j]<<" ";
			}
			std::cout<<std::endl;
		}
	}
	else{
		std::cout<<"\n::::::::::::::::::::::::::::THIS MULTIPLICATION CAN'T BE DONE::::::::::::::::::::::::::::"<<std::endl;
	}
	return 0;
}