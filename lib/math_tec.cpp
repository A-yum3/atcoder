
// ユークリッドの互除法
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// 拡張ユークリッドの互除法
int extgcd(int a, int b, int& x, int& y) {
    int d = a;
    if (b != 0) {
        d = extgcd(b, a % b, y, x);
        y -= (a / b) * x;
    } else {
        x = 1; y = 0;
    }
    return d;
}

// 入力はすべて正
// 素数判定O(√n)
bool is_prime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return n != 1; // 1の場合は例外
}

// 素数の列挙O(√n)
vector<int> divisor(int n){
    vector<int> res;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            res.push_back(i);
            if (i != n / i) res.push_back(n / i);
        }
    }
    return res;
}

// 素因数分解O(√n)
map<int, int> prime_factor(int n) {
    map<int, int> res;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            ++res[i];
            n /= i;
        }
    }
    if (n != 1) res[n] = 1;
    return res;
}

// エラトステネスの篩O(n log log n) TODO: 要class化　or 上記素数判定とは別途使用
int prime[MAX_N];           // i番目の素数
bool is_prime[MAX_N + 1];   // is_prime[i]がtrueならiは素数

// n以下の素数の数を返す
int sieve(int n) {
    int p = 0;
    for (int i = 0; i <= n; i++) is_prime[i] = true;
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            prime[p++] = i;
            for (int j = 2 * i; j <= n; j += i) is_prime[j] = false;
        }
    }
    return p;
}

// 繰り返し二乗法 TODO: class化
typedef long long ll;

ll mod_pow(ll x, ll n, ll mod) {
    if (n == 0) return 1;
    ll res = mod_pow(x * x % mod, n / 2, mod);
    if (n & 1) res = res * x % mod;
    return res;
}