#ifndef GAMEENTITY_H_
# define GAMEENTITY_H_

# define MAX_HEIGHT 35              //ydeineha
# define MIN_HEIGHT 1               //ydeineha
# define MAX_WIDTH 71               //ydeineha
# define MIN_WIDTH 1                //ydeineha




# include <string>
# include <ncurses.h>              //ydeineha

class GameEntity
{
protected:
  std::string _shape;
  int         _color;
  int         _h;   // height
  int         _w;   // width
  int         _life;
public:
  GameEntity();
  ~GameEntity();
  GameEntity(std::string shape, int color, int h, int w, int life);
  GameEntity(GameEntity const &);
  GameEntity &operator=(GameEntity const &);

  int getH() const;
  int getW() const;
  int getLife() const;

  void  setX(int);
  void  setY(int);
  void  setLife(int);

  virtual void hit(GameEntity *, int) = 0;
  // virtual void  move(int) = 0;
  // virtual void draw() = 0;
  // virtual void  move() = 0;
  // virtual void move();

};

#endif