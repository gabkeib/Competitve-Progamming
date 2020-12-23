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
        int n;
        cin >> n;
        vi a;
        for (int i = 0; i < n; i++){
            int sk;
            cin >> sk;
            a.pb(sk);
        }
        vector <bool> val;
        int amount = 0;
        for (int i = 0; i < n; i++){
            if (a[i] == i + 1){
                val.pb(1);
            } else {
                val.pb(0);
                amount++;
            }
        }
        if (amount == 0) ats(0);
        else {
            int i = 0;
            int curr = 0;
            while (val[i] == 1) i++;
            while (val[i] == 0 && i < n){
                    ++curr;
                    ++i;
                }
            if (curr != amount){
                ats(2);
            } else
                ats(1);
        }
    }
    return 0;
}

