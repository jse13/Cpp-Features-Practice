#include <iostream>

// Compile-time indexing into a list of values
template< unsigned n >
struct Get {
    template< class X, class... Xs >
    constexpr auto operator()( X x, Xs... xs ) {
        if constexpr( n > sizeof...( xs ) ) {
            return;
        }
        else if constexpr( n > 0 ) {
            return Get< n - 1 >{}( xs... );
        }
        else {
            return x;
        }
    }
};

int main()
{
    std::cout << Get< 2 >{}( 5, 4, 3, 2, 1 ) << '\n';
    std::cout << Get< 3 >{}( "a", "b", "c", "d" ) << '\n';
    return 0;
}