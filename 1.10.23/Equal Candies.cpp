#include <bits/stdc++.h> 
using namespace std;
long long int equalCandies (vector<int> &candies, int n)
{
	if(n==0 || n==1) return 0;

	sort(candies.begin(),candies.end());
	int k=0;
	if(n%2==0) k=candies[n/2-1];

	else k=candies[n/2];

	long long ans=0;
	for(auto it:candies) ans+=abs(k-it);

	return ans;
}