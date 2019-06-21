#include <iostream>
#include <string_view>
using namespace std::literals::string_view_literals;

constexpr unsigned fibonacci( const unsigned x )
{
    return x <= 1 ? 1 : fibonacci( x - 1 ) + fibonacci( x - 2 );
}

//  Won't compile if constexpr; constexpr fcns can only call other constexpr fcns.
//  iostream functions are not constexpr.
// constexpr void do_fibonacci()
void do_fibonacci()
{
    std::cout << fibonacci( 5 ) << "\n"sv; // Valid, calculated at compile time

    unsigned x = 4;
    std::cout << fibonacci( x ) << "\n"sv; // Valid, calculated at compile time

    std::cin >> x;
    std::cout << fibonacci( x ) << "\n"sv; //  Valid, but no compile time calculations made
}

int main()
{
    do_fibonacci();
    return 0;
}