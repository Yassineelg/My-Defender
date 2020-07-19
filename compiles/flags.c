/*
** EPITECH PROJECT, 2019
** flags
** File description:
** for mouve
*/

#include"../include/my.h"

void flags2(all_t *all)
{
    if (all->divers->flags == 2) {
        drawpause(all);
        clikstartpose(all);
        clikexitpose(all);
        clikmenupose(all);
        escape(all);
    } else if (all->divers->flags == 3) {
        drawhowtoplay(all);
        clikexithow(all);
        escape(all);
    } else if (all->divers->flags == 4) {
        sfMusic_stop(all->divers->musicjeu);
        drawover(all);
        clikexit(all);
        escape(all);
    } evenement(all);
}

void flags3(all_t *all)
{
    deplace_enemy(all);
    drawgame(all);
    clikpause(all);
    click_tower(all);
    hit_mob(all);
    hit_castle(all);
    keypause(all);
    loose(all);
    escape(all);
    sfText_setString(all->divers->text_health, my_rev_putnbr(all->divers->castle_life));
}

void flags(all_t *all)
{
    if (all->divers->flags == 0) {
        drawmenu(all);
        clikstart(all);
        clikhowto(all);
        clikexit(all);
    } else if (all->divers->flags == 1) {
        generate(all);
        rect_enemy(all);
        rect_coin(all);
        lvl_up(all);
        flags3(all);
    } flags2(all);
    evenement(all);
}