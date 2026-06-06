#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"array size"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"element above which count needed"<<endl;
    int x;
    cin>>x;
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]>x) count++;
    }
    cout<< count;
}