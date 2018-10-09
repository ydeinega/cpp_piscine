#include "Star.hpp"

Star::Star() : GameEntity(".", 2, -1, -1, 1) {}

Star::~Star() {}

Star::Star(int h, int w) : GameEntity(".", 2, h, w, 1) {}

Star::Star(Star const &src)
{
  *this = src;
}

Star &Star::operator=(Star const &rhs)
{
  if (this != &rhs)
  {
    this->_shape = ".";
    this->_color = 2;
    this->_h = rhs.getH();
    this->_w = rhs.getW();
    this->_life = rhs.getLife();
  }
  return (*this);
}

void  Star::hit(GameEntity *stars, int i)
{
  (void)stars;
  (void)i;
}

void  Star::move(int ch)
{
  if (ch == 0 || _life)
  {
    if (_h > MIN_HEIGHT)
      _h -= 1;
    else
      _life = 0;
  }
}

void  Star::draw(WINDOW *win)
{
  if (_life)
  {
    wattron(win, COLOR_PAIR(_color));
    mvwprintw(win, _h, _w, "%s", _shape.c_str());
    wattroff(win, COLOR_PAIR(_color));
  }
}
