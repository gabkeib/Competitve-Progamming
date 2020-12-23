#include <bits/stdc++.h>

using namespace std;

set<int> st;
vector <int> a;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int sk;
        cin >> sk;
        a.push_back(sk);
    }
    sort(a.begin(), a.end());
    for (int i:a){
        int t = st.size();
        if (i - 1 > 0)
        st.insert(i-1);
        if (st.size() != t) continue;
        else {
                st.insert(i);
                if (st.size() == t){
                    st.insert(i+1);
                }
            }
        }
    cout << st.size() << endl;
    return 0;
}
