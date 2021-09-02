#ifndef _CSV_PARSER_HPP_
#define _CSV_PARSER_HPP_

// includes
#include <iostream>
#include <vector>

void read_csv(std::ifstream *stream, std::vector<std::string>* header, std::vector<std::vector<std::string>>* data);

void trim_csv_whitespace(std::vector<std::string>* data);

void trim_csv_whitespace(std::vector<std::vector<string>>*data);

void write_csv(std::ostream *stream, std::vector<std::string>* header, std::vector<std::vector<std::string>>* data);

void split_line(std::string* line, std::vector<std::string>* header);

std::string trim_string(std::string line);


#endif
