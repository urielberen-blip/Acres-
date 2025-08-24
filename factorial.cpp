#include <iostream>

using namespace std;

int Factorial(int a)

// We define the function

{
    for (int i=(a-1); i>0; i-- )
    a = a*i;
return a;
}
// We make a loop so the factorial works



int main() {
   
    int result = Factorial(9);
    cout << "the factorial of " << 9 << " is " << result<< endl;
    return 0;
    
}
    
    
