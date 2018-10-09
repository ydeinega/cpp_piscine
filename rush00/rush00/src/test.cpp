#include <ncurses.h>
#include "Game.hpp"
#include "Player.hpp"
#include <iostream>

WINDOW *create_newwin(int height, int width, int starty, int startx);
void	move_player(int ch);

int main()
{	
	int 	ch;
	Game	game;

	while ((ch = getch()))
	{
		game.draw_all();
		if (ch == 'q') //gameover condition
		{
			mvwprintw(game.win , 1, 1, "Game over. Press ANY KEY to exit");
			box(game.win, 0, 0);
			wrefresh(game.win);
			nocbreak();//exit half-delay mode
			cbreak();//no need to push enter
			getch();
			endwin();
			return 0;
		}
		if (ch == KEY_UP || ch == KEY_DOWN || ch == KEY_LEFT || ch == KEY_RIGHT)
			game.player.move(ch);
		//if (ch == ' ')
	}
	return 0;
}

// WINDOW *create_newwin(int height, int width, int starty, int startx)
// {
// 	WINDOW *win;

// 	win = newwin(height, width, starty, startx);
// 	box(win, 0, 0);
// 	wrefresh(win);

// 	return win;
// }

// void	move_player(int ch)
// {
// 	//if (ch == KEY_UP)
// }


// box(win, 0, 0);
// wrefresh(win);
// wclear(win);//clear the window