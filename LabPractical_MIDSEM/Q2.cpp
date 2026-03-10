#include <bits/stdc++.h> 

using namespace std;

#define int long long int
#define endl '\n'

void code(){
	int n;
	cin >> n;
	vector<string> vec;
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
	unsigned int ans = 0;
	for(int i=0;i<n;i++){
		int mask = 0;
		for(int k=0;k<vec[i].size();k++){
			mask|=(1<<(vec[i][k]-'a'));
		}
		for(int j=i+1;j<n;j++){
			int tempMask=0;
			for(int k=0;k<vec[j].size();k++){
				tempMask|= (1<<(vec[j][k]-'a'));
			}
			if(!(tempMask & mask)) ans= max(ans,vec[i].size()*1ll*vec[j].size());
		}
	}
	cout<<ans;
}

int32_t main(){
	int t;
	cin >> t;
	while(t--)
	{
		code();
		cout << endl;
	}
}
