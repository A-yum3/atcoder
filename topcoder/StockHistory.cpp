#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;
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

class StockHistory {
    public: int maximumEarnings(int initialInvestment, int monthlyContribution, vector<string> stockPrices) {
        int money = initialInvestment;
        int month = stockPrices.size();
        int corp = 1;
        char *s = (char *)stockPrices[0].c_str();
        while(*s++) if(*s  == ' ') corp++;

        int prices[50][999];
        double max = 0, profit = 0;
        double proportion[50] = {0};
        bool buy[50] = {0};

        for(int i = 0; i < month; i++) {
            string s = stockPrices[i];
            for(int j = 0; j < corp; j++) {
                int  pos = s.find(" ");
                if(pos == string::npos) {
                    prices[i][j]  = atoi(s.c_str());
                } else {
                    prices[i][j] = atoi(s.substr(0, pos).c_str());
                    s = s.substr(pos + 1, s.size());
                }
            }
        }

        for(int i = month - 2; 0 <= i; i--) {
            for(int j = 0; j < corp; j++) {
                double p = 1.0 * prices[month - 1][j] / prices[i][j] - 1;
                if(0 < p && max < p) {
                    buy[i] = true;
                    max = p;
                    proportion[i] = p;
                }
            }
        }

        for(int i = 0; i < month; i++) {
            if(buy[i]) {
                profit += money * proportion[i];
                money = 0;
            }
            money += monthlyContribution;
        }
        return (int)round(profit);
    }
};