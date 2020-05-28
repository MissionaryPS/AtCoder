#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
#include <vector>

void funcA() {
  std::string n;
  std::cin >> n;
  int c = (int)(n[n.size() - 1] - '0');
  if (c == 3) std::cout << "bon";
  else if (c == 0 || c == 1 || c == 6 || c == 8)std::cout << "pon";
  else std::cout << "hon";
}

void funcB() {
  int k;
  std::string s;
  bool over = false;
  std::cin >> k >> s;
  if (s.size() > k) over = true;
  std::cout << (over ? (s.substr(0, k) + "...") : s);
}

double LoC(long double a, long double b, double C) {
  //—]Œ·’è— a^2+b^2-2abcosC = c^2
  static const double pi = 3.141592653589793;
  //std::cout << C / 180 << std::endl; 
  //std::cout << cos(pi*(C / 180)) << std::endl;
  return sqrtl(a * a + b * b - 2 * a*b*cos(pi*(C / 180)));
}

void funcC() {
  double a, b;
  int h, m;
  std::cin >> a >> b >> h >> m;
  double temp = abs(m * 6 - (h * 30 + m * 0.5));
  double theta = 360 - temp < temp ? 360 - temp : temp;
  //std::cout << theta << std::endl;
  printf("%.15f",LoC(a, b, theta));
}
/*
void funcD() {
  int n, m;
  std::cin >> n >> m;
  std::vector<int>a(m, 0);
  std::vector<int>b(m, 0);
  for (int i = 0; i < m; i++) std::cin >> a[i] >> b[i];

}
*/
int main(void) {
  funcC();
  return 0;
} 