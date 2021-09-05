SRC_DIR	:= src
OBJ_DIR	:= obj
LIB_DIR := lib

EXE 		:= parser
SRC 		:= $(wildcard $(SRC_DIR)/*.cpp)
OBJ 		:= $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

CXX 			:= g++
CXXFLAGS 	:= -Wall

.PHONY: all clean

all: $(EXE)

# CSV Parser Library
CSV_PARSER_DIR 			:= $(LIB_DIR)/CSVParser
CSV_PARSER_SRC 			:= $(CSV_PARSER_DIR)/src/CSVParser.cpp
CSV_PARSER_INC_DIR 	:= $(CSV_PARSER_DIR)/include
CSV_PARSER					:= $(CSV_PARSER_DIR)/CSVParser.o

$(CSV_PARSER): $(CSV_PARSER_SRC)
	$(CXX) $(CXXFLAGS) -I$(CSV_PARSER_INC_DIR) -o $@ -c $<

# program

$(EXE): $(OBJ_DIR)\main.o $(CSV_PARSER)
	$(CXX) $^ -o $@

$(OBJ_DIR)\main.o: $(SRC_DIR)\main.cpp
	$(CXX) $(CXXFLAGS) -I$(CSV_PARSER_INC_DIR) $^ -c -o $@

clean:
	del -f *.o
	del -f $(OBJ_DIR)\*.o
	del -f $(EXE).exe
