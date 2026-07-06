#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int n=s.size();
    // int max=0;
    // for(int i=0; i<n; i++){
        
    //     int count=1;
    //     for(int j=i+1; j<n; j++){
    //         if(s[j]==s[i]) count++;
    //     }
    //     if(count>max) max=count;

    // }
    // for(int i=0; i<n; i++){
    //     char ch=s[i];
    //     int count=1;
    //     for(int j=i+1; j<n; j++){
    //         if(s[j]==s[i]) count++;
    //     }
    //     if(count==max) cout<<ch<<" "<<max<<endl;
    // }
    vector<int> arr(26,0);
    for(int i=0; i<n; i++){
        char ch=s[i];
        int ascii=(int)ch;
        arr[ascii-97]++;
    }
    int max=0;
    for(int i=0; i<26; i++){
        if(arr[i]>max) max=arr[i];
    }
    for(int i=0; i<26; i++){
        if(arr[i]==max){
            int ascii=i+97;
            char ch=(char) ascii;
            cout<< ch<<" "<<max;
        }
    }
    
}