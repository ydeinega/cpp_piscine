#include "GameEntity.hpp"

GameEntity::GameEntity() {}

GameEntity::~GameEntity() {}

GameEntity::GameEntity(std::string shape, int color, int x, int y, int life)
    : _shape(shape), _color(color), _x(x), _y(y), _life(life) {}

GameEntity::GameEntity(GameEntity const &src)
{
  *this = src;
}

GameEntity &GameEntity::operator=(GameEntity const &rhs)
{
  if (this != &rhs)
  {
    this->_x = rhs.getX();
    this->_y = rhs.getY();
    this->_life = rhs.getLife();
  }
  return (*this);
}

int GameEntity::getX() const
{
  return (this->_x);
}

int GameEntity::getY() const
{
  return (this->_y);
}

int GameEntity::getLife() const
{
  return (this->_life);
}

void GameEntity::setX(int x)
{
  this->_x = x;
}

void GameEntity::setY(int y)
{
  this->_y = y;
}

void GameEntity::setLife(int life)
{
  this->_life = life;
}
