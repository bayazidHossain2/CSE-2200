#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long N;
    while(cin>>N&&N){
        long long sqn = sqrt(N);
       // cout<<sqn<<endl;
       // cout<<sqn*sqn<<endl;
       if(sqn*sqn==N) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        ///Note: every number have even number of divisor.
    }return 0;
}
