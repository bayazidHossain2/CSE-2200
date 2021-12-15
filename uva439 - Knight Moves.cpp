#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void print(vector< vector<int> > vec){
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            cout<<vec[i][j]<<' ';
        }cout<<endl;
    }
}

int BFS(vector<vector<int>> &vec,int x,int y,int p,int q){
    vec[x][y]=0;
    queue<pair<int,int>> pu;
    pu.push(make_pair(x,y));
    while(!pu.empty()){
        x=pu.front().first,y=pu.front().second;
        pu.pop();
        if(x-2>=0&&y-1>=0&&vec[x-2][y-1]==-1){
            vec[x-2][y-1]=(vec[x][y]+1);
            pu.push(make_pair(x-2,y-1));
        }
        if(x-2>=0&&y+1<8&&vec[x-2][y+1]==-1){
            vec[x-2][y+1]=(vec[x][y]+1);
            pu.push(make_pair(x-2,y+1));
        }
        if(x-1>=0&&y-2>=0&&vec[x-1][y-2]==-1){
            vec[x-1][y-2]=(vec[x][y]+1);
            pu.push(make_pair(x-1,y-2));
        }
        if(x-1>=0&&y+2<8&&vec[x-1][y+2]==-1){
            vec[x-1][y+2]=(vec[x][y]+1);
            pu.push(make_pair(x-1,y+2));
        }
        if(x+1<8&&y-2>=0&&vec[x+1][y-2]==-1){
            vec[x+1][y-2]=(vec[x][y]+1);
            pu.push(make_pair(x+1,y-2));
        }
        if(x+1<8&&y+2<8&&vec[x+1][y+2]==-1){
            vec[x+1][y+2]=(vec[x][y]+1);
            pu.push(make_pair(x+1,y+2));
        }
        if(x+2<8&&y-1>=0&&vec[x+2][y-1]==-1){
            vec[x+2][y-1]=(vec[x][y]+1);
            pu.push(make_pair(x+2,y-1));
        }
        if(x+2<8&&y+1<8&&vec[x+2][y+1]==-1){
            vec[x+2][y+1]=(vec[x][y]+1);
            pu.push(make_pair(x+2,y+1));
        }if(vec[p][q]!=-1){
            return vec[p][q];
        }
    }
    return vec[p][q];
}
int main(){
    char a,b,c,d,s;
    while(cin>>a>>b>>c>>d){
        int r1=a-'a',c1=b-'1',r2=c-'a',c2=d-'1',N=8;
        vector< vector<int> > vec(N,vector<int>(N,-1));
        cout<<"To get from "<<a<<b<<" to "<<c<<d<<" takes "<<BFS(vec,r1,c1,r2,c2)<<" knight moves."<<endl;
    }return 0;
}
