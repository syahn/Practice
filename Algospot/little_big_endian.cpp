#include<iostream>
#include<vector>
using namespace std;
int main() {
  int num, i=31;
  cin >> num;
  vector<int> arr(32,0);

  while(num != 0){
  	arr[i % 4 + 28] = num % 2;
  	num /= 2;
  }


  cout << arr[0];
}
