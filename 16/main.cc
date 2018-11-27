#include <iostream>
#include "card.h"
#include "random.h"

int main() {
    std::cout << "******* BLACK JACK ********\n\n";

    // Create deck
    std::cout << "Creating card deck\n";
    cards::deck cardDeck = cards::create_card_deck();

    // Shuffle deck
    std::cout << "Shuffling the card deck\n";
    cards::shuffle_deck(cardDeck);

    // Play Black Jack
    short player_score = 0;
    short agent_score = 0;
    bool player_bust = false;
    bool agent_bust = false;

    int current_card_index = 0;

    // Initial Setting for Player - Starts with 2 Cards
    std::cout << "\nPLAYER GAME BEGINS\n\n";
    player_score += cards::get_card_value(cardDeck.cards[current_card_index++]);
    player_score += cards::get_card_value(cardDeck.cards[current_card_index++]);
    
    // Play Player - Hit or Stand or > 21 points
    while(true) {
        if (player_score > 21) {
            player_bust = true;
            break;
        }
        
        char next;
        std::cout << "\nHit (h), Stand (s) - ";
        std::cin >> next;
        if (next == 'h') {
            player_score += cards::get_card_value(cardDeck.cards[current_card_index++]);
        } else if (next == 's') {
            break;
        }
    }

    if (player_bust) {
        std::cout << "\n\nPlayer busted. Agent wins. Player score - " << player_score << std::endl;
        std::cout << "\n\n*********GAME OVER*********\n";
        return 0;
    }

    std::cout << "\nPlayer score - " << player_score << std::endl;
    
    // Initial Setting for Agent - 1 Cards
    std::cout << "\n\nAGENT GAME BEGINS\n";
    agent_score += cards::get_card_value(cardDeck.cards[current_card_index++]);    

    // Play Agent - >17 < 21 or > 21 points
    while(true) {
        if (agent_score > 21) {
            agent_bust = true;
            break;
        }

        if (agent_score > 17) {
            break;
        }

        char next;
        std::cout << "\nHit (h), Stand (s) - ";
        std::cin >> next;
        if (next == 'h') {
            agent_score += cards::get_card_value(cardDeck.cards[current_card_index++]);
        } else if (next == 's') {
            break;
        }
    }

    if (agent_bust) {
        std::cout << "\n\nAgent busted. Player wins. Agent score - " << player_score << std::endl;
        std::cout << "\n\n*********GAME OVER*********\n";
        return 0;
    }

    std::cout << "\nAgent score - " << agent_score << std::endl;

    if (player_score > agent_score) {
        std::cout << "\nPlayer wins!!!";
        std::cout << "\n\n*********GAME OVER*********\n";
    } else {
        std::cout << "\nAgent wins!!!";
        std::cout << "\n\n*********GAME OVER*********\n";
    }
}