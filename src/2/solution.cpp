#include <print>
#include <iostream>


int min(int a, int b)
{ 
    return a < b ? a : b;
}

int main(){
    int a;
    int b;
    std::cin >> a;
    std::cin >> b;
    std::println("{}", min(a, b));
}