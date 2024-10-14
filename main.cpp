#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n, d;
string s;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n >> d;
  for (auto i = 0; i < n; ++i) {
    cin >> s;
    for (auto&& x : s) {
      if (x == 'd') {
        if (d == 1) {
          x = 'q';
        } else {
          x = 'b';
        }
      } else if (x == 'b') {
        if (d == 1) {
          x = 'p';
        } else {
          x = 'd';
        }
      } else if (x == 'q') {
        if (d == 1) {
          x = 'd';
        } else {
          x = 'p';
        }
      } else if (x == 'p') {
        if (d == 1) {
          x = 'b';
        } else {
          x = 'q';
        }
      }
    }
    cout << s << '\n';
  }

  return 0;
}