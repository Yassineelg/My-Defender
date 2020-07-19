/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** for draw all
*/

#include"../include/my.h"

void drawmenu(all_t *all)
{
    vectmenu(all);
    sfRenderWindow_drawSprite(all->fond->window, all->fond->sprite_menu, NULL);
    sfRenderWindow_drawSprite(all->fond->window,
    all->fond->sprite_start, NULL);
    sfRenderWindow_drawSprite(all->fond->window, all->fond->sprite_how, NULL);
    sfRenderWindow_drawSprite(all->fond->window, all->fond->sprite_exit, NULL);
    sfRenderWindow_drawSprite(all->fond->window,
    all->fond->sprite_title, NULL);
    sfRenderWindow_display(all->fond->window);
}

void drawhowtoplay(all_t *all)
{
    vecthow(all);
    sfRenderWindow_drawSprite(all->fond->window,
    all->fond->sprite_howto, NULL);
    sfRenderWindow_drawSprite(all->fond->window, all->fond->sprite_x, NULL);
    sfRenderWindow_display(all->fond->window);
}

void drawgame(all_t *all)
{
    vectgame(all);
    sfRenderWindow_drawSprite(all->fond->window, all->fond->sprite_fond, NULL);
    sfRenderWindow_drawSprite(all->fond->window, all->fond->sprite_pose, NULL);
    sfRenderWindow_drawSprite(all->fond->window, all->fond->sprite_coin, NULL);
    draw_tower(all);
    draw_enemy(all);
    display_coin(all);
    sfRenderWindow_drawText(all->fond->window, all->divers->text_health,
    sfFalse);
    sfRenderWindow_display(all->fond->window);
}

void drawover(all_t *all)
{
    vectover(all);
    sfRenderWindow_drawSprite(all->fond->window, all->fond->sprite_over, NULL);
    sfRenderWindow_drawSprite(all->fond->window, all->fond->sprite_exit, NULL);
    sfRenderWindow_display(all->fond->window);
}

void drawpause(all_t *all)
{
    vectpause(all);
    sfRenderWindow_drawSprite(all->fond->window,
    all->fond->sprite_pause, NULL);
    sfRenderWindow_drawSprite(all->fond->window,
    all->fond->sprite_contp, NULL);
    sfRenderWindow_drawSprite(all->fond->window,
    all->fond->sprite_menup, NULL);
    sfRenderWindow_drawSprite(all->fond->window,
    all->fond->sprite_exitp, NULL);
    sfRenderWindow_display(all->fond->window);
}