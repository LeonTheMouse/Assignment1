#include "Model.h"
using namespace std;

Model::Model(){}
Model::~Model(){}

string Model::translateSingleCharacter(char c)
{
  string failureToTranslate = "";
  failureToTranslate += c;
  char charToTranslate = c;
  if (charToTranslate == 'B')
    return "Bub";
  else if (charToTranslate == 'C')
    return "Cash";
  else if (charToTranslate == 'D')
    return "Dud";
  else if (charToTranslate == 'F')
    return "Fuf";
  else if (charToTranslate == 'G')
    return "Gug";
  else if (charToTranslate == 'H')
    return "Hash";
  else if (charToTranslate == 'J')
    return "Jay";
  else if (charToTranslate == 'K')
    return "Kuck";
  else if (charToTranslate == 'L')
    return "Lul";
  else if (charToTranslate == 'M')
    return "Mum";
  else if (charToTranslate == 'N')
    return "Nun";
  else if (charToTranslate == 'P')
    return "Pub";
  else if (charToTranslate == 'Q')
    return "Quack";
  else if (charToTranslate == 'R')
    return "Rug";
  else if (charToTranslate == 'S')
    return "Sus";
  else if (charToTranslate == 'T')
    return "Tut";
  else if (charToTranslate == 'V')
    return "Vuv";
  else if (charToTranslate == 'W')
    return "Wack";
  else if (charToTranslate == 'X')
    return "Ex";
  else if (charToTranslate == 'Y')
    return "Yub";
  else if (charToTranslate == 'Z')
    return "Zub";
  else if (charToTranslate == 'b')
    return "bub";
  else if (charToTranslate == 'c')
    return "cash";
  else if (charToTranslate == 'd')
    return "dud";
  else if (charToTranslate == 'f')
    return "fuf";
  else if (charToTranslate == 'g')
    return "gug";
  else if (charToTranslate == 'h')
    return "hash";
  else if (charToTranslate == 'j')
    return "jay";
  else if (charToTranslate == 'k')
    return "kuck";
  else if (charToTranslate == 'l')
    return "lul";
  else if (charToTranslate == 'm')
    return "mum";
  else if (charToTranslate == 'n')
    return "nun";
  else if (charToTranslate == 'p')
    return "pub";
  else if (charToTranslate == 'q')
    return "quack";
  else if (charToTranslate == 'r')
    return "rug";
  else if (charToTranslate == 's')
    return "sus";
  else if (charToTranslate == 't')
    return "tut";
  else if (charToTranslate == 'v')
    return "vuv";
  else if (charToTranslate == 'w')
    return "wack";
  else if (charToTranslate == 'x')
    return "ex";
  else if (charToTranslate == 'y')
    return "yub";
  else if (charToTranslate == 'z')
    return "zub";
  else return failureToTranslate;

}

string Model::translateDoubleCharacter(char c)
{
  string failureToTranslate = "";
  failureToTranslate = c;
  char charToTranslateDouble = c;

  if (charToTranslateDouble == 'a')
    return "squata";
  else if (charToTranslateDouble == 'e')
    return "squate";
  else if (charToTranslateDouble == 'i')
    return "squati";
  else if (charToTranslateDouble == 'o')
    return "squato";
  else if (charToTranslateDouble == 'u')
    return "squatu";
  else if (charToTranslateDouble == 'A')
    return "squatA";
  else if (charToTranslateDouble == 'E')
    return "squatE";
  else if (charToTranslateDouble == 'I')
    return "squatI";
  else if (charToTranslateDouble == 'O')
    return "squatO";
  else if (charToTranslateDouble == 'U')
    return "squatU";
  else if (charToTranslateDouble == ' ')
    return " ";
  else return "squa" + failureToTranslate;
}
