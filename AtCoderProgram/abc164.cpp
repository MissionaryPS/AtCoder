#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void funcA() {
  int s, w;
  std::cin >> s >> w;
  std::cout << (s <= w ?  "unsafe":"safe");
}

void funcB() {
  int a, b, c, d;
  bool takahashi;
  std::cin >> a >> b >> c >> d;
  for (takahashi = true; a > 0 && c > 0; takahashi = !takahashi) {
    if (takahashi)c -= b;
    else a -= d;
  }
  std::cout << (!takahashi ? "Yes" : "No");
}

void funcC() {
  int n;
  std::cin >> n;
  std::vector<std::string> s = {};
  std::string temp;
  bool isOrigin;
  for (int i = 0; i < n;i++) {
    isOrigin = true;
    std::cin >> temp;
    for (int j = 0; j < s.size(); j++) {
      if (s[j] == temp) { 
        isOrigin = false; 
        break; 
      }
    }
    if (isOrigin) s.push_back(temp);
  }
  std::cout << s.size();
}

void funcC2() {
  int n;
  std::cin >> n;
  std::vector<std::string> s(n,"");
  bool isOrigin;
  for (int i = 0; i < n;i++) {
    std::cin >> s[i];
  }
  std::sort(s.begin(), s.end());
  int cnt = 1;
  for (int i = 1; i < n; i++) {
    if(s[i - 1] != s[i])cnt++;
  }
  std::cout << cnt;

}

/*
void funcD() {
  std::string s;
  std::cin >> s;
  int cnt = 0;
  for (int i = 0; i < s.size(); i++) {
    for (int n = 4; n-i < s.size(); n++) {
      if(std::stoull(s.substr(i, n)) % 2019 == 0)cnt++;
    }
  }
  std::cout << cnt;
}
*/

/*
void funcE() {
  int n, m, s;
  int a[50][50] = { 0 };
  int b[50][50] = { 0 };
  int c[50] = { 0 };
  int d[50] = { 0 };
  std::cin >> n >> m >> s;
  int u, v, tempA, tempB;
  for (int i = 0; i < m; i++) {
    std::cin >> u >> v >> tempA >> tempB;
    a[u - 1][v - 1] = tempA;
    b[u - 1][v - 1] = tempB;
  }
  for (int i = 0; i < n; i++) {
    std::cin >> c[i] >> d[i];
  }
}
*/
int main(void) {
  funcC2();
  return 0;
}