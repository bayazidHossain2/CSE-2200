#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        string a;
        long long b;
        cin>>a>>b;
        if(b<0){
            b*=-1;
        }
        int p=0;
        if(a[0]=='-'){
            p=1;
        }
        long long sub=0;
        while(p<a.size()){
            if(sub>=b){
                sub=sub%b;
            }
            sub*=10;
            sub+=(a[p]-'0');
            p++;
            //cout<<sub<<endl;
        }
        sub=sub%b;
        if(sub){
            cout<<"Case "<<tc<<": not divisible"<<endl;
        }else{
            cout<<"Case "<<tc<<": divisible"<<endl;
        }
    }return 0;
}
