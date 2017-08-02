/**
 * @file MyEditor/curses_test.cpp
 * @author Copyright (C) 2017 by Hiroki Tachiyama
 * @date 2017/7/25(Tue) 21:20 JST
 */

/**
 * @brief ライブラリCursesのテスト

  @detail  Ctrlキーなどの押下を取得できるライブラリのCursesを試しに使ってみる
 *
 */

#include <ncurses.h>

void do_curses ();


int main (void) {
  do_curses();

  return 0;
}

void do_curses () {

  //Initializing
  initscr();
  keypad(stdscr,TRUE);

  endwin();
}

