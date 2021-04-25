#include <iostream>
#include "colors.hpp"

int main() {

    std::cout << "--- Foreground Named Colors ---" << "\n";
    std::cout << colors::grey << "Grey text" << colors::reset << "\n";
    std::cout << colors::red << "Red text" << colors::reset << "\n";
    std::cout << colors::green << "Green text" << colors::reset << "\n";
    std::cout << colors::yellow << "Yellow text" << colors::reset << "\n";
    std::cout << colors::blue << "Blue text" << colors::reset << "\n";
    std::cout << colors::magenta << "Magenta text" << colors::reset << "\n";
    std::cout << colors::cyan << "Cyan text" << colors::reset << "\n";
    std::cout << colors::white << "White text" << colors::reset << "\n";
    std::cout << colors::bright_grey << "Bright grey text" << colors::reset << "\n";
    std::cout << colors::bright_red << "Bright red text" << colors::reset << "\n";
    std::cout << colors::bright_green << "Bright green text" << colors::reset << "\n";
    std::cout << colors::bright_yellow << "Bright yellow text" << colors::reset << "\n";
    std::cout << colors::bright_blue << "Bright blue text" << colors::reset << "\n";
    std::cout << colors::bright_magenta << "Bright magenta text" << colors::reset << "\n";
    std::cout << colors::bright_cyan << "Bright cyan text" << colors::reset << "\n";
    std::cout << colors::bright_white << "Bright white text" << colors::reset << "\n";

    std::cout << "\n";

    std::cout << "--- Background Named Colors ---" << "\n";
    std::cout << colors::on_grey << "On grey text" << colors::reset << "\n";
    std::cout << colors::on_red << "On red text" << colors::reset << "\n";
    std::cout << colors::on_green << "On green text" << colors::reset << "\n";
    std::cout << colors::on_yellow << "On yellow text" << colors::reset << "\n";
    std::cout << colors::on_blue << "On blue text" << colors::reset << "\n";
    std::cout << colors::on_magenta << "On magenta text" << colors::reset << "\n";
    std::cout << colors::on_cyan << "On cyan text" << colors::reset << "\n";
    std::cout << colors::on_white << "On white text" << colors::reset << "\n";
    std::cout << colors::on_bright_grey << "On bright grey text" << colors::reset << "\n";
    std::cout << colors::on_bright_red << "On bright red text" << colors::reset << "\n";
    std::cout << colors::on_bright_green << "On bright green text" << colors::reset << "\n";
    std::cout << colors::on_bright_yellow << "On bright yellow text" << colors::reset << "\n";
    std::cout << colors::on_bright_blue << "On bright blue text" << colors::reset << "\n";
    std::cout << colors::on_bright_magenta << "On bright magenta text" << colors::reset << "\n";
    std::cout << colors::on_bright_cyan << "On bright cyan text" << colors::reset << "\n";
    std::cout << colors::on_bright_white << "On bright white text" << colors::reset << "\n";

    return 0;
}