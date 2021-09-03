#include "CSVParser.hpp"


void readcsv(std::ifstream *stream, std::vector<std::string>* header, std::vector<std::vector<std::string>>* data){
  // check that the ifstream is open
  if(stream->is_open()){
    // read the header
    // std::string line = stream->getline()
    // parse the header


  }
}

void split_line(std::string* line, std::vector<std::string>* elements){
  // split a line using the comma deliminator
  // TODO not the best method, inefficient at the end of the sequence

  unsigned int loc = 0;
  unsigned int index = 0;
  char c;
  bool next_index = true;
  elements->push_back(std::string());
  for(;loc < line->length(); loc ++){
    c = line->at(loc);
    if(c != ','){
      // add to the current index
      *(elements[index]) += c;
    }
    else{
      // push back a new element
      elements->push_back(std::string());
      index ++;
    }
  }
}

std::string trim_string(std::string line){
  // remvoe any whitespaces
  // TODO: implement
  return line;
}
