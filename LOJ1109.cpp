#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

const int lim=1003;
int div_count[lim];

void div_ctr_sive(){
    for(int i=1;i<lim;i++){
        for(int j=i+i;j<lim;j+=i){
            div_count[j]++;
        }
    }
}
int cmp(pair<int,int> a,pair<int,int> b){
    if(a.first==b.first){
        return a.second>b.second;
    }
    return a<b;
}
int main(){
    div_ctr_sive();

    vector<pair<int,int>> divs;
    for(int i=1;i<1001;i++){
        //cout<<i<<" -> "<<div_count[i]<<endl;
        divs.push_back(make_pair(div_count[i],i));
    }
    sort(divs.begin(),divs.end(),cmp);

    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        int n;
        cin>>n;
        cout<<"Case "<<tc<<": "<<divs[n-1].second<<endl;
    }return 0;
}
