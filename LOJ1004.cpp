#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        int N;
        cin>>N;
        long long arr[2*N+1][N+1];
        long long res=0;
        for(int i=0;i<N;i++){
            for(int j=0;j<=i;j++){
                cin>>arr[i][j];
            }
        }int p=N;
        for(int i=N-1;i>0;i--){
            for(int j=0;j<i;j++){
                cin>>arr[p][j];
            }p++;
        }
        if(N==1){
            cout<<"Case "<<tc<<": "<<arr[0][0]<<endl;
            continue;
        }
        for(int i=1;i<N;i++){
            arr[i][0]+=arr[i-1][0];
            //cout<<arr[i][0]<<' ';
            for(int j=1;j<i;j++){
                if(arr[i-1][j-1]<arr[i-1][j]){
                    arr[i][j]+=arr[i-1][j];
                }else{
                    arr[i][j]+=arr[i-1][j-1];
                }//cout<<arr[i][j]<<' ';
            }
            arr[i][i]+=arr[i-1][i-1];
            //cout<<arr[i][i]<<endl;
        }p=N;
        for(int i=N-1;i>1;i--){
            for(int j=0;j<i;j++){
                if(arr[p-1][j]<arr[p-1][j+1]){
                    arr[p][j]+=arr[p-1][j+1];
                }else{
                    arr[p][j]+=arr[p-1][j];
                }//cout<<arr[p][j]<<' ';
            }p++;
            //cout<<endl;
        }
        p--;
        if(arr[p][0]<arr[p][1]){
            cout<<"Case "<<tc<<": "<<arr[p][1]+arr[p+1][0]<<endl;
        }else{
            cout<<"Case "<<tc<<": "<<arr[p][0]+arr[p+1][0]<<endl;
        }
    }return 0;
}
