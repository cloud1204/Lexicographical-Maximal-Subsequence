#include <bits/stdc++.h>
#define ll long long
#define int long long
#define fi first
#define se second
#define mat vector<vector<ll>> 
using namespace std;
void db() {cout << '\n';}
template <typename T, typename ...U> void db(T a, U ...b) {cout << a << ' ', db(b...);}
#ifdef Cloud
#define file freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout)
#else
#define file ios::sync_with_stdio(false); cin.tie(0)
#endif
const int N = 1e6 + 5;
struct Hash{
    int mod, base, pre[N]{}, pw[N]{1};
    int ptr = 1;
    void add(char c){
        pre[ptr] = pre[ptr - 1] * base + c;
        pre[ptr] %= mod;
        ptr ++;
    }
    void clear(){
        for (int i = 1; i < ptr; i++) pre[i] = 0;
        ptr = 1;
    }
    int query(int _l, int _r){
        int l = ptr - _r;
        int r = ptr - _l;
        int len = r - l + 1;
        int ans = pre[r] - pre[l - 1] * pw[len] % mod;
        if (ans < 0) ans += mod;
        return ans;
    }
    Hash(int _mod, int _base){
        mod = _mod;
        base = _base;
        for (int i = 1; i < N; i++) pw[i] = pw[i - 1] * base % mod;
    }
};
signed main(){
    file;
    int n;
    cin >> n;
    vector<string> s(n);
    for (auto &i : s) cin >> i;
    reverse(s.begin(), s.end());
    deque<char> cur;
    Hash h1(1e9 + 7, 2003), h2(998244353, 1204);
    for (string t : s){
        int cmp = 0, m = t.size();
        for (int i = 0; i < min(t.size(), cur.size()); i++){
            if (t[i] > cur[i]){
                cmp = 1;
                break;
            }
            if (t[i] < cur[i]){
                cmp = -1;
                break;
            }
        }
        if (cmp == 0 and t.size() >= cur.size()) cmp = 1;
        if (cmp == 0){
            int l = t.size() + 1, r = cur.size() + 1;
            while (l < r){
                int mid = l + r >> 1;
                if (h1.query(l, mid) == h1.query(l - m, mid - m) and h2.query(l, mid) == h2.query(l - m, mid - m))
                    l = mid + 1;
                else
                    r = mid;
            }
            l--;
            if (l == cur.size() or cur[l] < cur[l - m]) cmp = 1;
            else cmp = -1;
        }
        if (cmp < 0)
            continue;
        for (int i = m - 1; i >= 0; i--){
            h1.add(t[i]);
            h2.add(t[i]);
            cur.push_front(t[i]);
        }

    }
    for (char i : cur) cout << i;
    cout << '\n';
}
