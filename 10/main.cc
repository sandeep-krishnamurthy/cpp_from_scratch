#include <iostream>
#include "ad.h"

int main()
{
    ad facebook_video_ad = {1000, 0.01, ad_type::VIDEO, ad_source::FACEBOOK};
    ad google_banner_ad = {9999, 0.003, ad_type::BANNER, ad_source::GOOGLE_SEARCH};

    float facebook_video_ad_earning = facebook_video_ad.ad_impression * facebook_video_ad.earning_per_impression;
    float google_banner_ad_earning = google_banner_ad.ad_impression * google_banner_ad.earning_per_impression;

    cout << "Facebook video ad earning - " << facebook_video_ad_earning << "$" << endl;
    cout << "Google banner ad earning - " << google_banner_ad_earning << "$" << endl;
}