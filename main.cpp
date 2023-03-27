#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vec = {-100, -50, -5, 1, 10, 15};
  for (int i = 0; i < vec.size(); ++i) {
    if (vec[i] > 0)
      continue;
    for (int j = 0; j < vec.size() - i - 1; ++j) {
      if (abs(vec[j]) > abs(vec[j + 1]))
        swap(vec[j], vec[j + 1]);
    }
  }
  for (int i = 0; (i < vec.size()); ++i) {
    cout << vec[i] << " ";
  }
  return 0;
}
