#include <iostream>
#include <cctype>

bool ePangrama(const std::string& frase) {
    const int alfabetoSize = 26;
    bool letrasPresentes[alfabetoSize] = {false};

    for (char c : frase) {
        if (isalpha(c)) {
            int index = std::tolower(c) - 'a'; // Converte em minuscula
            letrasPresentes[index] = true;
        }
    }

    for (bool presente : letrasPresentes) {
        if (!presente) {
            return false;
        }
    }

    return true;
}

int main() {
    std::string frase;
    std::cout << "Digite uma frase: ";
    std::getline(std::cin, frase);

    if (ePangrama(frase)) {
        std::cout << "Pangrama." << std::endl;
    } else {
        std::cout << "Não é um pangrama." << std::endl;
    }

    return 0;
}
