#include<iostream>
#include<vector>
#include<queue>
#define inf 10000
using namespace std;
int ix,iy,fx,fy;
int BFS(vector<vector<int>> low){
    low[ix][iy]=0;
    queue<pair<int,int>> qu;
    qu.push(make_pair(ix,iy));
    while(!qu.empty()){
        int cx=qu.front().first,cy=qu.front().second;
        if(cx+1<low.size()&&low[cx+1][cy]==-1) qu.push(make_pair(cx+1,cy)),low[cx+1][cy]=low[cx][cy]+1;
        if(cy+1<low[0].size()&&low[cx][cy+1]==-1) qu.push(make_pair(cx,cy+1)),low[cx][cy+1]=low[cx][cy]+1;
        if(cx-1>=0&&low[cx-1][cy]==-1) qu.push(make_pair(cx-1,cy)),low[cx-1][cy]=low[cx][cy]+1;
        if(cy-1>=0&&low[cx][cy-1]==-1) qu.push(make_pair(cx,cy-1)),low[cx][cy-1]=low[cx][cy]+1;
        if(low[fx][fy]!=-1) return low[fx][fy];
        qu.pop();
    }return -1;
}
void print(vector<vector<int>> data){
    for(int i=0;i<data.size();i++){
        for(int j=0;j<data[0].size();j++){
            cout<<data[i][j]<<' ';
        }cout<<endl;
    }cout<<endl;
}
int main(){
    int row,col;
    while(cin>>row>>col&&(row||col)){
        vector<vector<int>> low(row,vector<int>(col,-1));
        int R;
        cin>>R;
        while(R--){
            int rowN,N,colN;
            cin>>rowN>>N;
            while(N--){
                cin>>colN;
                low[rowN][colN]=inf;
            }
        }//print(low);
        cin>>ix>>iy;
        cin>>fx>>fy;
        int min_path=BFS(low);
        cout<<min_path<<endl;
    }return 0;
}
