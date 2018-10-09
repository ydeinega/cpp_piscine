#ifndef BULLET_H_
# define BULLET_H_

# include "GameEntity.hpp"
# include <ncurses.h>

class Bullet : public GameEntity
{
public:
  Bullet();
  Bullet(int h, int w);
  ~Bullet();
  Bullet(Bullet const &);
  Bullet &operator=(Bullet const &);

  virtual void  hit(GameEntity *, int);
  void	move(int ch);
  void	draw(WINDOW *win);
  // virtual void  move(int);

};

#endif