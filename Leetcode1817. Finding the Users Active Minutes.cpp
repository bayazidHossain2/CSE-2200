class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        map<int,set<int>> user;
        for(int i=0;i<logs.size();i++){
            user[logs[i][0]].insert(logs[i][1]);
        }
        vector<int> answer(k,0);
        for(auto v : user){
            //cout<<v.first<<' '<<v.second<<endl;
            answer[(v.second).size()-1]++;
        }
        return answer;
    }
};
