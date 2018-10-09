#include "Game.hpp"

Game::Game()
   : _height(37), _width(73), _nEnemy(10), _nStar(3), _nBullet(10)
{
  this->player = Player(this->_height - 2, this->_width / 2 - 1);
  this->enemies = new Enemy[this->_nEnemy];
  this->stars = new Star[this->_nStar];
  this->bullets = new Bullet[this->_nBullet];
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
    this->enemies = rhs.enemies;
    this->stars = rhs.stars;
    this->bullets = rhs.bullets;
  }
  return (*this);
}

int Game::gameOver() const
{
  if (this->player.getLife() == 0)
    return (true);
  return (false);
}

void  Game::spawnEnemy()
{
  for (int i = 0; i < _nEnemy; ++i)
  {
    if (this->enemies[i].getLife() != 1 || this->enemies[i].getW() < 0)
    {
      enemies[i] = Enemy(rand() % (this->_width - 3) + 1);
    }
  }
}

void  Game::spawnStar()
{
  for (int i = 0; i < _nStar; ++i)
  {
    if (this->stars[i].getH() < 1 || this->stars[i].getH() > this->_height ||
        this->stars[i].getW() < 1 || this->stars[i].getW() > this->_width)
    {
      this->stars[i] = Star(rand() % this->_height + 1, rand() % this->_width + 1);
    }

  }
}

void   Game::updateScore()
{
  for (int i = 0; i < _nEnemy; ++i)
  {
    if (this->enemies[i].getLife() != 1)
    {
      this->_score++;
    }
  }
}

int Game::getScore() const
{
  return (this->_score);
}

void  Game::update()
{

  this->spawnEnemy();
  this->spawnStar();

  for (int i = 0; i < this->_nEnemy; ++i)
  {
    this->enemies[i].move(0);
  }

  for (int i = 0; i < this->_nBullet; ++i)
  {
    this->bullets[i].move(0);
  }

  this->player.hit(this->enemies, this->_nEnemy);
  for (int i = 0; i < this->_nEnemy; ++i)
  {
    this->enemies[i].hit(this->bullets, this->_nBullet);
  }
  for (int i = 0; i < this->_nBullet; ++i)
  {
    this->bullets[i].hit(this->enemies, this->_nEnemy);
  }

  this->updateScore();
}


// void  Game::display()
// {
//   this->player.show();
//   for (int i = 0; i < this->_nEnemy; ++i)
//   {
//     this->enemies[i].show();
//   }
//   for (int i = 0; i < this->_nBullet; ++i)
//   {
//     this->bullets[i].show();
//   }
//   for (int i = 0; i < this->_nStar; ++i)
//   {
//     this->stars[i].show();
//   }

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
  curs_set(0);
  keypad(stdscr, TRUE);  
  noecho();
  //halfdelay(1);
  timeout(1);
  start_color();
  init_pair(1, COLOR_CYAN, COLOR_BLACK);
  init_pair(2, COLOR_WHITE, COLOR_BLACK);
  init_pair(3, COLOR_MAGENTA, COLOR_BLACK);
  init_pair(4, COLOR_YELLOW, COLOR_BLACK);
}

void    Game::draw_all()                                           //ydeineha
{
  wclear(win);
  player.draw(win);
  for (int i = 0; i < _nEnemy; i++)
    enemies[i].draw(win);
  for (int i = 0; i < _nBullet; i++)
    bullets[i].draw(win);
  for(int i = 0; i < _nStar; i++)
    stars[i].draw(win);
  //draw everything else
  box(win, 0, 0);
  wrefresh(win);
}
