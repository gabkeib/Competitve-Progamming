#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ws(x) cerr << #x << " is " << x << endl
#define pb push_back
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

vi a(200001);
map <int, int> mp;

int main()
{
    FAST_IO;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        int sk;
        cin >> sk;
        a[sk] = i;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++){
        int sk;
        cin >> sk;
        int pos = a[sk];
        if (i < pos){
            mp[pos - i]++;
            int l = ((i - 1) + (n - pos + 1)) * -1;
            mp[l]++;
            ans = max(ans, max(mp[pos - i], mp[l]));
        } else if (i > pos) {
            mp[pos - i]++;
            int r = (n - i) + pos;
            mp[r]++;
            ans = max(ans, max(mp[pos - i], mp[r]));
        } else {
            mp[0]++;
            ans = max(ans, mp[0]);
        }
    }
    ats(ans);
    return 0;
}

