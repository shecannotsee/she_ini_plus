//
// Created by shecannotsee on 23-8-4.
//

#include "matching.h"

she_ini_plus::matching::token she_ini_plus::matching::token_generation(std::vector<char> character_stream) {
  /*****/if (symbol_type_ == SYMBOL_TYPE::UNKNOWN) {
    value_buffer_.clear();
  } else if (symbol_type_ == SYMBOL_TYPE::WAITING) {
    // do nothing.
  }

  for(auto ch:character_stream) {
    /***/if (symbol_table[ch] == SYMBOL_TYPE::MAY_COMMENTS) {

    }
    else if (symbol_table[ch] == SYMBOL_TYPE::COMMENTS) {

    }
    else if (symbol_table[ch] == SYMBOL_TYPE::DELIMITER) {

    }
    else if (symbol_table[ch] == SYMBOL_TYPE::OPERATOR) {

    }
    else if (symbol_table[ch] == SYMBOL_TYPE::TYPE_DEFINE) {

    }
    else if (symbol_table[ch] == SYMBOL_TYPE::SECTION_BEGIN) {

    }
    else if (symbol_table[ch] == SYMBOL_TYPE::SECTION_END) {

    }
    else if (symbol_table[ch] == SYMBOL_TYPE::REFERENCE) {

    }
    else if (symbol_table[ch] == SYMBOL_TYPE::ESCAPE_CHAR) {

    }
    else {

    }
  }

  return std::make_pair(token_type_,value_buffer_);
}
