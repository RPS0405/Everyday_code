/*For a given integer array of size N. You have to find all the occurrences
(indices) of a given element (Key) and print them.
Use a recursive function to solve this problem.
Sample Input : arr[ ] = {3, 2, 4, 5, 6, 2, 7, 2, 2}, key = 2
Sample Output : 1 5 7 8 
*/


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