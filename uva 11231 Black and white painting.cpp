#include<iostream>
using namespace std;
int main(){
    int r,c,d;
    while(cin>>r>>c>>d&&(r||c)){
        int result=0;

        while(r>=8&&c>=8){
            if(d){
                result+=(c-8)/2;
                result+=(r-8)/2;
                result++;
            }else{
                result+=(c-7)/2;
                result+=(r-7)/2;
            }r--;
            c--;
        }cout<<result<<endl;
    }return 0;
}
