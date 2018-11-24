#include <iostream>
#include <bitset>

int main()
{
    unsigned char option_viewed = 0x01;
    unsigned char option_edited = 0x02;
    unsigned char option_favorited = 0x04;
    unsigned char option_shared = 0x08;
    unsigned char option_deleted = 0x80;
 
    unsigned char myArticleFlags = 0;
 
    // Set article as viewed
    myArticleFlags |= option_viewed;

    // Check if article was deleted
    if (myArticleFlags & option_deleted)
    {
        // Clear favorites.
        myArticleFlags &= ~option_favorited;
    }
    std::bitset<8> x(myArticleFlags);
    std::cout << "Article Flags - " << x << std::endl;
    return 0;
}