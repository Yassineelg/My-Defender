/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** lose game
*/

#include "../include/my.h"
#include "define.h"

void hit_castle(all_t *all)
{
    int x = 0;
    float seconde = 0;
    enemy_t *actual = malloc(sizeof(enemy_t));

    actual = all->list_enemy->first;
    all->divers->time_castle = sfClock_getElapsedTime(all->divers->clock_castle);
    seconde  = all->divers->time_castle.microseconds / 1000000.0;
    if (seconde > 0.5){
        HITTED_CASTLE;
        sfClock_restart(all->divers->clock_castle);
    }
}

void loose(all_t *all)
{
    if (all->divers->castle_life <= 0)
        all->divers->flags = 4;
}