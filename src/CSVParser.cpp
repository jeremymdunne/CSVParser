#include "CSVParser.hpp"


void readcsv(std::ifstream *stream, std::vector<std::string>* header, std::vector<std::vector<std::string>>* data){
  // check that the ifstream is open
  if(stream->is_open()){
    // read the header
    std::string line = stream->getline()
    // parse the header


  }
}

std::string trim_string(std::string line){
  // remvoe any whitespaces
  // TODO: implement
  return line; 
}
