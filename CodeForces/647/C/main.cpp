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

ll diff[65];
ll addin[65];

string conv(ll n){
    ll sk = n;
    string num = "";
    while (sk != 0){
        if (sk % 2 == 0) num += '0';
        else num += '1';
        sk /= 2;
    }
    reverse(num.begin(), num.end());
    return num;
}

void pref(){
    diff[1] = 1;
    diff[2] = 4;
    addin[2] = 7;
    addin[1] = 3;
    addin[0] = 1;
    for (int i = 3; i <= 64; i++){
        diff[i] = diff[i - 1] * 2 + i;
        addin[i] = diff[i] + i + 1;
}
}

int main()
{
    FAST_IO;
    int t;
    cin >> t;
    pref();
    while (t--){
        ll n;
        cin >> n;
        string s = conv(n);
        int k = s.length();
        ll ans = 0;
       // cout << n << " " << s << endl;
        for (int i = 0; i < k; i++){
         //   cout << s[i] << " " << i << " " << addin[k - i - 1] << endl;
            if (s[i] == '1'){

                ans += addin[k - i - 1];
            }
        }
        ats(ans);
    }
    return 0;
}

