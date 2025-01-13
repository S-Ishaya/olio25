#include <iostream>
#include <cstdlib> // rand() ja srand()
#include <ctime>   // time()

int main() {
    // Satunnaislukugeneraattorin siemen
    srand(time(0));
    int randomNumber = (rand() % 20) + 1; // Luku väliltä 1–20
    int guess;

    std::cout << "Arvaa tietokoneen arpoma luku (1-20):" << std::endl;

    while (true) {
        std::cout << "Anna arvauksesi: ";
        std::cin >> guess;

        if (guess < randomNumber) {
            std::cout << "Luku on suurempi!" << std::endl;
        } else if (guess > randomNumber) {
            std::cout << "Luku on pienempi!" << std::endl;
        } else {
            std::cout << "Oikea vastaus!" << std::endl;
            break;
        }
    }
    return 0;
}
