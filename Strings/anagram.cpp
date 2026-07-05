#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    //anagram;
    string a,b;
    getline(cin,a);
    getline(cin,b);
   sort(a.begin(), a.end());
   sort(b.begin(),b.end());
    if(a== b){
        cout<< true;
    }
    else    cout<<false;
}
