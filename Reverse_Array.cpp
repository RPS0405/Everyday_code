#include <iostream>
using namespace std;

void Reverse(int*a, int n){

    int st=0 , end=n-1;

    while(st<end){
        int temp=a[st];
        a[st]=a[end];
        a[end]=temp;

        st++;
        end--;
        
    }
}

int main(){
    int arr[]={1,2,3,4,5};

    int size= sizeof(arr)/sizeof(int);

    Reverse(arr,size);
     
     
    for(int i=0;i<size;i++){

        cout<<arr[i];
    }
    return 0;
}