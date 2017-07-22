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

using namespace std;

int main (void) {

  buffer buf("buffer");
  cout << "Hello C++!" << endl;

  buf.str_vect.push_back("hoge");
  cout << buf.str_vect[0];

  buf.str_vect.push_back("fuga");
  buf.str_vect.push_back("tohoho");
  buf.str_vect.push_back("nyoho");
  cout << buf.str_vect[0];
  cout << buf.str_vect[1];
  cout << buf.str_vect[2];
  cout << buf.str_vect[3] << endl;
  //buf.display_str_vect();


  return 0;
}
