#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector <ll> arr;
vector <ll> divv;

void godiv(ll sk);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    ll minn = 1000000000001LL;
    for (int i = 0; i < n; i++){
        ll sk;
        cin >> sk;
        arr.push_back(sk);
        minn = min(sk, minn);
    }
    ll d = 0;
    for (int i = 0; i < n; i++){
        d = __gcd(arr[i], d);
    }
    ll ans = 0;
    for (ll i = 1; i <= sqrt(d); i++){
        if (d % i == 0){
            ans++;
            if (i != (d / i)){
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}

void godiv(ll sk){
    vector <ll> neww;
    for (ll x:divv){
        if (sk % x == 0) neww.push_back(x);
    }
    divv = neww;
}
