#include "../include/game.h"


int main()
{
    game *t = malloc(sizeof(game));
    t->mode.height = 1080; t->mode.width = 1920;
    t->mode.bitsPerPixel = 32;
    t->win = sfRenderWindow_create(t->mode, "TAUPE_GAME", sfResize | sfClose, NULL);
    while (sfRenderWindow_isOpen(t->win)) {
        while (sfRenderWindow_pollEvent(t->win, &t->event)) {
            if (t->event.type == sfEvtClosed) {
                sfRenderWindow_close(t->win);
            }
        }
        sfRenderWindow_display(t->win);
    }
    sfRenderWindow_destroy(t->win);
    free(t);
    return 0;
}