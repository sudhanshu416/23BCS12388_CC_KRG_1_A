#include <bits/stdc++.h>

using namespace std;

#define int long long int
#define vi vector<int>
#define vii vector<vector<int> >
#define pii pair<int,int>
#define mod 1000000007
#define endl '\n'
#define yes "Yes"
#define no "No"
#define vpii vector<pair<int,int> >
#define mii map<int,int>
#define range(a) a.begin(),a.end()
#define inputarr(a,n) for(int i=0;i<n;i++) cin>>a[i];
#define loop(i,n) for(int i=0;i<n;i++)
#define revloop(i,n) for(int i=n-1;i>=0;i--)
#define F first
#define S second
#define it(a) for(auto it: a)
#define setbits(a) __builtin_popcount(a)
#define msbit(a) 31-__builtin_clz(a)
#define mspower(a) 1<<(31-__builtin_clz(a))
#define lwb lower_bound
#define upb upper_bound
void code(){
    int k;
    cin >> k;
    string s;
    cin>>s;
    mii m;
    m[0]=1;
    int sum=0,res=0;
    it(s){
      if(it=='1'){
        sum++;
      }
      res+=m[sum-k];
      m[sum]++;
    }
    cout<<res;
}

int32_t main(){
    int t=1;
    while(t--)
    {
        code();
        cout << endl;
    }
}
