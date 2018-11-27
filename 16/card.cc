#include <iostream>
#include "card.h"
#include "random.h"

namespace cards {

    void print_card_deck(const deck &deck_to_print) {
        for (const auto &cur_card : deck_to_print.cards) {
            print_card(cur_card);
        }
    }

    void print_card(const card &card_to_print) {
        switch (card_to_print.rank) {
            case TWO: 
                std::cout << "2";
                break;
            case THREE:
                std::cout << "3";
                break;
            case FOUR:
                std::cout << "4";
                break;
            case FIVE:
                std::cout << "5";
                break;
            case SIX:
                std::cout << "6";
                break;
            case SEVEN:
                std::cout << "7";
                break;
            case EIGHT:
                std::cout << "8";
                break;
            case NINE:
                std::cout << "9";
                break;
            case TEN:
                std::cout << "10";
                break;
            case JACK:
                std::cout << "J";
                break;
            case ACE:
                std::cout << "A";
                break;
            case QUEEN:
                std::cout << "Q";
                break;
            case KING:
                std::cout << "K";
                break;
        }

        switch (card_to_print.suit) {
            case CLUB:
                std::cout << "C";
                break;
            case DIAMOND:
                std::cout << "D";
                break;
            case HEART:
                std::cout << "H";
                break;
            case SPADE:
                std::cout << "S";
                break;
        }
        std::cout << "\n";
    }

    deck &create_card_deck() {
        deck *card_deck = new deck;
        int suit_count = static_cast<int>(SUIT_COUNT);
        int rank_count = static_cast<int>(RANK_COUNT);

        for (auto suit_index=0; suit_index <= suit_count; suit_index++) {
            for (auto rank_index=0; rank_index <= rank_count; rank_index++) {
                card new_card;
                new_card.suit = static_cast<card_suit>(suit_index);
                new_card.rank = static_cast<card_rank>(rank_index);
                (*card_deck).cards.push_back(new_card);
            }
        }

        return (*card_deck);
    }
        
    void shuffle_deck(deck &deck_to_shuffle) {
        
        int random_card_index;
        for (int count=0; count<52; count++) {
            random_card_index = get_random_number(1, 52);
            swap_card(deck_to_shuffle.cards[count], deck_to_shuffle.cards[random_card_index]);
        }
    }

    void swap_card(card &card1, card &card2) {
        card temp;
        temp = card1;
        card1 = card2;
        card2 = temp;
    }

    short get_card_value(const card &in_card) {
        short value;
        switch (in_card.rank) {
            case TWO: 
                value = 2;
                break;
            case THREE:
                value = 3;
                break;
            case FOUR:
                value = 4;
                break;
            case FIVE:
                value = 5;
                break;
            case SIX:
                value = 6;
                break;
            case SEVEN:
                value = 7;
                break;
            case EIGHT:
                value = 8;
                break;
            case NINE:
                value = 9;
                break;
            case TEN:
                value = 10;
                break;
            case JACK:
                value = 10;
                break;
            case QUEEN:
                value = 10;
                break;
            case KING:
                value = 10;
                break;
            case ACE:
                value = 11;
                break;
        }
        return value;
    }
}