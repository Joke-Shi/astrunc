/****
 * @Author: 石正贤（Shizhengxian)
 **/

#include "astrunc.h"


/******************************************* Test-Main ************************************/
int main( int argc, const char **argv)
{
    std::string s_en = "The National People's Congress Standing Committee convened Monday to discuss amending "
                       "the Constitution.\n\n"
                       "Zhang Dejiang, chairman of the 12th NPC Standing Committee, presided over the meeting.\n\n"
                       "Li Zhanshu, member of the Standing Committee of the Political Bureau of the Communist "
                       "Party of China Central Committee, briefed lawmakers about a proposal by the Central "
                       "Committee on the revision to the Constitution.\n"
                       "The 19th CPC Central Committee adopted the proposal at its second plenary session this month.\n"
                       "\"Major theoretical achievements, principles and policies adopted at the 19th CPC National "
                       "Congress, particularly Xi Jinping Thought on Socialism with Chinese Characteristics for a New Era, "
                       "should be incorporated into the upcoming revision to the Constitution,\" said Li, also deputy head "
                       "of a group working on the revision.\n"
                       "\"We should keep pace with the times and improve the Constitution while maintaining its consistency, "
                       "stability and authority,\" Li said.\n"
                       "Amending of the Constitution should be done by adhering to the Party's leadership and socialist rule "
                       "of law, heading toward the correct political direction, following due process, being based on broad "
                       "consensus, embodying the will of the people and only amending part of it instead of revising it on a "
                       "large scale, Li said.\n"
                       "In 1982, the fifth NPC adopted the present Constitution, which underwent four amendments－in 1988, "
                       "1993, 1999 and 2004.\n"
                       "\"The Constitution has proved to be good legislation that fits in with China's reality and meets the "
                       "demands of the times,\" Li said, adding that because the Party and nation have undergone profound "
                       "changes since 2004, the Constitution should be adjusted accordingly.\n"
                       "Xinhua\n"
                       "He said: Chang suggested organizing a canine patrol squad at the museum and, in 1987, dogs came back. "
                       "At 1 year old, each dog is given a tailored training course. Most start their career as guard dogs "
                       "after three months of intense training.\n\n"
                       "Уорд Каннингем және оның соавторы Бо Леуф өздерінің « The Wiki Way: Quick Collaboration on the Web» "
                       "кітабында уики концепциясының мәнін былайша түсіндірген:\n"
                       "Уики әртүрлі беттер арасындағы байланысты оңай сітемелер жасау мүмкіндігі арқылы және сілтеме жасалған "
                       "беттердің бар-жоқтығын білдіру арқылы қамтамасыз етеді.";

    std::string s_zh = "Prometheus，它的价值在于可靠性，甚至在很恶劣的环境下，你都可以随时访问它和查看系统服务各种指标的统计信息。"
                       "如果你对统计数据需要100%的精确，它并不适用，例如：它不适用于实时计费系统。";

    std::string s_hy = "Chang- ը սկսեց աշխատել, երբ օգնում էր վերահսկել թանգարանը, երբ նա 20 տարեկան էր (abc): "
                       "1980-ական թվականներին մարդկային պահակները ցուցահանդեսային սրահներում միայն ձայնային "
                       "դետեկտորների օգնությամբ էին: Երբ ինչ-որ բան աննորմալ էր լսվում. նրանք գողություն կատարեցին դեպքի վայրում:";


    /** Begin split */
    { 
        std::vector< std::string > vs;
        int rc = astrunc::access::split( vs, s_en, astrunc::access::EN, -1);
        if ( 0 == rc) {
            for ( auto const &__s : vs ) {
                std::cout << ": -------------------------------------------------------------------------------[OK-EN]\n";
                std::cout << __s << std::endl;
            }
        } else { std::cerr << "[Error]: Split EN error\n"; }

        vs.clear();
        rc = astrunc::access::split( vs, s_zh, astrunc::access::ZH, 32);
        if ( 0 == rc) {
            for ( auto const &__s : vs ) {
                std::cout << ": -------------------------------------------------------------------------------[OK-ZH]\n";
                std::cout << __s << std::endl;
            }
        } else { std::cerr << "[Error]: Split ZH error\n"; }

        vs.clear();
        rc = astrunc::access::split( vs, s_hy, astrunc::access::HY, 32);
        if ( 0 == rc) {
            for ( auto const &__s : vs ) {
                std::cout << ": -------------------------------------------------------------------------------[OK-HY]\n";
                std::cout << __s << std::endl;
            }
        } else { std::cerr << "[Error]: Split HY error\n"; }

    }


    return 0;
}/// main



