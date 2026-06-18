#include<iostream>
#include<vector>
using namespace std;
void display(vector <int>& a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversePart(int p,int q, vector<int>& v){
    
    while(p<=q){
        int temp=v[p];
        v[p]=v[q];
        v[q]=temp;
        p++;
        q--;
    }
}
int main(){
    int n;
    cin>>n; //vector size
    vector<int> v;
    for(int i=0; i<n; i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
    display(v);
    reversePart(1,4,v);
    display(v);
}