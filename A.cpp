/* note: this is not the most optimal solution to this problem. it is O(N^2). The most optimal would be O(N) because you would only call it N times, instead of using 
recusion */

#include <iostream>
using namespace std;

int fib_seq(int x){
  if (x <= 1) return x;
  else return x = fib_seq(x - 1) + fib_seq(x - 2);
}

int main(){
  int k;
  cin >> k;
  for (int i; i < k; ++i){
    cout << " " << fib_seq(i);  
  }
  return 0;
}
