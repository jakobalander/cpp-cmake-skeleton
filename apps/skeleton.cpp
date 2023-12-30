#include <iostream>
#include <boost/algorithm/string/case_conv.hpp>
#include "skeleton/lib.hpp"

int main()
{
    std::string s{"this is my fancy app that uses a library"};
    boost::algorithm::to_upper(s);
    std::cout << s << "\n";
    Skeleton skel{};
    skel.greeting();
}
