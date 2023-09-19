#include<iostream>
using namespace std;

void generateTable(char vTable[26][26]){
    int i,j;
    for ( i = 0; i < 26; i++)
    {
        for(j=0; j<26; j++){
            vTable[i][j] = 'A' + (i+j)%26;
        }
    }
}

int main(){
    char vTable[26][26];
    generateTable(vTable);
    cout<<"    ";
    for(char c = 'A'; c<= 'Z'; c++){
        cout<<c<<"|"<<"  ";
    }
    cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
    for (int i = 0; i < 26; i++)
    {
        cout<<char('A'+i)<<"-"<<"  ";
        for(int j=0; j<26; j++){
            cout<<vTable[i][j]<<"|"<<"  ";
        }
        cout<<endl;
    }

}