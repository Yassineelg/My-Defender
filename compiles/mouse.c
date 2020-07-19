/*
** EPITECH PROJECT, 2019
** mouse
** File description:
** mouse
*/

#include "../include/my.h"

void clikstart(all_t *all)
{
    if (all->divers->event.type == sfEvtMouseButtonPressed) {
        all->frame->m.x = sfMouse_getPositionRenderWindow(all->fond->window).x;
        all->frame->m.y = sfMouse_getPositionRenderWindow(all->fond->window).y;
        if (all->frame->m.y <= all->frame->vecteurstart.y + 80
        && all->frame->m.x <= all->frame->vecteurstart.x + 425
        && all->frame->m.y >= all->frame->vecteurstart.y - 0
        && all->frame->m.x >= all->frame->vecteurstart.x - 0) {
            all->divers->flags = 1;
            sfMusic_pause(all->divers->musicmenu);
            sfMusic_play(all->divers->musicjeu);
        }
    }
}

void clikexit(all_t *all)
{
    if (all->divers->event.type == sfEvtMouseButtonPressed) {
        all->frame->m.x = sfMouse_getPositionRenderWindow(all->fond->window).x;
        all->frame->m.y = sfMouse_getPositionRenderWindow(all->fond->window).y;
        if (all->frame->m.y <= all->frame->vecteurexit.y + 100
        && all->frame->m.x <= all->frame->vecteurexit.x + 425
        && all->frame->m.y >= all->frame->vecteurexit.y - 0
        && all->frame->m.x >= all->frame->vecteurexit.x - 0)
            sfRenderWindow_close(all->fond->window);
    }
}

void clikpause(all_t *all)
{
    if (all->divers->event.type == sfEvtMouseButtonPressed){
        all->frame->m.x = sfMouse_getPositionRenderWindow(all->fond->window).x;
        all->frame->m.y = sfMouse_getPositionRenderWindow(all->fond->window).y;
        if (all->frame->m.y <= all->frame->vecteurpose.y + 70
        && all->frame->m.x <= all->frame->vecteurpose.x + 70
        && all->frame->m.y >= all->frame->vecteurpose.y - 0
        && all->frame->m.x >= all->frame->vecteurpose.x - 0) {
            all->divers->flags = 2;
            sfMusic_pause(all->divers->musicjeu);
            sfMusic_pause(all->divers->musicmenu);
        }
    }
}

void clikstartpose(all_t *all)
{
    if (all->divers->event.type == sfEvtMouseButtonPressed){
        all->frame->m.x = sfMouse_getPositionRenderWindow(all->fond->window).x;
        all->frame->m.y = sfMouse_getPositionRenderWindow(all->fond->window).y;
        if (all->frame->m.y <= all->frame->vecteurcontp.y + 100
        && all->frame->m.x <= all->frame->vecteurcontp.x + 425
        && all->frame->m.y >= all->frame->vecteurcontp.y - 0
        && all->frame->m.x >= all->frame->vecteurcontp.x - 0) {
            all->divers->flags = 1;
            sfMusic_play(all->divers->musicjeu);
        }
    }
}

void clikexitpose(all_t *all)
{
    if (all->divers->event.type == sfEvtMouseButtonPressed){
        all->frame->m.x = sfMouse_getPositionRenderWindow(all->fond->window).x;
        all->frame->m.y = sfMouse_getPositionRenderWindow(all->fond->window).y;
        if (all->frame->m.y <= all->frame->vecteurexitp.y + 100
        && all->frame->m.x <= all->frame->vecteurexitp.x + 425
        && all->frame->m.y >= all->frame->vecteurexitp.y - 0
        && all->frame->m.x >= all->frame->vecteurexitp.x - 0)
            sfRenderWindow_close(all->fond->window);
    }
}