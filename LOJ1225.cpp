#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        string n;
        cin>>n;
        bool flg=true;
        for(int i=0,j=n.size()-1;i<j;i++,j--){
            if(n[i]!=n[j]){
                flg=false;
            }
        }
        if(flg){
            cout<<"Case "<<tc<<": Yes"<<endl;
        }else{
            cout<<"Case "<<tc<<": No"<<endl;
        }
    }return 0;
}
