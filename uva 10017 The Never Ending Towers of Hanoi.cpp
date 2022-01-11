#include<iostream>
#include<vector>
using namespace std;
vector<int> data[3];
vector<char> ch{'A','B','C'};
int m,step;
void print(){
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<ch[i]<<"=>";
        if(!data[i].empty()){
            cout<<"  ";
            for(auto v : data[i]){
                cout<<' '<<v;
            }
        }cout<<endl;
    }
}
void rec(int n,int from,int use,int to){
    if(step==m) return;
    if(n==1){
        data[to].push_back(data[from].back());
        data[from].pop_back();
        step++;
        print();
    }else{
        rec(n-1,from,to,use);
        if(step==m) return;
        data[to].push_back(data[from].back());
        data[from].pop_back();
        step++;
        print();
        rec(n-1,use,from,to);
    }
}
int main(){
    int n,pn=1;
    while(cin>>n>>m&&(n||m)){
        cout<<"Problem #"<<pn++<<endl;
        for(int i=n;i>0;i--){
            data[0].push_back(i);
        }
        step=0;
        print();
        rec(n,0,1,2);
        for(int i=0;i<3;i++){
            data[i].clear();
        }cout<<endl;
    }
}
