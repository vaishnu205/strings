#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str1="vaishnavi";
    string str2="ivanhsiav";
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if(str1==str2){
        cout<<true;
    }else{
        cout<<false;
    }

    

}
