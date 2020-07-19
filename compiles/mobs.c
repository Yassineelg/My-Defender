/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** mobs init/ mobs create
*/

#include "../include/my.h"

void generate(all_t *all)
{
    int randm = rand();

    if (randm < RAND_MAX/250){
        randm = rand();
        if (randm < RAND_MAX / 20) create_boss(all);
        else if (randm > RAND_MAX / 20) create_monster(all);
    }
}