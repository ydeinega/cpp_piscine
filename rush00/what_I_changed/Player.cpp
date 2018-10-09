#include "Player.hpp"

Player::Player() : GameEntity("<A>", 1, 35, 34, 3) {}

Player::~Player() {}

Player::Player(Player const &src)
{
  *this = src;
}

Player &Player::operator=(Player const &rhs)
{
  if (this != &rhs)
  {
    this->_x = rhs.getX();
    this->_y = rhs.getY();
    this->_life = rhs.getLife();
  }
  return (*this);
}

void  Player::hit(GameEntity *enemies, int size)
{
  for (int i = 0; i < size; ++i)
  {
    if (enemies[i].getLife() > 0)
    {
      if ((this->_x == enemies[i].getX() && this->_y == enemies[i].getY()) ||
          (this->_x - 1 == enemies[i].getX() && this->_y == enemies[i].getY()) ||
          (this->_x + 1 == enemies[i].getX() && this->_y == enemies[i].getY()))
      {
        if (this->_life > 0)
        {
          this->_life--;
          enemies[i].setLife(enemies[i].getLife() - 1);
          return ;
        }
      }
    }
  }
}

void  Player::move(int ch)
{
  if (ch == KEY_UP && _x > MIN_HEIGHT)
    _x -= 1;
  else if (ch == KEY_DOWN && _x < MAX_HEIGHT)
    _x += 1;
  else if (ch == KEY_LEFT && _y > MIN_WIDTH)
    _y -= 1;
  else if (ch == KEY_RIGHT && _y + 2 < MAX_WIDTH)
    _y += 1;
}

void  Player::draw(WINDOW *win)
{
  if (_life)
  {
    wattron(win, COLOR_PAIR(_color));
    mvwprintw(win, _x, _y, "%s", _shape.c_str());
    wattroff(win, COLOR_PAIR(_color));
  }
}
