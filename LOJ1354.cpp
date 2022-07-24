#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        string bnry;
        string ip;
        cin>>ip;
        cin>>bnry;
        int a=0,b=0,c=0,d=0;
        int ind=0;
        while(ip[ind]!='.'){
            a*=10;
            a+=ip[ind]-'0';
            ind++;
        }ind++;
        while(ip[ind]!='.'){
            b*=10;
            b+=ip[ind]-'0';
            ind++;
        }ind++;
        while(ip[ind]!='.'){
            c*=10;
            c+=ip[ind]-'0';
            ind++;
        }ind++;
        while(ind<ip.length()){
            d*=10;
            d+=ip[ind]-'0';
            ind++;
        }
        //cout<<a<<' '<<b<<' '<<c<<' '<<d<<endl;
        string result="";
        for(int i=0;i<8;i++){
            if(1&d){
                result+="1";
            }else{
                result+="0";
            }d=d>>1;
        }result+=".";
        for(int i=0;i<8;i++){
            if(1&c){
                result+="1";
            }else{
                result+="0";
            }c=c>>1;
        }result+=".";
        for(int i=0;i<8;i++){
            if(1&b){
                result+="1";
            }else{
                result+="0";
            }b=b>>1;
        }result+=".";
        for(int i=0;i<8;i++){
            if(1&a){
                result+="1";
            }else{
                result+="0";
            }a=a>>1;
        }
        //cout<<result<<endl;
        bool flg=true;
        for(int i=0,j=result.size()-1;j>=0;i++,j--){
            if(bnry[i]!=result[j]){
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
