#include <iostream>
#include <vector>

void funcA() {
 
  int r;
  std::cin >> r;
  std::cout << (float)(r * 3.1415 * 2);
}

void funcB() {
  int n, m, sum = 0, temp;
  std::cin >> n >> m;
  for (int i = 0; i < m; i++) {
    std::cin >> temp;
    sum += temp;
  }
  temp = n - sum;
  std::cout << (temp < 0 ? -1 : temp);
}

void funcC() {
  int n, temp;
  std::cin >> n;
  std::vector<int> child(n, 0);
  for (int i = 1; i < n; i++) {
    std::cin >> temp;
    child[temp - 1]++;
  }
  for (int i = 0; i < n; i++)std::cout << child[i] << "\n";
}

int main(void) {
  funcC();
  return 0;
}