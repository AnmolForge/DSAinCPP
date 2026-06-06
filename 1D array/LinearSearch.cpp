#include<iostream>
using namespace std;
int main(){
    cout<<"array size: "<<endl;
    int n;
    cin>>n;
    cout<<"Target element "<<endl;
    int x;  //target element
    cin>>x;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // for(int i=0; i<n; i++){
    //     if (arr[i]==x) cout<<"found at "<<i<<" index";
    // }

    //using checkmark
    bool flag=false;     // by default assuming element not in array
    for (int i=0; i<n; i++){
        if(arr[i]==x) flag=true;
    }
    if(flag==true) cout<<"element found"<<endl;
    else cout<<"NOT found";

}