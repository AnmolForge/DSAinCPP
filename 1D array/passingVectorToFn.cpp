#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>& a){    //By default pass by value happens, but '&' will make pass by ref
    a[0]=100;
    for(int i=0;i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;      //size  capacity
    v.push_back(4);     //1      1
    v.push_back(34);    //2     2
    v.push_back(5);     //3     4
    v.push_back(12);    //4     4
    v.push_back(40);    //5     8
    v.push_back(11);     //6     8

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}