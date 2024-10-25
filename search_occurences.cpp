#include <iostream>
using namespace std;


void search(int arr[], int i, int size, int key){
    
    if(i==size){
        return; 
    }
    if(arr[i]==key){
        cout<<i;
    }
    
    return search(arr,i+1, size, key);
}

int main() {
	int arr[]={3,2,4,5,6,2,7,2,2};
	
	int n= sizeof(arr)/sizeof(int);
	
	search(arr,0,n,2);
	return 0;
}