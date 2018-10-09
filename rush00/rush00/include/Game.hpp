#ifndef GAME_H_
# define GAME_H_

# include <ncurses.h>
# include <curses.h>
# include "Player.hpp"
# include "Enemy.hpp"
# include "Star.hpp"
# include "Bullet.hpp"
# include "GameEntity.hpp"
# include <unistd.h>

class Game
{
private:
  int _height;
  int _width;
  // int _nEnemy;
  // int _nStar;
  // int _nBullet;
  int _score;
  int _clock;

  WINDOW*  create_newwin();           //ydeineha
  void     visual();                 //ydeineha
public:
  int _nEnemy;
  int _nStar;
  int _nBullet;
  WINDOW  *win;
  Player  player;
  Enemy   *enemies;
  Star    *stars;
  Bullet  *bullets;

  Game();
  ~Game();
  Game(Game const &);
  Game &operator=(Game const &);

  int getScore() const;
  void  updateScore();
  int gameOver() const;
  void  spawnEnemy();
  void  spawnStar();
  void  update();
  // void  display();
  void     draw_all();              //ydeineha
};

#endif