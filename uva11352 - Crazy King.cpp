#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void print(vector<vector<char>> data){
    for(int i=0;i<data.size();i++){
        for(int j=0;j<data[0].size();j++){
            cout<<data[i][j];
        }cout<<endl;
    }cout<<endl;
}
void mark_nearest_to_enemy(vector< vector<char> > &data){
    for(int i=0;i<data.size();i++){
        for(int j=0;j<data[i].size();j++){
            if(data[i][j]=='Z'){
                if(i-2>=0){
                    if(j-1>=0&&data[i-2][j-1]=='.'){
                        data[i-2][j-1]='n';
                    }if(j+1<data[0].size()&&data[i-2][j+1]=='.'){
                        data[i-2][j+1]='n';
                    }
                }if(i+2<data.size()){
                    if(j-1>=0&&data[i+2][j-1]=='.'){
                        data[i+2][j-1]='n';
                    }if(j+1<data[0].size()&&data[i+2][j+1]=='.'){
                        data[i+2][j+1]='n';
                    }
                }if(j-2>=0){
                    if(i-1>=0&&data[i-1][j-2]=='.'){
                        data[i-1][j-2]='n';
                    }if(i+1<data.size()&&data[i+1][j-2]=='.'){
                        data[i+1][j-2]='n';
                    }
                }if(j+2<data[0].size()){
                    if(i-1>=0&&data[i-1][j+2]=='.'){
                        data[i-1][j+2]='n';
                    }if(i+1<data.size()&&data[i+1][j+2]=='.'){
                        data[i+1][j+2]='n';
                    }
                }
            }
        }
    }//print(data);
}
int BFS(vector<vector<char>> data,pair<int,int> Aind,pair<int,int> Bind){
    vector<vector<int>> low(data.size(),vector<int>(data[0].size(),-1));
    low[Aind.first][Aind.second]=0;
    queue<pair<int,int>> qu;
    qu.push(Aind);
    while(!qu.empty()){
        //cout<<"Queue size : "<<qu.size()<<endl;
        pair<int,int> cur=qu.front();
        qu.pop();
        int cf=cur.first,cs=cur.second;
        if(cf-1>=0){
            if(data[cf-1][cs]<'C'&&low[cf-1][cs]<0){
                qu.push(make_pair(cf-1,cs));
                low[cf-1][cs]=low[cf][cs]+1;
            }
            if(cs-1>=0&&data[cf-1][cs-1]<'C'&&low[cf-1][cs-1]<0){
                qu.push(make_pair(cf-1,cs-1));
                low[cf-1][cs-1]=low[cf][cs]+1;
            }if(cs+1<data[0].size()&&data[cf-1][cs+1]<'C'&&low[cf-1][cs+1]<0){
                qu.push(make_pair(cf-1,cs+1));
                low[cf-1][cs+1]=low[cf][cs]+1;
            }
        }if(cs-1>=0&&data[cf][cs-1]<'C'&&low[cf][cs-1]<0){
            qu.push(make_pair(cf,cs-1));
            low[cf][cs-1]=low[cf][cs]+1;
        }
        if(cs+1<data[0].size()&&data[cf][cs+1]<'C'&&low[cf][cs+1]<0){
            qu.push(make_pair(cf,cs+1));
            low[cf][cs+1]=low[cf][cs]+1;
        }
        if(cf+1<data.size()){
            if(data[cf+1][cs]<'C'&&low[cf+1][cs]<0){
                qu.push(make_pair(cf+1,cs));
                low[cf+1][cs]=low[cf][cs]+1;
            }
            if(cs-1>=0&&data[cf+1][cs-1]<'C'&&low[cf+1][cs-1]<0){
                qu.push(make_pair(cf+1,cs-1));
                low[cf+1][cs-1]=low[cf][cs]+1;
            }if(cs+1<data[0].size()&&data[cf+1][cs+1]<'C'&&low[cf+1][cs+1]<0){
                qu.push(make_pair(cf+1,cs+1));
                low[cf+1][cs+1]=low[cf][cs]+1;
            }
        }if(low[Bind.first][Bind.second]>=0){
            return low[Bind.first][Bind.second];
        }
    }
    return -1;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int M,N;
        cin>>M>>N;
        vector< vector<char> > data(M,vector<char>(N));
        pair<int,int> Aind,Bind;
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                cin>>data[i][j];
                if(data[i][j]=='A'){
                    Aind = make_pair(i,j);
                }else if(data[i][j]=='B'){
                    Bind = make_pair(i,j);
                }
            }
        }
        //cout<<"Before"<<endl;
        //print(data);
        mark_nearest_to_enemy(data);
        //cout<<endl<<"After"<<endl;
        //print(data);
        int sort_path=BFS(data,Aind,Bind);
        if(sort_path==-1){
            cout<<"King Peter, you can't go now!"<<endl;
        }else{
            cout<<"Minimal possible length of a trip is "<<sort_path<<endl;
        }
    }return 0;
}
/*
2
3 3
ZZ.
...
AB.
*/
