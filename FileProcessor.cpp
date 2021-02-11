#include <iostream>
#include "Translator.h"
#include "Model.h"
#include "FileProcessor.h"
#include <fstream>
#include <string>

using namespace std;

FileProcessor::FileProcessor(){}
FileProcessor::~FileProcessor(){}

Translator t;

void FileProcessor::processFile(string inputFile, string outputFile)
{	
	ifstream ifs;
	ifs.open(inputFile);

	string inStr;
	string result;

	while(getline(ifs, inStr, '\n'))
	{
		result += inStr;
	}

	ifs.close();
	string translatedString = t.translateEnglishSentence(result);
	ofstream ofs;

	ofs.open(outputFile);
	ofs << translatedString;
	ofs.close();
}
