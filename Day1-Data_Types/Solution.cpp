#include <iostream>
#include <iomanip>
#include <limits>
#include <string.h>
#include <iostream> 
#include <string>
using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
int f;
double r ;
string j;
string temp;

getline(cin,temp);
f = stoi(temp);

getline(cin,temp);
r = stod(temp);

getline(cin,j);

f = f + i ;
std::cout << f << endl; 

r = r+ d;
std::cout << fixed << setprecision(1)<<r<<endl;

std::cout << s << j << endl;
    // Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}
