#include <cstdlib>
#include <iostream>

int main(){
    int n = rand() % 100;

    stdout << "Guess the number (1 to 99):";
    
    while (guess != secret) {
        std::cin >> guess;

        if (guess < secret)
            std::cout << "Too low! Try again: ";
        else if (guess > secret)
            std::cout << "Too high! Try again: ";
        else
            std::cout << "Correct! The number was " << n;
    }
    return 0;
}
