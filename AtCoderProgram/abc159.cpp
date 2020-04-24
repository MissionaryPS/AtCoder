#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
#include <vector>

void funcA() {
  int n, m;
  std::cin >> n >> m;
  int sum = 0;
  if (n >= 2) sum += n * (n - 1) / 2;
  if (m >= 2) sum += m * (m - 1) / 2;
  std::cout << sum;
}

bool isPalindrome(std::string s) {
  bool ret = true;
  int size = (int)s.size();
  for (int i = 0; ret && i < size / 2; i++) {
    if (s[i] != s[size - 1 - i ]) ret = false;
  }
  return ret;
}

void funcB() {
  std::string s;
  std::cin >> s;
  int n = s.size();
  std::cout << (isPalindrome(s) && isPalindrome(s.substr(0, (n - 1) / 2)) && isPalindrome(s.substr((n + 3) / 2 - 1, n - (n + 3) / 2 + 1)) ? "Yes" : "No");
}

void funcC() {
  long double l;
  std::cin >> l;
  long double ans = powl(l / 3, 3);
  printf("%Lf", ans);
}

void funcD() {
  int n,temp;
  std::cin >> n;
  std::vector<int> a(n+1,0);
  std::vector<int> num(n+1, 0);
  for (int i = 1; i <= n; i++) {
    std::cin >>temp;
    a[i] = temp;
    num[temp]++;
  }
  //回答フェイズ
  int sum = 0;
  for (int i = 1;i <= n; i++) {
    int n = num[i];
    if (n >= 2) sum += n * (n - 1) / 2;
  }
  for (int i = 1; i <= n; i++) {
    std::cout << sum - num[a[i]]+1 << "\n";
  }

}

int main(void) {
  funcD();
  return 0;
}