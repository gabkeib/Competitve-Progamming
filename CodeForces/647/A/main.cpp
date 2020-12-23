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


int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t--){
        ll a, b;
        cin >> a >> b;
        if (a > b) swap(a, b);
        if (b % a != 0) ats(-1);
        else if (a == b) ats(0);
        else {
            ll div = b / a;
            if (div % 2 == 1) ats(-1);
            else {
                ll ans = 0;
                if (div % 8 == 0){
                    ll add = 0;
                    ll curr = 8;
                    while (curr <= div){
                        add++;
                        curr *= 8;
                    }
                    ans += add;
                    if (div % (curr / 8) == 0)
                    div /= (curr/8);
                }
                if (div % 4 == 0){
                    ll add = 0;
                    ll curr = 4;
                    while (curr <= div){
                        add++;
                        curr *= 4;
                    }
                    ans += add;
                    if (div % (curr / 4) == 0)
                    div /= (curr/4);
                }
                if (div % 2 == 0){
                    ll add = 0;
                    ll curr = 2;
                    while (curr <= div){
                        add++;
                        curr *= 2;
                    }
                    ans += add;
                    if (div % (curr / 2) == 0)
                    div /= (curr/2);
                }
                if (div == 1)
                ats(ans); else ats(-1);
            }
        }
    }
    return 0;
}

