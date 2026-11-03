#include <iostream>
#include "geometry.h"
using namespace std;

int main()
{
    int a, b, c;
    std::cin>>a>>b>>c;
    std::cout<<area_circle(a)<<endl;
    std::cout<<area_rectangle(a, b)<<endl;
    std::cout<<area_triangle(a, b, c)<<endl;
    return 0;
}
