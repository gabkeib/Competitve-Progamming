#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ws(x) cerr << #x << " is " << x << endl;
#define pb(x) push_back(x)
#define ats(x) cout << x << "\n"

typedef long long ll;
typedef vector<int> vi;
typedef pair <int, int> pii;
typedef vector<pii> vii;

const int INF = INT_MAX;

vi arr;

int main()
{
    FAST_IO;
    int n;
    cin >> n;
    int pos = 0;
    int neg = 0;
    int neut = 0;
    for (int i = 0; i < n; i++){
        int sk;
        cin >> sk;
        if (sk >= 1) pos++;
        if (sk < 0) neg++;
        if (sk == 0) neut++;
        arr.push_back(sk);
    }
    sort (arr.begin(), arr.end());
    ll ans = 0;
    for (int i:arr){
        if (i < -1) ans += abs(i + 1);
        if (i == 0){
            if (neg % 2 == 1){
                ans++;
                neg++;
            }
            else ans++;
        }
        if (i > 1) ans += (i - 1);
    }
    if (neg % 2 == 1) ats(ans+2);
    else ats(ans);
    return 0;
}

