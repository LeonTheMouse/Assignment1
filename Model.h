#include <iostream>
#include <string>
using namespace std;

class Model{
public:
  Model(); //default constructor
  ~Model();

  string translateSingleCharacter(char c);
  string translateDoubleCharacter(char c);

};
