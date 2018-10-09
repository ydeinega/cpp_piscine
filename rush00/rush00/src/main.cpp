#include <time.h>
#include "Game.hpp"
#include <stdlib.h>
#include <ctime>


int main()
{
  Game  game;
  int   ch;

  const int FRAMES_PER_SECOND = 25;
  const int SKIP_TICKS = 1000 / FRAMES_PER_SECOND;
  

  const int delta = 1;

  // time_t next_game_tick = std::time(0);

  // mvwprintw(game.win , 1, 1, "Time %lld", next_game_tick);
  // box(game.win, 0, 0);
  // wrefresh(game.win);
  // while(1);

  time_t  start = std::time(0);

  int sleep_time = 0;
  while (1)
  {
    ch = getch();
    // while((ch = getch()))
    // {
      game.draw_all();
      if (game.gameOver() == false)
      {
        game.update();
        if (ch == 'q') //gameover condition
        {
          wclear(game.win);
          mvwprintw(game.win , 1, 1, "Game over. Press ANY KEY to exit");
          box(game.win, 0, 0);
          wrefresh(game.win);
          nocbreak();//exit half-delay mode
          cbreak();//no need to push enter
          getch();
          endwin();
          return 0;
        }
        if (ch == KEY_UP || ch == KEY_DOWN || ch == KEY_LEFT || ch == KEY_RIGHT)
          game.player.move(ch);
        if (ch == ' ')
          game.player.shoot(game.bullets, game._nBullet);
      }
      else
      {
          wclear(game.win);
          mvwprintw(game.win , 1, 1, "Game over. YOU LOST! Press ANY KEY to exit");
          box(game.win, 0, 0);
          wrefresh(game.win);
          nocbreak();//exit half-delay mode
          cbreak();//no need to push enter
          getch();
          endwin();
          return 0;
      }

      time_t end = std::time(0);

      // if (end - start < delta)
      // {
      //   mvwprintw(game.win , 1, 1, "start %lld", start);
      //   mvwprintw(game.win , 2, 1, "end %lld", end);
      //   mvwprintw(game.win , 2, 1, "end %lld", delta);
      //   box(game.win, 0, 0);
      //   wrefresh(game.win);
      //   // while(1);


      //   // usleep(delta - (end - start));
      //   usleep(10000000);
      // }
      usleep(120000);
      // next_game_tick += SKIP_TICKS;
      // sleep_time = next_game_tick - std::time(0);
      // if( sleep_time >= 0 ) {
      //     // sleep( sleep_time );
      //   usleep(15000);
      // }
    // }
    
  }
    // else {
    //     // Shit, we are running behind!
    // }
}





//   while(game.gameOver() == false)
//   {
//     loops = 0;
//     while( clock() > next_game_tick && loops < MAX_FRAMESKIP)
//     {
//       game.update();

//       next_game_tick += SKIP_TICKS;
//       loops++;
//     }

//     // game.display();
//   }
// }





