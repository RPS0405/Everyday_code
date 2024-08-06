#include <iostream>
using namespace std;
#include <climits>

int SubArraySum(int *a, int n){
    
    int maximum=INT_MIN;
    
    for(int i=0; i<=n;i++){
        
      int result=a[i];
        
        for(int j=i+1 ;j<=n;j++){
            result+=a[j];
            maximum= max(result, maximum);
            
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