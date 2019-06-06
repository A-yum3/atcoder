#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define dump(x)  cout << #x << " = " << (x) << endl
#define YES(n) cout << ((n) ? "YES" : "NO"  ) << endl
#define Yes(n) cout << ((n) ? "Yes" : "No"  ) << endl
#define POSSIBLE(n) cout << ((n) ? "POSSIBLE" : "IMPOSSIBLE"  ) << endl
#define Possible(n) cout << ((n) ? "Possible" : "Impossible"  ) << endl

#define rep(i, n) REP(i, 0, n)                              // 0, 1, ..., n-1
#define REP(i, x, n) for(int i = x; i < n; i++)             // x, x + 1, ..., n-1
#define FOREACH(x,a) for(auto& (x) : (a) )

#define ALL(v) (v).begin() , (v).end()
#define RALL(v) (v).rbegin(), (v).rend()

#define COUT(x) cout << (x) << endl

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

class BatchSystem {
    public: vector<int> schedule(vector<int> duration, vector<string> user) {
        int N = duration.size();

        map<string, ll> jobTime;
        for(int n = 0; n < N; n++) jobTime[user[n]] += duration[n];

        vector<bool> done(N);
        vector<int> ans;
        while(ans.size() < N) {
            string next;
            for(int n = 0; n < N; n++) {
                if(!done[n] && (next.empty() || jobTime[user[n]] < jobTime[next]) ){
                    next = user[n];
                }
            }
            for(int n = 0; n < N; n++) {
                if(user[n] == next) {
                    done[n] = true;
                    ans.push_back(n);
                }
            }
        }
        return ans;
    }
};