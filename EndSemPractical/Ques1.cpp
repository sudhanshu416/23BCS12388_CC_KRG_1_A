class Solution {
  public:
    vector<int> gcd(int a, int b) {
        // code here
        if(!b) return {a,1,0};
        vector<int> res = gcd(b,a%b);
        int x = res[2];
        int y = res[1] - (a/b) * res[2];
        res[1] = x, res[2] = y;
        return res;
    }
};
