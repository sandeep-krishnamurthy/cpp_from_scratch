#ifndef AD_H
#define AD_H

#include <cstdint>
using namespace std;

enum class ad_type
{
    VIDEO,
    BANNER
};

enum class ad_source
{
    FACEBOOK,
    GOOGLE_SEARCH,
    TWITTER
};

struct ad
{
    int64_t ad_impression;
    float earning_per_impression;
    ad_type type;
    ad_source source;
};

#endif