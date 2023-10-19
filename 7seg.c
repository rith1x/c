#include <SDL.h>

int main(int argc, char* argv[]) {
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* window = SDL_CreateWindow("Bar Chart", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderClear(renderer);

    // Example data for the bar chart
    int data[] = {10, 30, 50, 20, 40};

    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
    int x = 50;
    for (int i = 0; i < 5; i++) {
        SDL_Rect rect = {x, 600 - data[i], 50, data[i]};
        SDL_RenderFillRect(renderer, &rect);
        x += 100;
    }

    SDL_RenderPresent(renderer);

    SDL_Delay(5000);

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
