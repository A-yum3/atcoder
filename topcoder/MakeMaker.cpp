#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;
typedef pair<int, int> PI;
typedef pair<ll, ll> PL;
typedef map<int, int> MI;
typedef set<int> SI;
#define VV(T) vector<vector< T > >
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


class MazeMaker {
    public: int longestPath(vector<string> maze,int startRow, int startCol, vector<int>  moveRow,  vector<int> moveCol) {
        int maxi = 0;
        int width = maze[0].size(), height = maze.size();
        int board[50][50];

        for(int i = 0; i < height; i++) {
            for(int j = 0; j < width; j++) {
                board[i][j] = -1;
            }
        }

        board[startRow][startCol] = 0;
        queue<int> queueX;
        queue<int> queueY;
        queueX.push(startRow);
        queueY.push(startCol);

        while(queueX.size() > 0) {
            int x = queueX.front(), y = queueY.front();
            queueX.pop(); queueY.pop();
            for(int i = 0; i < moveRow.size(); i++) {
                int nextX = x + moveCol[i], nextY = y + moveRow[i];

                if(0 <= nextX && nextX < width
                && 0 <= nextY && nextY < height
                && board[nextY][nextX] == -1
                && maze[nextY].substr(nextX, 1) == ".") {
                    board[nextY][nextX] = board[y][x] + 1;
                    queueX.push(nextX);
                    queueY.push(nextY);
                }
            }
        }
        for(int i = 0; i < height; i++) {
            for(int j = 0; j < width; j++) {
                if(maze[i].substr(j, 1) == "." && board[i][j] == -1) return -1;
                maxi = max(maxi, board[i][j]);
            }
        }
        return maxi;
    }
};