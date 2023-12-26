#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

typedef long long ll;

bool comparator(const pair<ll, ll> &a, const pair<ll, ll> &b) {
    return a.second > b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n, m, a, b, x, y;
    cin >> n;

    vector<pair<ll, ll>> p;
    unordered_map<ll, ll> imap;

    for (int i = 0; i < n; i++) {
        cin >> a >> x;
        p.push_back({a, x});
    }

    cin >> m;

    for (int j = 0; j < m; j++) {
        cin >> b >> y;
        p.push_back({b, y});
    }

    sort(p.begin(), p.end(), comparator);

    for (int k = 0; k < n + m; k++) {
        if (imap.find(p[k].first) == imap.end()) {
            imap[p[k].first] = p[k].second;
        } else {
            if (imap[p[k].first] < p[k].second) {
                imap[p[k].first] = p[k].second;
            }
        }
    }

    ll res = 0;

    for (auto e : imap) {
        res += e.second;
    }

    cout << res;
}
