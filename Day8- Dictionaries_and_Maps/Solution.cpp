#include<stdio.h>
#include<iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
string s ;
int N ;
unordered_map<string, int> phonebook;
std::cin >> N ;

for (int i =0; i < N ; i++)
{
    std::cin >> s;
    
    if (!phonebook[s])
    {
    std::cin >> phonebook[s];
}    
 }

 while (cin>>s) {
  if (phonebook[s]) {
            cout << s << "=" << phonebook[s] << endl;
        } else {
            cout << "Not found" << endl;
        }
}
  
 
  
  return 0;
}
  
  
  
