/**
 * @file MyEditor/buffer.h
 * @author Copyright (C) 2017 by Hiroki Tachiyama
 * @date 2017/7/21(Fri) 16:58 JST
 */

/**
 * @brief バッファの情報を保持するクラス

  @detail 
  テキスト保持にはLine構造体をリストで繋いだやつ。
  他には、バッファ名、マウスカーソルの位置などを保持。
 *
 */



#ifndef __BUFFER_H__
#define __BUFFER_H__

//! @struct
typedef struct _Line{
  char *txt_str;
  struct _Line* next;
} Line;


class buffer {
  Line* top;
  char* buf_name;
  int total_of_lines;
  
  //! @var
  int x, y;

public:
  buffer();
};



#endif
