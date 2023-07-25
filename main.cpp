#include "template.h"
#include "simple_sort.h"

const ll N = 1000;
// const function<void(V&)> sort_fn = bubble_sort;
// const function<void(V&)> sort_fn = select_sort;
const function<void(V&)> sort_fn = insert_sort;

/*
TODO:
シェルソート
クイックソート
ヒープソート
マージソート
*/

class RandomManager {
private:

public:
    RandomManager() {
        srand(time(NULL));
    }

    int randInt(ll rand_min, ll rand_max) {
        const ll diff = rand_max - rand_min + 1;
        return rand_min + rand() % diff;
    }
    
    void shuffle(V& v) {
        ll n = v.size();
        rep_rev2(i, 1, n) {
            ll j = randInt(0, n - 1);
            swap(v[i], v[j]);
        }
    }
};

void test_sort(V v, function<void(V&)> sort_fn);

//🦋Fight🦋

int main() {
    RandomManager rm;
    V a = {-100, -58, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 15, 20, 35, 41};
    rep(i, N) {
        test_sort(a, sort_fn);
    }
    pl("ok");
}

void test_sort(V v, function<void(V&)> sort_fn) {
    RandomManager rm;
    ll n = v.size();
    rm.shuffle(v);

    // printv(v);
    sort_fn(v);
    // printv(v);
    
    rep(i, n - 1) {
        if (v[i] > v[i + 1]) {
            pl("Fail!!!");
            return;
        }
    }
    // pl("Success.");
}
