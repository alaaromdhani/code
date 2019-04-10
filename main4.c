#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include<SDL/SDL_mixer.h>
#include <time.h> 
#include <unistd.h>
#include "fonction.h"



int main(void) {

int cont=1,continuer=1,con=1,im=0,i=0,j=0,x=0,y=0,b[2],k=0,l=0,m=0,n=0,rep=-1,o=0,vie=3;

SDL_Surface *screen;
SDL_Surface *image=NULL;
SDL_Surface *menu=NULL;
SDL_Surface *start=NULL;
SDL_Surface *setting=NULL;
SDL_Surface *quit=NULL;
SDL_Surface *startg=NULL;
SDL_Surface *settingg=NULL;
SDL_Surface *quitg=NULL;
SDL_Surface *pp2=NULL,*j1,*j2,*j3,*j4,*j5;
SDL_Surface *pp3=NULL;
SDL_Rect ob1,ob2,ob3,ob4,ob5,ob6,ob7,ob8,ob9;
SDL_Surface *ppx=NULL,*en1,*en2,*en3,*enx,*jump,*ppi,*pp4,*pp5,*pp6,*coin1,*coin2,*coin3,*viee1,*viee2,*viee3;
SDL_Rect positionclick,ppx_pos;
Mix_Music *music=NULL;
Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024);
SDL_Init(SDL_INIT_VIDEO);
if(SDL_Init(SDL_INIT_VIDEO)!=0)
{printf("unable to set video mode SDL : %s\n",SDL_GetError());
return 1;
}

     
    screen = SDL_SetVideoMode(640,1000,32,SDL_HWSURFACE|SDL_DOUBLEBUF);
if (!screen){
printf("unable to set 600x400 video: %s\n",SDL_GetError());
                                         return (-1);
              }

SDL_FillRect(screen,NULL,SDL_MapRGB(screen->format,0,0,0));
  SDL_Flip(screen);
    
image=SDL_LoadBMP("back2.bmp");

if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1)
{fprintf(stderr,"unable to load music: %s \n",SDL_GetError());
return 1; }
music=Mix_LoadMUS("music.mp3");
Mix_PlayMusic(music,-1);
if(image==NULL)
{printf("unable to load image %s\n",SDL_GetError());
return 1;}
initobstacles(&ob1,&ob2,&ob3,&ob4,&ob5,&ob6,&ob7,&ob8,&ob9);
menu=IMG_Load("background2.jpg");
SDL_Rect menu_pos;
menu_pos.x=0;
menu_pos.y=0;
start=IMG_Load("start.png");

SDL_Rect start_pos;
start_pos.x=380;
start_pos.y=170;
setting=IMG_Load("play4.png");

SDL_Rect setting_pos;
setting_pos.x=380;
setting_pos.y=240;
quit=IMG_Load("play5.png");

SDL_Rect quit_pos;
quit_pos.x=380;
quit_pos.y=310;
startg=IMG_Load("ppp.png");

SDL_Rect startg_pos;
startg_pos.x=380;
startg_pos.y=170;
settingg=IMG_Load("settingg.png");

SDL_Rect settingg_pos;
settingg_pos.x=380;
settingg_pos.y=240;
quitg=IMG_Load("quitg.png");

SDL_Rect quitg_pos;
quitg_pos.x=380;
quitg_pos.y=310;

pp2=IMG_Load("pos2.png");

pp3=IMG_Load("pos3.png");
pp4=IMG_Load("pos4.png");

pp5=IMG_Load("pos5.png");
pp6=IMG_Load("pos6.png");

en1=IMG_Load("1.png");


en2=IMG_Load("2.png");
SDL_Rect viee_pos;
viee_pos.x=0;
viee_pos.y=0;

viee1=IMG_Load("1c.png");
viee2=IMG_Load("2c.png");
viee3=IMG_Load("3c.png");
en3=IMG_Load("3.png");
j1=IMG_Load("zz1.png");
SDL_Rect enx_pos;
enx_pos.x=600;
enx_pos.y=252;
SDL_Rect camera;
camera.x=0;
camera.y=0;
camera.w=640;
camera.h=480;

j1=IMG_Load("zz1.png");
j2=IMG_Load("zz2.png");
j3=IMG_Load("zz3.png");
j4=IMG_Load("zz4.png");
j5=IMG_Load("zz5.png");

coin1=IMG_Load("coin.png");
coin2=IMG_Load("coin.png");
coin3=IMG_Load("coin.png");
SDL_Rect image_pos;
image_pos.x=0;
image_pos.y=0;
image_pos.w=image->w;
ppx_pos.x=200;
ppx_pos.y=250;
SDL_Rect coin1_pos,coin2_pos,coin3_pos;
coin1_pos.x=600;
coin1_pos.y=300;
coin2_pos.x=700;
coin2_pos.y=300;
coin3_pos.x=800;
coin3_pos.y=300;

