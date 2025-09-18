#include<iostream>
using namespace std;
int main(){
string str="aabbc";
int freq[256]={0};
for(char c:str){
    freq[c]++;
}
for(char c:str){
   if (freq[c]==1){
    cout<<"not repeating"<<"="<<c;
    break;
   }
   
}
}
