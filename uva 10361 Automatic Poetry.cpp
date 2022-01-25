#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    cin.ignore();
    while(T--){
        string line1,line2;
        getline(cin,line1);
        getline(cin,line2);
        string s2="",s3="",s4="",s5="";
        int ind=0;
        while(line1[ind]!='<'){
            cout<<line1[ind];
            ind++;
        }ind++;
        while(line1[ind]!='>'){
            cout<<line1[ind];
            s2+=line1[ind];
            ind++;
        }ind++;
        while(line1[ind]!='<'){
            cout<<line1[ind];
            s3+=line1[ind];
            ind++;
        }ind++;
        while(line1[ind]!='>'){
            cout<<line1[ind];
            s4+=line1[ind];
            ind++;
        }ind++;
        while(ind<line1.length()){
            cout<<line1[ind];
            s5+=line1[ind];
            ind++;
        }cout<<endl;
        ind=0;
        while(line2[ind]!='.'){
            cout<<line2[ind];
            ind++;
        }cout<<s4+s3+s2+s5<<endl;
    }return 0;
}
