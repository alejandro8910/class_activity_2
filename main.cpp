#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

string getRandomCard() {
    string ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};

    return ranks[rand() % 13] + " of " + suits[rand() % 4];
}

void displayCard(string card) {
    int width = 40;
    string label = "Card: ";
    string fill = (width - label.length() - card.length() - 2 > 0) ? string(width - label.length() - card.length() - 2, '-') : "";

    cout << string(width, '*') << "\n"
         << "*" << setw(width - 0) << right << "*\n"
         << "* " << label << fill << card << " *\n"
         << "*" << setw(width - 0) << right << "*\n"
         << string(width, '*') << "\n";
}

int main() {
    srand(time(0));
    displayCard(getRandomCard());
    return 0;
}
