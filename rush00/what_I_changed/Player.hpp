#ifndef PLAYER_H_
# define PLAYER_H_

# include "GameEntity.hpp"

class Player : public GameEntity
{
public:
  Player();
  ~Player();
  Player(Player const &);
  Player &operator=(Player const &);

  virtual void  hit(GameEntity *, int);
  virtual void  move(int);                              //ydeineha
  void	draw(WINDOW *win);								//ydeineha
};

#endif