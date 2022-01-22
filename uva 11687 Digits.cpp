#include<iostream>
using namespace std;
int number_of_digits(int num){
    int digits{0};
    if(num==0) return 1;
    while(num>0){
        digits++;
        num/=10;
    }return digits;
}
int main(){
    string st;
    while(cin>>st){
        if(st=="END") break;
        int result{1};
        int digits=st.size();
        int prev{-1};
        if(digits==1&&st[0]=='1'){
            cout<<1<<endl;
            continue;
        }
        while(digits!=prev){
            //cout<<digits<<" "<<prev<<endl;
            prev=digits;
            digits=number_of_digits(digits);
            result++;
        }cout<<result<<endl;
    }
    return 0;
}
