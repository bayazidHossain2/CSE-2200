#include<iostream>
#include<map>
#include<queue>
using namespace std;
map<string,int> word;
void BFS(){
    queue<string> qu;
    //qu.push("Bristy");
    //cout<<qu.front()<<endl;
    for(int i=0;i<26;i++){
        string st="";
        st+=char('a'+i);
        //cout<<"st "<<st<<endl;
        qu.push(st);
        word[st]=i+1;
        //cout<<qu.front()<<' '<<qu.size()<<endl;
    }
    int serial=27;
    while(!qu.empty()){
        string str=qu.front();
        if(str.size()>4) break;
        qu.pop();
        char ch=str[str.size()-1];
        //cout<<"Queue front is -> "<<str<<" last char " <<ch<<endl;
        for(ch++;ch<='z';ch++){
            //cout<<str+ch<<" -> "<<serial<<endl;
            word[str+ch]=serial;
            serial++;
            qu.push(str+ch);
        }
    }
}
int main(){
    BFS();
    string str;
    while(cin>>str){
        cout<<word[str]<<endl;
    }return 0;
}
