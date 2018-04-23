#include "astrunc.h"


int main( int argc, const char **argv)
{
    std::string s_zh = "Prometheus，它的价值在于可靠性，甚至在很恶劣的环境下，你都可以随时访问它和查"
                       "书名《恶搞》““ABC等。”“。””，《你好啊《是的》。是吗》，“不知道怎说才好”“哎！”"
                       "看系统服务各种指标的统计信息。 如果你对统计数据需要100%的精确，它并不适用，例"
                       "如：它不适用于实时计费系统。";

    std::vector< std::string> vec_s;
    int rc = astrunc::access::split( vec_s, s_zh, astrunc::access::ZH, 32);
    if ( 0 == rc) {
        for ( auto const &__s : vec_s) {
            std::cout << __s << std::endl;
            std::cout << "------------------------------------------------------------------\n";
        }
    } else { std::cerr << "[Error]: Split error\n"; }


    return rc;
}
