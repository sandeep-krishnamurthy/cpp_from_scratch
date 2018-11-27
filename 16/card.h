#ifndef CARDS_H
#define CARDS_H

#include <vector>

namespace cards {
    enum card_rank {
        TWO,
        THREE,
        FOUR,
        FIVE,
        SIX,
        SEVEN,
        EIGHT,
        NINE,
        TEN,
        JACK,
        QUEEN,
        KING,
        ACE,
        RANK_COUNT
    };

    enum card_suit {
        CLUB,
        DIAMOND,
        HEART,
        SPADE,
        SUIT_COUNT
    };

    struct card {
        card_rank rank;
        card_suit suit;
    };

    struct deck {
        std::vector<card> cards;
    };

    void print_card(const card &card_to_print);
    deck &create_card_deck();
    void print_card_deck(const deck &deck_to_print);
    void swap_card(card &card1, card &card2);
    void shuffle_deck(deck &deck_to_shuffle);
    short get_card_value(const card &in_card);
}

#endif