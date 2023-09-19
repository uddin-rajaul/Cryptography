#include<iostream>
using namespace std;

int main(){
    char a[30];
    for(char c = 'A'; c<='Z' ;c++){
        cout<<c-'A' <<" :"<<c<<"\t";
    }
    cout<<endl;
    for(char c = 'a'; c<='z' ;c++){
        cout<<c-'a' <<" :"<<c<<"\t";
    }
}
