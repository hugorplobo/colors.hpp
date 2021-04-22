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

}

#undef COLORS_TARGET_POSIX
#undef COLORS_TARGET_WINDOWS
#undef COLORS_USE_ANSI_ESCAPE
#undef COLORS_USE_WINDOWS_API

#endif