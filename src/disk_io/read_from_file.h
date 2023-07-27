//
// Created by shecannotsee on 23-7-27.
//

#ifndef SHE_INI_PLUS_SRC_DISK_IO_READ_FROM_FILE_H_
#define SHE_INI_PLUS_SRC_DISK_IO_READ_FROM_FILE_H_

#include <string>
#include <memory>

namespace she_ini_plus {

class read_from_file {
 public:
  read_from_file();
  ~read_from_file();
 private:
  FILE* file_handle_;
 public:
  std::tuple<bool,char> get();

};

} // she_ini_plus

#endif //SHE_INI_PLUS_SRC_DISK_IO_READ_FROM_FILE_H_
