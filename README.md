
#  colors.hpp

![Example of usage](https://imgur.com/jIs5Vyf.png)


Colors.hpp is a simple header for C++ for stylish text in terminal created for study stream manipulators.

## How it works

The library uses ANSI escape sequences via stream manipulators. Now, Windows is supported through its API, to see what features are available, see the methods list below.

## Installation

Just add the `colors.hpp` from `include/colors/colors.hpp` file to your project's include folder.

- Example with g++
`g++ test.cpp -o build/test -I include/`

## Usage

All the stream manipulators are defined under the `colors` namespace, so just #include the header in your file as shown below:

```cpp
#include <iostream>
#include <colors/colors.hpp>

int main() {
  std::cout << colors::bold << colors::red << colors::on_white << "A coloful message!" << colors::reset << "\n";
  return 0
}
```
**Important 1:** If your project doesn't have a include folder, use the `#include "colors.hpp"` directive instead!

**Important 2:** You must not forget to use `colors::reset`, otherwise, the colors and styles will be applied to the next output! In windows cmd, the colors are applied even if the program has already ended, so be sure to use this manipulator!

## What colors can I use?

There are four types of manipulator defined in the library:

-  **Style:** changes the text decoration style;
- **Foreground:** changes the text color itself;
-  **Background:** changes the text background color;

### Style manipulators
**Note 1:** Some terminals don't support some of this features, like blinking!

**Note 2:** Windows doesn't support these manipulators!
1. `colors::bold`
2. `colors::faint`
3. `colors::italic`
4. `colors::underline`
5. `colors::blink`
6. `colors::reverse`
7. `colors::invisible`
8. `colors::strikethrough`

### Foreground manipulators

#### Named Colors
1. `colors::grey`
2. `colors::red`
3. `colors::green`
4. `colors::yellow`
5. `colors::blue`
6. `colors::magenta`
7. `colors::cyan`
8. `colors::white`
9. `colors::bright_grey`
10. `colors::bright_red`
11. `colors::bright_green`
12. `colors::bright_yellow`
13. `colors::bright_blue`
14. `colors::bright_magenta`
15. `colors::bright_cyan`
16. `colors::bright_white`

#### 256 Colors
You can find the color codes [here](https://gist.github.com/fnky/458719343aabd01cfb17a3a4f7296797#256-colors).

**Note:** Windows doesn't support this manipulator!
1. `colors::color<COLOR_CODE>` 

#### RGB Colors
**Note:** Not all terminals supports this feature!

**Note 2:** Windows doesn't support this manipulator!
1. `colors::color<RED, GREEN, BLUE>`

### Background manipulators

#### Named Colors
1. `colors::on_grey`
2. `colors::on_red`
3. `colors::on_green`
4. `colors::on_yellow`
5. `colors::on_blue`
6. `colors::on_magenta`
7. `colors::on_cyan`
8. `colors::on_white`
9. `colors::on_bright_grey`
10. `colors::on_bright_red`
11. `colors::on_bright_green`
12. `colors::on_bright_yellow`
13. `colors::on_bright_blue`
14. `colors::on_bright_magenta`
15. `colors::on_bright_cyan`
16. `colors::on_bright_white`

#### 256 Colors
You can find the color codes [here](https://gist.github.com/fnky/458719343aabd01cfb17a3a4f7296797#256-colors).

**Note:** Windows doesn't support this manipulator!
1. `colors::on_color<COLOR_CODE>` 

#### RGB Colors
**Note 1:** Not all terminals supports this feature!

**Note 2:** Windows doesn't support this manipulator!
1. `colors::on_color<RED, GREEN, BLUE>`

-----

Thanks for visiting my repository!
