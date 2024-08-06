#include <iostream>
using namespace std;
#include <climits>

int SubArraySum(int *a, int n){

    int maximum=INT_MIN;
    
    int currSum=0;
    
    for(int i=0; i<=n;i++){
        
      currSum+=a[i];
      maximum=max(currSum,maximum);
      
      if(currSum<0){
          currSum=0;
      }
    }
    return maximum;

}
 
int main(){

    int arr[]={2,-3,6,-5,4,2};
    int size= sizeof(arr)/ sizeof(int);
    

    cout<<SubArraySum(arr, size)<<endl;

    return 0;

}