#include <iostream>
#include <cstdlib> // rand() ja srand()
#include <ctime>   // time()

int game(int maxnum) {
    srand(time(0));
    int randomNumber = (rand() % maxnum) + 1; // Luku väliltä 1–maxnum
    int guess;
    int attempts = 0;

    std::cout << "Arvaa tietokoneen arpoma luku (1-" << maxnum << "):" << std::endl;

    while (true) {
        std::cout << "Anna arvauksesi: ";
        std::cin >> guess;
        attempts++;

        if (guess < randomNumber) {
            std::cout << "Luku on suurempi!" << std::endl;
        } else if (guess > randomNumber) {
            std::cout << "Luku on pienempi!" << std::endl;
        } else {
            std::cout << "Oikea vastaus!" << std::endl;
            break;
        }
    }

    return attempts; // Palautetaan arvausten määrä
}

int main() {
    int maxnum;

    std::cout << "Anna korkein etsittava luku: ";
    std::cin >> maxnum;

    int attempts = game(maxnum);
    std::cout << "Sinun arvaustesi maara: " << attempts << std::endl;
    return 0;
}
