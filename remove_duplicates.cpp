#include <iostream>
using namespace std;
#include<string>

void RemoveDuplicates(string str, string ans, int i, bool map[]){
    
    if(i==str.size()){
        
        cout<<ans<<endl;
        
        return;
    }
    char ch= str[i];
    int mapIndex= (int)(ch-'a');
    
    if(map[mapIndex]){
        RemoveDuplicates(str, ans, i+1, map);
    }
    else{
        map[mapIndex]=true;
        RemoveDuplicates(str, ans+str[i], i+1, map);
    }
}


int main (){
    
    string str= "aabbbcddd";
    string ans= " ";
    bool map[26]= {false};
    
    RemoveDuplicates(str, ans, 0, map);
    
    return 0;
}