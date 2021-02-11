#include <iostream>
#include "Translator.h"
#include "Model.h"
#include "FileProcessor.h"
using namespace std;
int main(int argc, char** argv){
	Translator translator;
	FileProcessor f;

	f.processFile(argv[1], argv[2]);
  return 0;
}
