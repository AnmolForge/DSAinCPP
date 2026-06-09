#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(4);
    v.push_back(34);
    v.push_back(5);    
    v.push_back(4);    
    v.push_back(12);
    v.push_back(11);
    v.push_back(11);
    v.push_back(32);    
    v.push_back(12);
    //last occurence or last index of x

    int x;
    cin>>x;
    for(int i=v.size()-1; i>=0; i--){
        if (v[i]==x) {
            cout<<i;
            break;
        }

    }
}