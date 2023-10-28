#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>

const int width = 80;  // Width of the art pattern
const int height = 24; // Height of the art pattern

void clearScreen() {
    std::cout << "\033[2J\033[1;1H"; // ANSI escape code to clear the screen
}

int main() {
    srand(static_cast<unsigned>(time(0));

    while (true) {
        clearScreen();

        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                char randomChar = static_cast<char>(rand() % 256);
                std::cout << randomChar;
            }
            std::cout << std::endl;
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(200)); // Pause for 200 milliseconds
    }

    return 0;
}
