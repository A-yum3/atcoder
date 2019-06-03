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

long long ways[100][100][55] = {0};
int dx[] = {1, 1, 1, 0, -1,-1,-1, 0, 2, 1, -1, -2,-2,-1, 1, 2};
int dy[] = {1, 0,-1,-1, -1, 0, 1, 1,-1,-2, -2, -1, 1, 2, 2, 1};

class ChessMetric {
    public: long long HowMany(int size, vector<int> start, vector<int> end, int numMoves) {
        int x, y, i, j;
        int sx = start[0], sy = start[1], ex = end[0], ey = end[1];

        ways[sy][sx][0] = 1;
        for(i = 1; i <= numMoves; i++) {
            for(x = 0; x < size; x++) {
                for(y = 0; y < size; y++) {
                    for(j = 0; j < 16; j++) {
                        int nx = x + dx[j];
                        int ny = y + dy[j];
                        if(nx < 0 || ny < 0 || nx >= size || ny >= size) continue;

                        ways[ny][nx][i] += ways[y][x][i - 1];
                    }
                }
            }
        }
        return ways[ey][ex][numMoves];
    }
};