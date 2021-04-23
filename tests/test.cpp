#include <iostream>
#include <colors/colors.hpp>

int main() {

    std::cout << "--- Text Style ---" << "\n";
    std::cout << colors::bold << "Bold text" << colors::reset << "\n";
    std::cout << colors::faint << "Faint text" << colors::reset << "\n";
    std::cout << colors::italic << "Italic text" << colors::reset << "\n";
    std::cout << colors::underline << "Underlined text" << colors::reset << "\n";
    std::cout << colors::blink << "Blinking text" << colors::reset << "\n";
    std::cout << colors::reverse << "Reversed text" << colors::reset << "\n";
    std::cout << colors::invisible << "Invisible text" << colors::reset << "\n";
    std::cout << colors::strikethrough << "Striked text" << colors::reset << "\n";

    std::cout << "\n";

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

    std::cout << "\n";

    std::cout << "--- A Few Examples Of 256 Foreground Colors ---" << "\n";
    std::cout << colors::color<9> << "Color Code: 9" << colors::reset << "\n";
    std::cout << colors::color<8> << "Color Code: 8" << colors::reset << "\n";
    std::cout << colors::color<192> << "Color Code: 192" << colors::reset << "\n";
    std::cout << colors::color<83> << "Color Code: 83" << colors::reset << "\n";
    std::cout << colors::color<98> << "Color Code: 98" << colors::reset << "\n";

    std::cout << "\n";

    std::cout << "--- A Few Examples Of 256 Background Colors ---" << "\n";
    std::cout << colors::on_color<9> << "Color Code: 9" << colors::reset << "\n";
    std::cout << colors::on_color<8> << "Color Code: 8" << colors::reset << "\n";
    std::cout << colors::on_color<192> << "Color Code: 192" << colors::reset << "\n";
    std::cout << colors::on_color<83> << "Color Code: 83" << colors::reset << "\n";
    std::cout << colors::on_color<98> << "Color Code: 98" << colors::reset << "\n";

    std::cout << "\n";

    std::cout << "--- A Few Examples Of Foreground Truecolors (24-bit RGB) ---" << "\n";
    std::cout << colors::color<168, 211, 210> << "Color RGB: 168, 211, 210" << colors::reset << "\n";
    std::cout << colors::color<66, 59, 231> << "Color RGB: 66, 59, 231" << colors::reset << "\n";
    std::cout << colors::color<68, 233, 160> << "Color RGB: 68, 233, 160" << colors::reset << "\n";
    std::cout << colors::color<215, 250, 56> << "Color RGB: 215, 250, 56" << colors::reset << "\n";
    std::cout << colors::color<15, 255, 215> << "Color RGB: 15, 255, 215" << colors::reset << "\n";

    std::cout << "\n";

    std::cout << "--- A Few Examples Of Background Truecolors (24-bit RGB) ---" << "\n";
    std::cout << colors::on_color<168, 211, 210> << "Color RGB: 168, 211, 210" << colors::reset << "\n";
    std::cout << colors::on_color<66, 59, 231> << "Color RGB: 66, 59, 231" << colors::reset << "\n";
    std::cout << colors::on_color<68, 233, 160> << "Color RGB: 68, 233, 160" << colors::reset << "\n";
    std::cout << colors::on_color<215, 250, 56> << "Color RGB: 215, 250, 56" << colors::reset << "\n";
    std::cout << colors::on_color<15, 255, 215> << "Color RGB: 15, 255, 215" << colors::reset << "\n";
    return 0;
}
