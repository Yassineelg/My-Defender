/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** creating towers
*/

#include "../include/my.h"

void init_list_tower(all_t *all)
{
    tower_t *tower = malloc(sizeof(tower_t));

    tower->sprite_twr = sfSprite_create();
    sfSprite_setTexture(tower->sprite_twr, all->mob->tower, sfTrue);
    tower->rect_tower = (sfIntRect){0, 0, 182, 141};
    tower->vector_tower.y = 690;
    tower->vector_tower.x = 500;
    sfSprite_setPosition(tower->sprite_twr, tower->vector_tower);
    tower->lvl = 0;
    tower->next = NULL;
    all->list_tower->first = tower;
}

void create_tower(all_t *all, int x, int y)
{
    tower_t *tower = malloc(sizeof(tower_t));

    tower->sprite_twr = sfSprite_create();
    sfSprite_setTexture(tower->sprite_twr, all->mob->tower, sfTrue);
    tower->rect_tower = (sfIntRect){0, 0, 182, 141};
    tower->vector_tower.x = x;
    tower->vector_tower.y = y;
    sfSprite_setPosition(tower->sprite_twr, tower->vector_tower);
    tower->lvl = 0;
    tower->next = all->list_tower->first;
    all->list_tower->first = tower;
}

void generate_tower(all_t *all)
{
    create_tower(all, 650, 405);
    create_tower(all, 1105, 550);
    create_tower(all, 950, 210);
    create_tower(all, 1400, 350);
    create_tower(all, 1320, 125);
}