#include <iostream>
#include "ad.h"

int main()
{
    ad facebook_video_ad = {1000, 0.01, ad_type::VIDEO, ad_source::FACEBOOK};
    ad google_banner_ad = {9999, 0.003, ad_type::BANNER, ad_source::GOOGLE_SEARCH};

    cout << "Which ad revenue do you want to see?\n";
    cout << "F - Facebook video ad revenue\n";
    cout << "G - Google banner ad revenue\n";

    float facebook_video_ad_earning = facebook_video_ad.ad_impression * facebook_video_ad.earning_per_impression;
    float google_banner_ad_earning = google_banner_ad.ad_impression * google_banner_ad.earning_per_impression;

    char input;
    cin >> input;

    switch(input)
    {
        case 'F':
            {
                cout << "Facebook video ad earning - " << facebook_video_ad_earning << "$" << endl;
                break;
            }
        case 'G':
            {
                cout << "Google banner ad earning - " << google_banner_ad_earning << "$" << endl;
                break;
            }
        default:
            {
                cout << "Invalid selection!\n";
            }
    }
}