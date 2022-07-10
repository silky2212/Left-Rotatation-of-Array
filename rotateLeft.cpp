#include <iostream>
using namespace std;


void rotateLeft(int arr[],int n,int k){
	int temp[n];
	for(int i = 0 ; i< n ; i++){
		temp[i] = arr[(i+k)%n];
	}
	for(int i = 0 ; i<n ; i++){
		arr[i] = temp[i];
	}
}

int main() {
    
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0 ; i<n ; i++){
		cin>>arr[i];
	}
	int k;
	cin>>k;
	rotateLeft(arr,n,k);
	
	for(int i = 0 ; i<n ; i++){
		cout<<arr[i]<<" ";
	}

    return 0;
}