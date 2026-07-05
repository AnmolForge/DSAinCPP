#include<iostream>
using namespace std;
int main(){
    char str[]={'a', 'e', 'i','o','u'};
    for(int i=0; i<5; i++){
        cout<<str[i]<<" ";  //gives a e i o u
    }
    char check[]="abcd";
    for(int i=0; i<5; i++){
        cout<<check[i]<<" ";    //gives a b c d
    }
    cout<<endl<<str<<endl;  //gives aeiou

}