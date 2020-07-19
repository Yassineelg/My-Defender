/*
** EPITECH PROJECT, 2019
** image
** File description:
** gestion des image
*/

#include "../include/my.h"

void window(all_t *all)
{
    all->fond->video_mode.width = 1920;
    all->fond->video_mode.height = 1080;
    all->fond->video_mode.bitsPerPixel = 32;
    all->fond->window = sfRenderWindow_create(all->fond->video_mode,
    "The Defender", sfDefaultStyle | sfClose | sfResize, NULL);
    sfRenderWindow_setFramerateLimit(all->fond->window, 60);
}

void texture(all_t *all)
{
    all->fond->menu = sfTexture_createFromFile("./img/Menu.png", NULL);
    all->fond->exit = sfTexture_createFromFile("./img/EXIT.png", NULL);
    all->fond->start = sfTexture_createFromFile("./img/start.png", NULL);
    all->fond->title = sfTexture_createFromFile("./img/title.png", NULL);
    all->fond->fond = sfTexture_createFromFile("./img/map.png", NULL);
    all->fond->pose = sfTexture_createFromFile("./img/iconepause.png", NULL);
    all->fond->pause = sfTexture_createFromFile("./img/Pause.png", NULL);
    all->fond->contp = sfTexture_createFromFile("./img/continue.png", NULL);
    all->fond->exitp = sfTexture_createFromFile("./img/exitp.png", NULL);
    all->fond->menup = sfTexture_createFromFile("./img/Menup.png", NULL);
    all->mob->tower = sfTexture_createFromFile("./img/rect_tower.png", NULL);
    all->mob->boss = sfTexture_createFromFile("./img/boss.png", NULL);
    all->mob->monstre = sfTexture_createFromFile("./img/monstre.png", NULL);
    all->fond->coin = sfTexture_createFromFile("./img/rect_coins.png", NULL);
    all->fond->howto = sfTexture_createFromFile("./img/howto.png", NULL);
    all->fond->how = sfTexture_createFromFile("./img/how.png", NULL);
    all->fond->x = sfTexture_createFromFile("./img/x.png", NULL);
    all->fond->over = sfTexture_createFromFile("./img/gameover.png", NULL);
}

void mycreat(all_t *all)
{
    all->fond->sprite_menu = sfSprite_create();
    all->fond->sprite_exit = sfSprite_create();
    all->fond->sprite_start = sfSprite_create();
    all->fond->sprite_title = sfSprite_create();
    all->fond->sprite_fond = sfSprite_create();
    all->fond->sprite_pose = sfSprite_create();
    all->fond->sprite_pause = sfSprite_create();
    all->fond->sprite_contp = sfSprite_create();
    all->fond->sprite_exitp = sfSprite_create();
    all->fond->sprite_menup = sfSprite_create();
    all->fond->sprite_coin = sfSprite_create();
    all->fond->sprite_how = sfSprite_create();
    all->fond->sprite_howto = sfSprite_create();
    all->fond->sprite_x = sfSprite_create();
    all->fond->sprite_over = sfSprite_create();
}

void sprite(all_t *all)
{
    sfSprite_setTexture(all->fond->sprite_menu, all->fond->menu, sfTrue);
    sfSprite_setTexture(all->fond->sprite_exit, all->fond->exit, sfTrue);
    sfSprite_setTexture(all->fond->sprite_start, all->fond->start, sfTrue);
    sfSprite_setTexture(all->fond->sprite_title, all->fond->title, sfTrue);
    sfSprite_setTexture(all->fond->sprite_fond, all->fond->fond, sfTrue);
    sfSprite_setTexture(all->fond->sprite_pose, all->fond->pose, sfTrue);
    sfSprite_setTexture(all->fond->sprite_pause, all->fond->pause, sfTrue);
    sfSprite_setTexture(all->fond->sprite_contp, all->fond->contp, sfTrue);
    sfSprite_setTexture(all->fond->sprite_exitp, all->fond->exitp, sfTrue);
    sfSprite_setTexture(all->fond->sprite_menup, all->fond->menup, sfTrue);
    sfSprite_setTexture(all->fond->sprite_coin, all->fond->coin, sfTrue);
    sfSprite_setTexture(all->fond->sprite_how, all->fond->how, sfTrue);
    sfSprite_setTexture(all->fond->sprite_howto, all->fond->howto, sfTrue);
    sfSprite_setTexture(all->fond->sprite_x, all->fond->x, sfTrue);
    sfSprite_setTexture(all->fond->sprite_over, all->fond->over, sfTrue);
}
