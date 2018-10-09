#include "Player.hpp"
#include "Bullet.hpp"

Player::Player() : GameEntity("<A>", 1, 35, 34, 1) {}

Player::~Player() {}

//Player::Player(int h, int w) : GameEntity("<A>", 1, 35, 34, 3) {}
Player::Player(int h, int w) : GameEntity("<A>", 1, h, w, 1) {}

Player::Player(Player const &src)
{
  *this = src;
}

Player &Player::operator=(Player const &rhs)
{
  if (this != &rhs)
  {
    this->_shape = "<A>";
    this->_color = 1;
    this->_h = rhs.getH();
    this->_w = rhs.getW();
    this->_life = rhs.getLife();
  }
  return (*this);
}

void  Player::hit(GameEntity *enemies, int size)
{
  for (int i = 0; i < size; ++i)
  {
    if (enemies[i].getLife() == 1)
    {
      if ((this->_h == enemies[i].getH() && this->_w == enemies[i].getW()) ||
          (this->_h == enemies[i].getH() && this->_w - 1 == enemies[i].getW()) ||
          (this->_h == enemies[i].getH() && this->_w + 1 == enemies[i].getW()))
      {
        if (this->_life > 0)
        {
          this->_life--;
          enemies[i].setLife(0);
          return ;
        }
      }
    }
  }
}

void  Player::shoot(GameEntity *bullets, int size)
{
  

  for (int i = 0; i < size; ++i)
  {
    if (bullets[i].getLife() != 1)
    {
      bullets[i] = Bullet(this->_h - 1, this->_w);
      return ;
    }
  }
}

void  Player::move(int ch)
{
  if (ch == KEY_UP && _h > MIN_HEIGHT)
    _h -= 1;
  else if (ch == KEY_DOWN && _h < MAX_HEIGHT)
    _h += 1;
  else if (ch == KEY_LEFT && _w > MIN_WIDTH)
    _w -= 1;
  else if (ch == KEY_RIGHT && _w + 2 < MAX_WIDTH)
    _w += 1;
}

void  Player::draw(WINDOW *win)
{
  if (_life)
  {
    wattron(win, COLOR_PAIR(_color));
    mvwprintw(win, _h, _w, "%s", _shape.c_str());

    //mvwprintw(win, 1, 1, "I'm here %i %i %s", _h, _w, _shape.c_str());
    wattroff(win, COLOR_PAIR(_color));
  }
}
