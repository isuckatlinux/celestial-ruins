#include <main.h>

// // Variables
// bool game_running = true;

// int main() {
//     // Inicializa el modo ncurses
//     init_ui();

//     return 0;
// }

#include <SDL2/SDL.h>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

int main() {
    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;

    // Inicializar SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        return -1;
    }

    // Crear ventana
    window = SDL_CreateWindow("Dibujar Píxeles", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (window == NULL) {
        printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        return -1;
    }

    // Crear renderer
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == NULL) {
        printf("Renderer could not be created! SDL_Error: %s\n", SDL_GetError());
        return -1;
    }

    // Dibujar píxeles en el renderer
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255); // Establecer color (blanco)
    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); // Establecer color (negro)

    // Dibujar píxeles individuales
    for (int x = 100; x < 200; x++) {
        for (int y = 100; y < 200; y++) {
            SDL_RenderDrawPoint(renderer, x, y);
        }
    }

    // Actualizar renderer
    SDL_RenderPresent(renderer);

    // Esperar unos segundos para mostrar la ventana
    SDL_Delay(3000);

    // Limpiar recursos
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}