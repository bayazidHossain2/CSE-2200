#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        int n,m;
        cin>>n>>m;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        char q;
        int d;
        bool rev=false;
        while(m--){
            cin>>q;
            switch(q){
            case 'S':
                cin>>d;
                for(int i=0;i<n;i++){
                    arr[i]+=d;
                }
                break;
            case 'M':
                cin>>d;
                for(int i=0;i<n;i++){
                    arr[i]*=d;
                }
                break;
            case 'D':
                cin>>d;
                for(int i=0;i<n;i++){
                    arr[i]/=d;
                }
                break;
            case 'P':
                int x,y;
                cin>>x>>y;
                d=arr[x];
                arr[x]=arr[y];
                arr[y]=d;
                break;
            case 'R':
                for(int i=0,j=n-1;i<j;i++,j--){
                    swap(arr[i],arr[j]);
                }
            }
        }cout<<"Case "<<tc<<":\n";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<' ';
        }cout<<endl;
    }return 0;
}
