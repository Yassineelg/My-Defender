/*
** EPITECH PROJECT, 2019
** mouse
** File description:
** mouse part 2
*/

#include "../include/my.h"
#include "define.h"

void clikmenupose(all_t *all)
{
    if (all->divers->event.type == sfEvtMouseButtonPressed) {
        all->frame->m.x = sfMouse_getPositionRenderWindow(all->fond->window).x;
        all->frame->m.y = sfMouse_getPositionRenderWindow(all->fond->window).y;
        if (all->frame->m.y <= all->frame->vecteurmenup.y + 100
        && all->frame->m.x <= all->frame->vecteurmenup.x + 425
        && all->frame->m.y >= all->frame->vecteurmenup.y - 0
        && all->frame->m.x >= all->frame->vecteurmenup.x - 0) {
            all->divers->flags = 0;
            sfMusic_pause(all->divers->musicjeu);
            sfMusic_play(all->divers->musicmenu);
        }
    }
}

void click_tower(all_t *all)
{
    static int i = 0;
    tower_t *actual = malloc(sizeof(tower_t));
    actual = all->list_tower->first;

    if (all->divers->event.type == sfEvtMouseButtonPressed){
        all->frame->m.x = sfMouse_getPositionRenderWindow(all->fond->window).x;
        all->frame->m.y = sfMouse_getPositionRenderWindow(all->fond->window).y;
        while (actual != NULL){
            CLICK_TOWER_DEFINE;
        }
    }
}

void clikhowto(all_t *all)
{
    if (all->divers->event.type == sfEvtMouseButtonPressed) {
        all->frame->m.x = sfMouse_getPositionRenderWindow(all->fond->window).x;
        all->frame->m.y = sfMouse_getPositionRenderWindow(all->fond->window).y;
        if (all->frame->m.y <= all->frame->vecteurhowto.y + 100
        && all->frame->m.x <= all->frame->vecteurhowto.x + 425
        && all->frame->m.y >= all->frame->vecteurhowto.y - 0
        && all->frame->m.x >= all->frame->vecteurhowto.x - 0)
            all->divers->flags = 3;
    }
}

void clikexithow(all_t *all)
{
    if (all->divers->event.type == sfEvtMouseButtonPressed) {
        all->frame->m.x = sfMouse_getPositionRenderWindow(all->fond->window).x;
        all->frame->m.y = sfMouse_getPositionRenderWindow(all->fond->window).y;
        if (all->frame->m.y <= all->frame->vecteurx.y + 50
        && all->frame->m.x <= all->frame->vecteurx.x + 50
        && all->frame->m.y >= all->frame->vecteurx.y - 0
        && all->frame->m.x >= all->frame->vecteurx.x - 0)
            all->divers->flags = 0;
    }
}

void keypause(all_t *all)
{
    if (sfKeyboard_isKeyPressed(sfKeyP) == sfTrue) {
        all->divers->flags = 2;
        sfMusic_pause(all->divers->musicjeu);
        sfMusic_pause(all->divers->musicmenu);
    }
}