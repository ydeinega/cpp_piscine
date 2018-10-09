#include <iostream>

#include "GameEntity.hpp"

GameEntity::GameEntity() {}

GameEntity::~GameEntity() {}

GameEntity::GameEntity(std::string shape, int color, int h, int w, int life)
    : _shape(shape), _color(color), _h(h), _w(w), _life(life) {}

GameEntity::GameEntity(GameEntity const &src)
{
  *this = src;
}

GameEntity &GameEntity::operator=(GameEntity const &rhs)
{
  if (this != &rhs)
  {
    this->_h = rhs.getH();
    this->_w = rhs.getW();
    this->_life = rhs.getLife();
  }
  return (*this);
}

int GameEntity::getH() const
{
  return (this->_h);
}

int GameEntity::getW() const
{
  return (this->_w);
}

int GameEntity::getLife() const
{
  return (this->_life);
}

void GameEntity::setX(int h)
{
  this->_h = h;
}

void GameEntity::setY(int w)
{
  this->_w = w;
}

void GameEntity::setLife(int life)
{
  this->_life = life;
}
