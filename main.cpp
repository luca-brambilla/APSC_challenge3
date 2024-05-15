#include <iostream>
#include <cmath>
#include <vector>


double forcing(double x, double y)
{
    return 8.0 * M_PI * M_PI * sin(M_PI * x) * cos(M_PI * y);
}

double u_ex(double x, double y)
{
    return sin(2 * M_PI * x) * cos(2 * M_PI * y);
}

int main()
{
    constexpr double L = 1.0;

    size_t n = 10;
    double dl = L / static_cast<double>(n);

    std::cout << dl << std::endl;
    
    return 0;
}