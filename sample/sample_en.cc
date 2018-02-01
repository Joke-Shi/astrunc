#include "astrunc.h"


int main( int argc, const char **argv)
{         
    std::string s_en = "He said: Chang suggested organizing a canine patrol squad at the "
                       "museum and, in 1987, dogs came back. At 1 year old, each dog is "
                       "given a tailored training course. ";

    std::vector< std::string> vec_s;
    int rc = astrunc::access::split( vec_s, s_en, astrunc::access::EN, 32);
    if ( 0 == rc) {
        for ( auto const &__s : vec_s) {
            std::cout << __s << std::endl;
            std::cout << "------------------------------------------------------------------\n";
        }
    } else { std::cerr << "[Error]: Split error\n"; }


    return rc;
}
