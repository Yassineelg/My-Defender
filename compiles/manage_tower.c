/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** creating towers
*/

#include "../include/my.h"
#include "define.h"

void draw_tower(all_t *all)
{
    tower_t *actual = malloc(sizeof(*actual));

    actual = all->list_tower->first;
    while (actual != NULL) {
        sfRenderWindow_drawSprite(all->fond->window, actual->sprite_twr, NULL);
        actual = actual->next;
    }
}

void lvl_up(all_t *all)
{
    tower_t *actual = malloc(sizeof(*actual));

    actual = all->list_tower->first;
    while (actual != NULL) {
        actual->rect_tower.left = actual->lvl * actual->rect_tower.width;
        sfSprite_setTextureRect(actual->sprite_twr, actual->rect_tower);
        actual = actual->next;
    }
}

void hit_mob(all_t *all)
{
    int x = 0;
    int y = 0;
    int randm = 0;
    tower_t *tower = malloc(sizeof(tower_t));
    enemy_t *enemy = malloc(sizeof(enemy_t));

    tower = all->list_tower->first;
    while (tower != NULL){
        HIT_MOB_DEFINE;
    }
}