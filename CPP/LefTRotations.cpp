#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
		return a;

	else
		return gcd(b, a % b);
}

void leftRotate(int arr[], int d, int n)
{
	d = d % n;
	int g_c_d = gcd(d,n);
	for (int i = 0; i < g_c_d; i++) {
		/* move i-th values of blocks */
		int temp = arr[i];
		int j = i;

		while (1) {
			int k = j + d;

			if (k >= n)
				k = k - n;
			
			if (k == i)
				break;

			arr[j] = arr[k];
			j = k;
		}
		arr[j] = temp;
	}

	for(int i=0;i<n;i++)
		cout<<arr[i]<<' ';
	cout<<endl;
}

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif

	int n;cin>>n;
	int arr[n]={0}; //INput for the size of the array
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Array : ";
	
	for(int x : arr)
		cout<<x<<" ";
	cout<<endl;

	int rot;cin>>rot;
	cout<<"Array After "<<rot<<" Rotations : ";
	leftRotate(arr,rot,n);
	return 0;
}