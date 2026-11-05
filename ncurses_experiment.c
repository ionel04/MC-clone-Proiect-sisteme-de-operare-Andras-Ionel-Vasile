
#include <stdio.h>
#include <ncurses.h>

int main()
{
    initscr();

    noecho();
    cbreak();
    keypad(stdscr, TRUE);
    curs_set(0);

    if (has_colors()) {
        start_color();
        init_pair(1, COLOR_WHITE, COLOR_BLUE);
        attron(COLOR_PAIR(1));
    }

    int y, x;
    getmaxyx(stdscr, y, x);

    int center_y = y / 2;
    int center_x = (x - 13) / 2;

    mvprintw(center_y, center_x, "HELLO WORLD !");


    refresh();

    getch();

    endwin();

    printf("HELLO WORLD !\n");

    return 0;
}
