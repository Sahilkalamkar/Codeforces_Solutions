#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <math.h>
#include <string>
#include <cstring>
#include <set>
#include <map>
#include <unordered_map>
#include <assert.h>
#include <array>
#include <random>
#include <chrono>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<int, pair<int, int>> piii;
typedef vector<int> vi;
typedef vector<pii> vii;

int dadsadasda;

#define ri(a) dadsadasda=scanf("%d", &a)
#define rii(a,b) dadsadasda=scanf("%d %d", &a, &b)
#define riii(a,b,c) dadsadasda=scanf("%d %d %d", &a, &b, &c)
#define rl(a) dadsadasda=scanf("%lld", &a)
#define rll(a,b) dadsadasda=scanf("%lld %lld", &a, &b)
#define FOR(i,n,m) for(int i=n; i<m; i++)
#define ROF(i,n,m) for(int i=n; i>m; i--)
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define F first
#define S second
#define ALL(s) s.begin(),s.end()
#define SZ(s) (int)s.size()

const int INF = 0x3f3f3f3f;
const ll LLINF = 1e18;
const int MAXN = 210; // CAMBIAR ESTE
const int MAXK = 1010;
const int MOD = 1e9 + 7;
//mt19937 rng(chrono::system_clock::now().time_since_epoch().count());

// GJNM
int N, K;
int A[MAXN];

ll DP[2][MAXN][MAXK];
int main() {
    rii(N, K);
    FOR(i, 0, N) ri(A[i + 1]);
    sort(A + 1, A + N + 1);
    A[0] = A[1];

    DP[0][0][0] = 1;
    FOR(i, 1, N + 1) {
        int curr = i & 1;
        int prev = curr ^ 1;
        FOR(j, 0, N + 1) FOR(k, 0, K + 1) DP[curr][j][k] = 0;
        FOR(j, 0, N + 1) FOR(k, 0, K + 1) {
            if (k + j * (A[i] - A[i - 1]) <= K) {
                if (j + 1 <= N)
                    DP[curr][j + 1][k + j * (A[i] - A[i - 1])] += DP[prev][j][k] % MOD;
                if (j - 1 >= 0)
                    DP[curr][j - 1][k + j * (A[i] - A[i - 1])] += j * DP[prev][j][k] % MOD;
                DP[curr][j][k + j * (A[i] - A[i - 1])] += (j + 1) * DP[prev][j][k] % MOD;
            }
        }
    }
    ll ans = 0;
    int curr = N & 1;
    FOR(z, 0, K + 1) ans += DP[curr][0][z];
    ans %= MOD;
    printf("%lld\n", ans);
    return 0;
}
