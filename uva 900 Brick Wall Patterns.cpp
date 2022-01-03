#include<iostream>
using namespace std;
long long fun(int a,int b){
    if(b==0) return 1;
    double product=1;
    while(b>0){
        product*=((a+0.0)/b);
        a--;
        b--;
    }return product;
}
int main(){
    long long fibonachi[51];
    fibonachi[1]=1;
    fibonachi[2]=2;
    for(int i=3;i<=50;i++){
        fibonachi[i]=fibonachi[i-1]+fibonachi[i-2];
    }
    int N;
    while(cin>>N&&N){
        cout<<fibonachi[N]<<endl;
        /*long long sum=0;
        int p=N,q=0;
        while(p>=0){
            if(p>q){
                sum+=fun(p+q,q);
            }else{
                sum+=fun(p+q,p);
            }//cout<<p<<' '<<q<<' '<<sum<<endl;
            p-=2;
            q++;
        }cout<<sum<<endl;*/
    }
    return 0;
}
