# astrunc （Used C++11）

## Engilsh-Description
astrunc: A library that performs sentence break processing of utf-8 encoded text segments in natural language processing. 

### API
```
/**
 * @Brief: Split utf-8 encoded text segment, and then output sentence string vector.
 *
 * @Param: __vs,     Output split text segment result, which sentence string vector.
 * @Param: __seg,    Input utf-8 encoded text segment.
 * @Param: __lang,   Specify in the astrunc.h file.
 * @Param: __nchars, Max a sentence chars size.
 *
 * @Return: Ok->0, Other->-1.
 **/
int astrunc::access::split( std::vector< std::string > &__vs, const std::string &__seg, astrunc::access::lang_t __lang, int __nchars);
```

### SAMPLE
```
#include "astrunc.h"


int main( int argc, const char **argv)
{         
  std::string s_en = "He said: Chang suggested organizing a canine patrol squad at the "
                     "museum and, in 1987, dogs came back. At 1 year old, each dog is "
                     "given a tailored training course. ";
                     
  int rc = astrunc::access::split( vec_s, s_en, astrunc::access::EN, 32);
  if ( 0 == rc) {
    for ( auto const &__s : vec_s) {
      std::cout << __s << std::endl;
      std::cout << "------------------------------------------------------------------\n";
    }
  } else { std::cerr << "[Error]: Split error\n"; }


  return rc;
}
```


## 中文说明
astrunc：用在自然语言处理中对utf-8编码的文本段进行断句处理的库。

### 使用接口
```
/**
 * @Brief: Split utf-8 encoded text segment, and then output sentence string vector.
 *
 * @Param: __vs,     分割utf-8编码文本段过后的句子列表
 * @Param: __seg,    输入的utf-8编码的文本段；
 * @Param: __lang,   语言简称，具体在astrunc.h文件中描述；
 * @Param: __nchars, 每个句子限定的字符个数。
 *
 * @Return: Ok->0, Other->-1.
 **/
int astrunc::access::split( std::vector< std::string > &__vs, const std::string &__seg, astrunc::access::lang_t __lang, int __nchars);
```

### 使用示例
```
#include "astrunc.h"


int main( int argc, const char **argv)
{
  std::string s_zh = "Prometheus，它的价值在于可靠性，甚至在很恶劣的环境下，你都可以随时访问它和查"
                     "看系统服务各种指标的统计信息。 如果你对统计数据需要100%的精确，它并不适用，例"
                     "如：它不适用于实时计费系统。";
                     
  int rc = astrunc::access::split( vec_s, s_zh, astrunc::access::ZH, 32);
  if ( 0 == rc) {
    for ( auto const &__s : vec_s) {
      std::cout << __s << std::endl;
      std::cout << "------------------------------------------------------------------\n";
    }
  } else { std::cerr << "[Error]: Split error\n"; }


  return rc;
}
```
