/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** c mon runner
*/

#include "../include/my.h"

void call(all_t *all)
{
    window(all);
    texture(all);
    mycreat(all);
    sprite(all);
    music(all);
    init_list_enemy(all);
    init_list_tower(all);
    init_coin(all);
    all->divers->coin = 20;
    all->divers->castle_life = 100;
    all->divers->clock_castle = sfClock_create();
    init_text(all);
    generate_tower(all);
    sfMusic_play(all->divers->musicmenu);
}

void health_castle(all_t *all)
{
    sfVector2f pos_text_health = {920, 10};

    all->divers->font_health = sfFont_createFromFile("img/Pixellari.ttf");
    all->divers->text_health = sfText_create();
    sfText_setString(all->divers->text_health, "100");
    sfText_setFont(all->divers->text_health, all->divers->font_health);
    sfText_setColor(all->divers->text_health, sfRed);
    sfText_setCharacterSize(all->divers->text_health, 50);
    sfText_setPosition(all->divers->text_health, pos_text_health);
}

int main(int ac, char **av)
{
    all_t *all = malloc(sizeof(all_t));

    all->fond = malloc(sizeof(fond_t));
    all->divers = malloc(sizeof(divers_t));
    all->frame = malloc(sizeof(frame_t));
    all->mob = malloc(sizeof(mob_t));
    all->list_enemy = malloc(sizeof(enemy_t));
    all->list_tower = malloc(sizeof(list_tower_t));
    all->divers->flags = 0;
    if (ac == 1) {
        health_castle(all);
        call(all);
        while (sfRenderWindow_isOpen(all->fond->window)) {
            flags(all);
            escape(all);
        }
    } else if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        nexth();
    } destroy(all);
    return (0);
}