#ifndef PLAYER_H_
# define PLAYER_H_

# include "GameEntity.hpp"
# include <ncurses.h>

class Player : public GameEntity
{
public:
  Player();
  ~Player();
  Player(int h, int w);
  Player(Player const &);
  Player &operator=(Player const &);

  virtual void  hit(GameEntity *, int);
  // virtual void  move();
  void  shoot(GameEntity *, int);
  virtual void  move(int);                 //ydeineha
  void	draw(WINDOW *win);								//ydeineha
};

#endif