# Blackjack

**Output**

```
skm$ ./a.out
******* BLACK JACK ********

Creating card deck
Shuffling the card deck

PLAYER GAME BEGINS


Hit (h), Stand (s) - h

Hit (h), Stand (s) - h

Hit (h), Stand (s) - s

Player score - 17


AGENT GAME BEGINS

Hit (h), Stand (s) - h

Hit (h), Stand (s) - h

Agent score - 18

Agent wins!!!

*********GAME OVER*********
```

## Game Rules
A deck of cards has 52 unique cards (13 card ranks of 4 suits). Create enumerations for the card ranks (2, 3, 4, 5, 6, 7, 8, 9, 10, Jack, Queen, King, Ace) and suits (clubs, diamonds, hearts, spades).

Each card will be represented by a struct named Card that contains a rank and a suit. Create the struct.

 Create a printCard() function that takes a const Card reference as a parameter and prints the card rank and value as a 2-letter code (e.g. the jack of spades would print as JS).

 A deck of cards has 52 cards. Create an array (using std::array) to represent the deck of cards, and initialize it with one of each card.

 Write a function named printDeck() that takes the deck as a const reference parameter and prints the values in the deck. Use a for-each loop.

Write a swapCard function that takes two Cards and swaps their values.

Write a function to shuffle the deck of cards called shuffleDeck(). To do this, use a for loop to step through each element of your array. Pick a random number between 1 and 52, and call swapCard with the current card and the card picked at random. Update your main function to shuffle the deck and print out the shuffled deck.

Write a function named getCardValue() that returns the value of a Card (e.g. a 2 is worth 2, a ten, jack, queen, or king is worth 10. Assume an Ace is worth 11).

Alright, challenge time! Let’s write a simplified version of Blackjack. If you’re not already familiar with Blackjack, the Wikipedia article for Blackjack has a summary.

Here are the rules for our version of Blackjack:
* The dealer gets one card to start (in real life, the dealer gets two, but one is face down so it doesn’t matter at this point).
* The player gets two cards to start.
* The player goes first.
* A player can repeatedly “hit” or “stand”.
* If the player “stands”, their turn is over, and their score is calculated based on the cards they have been dealt.
* If the player “hits”, they get another card and the value of that card is added to their total score.
* An ace normally counts as a 1 or an 11 (whichever is better for the total score). For simplicity, we’ll count it as an 11 here.
* If the player goes over a score of 21, they bust and lose immediately.
* The dealer goes after the player.
* The dealer repeatedly draws until they reach a score of 17 or more, at which point they stand.
* If the dealer goes over a score of 21, they bust and the player wins immediately.
* Otherwise, if the player has a higher score than the dealer, the player wins. Otherwise, the player loses (we’ll consider ties as dealer wins for simplicity).

In our simplified version of Blackjack, we’re not going to keep track of which specific cards the player and the dealer have been dealt. We’ll only track the sum of the values of the cards they have been dealt for the player and dealer. This keeps things simpler.

Start with the code you wrote in quiz #6. Create a function named playBlackjack() that returns true if the player wins, and false if they lose. This function should:
* Accept a shuffled deck of cards as a parameter.
* Initialize a pointer to the first Card named cardPtr. This will be used to deal out cards from the deck (see the hint below).
* Create two integers to hold the player’s and dealer’s total score so far.
* Implement Blackjack as defined above.

Hint: The easiest way to deal cards from the deck is to keep a pointer to the next card in the deck that will be dealt out. Whenever we need to deal a card, we get the value of the current card, and then advance the pointer to point at the next card. This can be done in one operation:

```
getCardValue(*cardPtr++);
```

This returns the current card’s value (which can then be added to the player or dealer’s total), and advances cardPtr to the next card.

Also write a main() function that plays a single game of Blackjack.

Extra credit: Critical thinking time: Describe how you could modify the above program to handle the case where aces can be equal to 1 or 11.

In actual blackjack, if the player and dealer have the same score (and the player has not gone bust), the result is a tie and neither wins. Describe how you’d modify the above program to account for this.
