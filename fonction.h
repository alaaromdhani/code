#ifndef FONCTION_H_INCLUDED
#define FONCTION_H_INCLUDED

void generatialea(int *a);

//int trigooo(SDL_Rect pA,SDL_Surface *A,SDL_Rect pB,SDL_Surface *B);
void collisio(SDL_Rect camera,int *y);
void displayen(SDL_Rect ppx_pos,SDL_Surface *screen,SDL_Rect camera,SDL_Surface *ppx,SDL_Surface *image,SDL_Rect enx_pos,SDL_Surface *enx,SDL_Surface *coin1,SDL_Surface *coin2,SDL_Surface *coin3,SDL_Rect coin1_pos,SDL_Rect coin2_pos,SDL_Rect coin3_pos,SDL_Surface *viee1,SDL_Surface *viee2,SDL_Surface *viee3,SDL_Rect viee_pos,int vie);
void displaynor(SDL_Rect ppx_pos,SDL_Surface *screen,SDL_Rect camera,SDL_Surface *ppx,SDL_Surface *image,SDL_Surface *coin1,SDL_Surface *coin2,SDL_Surface *coin3,SDL_Rect coin1_pos,SDL_Rect coin2_pos,SDL_Rect coin3_pos,SDL_Surface *viee1,SDL_Surface *viee2,SDL_Surface *viee3,SDL_Rect viee_pos,int vie);
void initobstacles(SDL_Rect *ob1,SDL_Rect *ob2,SDL_Rect *ob3,SDL_Rect *ob4,SDL_Rect *ob5,SDL_Rect *ob6,SDL_Rect *ob7,SDL_Rect *ob8,SDL_Rect *ob9);
int collisionb(SDL_Rect p1,SDL_Rect p2,int y);
void stop(SDL_Rect *camera,SDL_Rect *enx_pos,int *m,int *l,int*i,SDL_Rect *coin1_pos,SDL_Rect *coin2_pos,SDL_Rect *coin3_pos);
void animperso(int *i,SDL_Surface**ppx,SDL_Rect *camera ,SDL_Surface*pp,SDL_Surface*pp2,SDL_Surface*pp3,SDL_Surface*pp4,SDL_Surface*pp5,SDL_Surface*pp6 );
void animennemie(int *m,SDL_Surface**enx,SDL_Rect *enx_pos,SDL_Surface* en1,SDL_Surface* en2,SDL_Surface* en3);
void enigme4(SDL_Surface *screen,int *rep,int a);
void gameover(SDL_Surface *screen,SDL_Rect *camera,int *i);
int collisionc(SDL_Rect p1,SDL_Rect p2);

void viee(SDL_Surface *viee1,SDL_Surface *viee2,SDL_Surface *viee3,SDL_Rect viee_pos,int vie,SDL_Surface *screen);
#endif
