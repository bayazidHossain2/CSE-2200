#include<iostream>
using namespace std;
const int arrSize=1000001;
bool isPrime[arrSize];
int rev_num(int num){
    int rev=0;
    while(num>0){
        rev=rev*10+(num%10);
        num/=10;
    }return rev;
}
int main(){
    for(int i=0;i<arrSize;i++){
        isPrime[i]=true;
    }
    isPrime[0]=false;
    isPrime[1]=false;
    for(int i=2;i<arrSize;i++){
        if(isPrime[i]){
            for(int j=2*i;j<arrSize;j+=i){
                isPrime[j]=false;
            }
        }
    }
    int num;
    while(cin>>num){
        if(isPrime[num]&&isPrime[rev_num(num)]&&num!=rev_num(num)){
            cout<<num<<" is emirp."<<endl;
        }else if(isPrime[num]){
            cout<<num<<" is prime."<<endl;
        }else{
            cout<<num<<" is not prime."<<endl;
        }
    }return 0;
}
