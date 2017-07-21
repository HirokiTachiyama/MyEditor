/**
 * @file MyEditor/buffer.h
 * @author Copyright (C) 2017 by Hiroki Tachiyama
 * @date 2017/7/21(Fri) 18:20 JST
 */

/**
 * @brief 僕のエディタ main
 *
 * @detail
 *
 */


#include "my_editor.h"



int main (void) {

  buffer buf("buffer");
  cout << "Hello C++!" << endl;


  buf.str_vect.push_back("hoge");
  cout << buf.str_vect[1];

  return 0;
}
