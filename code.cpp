#include<bits/stdc++.h>
using namespace std;
string makePassword(int l){
    string Password = "";
    string all = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890@$*";
    int Size = all.size();
    for(int i=0;i<l;i++){
        int RandIndex = rand() % Size;
        Password += all[RandIndex];
    }
    return Password;
}
int main(){
    int length;
    cout<<"Enter minimum required length of the password : ";
    cin>>length;
    string password = makePassword(length);
    cout<<"Generated password : "<<password;
    return 0;
}