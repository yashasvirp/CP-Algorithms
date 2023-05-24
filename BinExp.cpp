#include<iostream>
using namespace std;


long long binPow(long long a, long long b){
  long long res;

  if(b == 0)
    return 1;

  res = binPow(a,b/2);

  if(b%2)
    return res*res*a;

  return res*res;
}

long long binPowIter(long long a, long long b){
  long long res = 1;

  while(b > 0){
    if(b&1)
      res *= a;

    a = a*a;
    b >>= 1;
  }

  return res;

}

int main(){

  cout<<binPow(2,5)<<endl;
  cout<<binPow(2,4)<<endl;

  cout<<binPowIter(2,5)<<endl;
  cout<<binPowIter(2,4)<<endl;

  return 0;
}
