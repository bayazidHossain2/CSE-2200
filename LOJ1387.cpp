#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        cout<<"Case "<<tc<<":"<<endl;
        int k;
        cin>>k;
        string str;
        int total=0;
        int inp;
        while(k--){
            cin>>str;
            if(str[0]=='d'){
                cin>>inp;
                total+=inp;
            }else{
                cout<<total<<endl;
            }
        }
    }return 0;
}
