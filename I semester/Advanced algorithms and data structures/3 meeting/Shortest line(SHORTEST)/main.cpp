#include <iostream>
#include <iomanip>
#include <algorithm>
#include <utility>
#include <vector>
#include <cmath>

using namespace std;

typedef pair<int, int> punkt;

bool comp_x(const punkt &a, const punkt &b) {
    return a.first < b.first;
}

bool comp_y(const punkt &a, const punkt &b) {
    return a.second < b.second;
}

bool comp_x_y(const punkt &a, const punkt &b) {
    return a.first == b.first ?
        a.second < b.second : a.first < b.first;
}

double odl(const punkt &a, const punkt &b) {
    double dx = b.first - a.first, dy = b.second - a.second;
    return sqrt((dx * dx) + (dy * dy));
}

double min_odl(const vector<punkt> &t, int a, int b) {
    if (b - a == 2) return odl(t[a], t[a+1]);
    else if (b - a == 3) {
        double p = odl(t[a], t[a+1]);
        double q = odl(t[a], t[a+2]);
        double r = odl(t[a+1], t[a+2]);
        return min(min(p, q), r);
    }
    else
    {
        int c = (a + b) / 2; // œrodek zakresu
        double mdl = min_odl(t, a, c); // minimalna odleg³oœæ w lewej czêœæi
        double mdr = min_odl(t, c, b); // minimalna odleg³oœæ w prawej czêœæi
        double m = min(mdl, mdr); // szerokoœæ pasa przygranicznego

        int mlx = int(ceil(t[c].first - m)); // maksymalna wspó³rzêdna x punktu z prawej czêœi w pasie przygranicznym
        int aa = c;
        for (int j = c - 1; j >= a; j--){
            if (t[j].first < mlx) break;
            else aa--;
        }
        // punkty przygraniczne w lewej czêsci [aa...c)

        int mrx = int(floor(t[c-1].first + m)); // minimalna wspó³rzêdna x punktu z lewej czêœi w pasie przygranicznym
        int bb = c;
        for (int j = c ; j < b; j++){
            if (t[j].first > mrx) break;
            else bb++;
        }
        // punkty przygraniczne w prawej czêsci [c...bb)

        double dm = m;
        if (c - aa > 0 && bb - c > 0) {
            vector<punkt> p(bb - aa); // punkty pasa przygranicznego
            copy(t.begin() + aa, t.begin() + bb, p.begin());
            sort(p.begin(), p.end(), comp_y);

           // for (int u = aa, v = aa+1; v<bb; u++, v++){
            for (int u = 0, v = 1; v < p.size(); u++, v++){
                dm = min(odl(p[u], p[v]), dm);

            }
        }
        return dm;
    }

}

int main() {
    int n;
    cin >> n;
    vector<punkt> t;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        t.push_back(make_pair(x, y));
    }
    sort(t.begin(), t.end(), comp_x_y);
    double d = min_odl(t, 0, n);

    cout << fixed << showpoint << setprecision(5) << d << endl;
    return 0;
}

/*
przyk³adowe dane:
21
11 7
7 4
7 14
9 9
1 8
4 7
17 7
11 1
11 17
11 11
11 14
17 11
1 11
7 7
4 11
14 7
7 17
11 4
8 1
7 11
14 11
wynik:
2.82843
*/

