//print printSubsequence using recursion

#include <iostream>
using namespace std;
#include<vector>

void printSubsequence(int arr[], vector<int> &ds,int index, int n){
    
    if(index>=n){
        for(int index=0;index<ds.size();index++){
            cout<<ds[index];
        }
        cout<<endl; 
        return ;
    }
    ds.push_back(arr[index]);
    printSubsequence(arr, ds, index+1,n);
    ds.pop_back();
    printSubsequence(arr, ds, index+1,n);
}

int main(){
    
    int arr[]={3,1,2};
    
    vector<int> ds;
    printSubsequence(arr, ds, 0, 3);
    
    return 0;
}
