#include <iostream>
#include<math.h>
using namespace std;
bool isPrime(int n){
    int a[n];
    // 1 is not prime number.
    if(n==1){
        return false;
    }
    else if(n%2==0){
            if(n>2)
                return false;
            return true;
    }
    // It is odd number
    else{
        for(int i=3;i<sqrt(n);i+=2){
            if(n%i==0){
                cout<<n<<" is not a prime number as divisible by "<<i<<endl;
                return false;
            }
        }
    }
    
    return true;
}
int main() {
    int n;
    cin>>n;
    cout<<isPrime(n);
}
