TARGET = rush

WFLAGS =
# -Wall -Wextra -Werror

SRCS := class/Bullet.cpp \
				class/Enemy.cpp \
				class/Game.cpp \
				class/GameEntity.cpp \
				class/Player.cpp \
				class/Star.cpp \
				src/main.cpp
OBJS := class/Bullet.o \
				class/Enemy.o \
				class/Game.o \
				class/GameEntity.o \
				class/Player.o \
				class/Star.o

INC := include

all:
	@clang++ $(WFLAGS) -o $(TARGET) $(SRCS) -I$(INC) -lncurses

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(TARGET)

re: fclean all
