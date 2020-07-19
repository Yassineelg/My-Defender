/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2018
** File description:
** define
*/

#ifndef DEFINE_H_
#define DEFINE_H_

#define HITTED_CASTLE while (actual != NULL) { \
            x = actual->vector_enemy.x; \
            if (x >= 1525 && actual->gold != 2) { \
                if (actual->gold == 0) \
                    all->divers->castle_life = all->divers->castle_life - 5; \
                if (actual->gold == 1) \
                    all->divers->castle_life = all->divers->castle_life - 5; \
            } \
            actual = actual->next; \
        }

#define RECT_ENEMY_DEFINE if (actual->count < 19) \
                actual->count++; \
            else if (actual->count >= 19) \
                actual->count = 0; \
            sfClock_restart(actual->clock_enemy);

#define DEPLACE_ENEMY_DEFINE if (actual->vector_enemy.x < 660 && actual->vector_enemy.x > 600) { \
            actual->vector_enemy.y = actual->vector_enemy.y - (0.7 * actual->sp); \
            actual->vector_enemy.x = actual->vector_enemy.x + (0.6 * actual->sp); \
        } else if (actual->vector_enemy.x > 990 && actual->vector_enemy.x < 1090) { \
            actual->vector_enemy.y = actual->vector_enemy.y - (0.85 * actual->sp); \
            actual->vector_enemy.x = actual->vector_enemy.x + (0.35 * actual->sp); \
        } else if (actual->vector_enemy.x > 1450 && actual->vector_enemy.y > 100) { \
            actual->vector_enemy.y = actual->vector_enemy.y -(0.75 * actual->sp); \
            actual->vector_enemy.x = actual->vector_enemy.x + (0.4 * actual->sp); \
        } else if (actual->vector_enemy.x < 330 && actual->vector_enemy.x > 200) { \
            actual->vector_enemy.y = actual->vector_enemy.y - (0.3 * actual->sp); \
            actual->vector_enemy.x = actual->vector_enemy.x + (1 * actual->sp); \
        } else if (actual->vector_enemy.x < 470 && actual->vector_enemy.x > 330) { \
            actual->vector_enemy.y = actual->vector_enemy.y + (0.3 * actual->sp); \
            actual->vector_enemy.x = actual->vector_enemy.x + (1 * actual->sp); \
        } else if (actual->vector_enemy.x < 1520) \
            actual->vector_enemy.x = actual->vector_enemy.x + (1 * actual->sp); \
        sfSprite_setPosition(actual->sprt_enemy, actual->vector_enemy); \
        actual = actual->next;

#define HIT_MOB_DEFINE enemy = all->list_enemy->first; \
        while (enemy != NULL) { \
            x = enemy->vector_enemy.x; \
            y = enemy->vector_enemy.y; \
            if (x <= tower->vector_tower.x + 310 \
            && x >= tower->vector_tower.x -170 \
            && y <= tower->vector_tower.y + 350 \
            && y >= tower->vector_tower.y -170 \
            && (randm = rand()) < RAND_MAX/3) { \
                enemy->life = enemy->life - tower->lvl; \
                if (enemy->life <= 0 && enemy->gold != 2) { \
                    if (enemy->gold == 0) \
                        all->divers->coin = all->divers->coin + 5; \
                    else if (enemy->gold == 1) \
                        all->divers->coin = all->divers->coin + 15; \
                    enemy->gold = 2; \
                } \
            } enemy = enemy->next; \
        } tower = tower->next;

#define CLICK_TOWER_DEFINE if (all->frame->m.y <= actual->vector_tower.y + 182 \
            && all->frame->m.x <= actual->vector_tower.x + 141 \
            && all->frame->m.y >= actual->vector_tower.y - 0 \
            && all->frame->m.x >= actual->vector_tower.x - 0 \
            && i == 0 \
            && actual->lvl < 4 \
            && all->divers->coin >= 10) { \
                actual->lvl++; \
                all->divers->coin = all->divers->coin -10; \
                i++; \
            } if (i == 50) \
                i = 0; \
            else if (i > 0) \
                i++; \
            actual = actual->next;

#endif