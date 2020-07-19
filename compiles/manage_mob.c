/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** generating mobs
*/

#include "../include/my.h"
#include "define.h"

void init_enemy_values(enemy_t *actual)
{
    int random = rand() % (40 - 1) + 1;

    actual->clock_enemy = sfClock_create();
    actual->count = -1;
    actual->vector_enemy.x = -200;
    actual->vector_enemy.y = 580+random;
    if (actual->sp == 1) actual->vector_enemy.y = 550+random;
}

void draw_enemy(all_t *all)
{
    enemy_t *actual = malloc(sizeof(*actual));

    actual = all->list_enemy->first;
    while (actual != NULL) {
        if (actual->life > 0) {
            sfRenderWindow_drawSprite(all->fond->window, actual->sprt_enemy,
            NULL);
        } actual = actual->next;
    }
}

void rect_enemy(all_t *all)
{
    enemy_t *actual = malloc(sizeof(*actual));

    actual = all->list_enemy->first;
    while (actual != NULL) {
        actual->time_enemy = sfClock_getElapsedTime(actual->clock_enemy);
        actual->seconde_enemy = actual->time_enemy.microseconds / 1000000.0;
        if (actual->seconde_enemy > 0.1) {
            RECT_ENEMY_DEFINE;
        } actual->rect.left = actual->count * actual->rect.width;
        sfSprite_setTextureRect(actual->sprt_enemy, actual->rect);
        actual = actual->next;
    }
}

void deplace_enemy(all_t *all)
{
    enemy_t *actual = malloc(sizeof(*actual));

    actual = all->list_enemy->first;
    while (actual != NULL) {
        DEPLACE_ENEMY_DEFINE;
    }
}