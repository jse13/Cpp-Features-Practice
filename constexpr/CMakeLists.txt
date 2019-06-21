cmake_minimum_required ( VERSION 3.1 )

project ( CONSTEXPR )

set ( CMAKE_CXX_STANDARD 17 )

add_executable ( constexpr constexpr.cc )
add_executable ( constexpr-if constexpr-if.cc )
