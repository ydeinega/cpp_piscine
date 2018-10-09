#include "Enemy.hpp"

Enemy::Enemy() : GameEntity("*", 3, 1, -1, 1) {}

Enemy::~Enemy() {}

Enemy::Enemy(int w) : GameEntity("*", 3, 1, w, 1) {}

Enemy::Enemy(Enemy const &src)
{
  *this = src;
}

Enemy &Enemy::operator=(Enemy const &rhs)
{
  if (this != &rhs)
  {
    this->_shape = "*";
    this->_color = 3;
    this->_h = rhs.getH();
    this->_w = rhs.getW();
    this->_life = rhs.getLife();
  }
  return (*this);
}

void  Enemy::hit(GameEntity *bullets, int size)
{
  for (int i = 0; i < size; ++i)
  {
    if (bullets[i].getLife() == 1)
    {
      if ((this->_h == bullets[i].getH() && this->_w == bullets[i].getW()))
      {
        if (this->_life == 1)
        {
          this->_life = 0;
          return ;
        }
      }
    }
  }
}

// virtual void  Enemy::move(int ch)
void  Enemy::move(int ch)
{
  if (ch == 0 || _life)
  {
    if (_h < MAX_HEIGHT)
      _h += 1;
    else
      _life = 0;
  }
}

void  Enemy::draw(WINDOW *win)
{
  if (_life)
  {
    wattron(win, COLOR_PAIR(_color));
    mvwprintw(win, _h, _w, "%s", _shape.c_str());
    wattroff(win, COLOR_PAIR(_color));
  }
}
