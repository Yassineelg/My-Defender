/*
** EPITECH PROJECT, 2019
** divers
** File description:
** divers
*/

#include "../include/my.h"

void evenement(all_t *all)
{
    while (sfRenderWindow_pollEvent(all->fond->window, &all->divers->event))
        if (all->divers->event.type == sfEvtClosed)
            sfRenderWindow_close(all->fond->window);
}

void destroy(all_t *all)
{
    sfSprite_destroy(all->fond->sprite_menu);
    sfTexture_destroy(all->fond->menu);
    sfSprite_destroy(all->fond->sprite_exit);
    sfTexture_destroy(all->fond->exit);
    sfSprite_destroy(all->fond->sprite_start);
    sfTexture_destroy(all->fond->start);
    sfRenderWindow_destroy(all->fond->window);
    sfMusic_destroy(all->divers->musicmenu);
    sfMusic_destroy(all->divers->musicjeu);
}

void escape(all_t *all)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
        sfRenderWindow_close(all->fond->window);
}

void nexth(void)
{
    write (1, "Defend you castle !\n", 21);
    write(1, "\nCONTROLE :\n", 13);
    write(1, "PRESSE ESCAPE TO QUIT\n", 23);
    write(1, "and for the rest just use your mouse.\n", 39);
    write(1, "\nhave fun ! :)\n", 16);
}

void music(all_t *all)
{
    all->divers->musicmenu = sfMusic_createFromFile("./img/music_Menu.ogg");
    all->divers->musicjeu = sfMusic_createFromFile("./img/Music_jeu.ogg");
}