#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void funcA() {
  std::string s, t;
  std::cin >> s >> t;
  std::cout << (t.substr(0, s.size()) == s ? "Yes" : "No");
}

void funcB() {
  int a, b, c, k, ans;
  std::cin >> a >> b >> c >> k;
  if (a >= k) ans = k;
  else ans = a;
  if (a + b < k) ans += (a + b - k);
  std::cout << ans;
}

/*
void funcC() {
  int n, m, x;
  std::cin >> n >> m >> x;
  std::vector<std::vector<int>>a;
  for (int i = 0; i < n; i++) {
    std::cin >> a[i][0];
    for (int j = 1; j < m+1; j++) {
      std::cin >> a[i][j];
    }
  }
  std::sort(a.begin(), a.end());
  

}
*/

/*
void funcD() {
  int n,temp;
  long long int k;
  std::cin >> n >> k;
  std::vector<int> tele(n,0);
  std::vector<int> visit(n, 0);
  for (int i = 0; i < n; i++) {
    std::cin >> temp;

  }
}
*/

int main(void) {
  funcB();
  return 0;
}