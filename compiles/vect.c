/*
** EPITECH PROJECT, 2019
** vect
** File description:
** rect et vecteur
*/

#include "../include/my.h"

void vectmenu(all_t *all)
{
    all->frame->vecteurstart.x = 750;
    all->frame->vecteurstart.y = 400;
    sfSprite_setPosition(all->fond->sprite_start, all->frame->vecteurstart);
    all->frame->vecteurhowto.x = 750;
    all->frame->vecteurhowto.y = 550;
    sfSprite_setPosition(all->fond->sprite_how, all->frame->vecteurhowto);
    all->frame->vecteurexit.x = 750;
    all->frame->vecteurexit.y = 700;
    sfSprite_setPosition(all->fond->sprite_exit, all->frame->vecteurexit);
    all->frame->vecteurtitle.x = 50;
    all->frame->vecteurtitle.y = 60;
    sfSprite_setPosition(all->fond->sprite_title, all->frame->vecteurtitle);
}

void vecthow(all_t *all)
{
    all->frame->vecteurhow.x = 500;
    all->frame->vecteurhow.y = 100;
    sfSprite_setPosition(all->fond->sprite_howto, all->frame->vecteurhow);
    all->frame->vecteurx.x = 1260;
    all->frame->vecteurx.y = 120;
    sfSprite_setPosition(all->fond->sprite_x, all->frame->vecteurx);
}

void vectgame(all_t *all)
{
    all->frame->vecteurpose.x = 10;
    all->frame->vecteurpose.y = 10;
    sfSprite_setPosition(all->fond->sprite_pose, all->frame->vecteurpose);
}

void vectover(all_t *all)
{
    all->frame->vecteurexit.x = 750;
    all->frame->vecteurexit.y = 550;
    sfSprite_setPosition(all->fond->sprite_exit, all->frame->vecteurexit);
}

void vectpause(all_t *all)
{
    all->frame->vecteurpause.x = 700;
    all->frame->vecteurpause.y = 300;
    sfSprite_setPosition(all->fond->sprite_pause, all->frame->vecteurpause);
    all->frame->vecteurcontp.x = 833;
    all->frame->vecteurcontp.y = 400;
    sfSprite_setPosition(all->fond->sprite_contp, all->frame->vecteurcontp);
    all->frame->vecteurmenup.x = 833;
    all->frame->vecteurmenup.y = 474.7;
    sfSprite_setPosition(all->fond->sprite_menup, all->frame->vecteurmenup);
    all->frame->vecteurexitp.x = 833;
    all->frame->vecteurexitp.y = 550;
    sfSprite_setPosition(all->fond->sprite_exitp, all->frame->vecteurexitp);
}