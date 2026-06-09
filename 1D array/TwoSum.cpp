#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int vsize;
    cin>>vsize;
    vector<int> v;
    // v.push_back(4);
    // v.push_back(3);
    // v.push_back(5);    
    // v.push_back(4);    
    // v.push_back(1);
    // v.push_back(11);
    // v.push_back(2);
    // v.push_back(6);    
    // v.push_back(6);
    for(int i=0; i<vsize; i++){
        int p;
        cin>>p;
        v.push_back(p);
    }

    for(int i=0; i<v.size()-1; i++){
        for(int j=i+1; j<v.size(); j++){
            if (v[i]+ v[j]== n){
                cout<<"("<<i<<","<<j<<")";
                cout<<endl;
            }
            
        }
    }
}