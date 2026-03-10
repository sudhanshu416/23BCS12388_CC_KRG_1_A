#include <bits/stdc++.h> 

using namespace std;
#define vi vector<int>
#define vii vector<vector<int> >
#define endl '\n'

void code(){
	int n;
	cin >> n;
	vii tasks(n,vi(2));
	for(int i=0;i<n;i++){
		cin>>tasks[i][0]>>tasks[i][1];
	}
	sort(tasks.begin(),tasks.end(),[](const auto &a, const auto &b){
		return (a[1]-a[0]) > (b[1]-b[0]);
	});
	int carry = 0, sum = 0;
	for(auto &i: tasks){
		int x = max(i[0],i[1]);
		if(x>carry){
			sum += x-carry;
			carry = x-i[0];
		}
		else{
			carry -= i[0];
		}
	}
	cout<<sum;
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

/*
Test Cases
3
3
1 2
2 4
4 8
5
1 3 
2 4
10 11
10 12
8 9
6
1 7
2 8
3 9
4 10
5 11
6 12


Output
8
32
27
*/
