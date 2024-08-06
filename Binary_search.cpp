#include <iostream>
using namespace std;

int BinarySearch(int *a, int n, int key){

    int start=0, end= n-1;

    while(start<=end){

        int mid=(start+end)/2;

        if(a[mid]==key) return mid;
        else if(a[mid]<key) start=mid+1;

        else start=mid-1;

        start++;
        end--;
    }

    return -1;


}
 
int main(){

    int arr[]={1,3,5,7,9,11};
    int size= sizeof(arr)/ sizeof(int);
    int key=9;

    cout<<BinarySearch(arr, size, key)<<endl;

    return 0;



}