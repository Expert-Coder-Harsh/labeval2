
#include <iostream>
#include <unordered_map>
#include <cctype>
#include <string>

int main() {
    std::unordered_map<char, int> freqMap;
    std::string paragraph;

    std::cout << "Enter a paragraph: ";
    std::getline(std::cin, paragraph);

    for (char c : paragraph) {
        if (std::isalnum(c)) {
            c = std::tolower(c);
            freqMap[c]++;
        }
    }

    std::cout << "Character frequencies:\n";
    for (const auto& entry : freqMap) {
        std::cout << entry.first << ": " << entry.second << "\n";
    }

    return 0;
}
