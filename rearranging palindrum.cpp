#include<iostream>
using namespace std;
int main(){
 string str="madam";
 int freq[26]={0};
for(char c:str){//Ha range-based for loop ahe C++ madhye.

//str hi string ahe, ani c he string madhil pratyek character la represent karto.
    freq[c -'a']++;//
}
int odd=0;
for(int i=0;i<26;i++){
    if(freq[i]%2!=0) odd++;

}
if(odd <= 1)
        cout << "Palindrome possible" << endl;
    else
        cout << "Palindrome not possible" << endl;

    return 0;

}
