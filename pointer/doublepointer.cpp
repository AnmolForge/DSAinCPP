#include<iostream>
using namespace std;
int main(){
    int x=5;
    int* ptr=&x;
    int** p= &ptr;
    cout<<x<<endl;
    cout<<*ptr<<"  x through *ptr"<<endl;
    cout<<**p<<"  x through **p"<<endl;
    cout<<ptr<<"  address of x or value stored in ptr"<<endl;
    cout<<p<<"  address of x's pointer"<<endl;
    cout<<*p<<"  value in *p "<<endl;
    
}