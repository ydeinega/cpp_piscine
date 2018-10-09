#include "Bullet.hpp"

Bullet::Bullet() : GameEntity("|", 4, -1, -1, 0) {}

Bullet::~Bullet() {}

Bullet::Bullet(int h, int w) : GameEntity("|", 4, h, w, 1) {}

Bullet::Bullet(Bullet const &src)
{
  *this = src;
}

Bullet &Bullet::operator=(Bullet const &rhs)
{
  if (this != &rhs)
  {
    this->_shape = "|";
    this->_color = 4;
    this->_h = rhs.getH();
    this->_w = rhs.getW();
    this->_life = rhs.getLife();
  }
  return (*this);
}

void  Bullet::hit(GameEntity *enemies, int size)
{
  for (int i = 0; i < size; ++i)
  {
    if (enemies[i].getLife() == 1)
    {
      if ((this->_h == enemies[i].getH() && this->_w == enemies[i].getW()))
      {
        if (this->_life > 0)
        {
          this->_life = 0;
          enemies[i].setLife(0);
          return ;
        }
      }
    }
  }
}

void  Bullet::move(int ch)
{
  if (ch == 0 || _life)
  {
    if (_h > MIN_HEIGHT)
      _h -= 1;
    else
      _life = 0;
  }
}

void  Bullet::draw(WINDOW *win)
{
  if (_life)
  {
    wattron(win, COLOR_PAIR(_color));
    mvwprintw(win, _h, _w, "%s", _shape.c_str());
    wattroff(win, COLOR_PAIR(_color));
  }
}
