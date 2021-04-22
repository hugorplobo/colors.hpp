#include <iostream>
#include "colors.hpp"

int main() {

    std::cout << "Default text style" << "\n";
    std::cout << colors::bold << "Bold text" << colors::reset << "\n";
    std::cout << colors::faint << "Faint text" << colors::reset << "\n";
    std::cout << colors::italic << "Italic text" << colors::reset << "\n";
    std::cout << colors::underline << "Underlined text" << colors::reset << "\n";
    std::cout << colors::blink << "Blinking text" << colors::reset << "\n";
    std::cout << colors::reverse << "Reversed text" << colors::reset << "\n";
    std::cout << colors::invisible << "Invisible text" << colors::reset << "\n";
    std::cout << colors::strikethrough << "Striked text" << colors::reset << "\n";

    return 0;
}