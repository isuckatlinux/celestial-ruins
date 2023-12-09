#include <ui.h>

// Function: init_ui
// Initializes the ncurses screen
void init_ui(){
    initscr(); // Inicializa la pantalla
    printw("Bienvenido al Roguelike!"); // Imprime un mensaje
    refresh(); // Actualiza la pantalla
    getch(); // Espera una tecla
    endwin(); // Termina el modo ncurses
}