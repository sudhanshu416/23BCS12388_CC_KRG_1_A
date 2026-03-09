#include <iostream>
#include<vector>
#include<map>
#include<set>
using namespace std;
void solve(){
  int n;
  cin>>n;
  map<int,int> m;
  vector<int>a(n);
  int res=0;
  for(int i=0;i<n;i++){
    cin>>a[i];
    m[a[i]]++;
  }
  for(int i=0;i<n-1;i++){
    int sum=a[i];
    for(int j=i+1;j<n;j++){
      sum+=a[j];
      if(m.count(sum)){
        res+=m[sum];
        m.erase(sum);
      }
    }
  }
  cout<<res;
  
}
int main() 
{
    int t;
    cin>>t;
    while(t--){
      solve();
      cout<<'\n';
    }
    return 0;
}
