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


int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t-- > 0){
        int n;
        cin >> n;
        vi pos;
        vi neg;
        vi a;
        vi b;
        for (int i = 0; i < n; i++){
            int sk;
            cin >> sk;
            a.pb(sk);
            if (sk == 1) pos.pb(i);
            else if (sk == -1) neg.pb(i);
        }
        for (int i = 0; i < n; i++){
            int sk;
            cin >> sk;
            b.pb(sk);
        }
        bool great = true;
        for (int i = n - 1; i >= 0; i--){
            if (a[i] == 1) pos.pop_back();
            else if(a[i] == -1) neg.pop_back();
            int diff = b[i] - a[i];
            if (diff > 0){
                if (pos.size() == 0) great = false;
            }
            else if (diff < 0){
                if (neg.size() == 0) great = false;
            }
        }
        if (great) ats("YES");
        else ats("NO");
    }
    return 0;
}

