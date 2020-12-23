#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ws(x) cerr << #x << " is " << x << endl
#define pb(x) push_back(x)
#define ats(x) cout << x << "\n"
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

typedef long long ll;
typedef vector<int> vi;
typedef pair <int, int> pii;
typedef vector<pii> vii;
typedef tuple<int, int, int> tiii;

const int INF = INT_MAX;

ll pref[200010] = {0};
ll ans = 0;

int main()
{
    FAST_IO;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int sk;
        cin >> sk;
        pref[i + 1] = pref[i] + sk;
    }
    int f = 0;
    set <ll> s = {0};
    for (int i = 0; i < n; i++){
        while (f < n && !s.count(pref[f + 1])){
            f++;
            s.insert(pref[f]);
        }
        ans += f - i;
        s.erase(pref[i]);
    }
    ats(ans);
    return 0;
}

