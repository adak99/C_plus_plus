#include <iostream>
using namespace std;

class GCD {
 private:
  int n1, n2;

 public:
  GCD(int n1, int n2) {
    this->n1 = n1;
    this->n2 = n2;
  }

  int calculateGcd() { return calGcd(n1, n2); }

 private:
  int calGcd(int a, int b) {
    if (b == 0) return a;
    return calGcd(b, a % b);
  }
};

int main() {
  int n1, n2;

  cout << "Enter n1: ";
  cin >> n1;

  cout << "Enter n2: ";
  cin >> n2;

  GCD a(n1, n2);

  int ans = a.calculateGcd();

  cout << "GCD: " << ans << endl;

  return 0;
}
