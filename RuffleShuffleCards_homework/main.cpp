#include "Cards.h"

int main()
{
    Cards cards;
    cards.CreateCards();
    cards.ShowCards();
    cards.ShuffleCards();
    cards.ShowCards();

    return 0;
}