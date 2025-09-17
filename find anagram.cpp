#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str1="physicswallha";
    string  str2="wallhaphysics";
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if(str1==str2){
        cout<<"aragram";
    }else{
        cout<<"no anagram";
    }


}
