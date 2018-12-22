#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin() , v.end()
#define REP(i, x, n) for(int i = x; i < n; i++)

int N, A[100001], mins[100001],maxs[100001],sum=0,rel=0,cnt=0;
int main(){
  cin >> N;
  rep(i, N) cin >> A[i];
  sort(A, A+N);
  int N_A = (N%2==0) ? N/2 : N/2+1;
  for(int i=0; i < N_A; i++) mins[i] = A[i];
  for(int j=N_A; j < N; j++){
    maxs[cnt] = A[j];
    cnt++;
  }
  for(int p=0; p < N - N_A; p++){
    for(int i=0; i < N_A; i++){
      sum = 0;

      for(int j=0; j < N_A - 1; j++){
        sum += abs(mins[j] - maxs[j]) + abs(mins[j+1] - maxs[j]);
      }

      rel = max(sum, rel);

      int tmp = mins[N_A - 1];
      for(int k=0; k < N_A; k++){
        mins[N_A - 1 - k] = mins[N_A - 1 - (k + 1)];
      }
      mins[0] = tmp;

    }
    int tmp = maxs[N - N_A - 1];
    for(int k=0; k < N - N_A; k++){
      maxs[N - N_A - k] = maxs[N - N_A - 1 - (k + 1)];
    }
    maxs[0] = tmp;
  }
  cout << rel << endl;
}