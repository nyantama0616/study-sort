#include "../template.h"

/*
    ほとんど整列が済んでいる配列に関しては非常に高速
    最悪O(n^2)
    安定である
*/

void insert_sort(V& v) {
    ll n = v.size();
    rep(i, n) {
        rep_rev2(j, 1, i + 1) {
            if (v[j - 1] > v[j]) {
                swap(v[j - 1], v[j]);
            } else {
                break;
            }
        }
    }
}
