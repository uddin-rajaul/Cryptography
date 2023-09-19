#include<iostream>
using namespace std;

string encrypt(string plainText, int key){
    string encryptedText = "";

    for (int i = 0; i < plainText.size(); i++)
    {
        if(isspace(plainText[i])){
            continue;
        }
        else if(isupper(plainText[i]))
            encryptedText+= char(int(plainText[i] + key - 'A' )% 26 + 'A');
        else
            encryptedText+= char(int(plainText[i] + key - 'a')% 26 + 'a');
    }
    return encryptedText;

}

string decrypt(string cypherText, int key){
    string plainText = "";
    for (int i = 0; i < cypherText.size(); i++){
        char decryption_shift = cypherText[i] - key;
        if ((isupper(cypherText[i]) && decryption_shift < 'A') || (islower(cypherText[i]) && decryption_shift < 'a')) {
                decryption_shift += 26;
            }
        plainText+=decryption_shift;

    }
    return plainText;
}

int main(){
    string plainText, cypher, plain;
    int key = 3;
    cout<<"Enter string: \n";
    getline(cin,plainText);
    cout<<"Enter key: ";
    cin>>key;
    cypher = encrypt(plainText, key);
    cout<<"\nCipher text: "<<cypher;
    // plain = decrypt(cypher, key);
    // cout<<"\nDecrypted text: "<<plain;


    return 0;
}