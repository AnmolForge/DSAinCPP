#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int count=0;
    getline(cin,s);
    for(int i=0; i<s.size(); i++){
        if(s.size()==1) break;
        if(s[i]==s[i+1] || s[i]==s[i-1]){
            count+=1;
        }
    }
    cout<<count/2;
}