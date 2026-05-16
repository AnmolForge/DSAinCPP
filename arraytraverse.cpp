#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter array size:\n";
    cin>> n;

    int arr[n];
    for(int i=0; i<n; i++){

        cin>>arr[i];
        cout<< i<< " element is: "<< arr[i]<< endl;
    }
}