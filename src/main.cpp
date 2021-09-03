#include <iostream>
#include <vector>
#include <string>

#include "CSVParser.hpp"

int main(int argc, char* argv[]){
  std::ifstream file("./test.csv");
  std::vector<std::string> header;
  std::vector<std::vector<std::string>> data;
  readCSV(&file, &header, &data);

  for(unsigned int i = 0; i < data.size(); i ++){
    for(unsigned int p = 0; p < data[i].size(); p ++){
      std::cout << data[i][p] << "\t";
    }
    std::cout << std::endl;
  }

  file.close();
  std::ofstream file_out("./out.csv");
  writeCSV(&file_out, &header, &data);
  file_out.close(); 

  return 0;
}
