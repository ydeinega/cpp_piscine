#ifndef ENEMY_H_
# define ENEMY_H_

# include "GameEntity.hpp"

class Enemy : public GameEntity
{
public:
  Enemy();
  Enemy(int h);
  ~Enemy();
  Enemy(Enemy const &);
  Enemy &operator=(Enemy const &);

  virtual void  hit(GameEntity *, int);
  // virtual void  move(int);
  void move(int);
  void  draw(WINDOW *win);//maybe add to class
};

#endif