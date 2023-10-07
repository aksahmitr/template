#include <bits/stdc++.h>

#define endl '\n'
#define pb push_back
#define sz(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define w(x) cerr << "\n" << (#x) << " is " << (x) << endl

using namespace std;

void solve(int t){
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    for(int tt=0;tt<t;tt++){
        solve(tt);
    }
    return 0;
}

int first_true(int lo, int hi) {
    hi++;
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        bool valid = 0;
        if (valid) {
            hi = mid;
        } else {
            lo = mid + 1;
        }
    }
    return lo;
}

int last_true(int lo, int hi) {
    lo--;
    while (lo < hi) {
        int mid = lo + (hi - lo + 1) / 2;
        bool valid = 0;
        if (valid) {
            lo = mid;
        } else {
            hi = mid - 1;
        }
    }
    return lo;
}

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int parent[1000000];
int sizeDSU[1000000];

void make_set(int v) {
    parent[v] = v;
    sizeDSU[v] = 1;
}

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (sizeDSU[a] < sizeDSU[b])
            swap(a, b);
        parent[b] = a;
        sizeDSU[a] += sizeDSU[b];
    }
}

long long int_sqrt (long long x) {
  long long ans = 0;
  for (long long k = 1LL << 30; k != 0; k /= 2) {
    if ((ans + k) * (ans + k) <= x) {
      ans += k;
    }
  }
  return ans;
}

long long modFact(int n, int p)
{
    if (n >= p)
        return 0;
 
    long long result = 1;
    for (int i = 1; i <= n; i++){
        result = (result * i) % p;
    }
    return result;
}

