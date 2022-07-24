#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("01output.txt","w",stdout);
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        int N,w;
        cin>>N>>w;
        vector<int> ys;
        int x,y;
        while(N--){
            cin>>x>>y;
            ys.push_back(y);
        }
        sort(ys.begin(),ys.end());
        int s_ind=0;
        int res=0;
        while(s_ind<ys.size()){
            int lim=ys[s_ind]+w;
            while(ys[s_ind]<=lim){
                s_ind++;
            }res++;
        }cout<<"Case "<<tc<<": "<<res<<endl;
    }return 0;
}
