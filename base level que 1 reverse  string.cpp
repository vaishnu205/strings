#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str="raghav";
    int n=str.size();
    int st=0;int end=n-1;
    while(st<end){
    swap(str[st],str[end]);
    st++;
    end--;
    }
    cout<<str;
}
