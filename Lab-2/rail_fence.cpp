#include<iostream>
using namespace std;

string encrypt(string plainText, int key){
    char str[100][100];
    int i, j, k;
    for(i = 0; i<key; i++){
        for(j=0; j<=plainText.size();j++){
            if(i==j){
                cin<<plainText[i][j];

            }
        }

    }

}

int main(){
    string plainText = "This is mess";
    int key = 3;
    encrypt(plainText, key);
    return 0;
}