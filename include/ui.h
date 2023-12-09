// If on Windows, use curses.h, otherwise use ncurses.h
#ifdef _WIN32
    #include <pdcurses.h>
#else
    #include <ncurses.h>
#endif

// Function: init_ui
// Initializes the ncurses screen
void init_ui();