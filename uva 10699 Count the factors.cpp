#include<iostream>
#include<vector>
using namespace std;
int main(){
    const int as=1000001;
    bool isPrime[as];
    for(int i=0;i<as;i++){
        isPrime[i]=true;
    }
    vector<int> prime;
    for(int i=2;i<as;i++){
        if(isPrime[i]){
            prime.push_back(i);
            for(int j=2*i;j<as;j+=i){
                isPrime[j]=false;
            }
        }
    }
    prime.push_back(1000000);
    int N;
    while(cin>>N&&N){
        int ctr=0;
        for(int i=0;prime[i]<=N;i++){
            if(N%prime[i]==0){
                ctr++;
            }
        }cout<<N<<" : "<<ctr<<endl;
    }return 0;
}
