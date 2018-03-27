// FCI – Programming 1 – 2018 - Assignment 2
// Program Name:Rot13 cipher
// Last Modification Date: 27/2/2018
// Author1 and ID and Group: Mai Mostafa Abd El-Rahman & 20170303 & G12
// Teaching Assistant:Eng.Khdega
// Purpose:Encrypting messages

#include <iostream>
using namespace std;
int main()
{
    while(true){
    string sentence;
    int answer;
    char cipher;
    cout<<"\nAhlan ya user ya habibi"<<endl;
    cout<<"\nwhat do you like to do today?\n\n1-cipher a message\n2-decipher a message\n3-end"<<endl;
    cin>>answer;
    if ((answer==1) || (answer==2)){
        if(answer == 1)
            cout<<"\nenter sentence to cipher: "<<endl;
        else
            cout<<"\nenter sentence to decipher: "<<endl;
        cin.get();
        getline(cin,sentence);
        for (int i=0; i<sentence.length() ;i++){
            if( sentence[i] == ' '){
                cout<<sentence[i];
                continue;
            }
            if((sentence[i] > 64) && (sentence[i] < 91) || ((sentence[i] > 96) && (sentence[i] < 123)))
                cipher = (int)sentence[i] + 13;
            else
                cipher = (int)sentence[i];
            if ((cipher < 0) || (cipher > 122))
                cipher = cipher - 122 + 96;
            cout <<cipher;
        }
        cout<<endl;
    }
    if (answer==3){
        cout<<"goodbye";
        break;
    }
    }
}


