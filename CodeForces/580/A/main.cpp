#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool usedA[401];
    bool usedB[401];
    for (int i = 0; i <= 400; i++){
        usedA[i] = false;
        usedB[i] = false;
    }
    int a;
    vector <int> ar;
    int b;
    vector <int> br;
    cin >> a;
    for (int i = 0; i < a; i++){
        int sk;
        cin >> sk;
        usedA[sk] = true;
        ar.push_back(sk);
    }
    cin >> b;
    for (int i = 0; i < b; i++){
        int sk;
        cin >> sk;
        usedB[sk] = true;
        br.push_back(sk);
    }
    pair <int, int> ans;
    for (int i:ar){
        bool findd = false;
        for (int j:br){
            int sk = i + j;
            if (!usedA[sk] && !usedB[sk]){
                ans = {i, j};
                findd = true;
                break;
            }
        }
        if (findd) break;
    }
    cout << ans.first << " " << ans.second << endl;
    return 0;
}
