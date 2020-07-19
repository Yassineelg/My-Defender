/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** manage coin rotate and money
*/

#include "../include/my.h"

void init_coin(all_t *all)
{
    all->frame->clock_coin = sfClock_create();
    all->frame->count_coin = -1;
    all->frame->rect_coin = (sfIntRect){0, 0, 50, 52};
    all->frame->vecteurcoin.x = 865;
    all->frame->vecteurcoin.y = 695;
    sfSprite_setPosition(all->fond->sprite_coin, all->frame->vecteurcoin);
}

void rect_coin(all_t *all)
{
    all->frame->time_coin = sfClock_getElapsedTime(all->frame->clock_coin);
    all->frame->seconde_coin = all->frame->time_coin.microseconds / 1000000.0;
    if (all->frame->seconde_coin > 0.1) {
        if (all->frame->count_coin < 13) all->frame->count_coin++;
        else if (all->frame->count_coin >= 13) all->frame->count_coin = 0;
        sfClock_restart(all->frame->clock_coin);
    } all->frame->rect_coin.left = all->frame->count_coin *
    all->frame->rect_coin.width;
    sfSprite_setTextureRect(all->fond->sprite_coin, all->frame->rect_coin);
}

char *convert_coin(all_t *all)
{
    char *res = malloc(sizeof(char) * 4);
    int score = all->divers->coin;
    int a = 1;
    int i = 0;

    while ((score / a) >9) a = a * 10;
    while (a != 0) {
	    res[i] = ('0' + (score / a) % 10);
	    a = a / 10;
        i++;
    } res[i] = '\0';
    return (res);
}

void display_coin(all_t *all)
{
    char *score = convert_coin(all);

    sfText_setString(all->divers->text, score);
    sfText_setCharacterSize(all->divers->text, 55);
    sfRenderWindow_drawText(all->fond->window, all->divers->text, NULL);
}

void init_text(all_t *all)
{
    sfVector2f vector;

    vector.x = 950;
    vector.y = 690;
    all->divers->font = sfFont_createFromFile("./img/police.ttf");
    all->divers->text = sfText_create();
    sfText_setFont(all->divers->text, all->divers->font);
    sfText_setPosition(all->divers->text, vector);
}