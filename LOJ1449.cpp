#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    cin.ignore();
    for(int tc=1;tc<=T;tc++){
        string str;
        getline(cin,str);
        cout<<"Case "<<tc<<": "<<str[0]<<str[1]<<str[2]<<str[3]<<'s';
        int i=5;
        if(str[4]!='s'){
            i--;
        }
        for(;i<str.length();i++){
            cout<<str[i];
        }cout<<endl;
    }
}
