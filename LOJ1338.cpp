#include<iostream>
using namespace std;
int main(){
    //freopen("01output.txt","w",stdout);
    int T;
    cin>>T;
    cin.ignore();
    for(int tc=1;tc<=T;tc++){
        string line1,line2;
        getline(cin,line1);
        getline(cin,line2);
        int frec1[26],frec2[26];
        for(int i=0;i<26;i++){
            frec1[i]=0;
            frec2[i]=0;
        }
        for(char ch : line1){
            if('A'<=ch&&ch<='Z'){
                frec1[ch-'A']++;
            }
            if('a'<=ch&&ch<='z'){
                frec1[ch-'a']++;
            }
        }
        for(char ch : line2){
            if('A'<=ch&&ch<='Z'){
                frec2[ch-'A']++;
            }
            if('a'<=ch&&ch<='z'){
                frec2[ch-'a']++;
            }
        }
        bool flg=true;
        for(int i=0;i<26;i++){
            if(frec1[i]!=frec2[i]){
                flg=false;
                break;
            }
        }
        if(flg){
            cout<<"Case "<<tc<<": Yes"<<endl;
        }else{
            cout<<"Case "<<tc<<": No"<<endl;
        }

    }return 0;
}

