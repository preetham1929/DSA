#include <bits/stdc++.h>
using namespace std;

int f(int ind ,int w,vector<int>&wt,vector<int>&val,vector<vector<int>>&dp){
	if(ind ==0){
		if(wt[ind]<=w)return val[ind];
		else return 0;
	}
	
	if(dp[ind][w]=-1)return dp[ind][w];
	
	int take =0 ,skip=f(ind-1,w,wt,val,dp);
	if(w>=wt[ind]){
		take =val[ind]+f(ind-1,w-wt[ind],wt,val,dp);
	}
	return dp[ind][w]= max(take,skip);
}

int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
	vector<vector<int>>dp(n,vector<int>(w+1,-1));
	return f(n-1,w,weights,values,dp);
}

int main(){
	return 0;
}
