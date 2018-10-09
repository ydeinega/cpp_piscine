#ifndef GAME_H_
# define GAME_H_

# include <ncurses.h>
# include <ncurses.h>
# include "Player.hpp"
// # include "Enemy.hpp"
// # include "Star.hpp"
// # include "Bullet.hpp"

class Game
{
private:
  int _height;
  int _width;
  int _nEnemy;
  int _nStar;
  int _nBullet;
  int _score;
  int _clock;
  int _height_prev;
  int _width_prev;

  WINDOW*  create_newwin();           //ydeineha
  void     visual();                 //ydeineha


public:
  WINDOW  *win;
  Player  player;
  // Enemy   *enemies;
  // Star    *stars;
  // Bullet  *bullets;

  Game();
  ~Game();
  Game(Game const &);
  Game &operator=(Game const &);

  // int gameOver() const;
  // void  spawnPlayer();
  // void  spawnEnemy();
  // void  spawnStar();
  // void  spawnBullet();


  void     draw_all();              //ydeineha

};

#endif