#include <iostream>
#include <ctime>
using namespace std;


long long factorialRecursive (long long n) {
    if (n == 0)  
        return 1;
    else
        return n * factorialRecursive(n - 1); 
}

long long factorialIterative(long long n) {
    if (n < 0) {
        cout <<"Factorial is not defined for negative numbers.";
    }
    
    long long result = 1; 
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
       long long number;
    cout << "Enter a non-negative integer :  ";
    cin >> number;
    cout << "factorial :";
    clock_t startr = clock();

cout << factorialRecursive(number);

    clock_t endr = clock();
     double timerr = 1000.0 * (endr - startr) / CLOCKS_PER_SEC;
    
     cout << "   Recursive time : " << timerr<<" second" << endl  ;
   cout << "factorial :";
     clock_t starti = clock(); 
    
    cout << factorialIterative(number);
     
    clock_t endi = clock();
     double timeri = 1000.0 * (endi - starti) / CLOCKS_PER_SEC;
    cout << "   Iterative time : " <<  timeri <<" second" <<endl  ;

    return 0;
}
