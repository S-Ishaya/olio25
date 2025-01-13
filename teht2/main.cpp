#include <iostream>
#include <cstdlib> // rand() ja srand()
#include <ctime>   // time()

int game() {
    srand(time(0));
    int randomNumber = (rand() % 20) + 1; // Luku väliltä 1–20
    int guess;
    int attempts = 0;

    std::cout << "Arvaa tietokoneen arpoma luku (1-20):" << std::endl;

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
    int attempts = game();
    std::cout << "Sinun arvaustesi maara: " << attempts << std::endl;
    return 0;
}
