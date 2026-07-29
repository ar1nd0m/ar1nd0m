/*ॐ वासुदेवाय नमः*/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0);
#define fx(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define el endl

struct Trie {
    struct Node {
        int ch[2];
        Node() {
            ch[0] = ch[1] = -1;
        }
    };

    vector<Node> t;

    Trie() {
        t.push_back(Node());
    }

    void insert(int x) {
        int cur = 0;
        for (int b = 30; b >= 0; b--) {
            int bit = (x >> b) & 1LL;
            if (t[cur].ch[bit] == -1) {
                t[cur].ch[bit] = t.size();
                t.push_back(Node());
            }
            cur = t[cur].ch[bit];
        }
    }

    int query(int x) {
        int cur = 0, res = 0;
        for (int b = 30; b >= 0; b--) {
            int bit = (x >> b) & 1LL;
            if (t[cur].ch[bit ^ 1] != -1) {
                res |= (1LL << b);
                cur = t[cur].ch[bit ^ 1];
            } else {
                cur = t[cur].ch[bit];
            }
        }
        return res;
    }
};

void sloved_by_Arindam() {
    int n;
    cin >> n;

    vector<int> a(n);
    fx(i, 0, n) cin >> a[i];

    Trie tr;
    tr.insert(a[0]);

    int ans = 0;
    fx(i, 1, n) {
        ans = max(ans, tr.query(a[i]));
        tr.insert(a[i]);
    }

    cout << ans << el;
}

int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        sloved_by_Arindam();
    }
}
