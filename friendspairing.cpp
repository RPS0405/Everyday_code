//Given N friends, each one can remain single or can be paired up with some other friend. Each friend can be paired only once. Find out the total number of ways in which friends can remain single or can be paired up.


#include <iostream>
using namespace std;

int PandC(int n){
    
    if(n==1||n==2){
        return n;
    }
    int ans1=PandC(n-1);
    int ans2=n-1*PandC(n-2);
    
    return ans1+ans2;
}

int main() {
	
	int n=3;
	int ans=PandC(n);
	
	cout<<ans<<endl;
	
	return 0;
}
