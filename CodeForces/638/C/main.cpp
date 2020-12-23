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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        string A[k];
        for (int i = 0; i < k; i++){
            A[i] = "";
        }
        char last = s[n - 1];
        int index = 0;
        for (int i = 0; i < k; i++){
            A[i] += s[i];
        }
        if (A[0] != A[k - 1]) ats(A[k - 1]);
        else {
        for (int i = k; i < n; i++){
            if (s[i] == last){
                A[index++] += s[i];
                if (index == k) index = 0;
            } else {
                while (i < n){
                    A[index] += s[i++];
                }
            }
        }
        string ans = "";
        for (int i = 0; i < k; i++){
            ans = max(ans, A[i]);
        }
        ats(ans);
        }
    }
    return 0;
}

