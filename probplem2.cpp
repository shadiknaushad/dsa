#include <iostream>
using namespace std;
int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int sum = 0;

  cout << "sum of 5 numbers\n:";
  for (int i = 0; i < 5; ++i)
  {
    cin >> arr[i];
    sum += arr[i];
  }
  cout << "sum of 5 numbers = " << sum << endl;
  return 0;
}