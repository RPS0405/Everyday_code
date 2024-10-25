
//Given an integer, K. Generate all binary strings of size k without consecutive 1’s



#include <iostream>
using namespace std;
#include<string>

void binaryString(string ans, int lastPlace, int n){
    
    if(n==0){
        cout<<ans<<endl;
        
        return;
    }
    
    if(lastPlace!=1){
        binaryString(ans+'0', 0, n-1);
        binaryString(ans+'1',1, n-1);
        
    }
    else{
        binaryString(ans+'0', 0,n-1);
    }
    
}

int main() {
	
	string ans="";
	int n=4;
	
	binaryString(ans, 0, n);
	
	return 0;
}