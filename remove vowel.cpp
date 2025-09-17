#include<iostream>
using namespace std;
int main(){
    string str="aevyiou";
    string  result="";
    int i=0;
    while(str[i]!='\0'){
        if(str[i]!='a'&& str[i]!='e'&& str[i]!='i'&& str[i]!='o'&& str[i]!='u')
        result+=str[i];
        i++;
    }
    cout<<result;
}