ppx_pos.w=81;
SDL_Surface *pp=NULL;
pp=IMG_Load("pos1.png");

ppx=pp;

SDL_Rect ppim;
ppim.x=200;
ppim.w=88;
SDL_Flip(screen);

SDL_EnableKeyRepeat(10,10);

SDL_Event event2;


SDL_Event event;

while(cont)
{
if(im==0)
{
SDL_FillRect(screen,NULL,SDL_MapRGB(screen->format,0,0,0));
SDL_BlitSurface(menu,NULL,screen,&menu_pos);
SDL_BlitSurface(start,NULL,screen,&start_pos);
SDL_BlitSurface(setting,NULL,screen,&setting_pos);
SDL_BlitSurface(quit,NULL,screen,&quit_pos);
SDL_Flip(screen);
}
else if(im==1)
{

SDL_BlitSurface(menu,NULL,screen,&menu_pos);
SDL_BlitSurface(startg,NULL,screen,&startg_pos);
SDL_BlitSurface(setting,NULL,screen,&setting_pos);
SDL_BlitSurface(quit,NULL,screen,&quit_pos);
SDL_Flip(screen);
}
else if(im==2)
{ 
SDL_FillRect(screen,NULL,SDL_MapRGB(screen->format,0,0,0));
SDL_BlitSurface(menu,NULL,screen,&menu_pos);
SDL_BlitSurface(start,NULL,screen,&start_pos);
SDL_BlitSurface(setting,NULL,screen,&setting_pos);
SDL_BlitSurface(quitg,NULL,screen,&quitg_pos);
SDL_Flip(screen);
}
else if(im==3)
{ 
SDL_FillRect(screen,NULL,SDL_MapRGB(screen->format,0,0,0));
SDL_BlitSurface(menu,NULL,screen,&menu_pos);
SDL_BlitSurface(start,NULL,screen,&start_pos);
SDL_BlitSurface(settingg,NULL,screen,&settingg_pos);
SDL_BlitSurface(quit,NULL,screen,&quit_pos);
SDL_Flip(screen);
}

SDL_WaitEvent(&event2);
switch (event2.type)
{
case SDL_QUIT:
cont=0;
break;
case SDL_MOUSEBUTTONUP:
if(event2.button.button==SDL_BUTTON_LEFT)
{
 
if(event2.button.x>380 && event2.button.x<579 && event2.button.y>170 && event2.button.y<230 )
{

continuer=1;
event.key.keysym.sym=SDLK_LEFT;
while (continuer)
{
n++;
if(collisionc(coin1_pos,ppx_pos))
coin1_pos.x-=3000;
if(collisionc(coin2_pos,ppx_pos))
coin2_pos.x-=3000;
if(collisionc(coin3_pos,ppx_pos))
coin3_pos.x-=3000;
if(l==1 && enx_pos.x>0|| l==2 && enx_pos.x>0|| l==3 && enx_pos.x>0)
{
animennemie(&m,&enx,&enx_pos,en1,en2,en3);



if(enx_pos.x==216)
{generatialea(&o);
enigme4(screen,&rep,o);
if(rep==0)
{gameover(screen,&camera,&i);
cont=0;
continuer=0;

}
}


displayen(ppx_pos,screen,camera,ppx,image,enx_pos,enx,coin1,coin2,coin3,coin1_pos,coin2_pos,coin3_pos,viee1,viee2,viee3,viee_pos,vie);
}


else
{


displaynor(ppx_pos,screen,camera,ppx,image,coin1,coin2,coin3,coin1_pos,coin2_pos,coin3_pos,viee1,viee2,viee3,viee_pos,vie);


}





SDL_PollEvent(&event);
switch(event.type)
{


case SDL_KEYDOWN:

switch(event.key.keysym.sym)
{
case SDLK_ESCAPE:
continuer=0;
break;
case SDLK_RIGHT:

animperso(&i,&ppx,&camera,pp,pp2,pp3,pp4,pp5,pp6);

coin1_pos.x-=8;
coin2_pos.x-=8;
coin3_pos.x-=8;
stop(&camera,&enx_pos,&m,&l,&i,&coin1_pos,&coin2_pos,&coin3_pos);
collisio(camera,&y);
if(collisionb(ob1,ppim,y)==1 || collisionb(ob2,ppim,y)==1 || collisionb(ob3,ppim,y)==1 )
{
coin1_pos.x+=8;
coin2_pos.x+=8;
coin3_pos.x+=8;

camera.x-=8;
i=0;

}
ppim.x=200+(camera.x);

break;
case SDLK_UP:

ppx=j1;
ppx_pos.y-=20;
camera.x+=25;

ppim.x+=25;

SDL_FillRect(screen,NULL,SDL_MapRGB(screen->format,0,0,0));
viee(viee1,viee2,viee3,viee_pos,vie,screen);
SDL_BlitSurface(image,&camera,screen,NULL);
SDL_BlitSurface(ppx,NULL,screen,&ppx_pos);
SDL_BlitSurface(coin1,NULL,screen,&coin1_pos);
SDL_BlitSurface(coin2,NULL,screen,&coin2_pos);
SDL_BlitSurface(coin3,NULL,screen,&coin3_pos);

SDL_Flip(screen);


SDL_Delay(100);
ppx=j2;
ppx_pos.y-=20;
camera.x+=25;

ppim.x+=25;
SDL_FillRect(screen,NULL,SDL_MapRGB(screen->format,0,0,0));
viee(viee1,viee2,viee3,viee_pos,vie,screen);
SDL_BlitSurface(image,&camera,screen,NULL);
SDL_BlitSurface(ppx,NULL,screen,&ppx_pos);
SDL_BlitSurface(coin1,NULL,screen,&coin1_pos);
SDL_BlitSurface(coin2,NULL,screen,&coin2_pos);
SDL_BlitSurface(coin3,NULL,screen,&coin3_pos);

SDL_Flip(screen);


SDL_Delay(100);
ppx=j3;
ppx_pos.y-=20;
camera.x+=25;
ppim.x+=25;
SDL_FillRect(screen,NULL,SDL_MapRGB(screen->format,0,0,0));
viee(viee1,viee2,viee3,viee_pos,vie,screen);
SDL_BlitSurface(image,&camera,screen,NULL);
SDL_BlitSurface(ppx,NULL,screen,&ppx_pos);
SDL_BlitSurface(coin1,NULL,screen,&coin1_pos);
SDL_BlitSurface(coin2,NULL,screen,&coin2_pos);
SDL_BlitSurface(coin3,NULL,screen,&coin3_pos);

SDL_Flip(screen);


SDL_Delay(100);
ppx=j4;
ppx_pos.y+=20;
camera.x+=100;
ppim.x+=50;
SDL_FillRect(screen,NULL,SDL_MapRGB(screen->format,0,0,0));
viee(viee1,viee2,viee3,viee_pos,vie,screen);
SDL_BlitSurface(image,&camera,screen,NULL);
SDL_BlitSurface(ppx,NULL,screen,&ppx_pos);
SDL_BlitSurface(coin1,NULL,screen,&coin1_pos);
SDL_BlitSurface(coin2,NULL,screen,&coin2_pos);
SDL_BlitSurface(coin3,NULL,screen,&coin3_pos);

SDL_Flip(screen);
SDL_Delay(100);
ppx=j5;
ppx_pos.y+=20;
camera.x+=100;
ppim.x+=50;
SDL_FillRect(screen,NULL,SDL_MapRGB(screen->format,0,0,0));
viee(viee1,viee2,viee3,viee_pos,vie,screen);
SDL_BlitSurface(image,&camera,screen,NULL);
SDL_BlitSurface(ppx,NULL,screen,&ppx_pos);
SDL_BlitSurface(coin1,NULL,screen,&coin1_pos);
SDL_BlitSurface(coin2,NULL,screen,&coin2_pos);
SDL_BlitSurface(coin3,NULL,screen,&coin3_pos);

SDL_Flip(screen);

SDL_Delay(50);


ppx=pp;
ppx_pos.y+=20;
camera.x+=8;

y=1;

break;



break;
}

}

}
}

else if(event2.button.x>380 && event2.button.x<579 && event2.button.y>310 && event2.button.y<370)
{
cont=0;
}
}
break;
case SDL_MOUSEMOTION:
if(event2.motion.x>380 && event2.motion.x<579 && event2.motion.y>170 && event2.motion.y<230 )
{im=1;
}
else if(event2.button.x>380 && event2.button.x<579 && event2.button.y>310 && event2.button.y<370)
{im=2;}
else if(event2.button.x>380 && event2.button.x<579 && event2.button.y>240 && event2.button.y<300)
{im=3;}


break;


}
}
Mix_FreeMusic(music);
Mix_CloseAudio();
SDL_FreeSurface(pp);
SDL_FreeSurface(image);
SDL_FreeSurface(menu);
SDL_FreeSurface(start);

SDL_Quit();










return 0;

}
