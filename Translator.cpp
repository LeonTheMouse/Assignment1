#include "Translator.h"
#include "Model.h"
#include <iostream>

using namespace std;

Translator::Translator(){}
Translator::~Translator(){}

Model model;

string Translator::translateEnglishWord(string word){
  string wordToTranslate = word;
  string wordToReturn = "";
  char lastChar = '@';
  char currChar = '@';

  for (char c : wordToTranslate)
  {
    char currChar = c;
    if (currChar != lastChar)
    {
        wordToReturn += model.translateSingleCharacter(currChar);
        lastChar = currChar;
        continue;
    }
    else
    {
        wordToReturn.erase(wordToReturn.size() - 1, wordToReturn.size());
        wordToReturn += model.translateDoubleCharacter(currChar);
    }
  }
  return wordToReturn;
}

string Translator::translateEnglishSentence(string sentence){
  string sentenceToTranslate = sentence;
  string sentenceToReturn = translateEnglishWord(sentence);
  return sentenceToReturn;

}
