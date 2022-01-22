#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        string st;
        cin>>st;
        int result{0};
        for(int i=0;i<st.size();i++){
            for(int j=i+1;j<st.size();j++){
                int p=i,q=j,len{0};
                while(st[p]==st[q]){
                    len++;
                    p++;
                    q++;
                }if(len>result) result=len;
            }
        }cout<<result<<endl;
    }return 0;
}
