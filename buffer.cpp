/**
 * @file MyEditor/buffer.cpp
 * @author Copyright (C) 2017 by Hiroki Tachiyama
 * @date 2017/7/21(Fri) 18:28 JST
 */

/**
 * @brief バッファ本体

  @detail 
 *
 */

#include "buffer.h"

buffer::buffer (string _buf_name) {
  buf_name = _buf_name;
  cursor_x=0; cursor_y=0;
  str_vect.push_back("");
}


