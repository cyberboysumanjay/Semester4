#include <iostream>
using namespace std;
inline int square(int s)
{
    return s*s;
}
int main(){
int n;
std::cout << "Enter a number" << '\n';
std::cin >> n;
    cout << "The square of the number is: " << square(n) << "\n";
    return 0;
}
