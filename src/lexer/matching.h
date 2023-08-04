//
// Created by shecannotsee on 23-8-4.
//

#ifndef SHE_INI_PLUS_SRC_LEXER_MATCHING_H_
#define SHE_INI_PLUS_SRC_LEXER_MATCHING_H_

#include <tuple>
#include <string>
#include <vector>
#include <symbol_table.h>

namespace she_ini_plus {

class matching {
 public:
  matching() = default;
  ~matching() = default;

 private:
  SYMBOL_TYPE symbol_type_{SYMBOL_TYPE::UNKNOWN};
  std::string value_buffer_;

 public:
  using token = std::tuple<SYMBOL_TYPE,std::string>;
  token token_generation(std::vector<char> character_stream);

};

} // she_ini_plus

#endif //SHE_INI_PLUS_SRC_LEXER_MATCHING_H_
