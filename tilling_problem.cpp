
//Given a “2 x n” board and tiles of size “2 x 1”, count the number of ways to tile the given board using the 2 x 1 tiles. A tile can either be placed horizontally i.e., as a 1 x 2 tile or vertically i.e., as 2 x 1 tile



#include <iostream>
using namespace std;



int Tp(int n){
    if(n==0||n==1){
        return 1;
    }
     
    int ans1= Tp(n-1);//for vertical placement of tiles
    
    int ans2=Tp(n-2);//for horizontal placement of tiles
    
    return ans1+ans2;
}


int main (){
    
    int n=4;
    
    cout<<Tp(n)<<endl;
    
    
	return 0;
}