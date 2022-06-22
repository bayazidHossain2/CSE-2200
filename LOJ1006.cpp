#include<iostream>
using namespace std;

int main() {
    int n, cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno) {
        long long dp[10005],mod=10000007;
        cin>>dp[0]>>dp[1]>>dp[2]>>dp[3]>>dp[4]>>dp[5]>>n;
        dp[6]=dp[0]+dp[1]+dp[2]+dp[3]+dp[4]+dp[5];
        for(int i=7;i<=n;i++){
            //cout<<dp[i-1]<<' '<<2*p<<endl;
            dp[i]=((2*dp[i-1]+mod)-dp[i-7])%mod;
            //cout<<dp[i]<<' '<<2*dp[i-1]<<' '<<dp[i-7]<<endl;
        }
        printf("Case %d: %d\n", caseno, dp[n] % 10000007);
    }
    return 0;
}
