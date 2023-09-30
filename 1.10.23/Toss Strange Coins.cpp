#include <bits/stdc++.h>
using namespace std;
double tossStrangeCoins(vector<double> &prob, int target)
{
    // Write your code here.
    vector<double> dp(target + 1, 0);
    dp[0] = 1.0;
    for (int i = 0; i < prob.size(); i++)
    {
        for (int j = min(target, i + 1); j >= 0; j--)
        {
            if (j == 0)

            {

                dp[j] = dp[j] * (1 - prob[i]);
            }
            else

            {
                dp[j] = dp[j] * (1 - prob[i]);

                dp[j] = dp[j] +
                        (dp[j - 1] * prob[i]);
            }
        }
    }
    return dp[target];
}