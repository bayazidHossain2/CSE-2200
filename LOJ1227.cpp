#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        int n,p,Q;
        cin>>n>>p>>Q;
        int arr[n];
        int qc=0;
        int res=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(qc+arr[i]<=Q&&res+1<=p){
                qc+=arr[i];
                res++;
            }
        }
        cout<<"Case "<<tc<<": "<<res<<endl;
    }return 0;
}

