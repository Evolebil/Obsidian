#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> data;
    vector<int> popular;
    vector<int> stars;
    int x;

    while (cin >> x) {
        if (x > 9 && x < 501) {
            data.push_back(x);
        }
    }

    copy_if(data.begin(), data.end(), back_inserter(popular),
        [](int t) { return t >= 100; });

    transform(popular.begin(), popular.end(), back_inserter(stars),
        [](int s) {
            if (s >= 400) return 5;
            else if (s >= 300) return 4;
            else if (s >= 200) return 3;
            else if (s >= 150) return 2;
            else return 1; // здесь уже гарантированно 100-149
        });

    auto it = find_if(data.begin(), data.end(),
        [](int n) { return n % 7 == 0; });

    cout << "popular: ";
    for (int v : popular) cout << v << " ";
    cout << "\n";

    cout << "stars: ";
    for (int v : stars) cout << v << " ";
    cout << "\n";

    cout << "div7: " << (it != data.end() ? *it : 0) << "\n";

    return 0;
}