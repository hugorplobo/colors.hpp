#ifndef COLORS_HPP_
#define COLORS_HPP_

#include <iostream>

#if defined(_WIN32) || defined(_WIN64)
#   define COLORS_TARGET_WINDOWS
#elif defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
#   define COLORS_TARGET_POSIX
#endif

#if !defined(COLORS_USE_ANSI_ESCAPE) && !defined(COLORS_USE_WINDOWS_API)
#   if defined(COLORS_TARGET_POSIX)
#       define COLORS_USE_ANSI_ESCAPE
#   elif defined(COLORS_TARGET_WINDOWS)
#       define COLORS_USE_WINDOWS_API
#   endif
#endif

namespace colors {
    
    inline std::ostream& reset(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[00m";
        #else
            stream << "Windows not supported yet";
        #endif
        
        return stream;
    }

    inline std::ostream& bold(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[1m";
        #else
            stream << "Windows not supported yet";
        #endif

        return stream;
    }

    inline std::ostream& faint(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[2m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& italic(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[3m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& underline(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[4m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& blink(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[5m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& reverse(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[7m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& invisible(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[8m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& strikethrough(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[9m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& grey(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[30m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& red(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[31m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& green(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[32m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& yellow(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[33m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& blue(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[34m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& magenta(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[35m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& cyan(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[36m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& white(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[37m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& bright_grey(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[90m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& bright_red(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[91m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& bright_green(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[92m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& bright_yellow(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[93m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& bright_blue(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[94m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& bright_magenta(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[95m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& bright_cyan(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[96m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& bright_white(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[97m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& on_grey(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[40m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& on_red(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[41m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& on_green(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[42m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& on_yellow(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[43m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& on_blue(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[44m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& on_magenta(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[45m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& on_cyan(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[46m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& on_white(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[47m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& on_bright_grey(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[100m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& on_bright_red(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[101m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& on_bright_green(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[102m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& on_bright_yellow(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[103m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& on_bright_blue(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[104m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& on_bright_magenta(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[105m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& on_bright_cyan(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[106m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

    inline std::ostream& on_bright_white(std::ostream& stream) {
        #if defined(COLORS_USE_ANSI_ESCAPE)
            stream << "\033[107m";
        #else
            stream << "Windows not supported yet";
        #endif
    
        return stream;
    }

}

#undef COLORS_TARGET_POSIX
#undef COLORS_TARGET_WINDOWS
#undef COLORS_USE_ANSI_ESCAPE
#undef COLORS_USE_WINDOWS_API

#endif