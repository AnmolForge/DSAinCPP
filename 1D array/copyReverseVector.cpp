#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n; // array size
    vector<int> v;
    for (int i=0; i<n; i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }

    vector<int> v2(v.size());
    for(int i=0; i<v2.size(); i++){
        v2[i]= v[n-1-i];
        
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<v2[i]<<" ";
    }
}