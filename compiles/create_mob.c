/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** generating the mobs
*/

#include "../include/my.h"

void init_list_enemy(all_t *all)
{
    enemy_t *enemy = malloc(sizeof(*enemy));

    enemy->sprt_enemy = sfSprite_create();
    sfSprite_setTexture(enemy->sprt_enemy, all->mob->monstre, sfTrue);
    enemy->rect = (sfIntRect){0, 0, 100, 94};
    enemy->life = 150;
    enemy->sp = 2;
    enemy->gold = 0;
    enemy->next = NULL;
    all->list_enemy->first = enemy;
    init_enemy_values(enemy);
}

void create_monster(all_t *all)
{
    enemy_t *enemy = malloc(sizeof(*enemy));

    enemy->sprt_enemy = sfSprite_create();
    sfSprite_setTexture(enemy->sprt_enemy, all->mob->monstre, sfTrue);
    enemy->rect = (sfIntRect){0, 0, 100, 94};
    enemy->sp = 2;
    enemy->gold = 0;
    enemy->life = 150;
    enemy->next = all->list_enemy->first;
    all->list_enemy->first = enemy;
    init_enemy_values(enemy);
}

void create_boss(all_t *all)
{
    enemy_t *enemy = malloc(sizeof(*enemy));

    enemy->sprt_enemy = sfSprite_create();
    sfSprite_setTexture(enemy->sprt_enemy, all->mob->boss, sfTrue);
    enemy->rect = (sfIntRect){0, 0, 146, 124};
    enemy->sp = 1;
    enemy->gold = 1;
    enemy->life = 450;
    enemy->next = all->list_enemy->first;
    all->list_enemy->first = enemy;
    init_enemy_values(enemy);
}