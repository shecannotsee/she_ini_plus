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
  SYMBOL_TYPE symbol_type_{SYMBOL_TYPE::UNKNOWN};   ///< temp to save matching status
  std::string value_buffer_;                        ///< temp to save token str
  std::string waiting_buffer_;                      ///< temp to save part of char stream

 public:
  using token = std::tuple<SYMBOL_TYPE,std::string>;
  /**
   * @brief Convert char stream to token output
   * @param character_stream char stream
   * @return token,including the type and string of the token
   */
  token token_generation(std::vector<char> character_stream);

  /**
   * @brief Get token type.
   * @param return_token token_generation() return
   * @return token type
   */
  static SYMBOL_TYPE get_token_type(token return_token) {
    std::get<0>(return_token);
  }

  /**
   * @brief Get token string
   * @param return_token token_generation() return
   * @return token string,type is std::string
   */
  static std::string get_token_str(token return_token) {
    std::get<1>(return_token);
  }

};

} // she_ini_plus

#endif //SHE_INI_PLUS_SRC_LEXER_MATCHING_H_
