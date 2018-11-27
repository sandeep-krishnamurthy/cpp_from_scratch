#include <iostream>
#include "card.h"
#include "random.h"

int main() {
    // Create deck
    std::cout << "Creating card deck\n";
    cards::deck cardDeck = cards::create_card_deck();

    // Print deck
    std::cout << "Printing the card deck\n";
    cards::print_card_deck(cardDeck);

    // Shuffle deck
    std::cout << "Shuffling the card deck\n";
    cards::shuffle_deck(cardDeck);

    // print deck
    std::cout << "Printing the shuffled card deck\n";
    cards::print_card_deck(cardDeck);
}