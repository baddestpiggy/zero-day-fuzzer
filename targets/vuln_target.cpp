// Intentionally simple test target for the fuzzer. Reads input from stdin.
#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::cout << "read " << input.size() << " bytes\n";
    return 0;
}
