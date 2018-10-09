#include <stdlib.h>
#include "Game.hpp"

Game::Game()
   : _height(37), _width(73), _nEnemy(2), _nStar(3), _nBullet(5)
{
  this->player = Player();
  // this->enemies = new Enemy[this->_nEnemy];
  // this->stars = new Star[this->_nStar];
  // this->bullets = new Bullet[this->_nBullet];


  visual();                                                   //ydeineha
  this->win = create_newwin();                                //ydeineha 
};

Game::~Game() {};

Game::Game(Game const &src)
{
  *this = src;
}

Game &Game::operator=(Game const &rhs)
{
  if (this != &rhs)
  {
    this->player = rhs.player;
    // this->enemies = rhs.enemies;
    // this->stars = rhs.stars;
    // this->bullets = rhs.bullets;
  }
  return (*this);
}

// int Game::gameOver() const
// {
//   if (this->player.getLife() == 0)
//     return (1);
//   return (0);
// }

// void  Game::spawnEnemy()
// {
//   for (int i = 0; i < _nEnemy; ++i)
//   {
//     if (this->enemies[i].getLife() < 1 || this->enemies[i].getX() == 0)
//     {
//       enemies[i] = Enemy(rand() % this->_height + 1);
//     }
//   }
// }

// void  Game::spawnStar()
// {
//   for (int i = 0; i < _nStar; ++i)
//   {
//     if (this->stars[i].getX() < 1 || this->stars[i].getX() > this->_height ||
//         this->stars[i].getY() < 1 || this->stars[i].getY() > this->_width)
//       this->stars[i] = Star(rand() % this->_height + 1, rand() % this->_width + 1);
//   }
// }


// void  Game::spawnBullet()
// {

// }

WINDOW*  Game::create_newwin(void)                               //ydeineha
{
  WINDOW  *win;
  int     x;
  int     y;

  x = (LINES - _height) / 2;
  y = (COLS - _width) / 2;
  win = newwin(_height, _width, x, y);
  return (win);
}

void     Game::visual()                                           //ydeineha
{
  initscr();  
  raw();
  keypad(stdscr, TRUE);  
  noecho();
  halfdelay(1);
  start_color();
  init_pair(1, COLOR_CYAN, COLOR_BLACK);
  init_pair(2, COLOR_WHITE, COLOR_BLACK);
  init_pair(3, COLOR_MAGENTA, COLOR_BLACK);
}

void    Game::draw_all()                                           //ydeineha
{
  wclear(win);
  player.draw(win);
  //draw everything else
  box(win, 0, 0);
  wrefresh(win);
}
