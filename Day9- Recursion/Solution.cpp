#include <bits/stdc++.h>

using namespace std;

// Complete the factorial function below.
int factorial(int n) {
    
if ( n==1 )
return 1;

return factorial(n-1)*n;
}

int main()
{
int n;
std::cin >> n;
 std::cout << factorial(n) << endl;


    return 0;
}
