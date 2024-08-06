#include <iostream>
using namespace std;

int linearSearch(int *a, int n, int key){

    for(int i=0;i<=n;i++){

        if(a[i]==key){
            return i;
        }
    }

    return -1;
}

int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    int key=3;

    cout<<linearSearch(arr,size,key)<<endl;
}