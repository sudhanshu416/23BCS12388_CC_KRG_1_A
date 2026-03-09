#include <bits/stdc++.h>

using namespace std;

#define int long long int
#define vi vector<int>
#define vii vector<vector<int> >
#define pii pair<int,int>
#define mkp make_pair
#define mod 1000000007
#define endl '\n'
#define yes "YES"
#define no "NO"
#define vpii vector<pair<int,int> >
#define mii map<int,int>
#define range(a) a.begin(),a.end()
#define inputarr(a) for(int i=0;i<n;i++) cin>>a[i];
#define loop for(int i=0;i<n;i++)
#define F first
#define S second
#define it(a) for(auto it: a)


void code(){
    int n,k;
    cin >> n >> k;
    vi a(n), b(n);
    inputarr(b);
    queue<pii> q;
    int ctr=0,res=0, sum = 0;
    for(int i=n-1;i>=0;i--){
      sum-= ctr;
      if(q.front().F==i+k){
        ctr-=q.front().S;
        q.pop();
      }
      a[i]=sum;
      if(i>=k-1 && a[i]<b[i]){
        int need = (b[i]-a[i]+k-1)/k;
        q.push({i,need});
        ctr+= need;
        res+=need;
        sum+=need*k;
        a[i]+=need*k;
      }
    }
    int mx=0;
    for(int i=0;i<k-1;i++){
      if(a[i]<b[i]){
        mx= max(mx, (b[i]-a[i]+i)/(i+1));
      }
    }
    cout<<res+mx;
}

int32_t main(){
        code();
}
