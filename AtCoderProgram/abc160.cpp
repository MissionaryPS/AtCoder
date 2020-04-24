#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>

void funcA() {
  std::string s;
  std::cin >> s;
  std::cout << (s[2] == s[3] && s[4] == s[5] ? "Yes" : "No");
}

void funcB() {
  int x, coin500 = 0, coin5 = 0;
  std::cin >> x;
  coin500 = x / 500;
  coin5 = (x - (500 * coin500)) / 5;
  std::cout << (1000 * coin500 + 5 * coin5);
}

void funcC() {
  int k, n;
  std::cin >> k >> n;
  std::vector<int> a(n,0);
  for (int i = 0; i < n; i++) std::cin >> a[i];
  int maxsub = a[0] - a[n - 1] + k;
  for (int i; i < n - 1;i++) {
    if (maxsub < a[i + 1] - a[i]) maxsub = a[i + 1] - a[i];
  }
  std::cout << (k - maxsub);

}

void funcD() {
  int n, x, y;
  std::cin >> n >> x >> y;
  x--;
  y--;
  std::vector<int> sum(n, 0);
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int a = j - i;
      int b = std::abs(x-i)+std::abs(y-j)+1;
      a < b ? sum[a]++ : sum[b]++;
    }
  }
  for (int i = 1; i < n; i++)std::cout << sum[i]<<"\n";
}

void funcE() {
  int x, y, a, b, c;
  std::cin >> x >> y >> a >> b >> c;
  std::vector<int> red(a, 0);
  std::vector<int> green(b, 0);
  std::vector<int> clear(c, 0);
  for (int i = 0; i < a; i++) std::cin >> red[i];
  for (int i = 0; i < b; i++) std::cin >> green[i];
  for (int i = 0; i < c; i++) std::cin >> clear[i];
  std::sort(red.begin(), red.end(), std::greater<int>());
  std::sort(green.begin(), green.end(), std::greater<int>());
  std::sort(clear.begin(), clear.end(), std::greater<int>());

  int rcnt = 0, gcnt = 0, ccnt = 0;
  long long int sum = 0;
  for (int i = 0; i < x;i++) {
    sum += (ccnt < c && red[rcnt] < clear[ccnt] ? clear[ccnt++] : red[rcnt++]);    
  }
  for (int i = 0; i < y;i++) {
    sum += (ccnt < c && green[gcnt] < clear[ccnt] ? clear[ccnt++] : green[gcnt++]);
  }
  std::cout << sum;
}


int main(void) {
  funcE();
  return 0;
}