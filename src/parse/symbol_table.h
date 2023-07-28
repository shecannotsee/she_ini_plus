//
// Created by shecannotsee on 23-7-27.
//

#ifndef SHE_INI_PLUS_SRC_LEXER_SYMBOL_TABLE_H_
#define SHE_INI_PLUS_SRC_LEXER_SYMBOL_TABLE_H_

#include <string>
#include <unordered_map>

namespace she_ini_plus {

enum class SYMBOL_TYPE : int {
  COMMENTS,     ///< Comments,like "//" in c/c++.
  DELIMITER,    ///< Delimiter,like ';' in c/c++.
  IDENTIFIERS,  ///< Identifiers,like 'a' in "int a","void a()" in c/c++.
  EXPRESSION,   ///< Just expression.
  CONSTANTS,    ///< Constants,like '5' in "int a= 5" in c/c++
  OPERATOR,     ///< Operator,like '=','+' int c/c++
};


std::unordered_map<std::string, SYMBOL_TYPE> symbol_table {
    {"//",  SYMBOL_TYPE::COMMENTS},
    {";",   SYMBOL_TYPE::DELIMITER},
    {"\n",  SYMBOL_TYPE::DELIMITER},
    {"=",   SYMBOL_TYPE::OPERATOR},
};

} // she_ini_plus

#endif //SHE_INI_PLUS_SRC_LEXER_SYMBOL_TABLE_H_
