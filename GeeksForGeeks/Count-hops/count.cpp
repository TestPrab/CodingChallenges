#include <bits/stdc++.h>
using namespace std;

int main()
{
    //code
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int dp[n + 1];
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2;

        for (int i = 3; i <= n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
        }
        // for(int i =0; i <=n; i++){
            cout << dp[n] << " ";
        // }
        cout << "\n";
    }
    return 0;
}