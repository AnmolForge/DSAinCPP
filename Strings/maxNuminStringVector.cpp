#include<iostream>
#include<climits>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    vector<string> v;
    v.push_back("3490");
    v.push_back("7711");
    v.push_back("3902");
    v.push_back("0034");
    v.push_back("9111");
    v.push_back("2349");
    int max=INT_MIN;
    for(int i=0; i<v.size(); i++){
        int x= stoi(v[i]);
        if(max<x) max=x;
    }
    cout<<max;
}
