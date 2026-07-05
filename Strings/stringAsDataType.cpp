#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    cout<<str<<endl;
    cin.ignore();
    string s;
    getline(cin,s);
    cout<<s;
}