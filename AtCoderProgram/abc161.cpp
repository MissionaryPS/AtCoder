#include <iostream>
#include <vector>
#include <string>

void funcA() {
  int x, y, z;
  std::cin >> x >> y >> z;
  std::cout << z << " " << x << " " << y;
}

void funcB() {
  int n, m, sum = 0;
  std::cin >> n >> m;
  std::vector<int> a(n,0);
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
    sum += a[i];
  }
  int overq = 0;
  for (int i = 0; i < n; i++) if (4 * a[i] * m >= sum)overq++;
  std::cout << (m <= overq ? "Yes" : "No");
}

void funcC() {
  long long int n, k, temp;
  std::cin >> n >> k;
  temp = n % k;
  if ((temp - k)*(-1) < temp)temp = (temp - k)*(-1);
  std::cout << temp;
}

void funcD() {
  int k;
}

void funcE() {
  int n, k, c;
  std::string s;
  
}

int main(void) {
  funcD();
  return 0;
}