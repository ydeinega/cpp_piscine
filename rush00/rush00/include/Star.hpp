#ifndef STAR_H_
# define STAR_H_

# include "GameEntity.hpp"
# include <ncurses.h>

class Star : public GameEntity
{
public:
  Star();
  Star(int h, int w);
  ~Star();
  Star(Star const &);
  Star &operator=(Star const &);

  virtual void hit(GameEntity *, int);
  void  move(int);
  void	draw(WINDOW *win);
};

#endif