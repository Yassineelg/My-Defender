/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** .h file
*/

#include <SFML/System.h>
#include <SFML/Graphics.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <SFML/Audio.h>
#include <fcntl.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>

#ifndef TEST_H_
#define TEST_H_

typedef struct enemy_s enemy_t;
typedef struct tower_s tower_t;

typedef struct fond_s {
    sfRenderWindow *window;
    sfVideoMode video_mode;
    sfTexture *fond;
    sfSprite *sprite_fond;
    sfTexture *menu;
    sfSprite *sprite_menu;
    sfTexture *exit;
    sfSprite *sprite_exit;
    sfTexture *start;
    sfSprite *sprite_start;
    sfTexture *title;
    sfSprite *sprite_title;
    sfTexture *pose;
    sfSprite *sprite_pose;
    sfTexture *pause;
    sfSprite *sprite_pause;
    sfTexture *exitp;
    sfSprite *sprite_exitp;
    sfTexture *contp;
    sfSprite *sprite_contp;
    sfTexture *menup;
    sfSprite *sprite_menup;
    sfTexture *coin;
    sfSprite *sprite_coin;
    sfTexture *howto;
    sfSprite *sprite_howto;
    sfTexture *how;
    sfSprite *sprite_how;
    sfTexture *x;
    sfSprite *sprite_x;
    sfTexture *over;
    sfSprite *sprite_over;
} fond_t;

typedef struct divers_s {
    sfMusic* musicmenu;
    sfMusic* musicjeu;
    sfEvent event;
    sfFont *font;
    sfFont *font_health;
    sfText *text_health;
    sfText *text;
    sfClock *clock_castle;
    sfTime time_castle;
    int flags;
    int coin;
    int castle_life;
} divers_t;

typedef struct mob_s {
    sfTexture *boss;
    sfTexture *tower;
    sfTexture *monstre;
} mob_t;

typedef struct frame_s {
    sfIntRect rectboss;
    sfIntRect rectmonstre;
    sfVector2f vecteurstart;
    sfVector2f vecteurexit;
    sfVector2f vecteurtitle;
    sfVector2f vecteurpose;
    sfVector2f vecteurpause;
    sfVector2f vecteurmenup;
    sfVector2f vecteurexitp;
    sfVector2f vecteurcontp;
    sfVector2f vecteurhow;
    sfVector2f vecteurhowto;
    sfVector2f vecteurx;
    sfVector2i m;
    sfVector2f croix;
    sfVector2f vecteurcoin;
    sfIntRect  rect_coin;
    sfClock    *clock_coin;
    sfTime     time_coin;
    float      seconde_coin;
    int        count_coin;
} frame_t;

struct enemy_s {
    sfSprite        *sprt_enemy;
    sfVector2f      vector_enemy;
    sfIntRect       rect;
    sfClock         *clock_enemy;
    sfTime          time_enemy;
    float           seconde_enemy;
    int             count;
    int             sp;
    int             life;
    int             gold;
    enemy_t         *next;
};

typedef struct list_enemy_s {
    enemy_t *first;
}list_enemy_t;

struct tower_s{
    sfSprite        *sprite_twr;
    sfVector2f      vector_tower;
    sfIntRect       rect_tower;
    int             damage;
    int             lvl;
    int             id;
    tower_t         *next;
};

typedef struct list_tower_s{
    tower_t     *first;
}list_tower_t;

typedef struct all_s {
    fond_t *fond;
    mob_t *mob;
    divers_t *divers;
    frame_t *frame;
    list_enemy_t *list_enemy;
    list_tower_t *list_tower;
} all_t;

void window(all_t *all);
void texture(all_t *all);
void mycreat(all_t *all);
void sprite(all_t *all);
void menu(all_t *all);
void evenement(all_t *all);
void destroy(all_t *all);
void menu(all_t *all);
void nexth(void);
void drawmenu(all_t *all);
void escape(all_t *all);
void flags(all_t *all);
void drawgame(all_t *all);
void clikexit(all_t *all);
void clikstart(all_t *all);
void vectmenu(all_t *all);
void vectgame(all_t *all);
void vectpause(all_t *all);
void drawpause(all_t *all);
void clikpause(all_t *all);
void clikexitpose(all_t *all);
void clikstartpose(all_t *all);
void clikmenupose(all_t *all);
void rectmonstre(all_t *all);
void rectboss(all_t *all);
void setpos(all_t *all);
void music(all_t *all);
void keypause(all_t *all);
void cliktower1(all_t *all);
void deplace_enemy(all_t *all);
void rect_enemy(all_t *all);
void draw_enemy(all_t *all);
void init_enemy_values(enemy_t *actual);
void init_list_enemy(all_t *all);
void create_monster(all_t *all);
void create_boss(all_t *all);
void generate(all_t *all);
void create_tower(all_t *all, int x, int y);
void draw_tower(all_t *all);
void init_list_tower(all_t *all);
void init_coin(all_t *all);
void rect_coin(all_t *all);
void lvl_up(all_t *all);
void click_tower(all_t *all);
void generate_tower(all_t *all);
void hit_mob(all_t *all);
void vecthow(all_t *all);
void clikhowto(all_t *all);
void clikexithow(all_t *all);
void drawhowtoplay(all_t *all);
void init_text(all_t *all);
void display_coin(all_t *all);
char *convert_coin(all_t *all);
void drawover(all_t *all);
void vectover(all_t *all);
void hit_castle(all_t *all);
void loose(all_t *all);
char *my_rev_putnbr(int nb);


#endif /* TEST_H_*/
