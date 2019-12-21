#ifndef CALENDARPARSE_H
#define CALENDARPARSE_H

#include <fstream>
#include <iostream>
#include <string.h>
#include <vector>
#include <string>
using namespace std;

class calendarParse {

  public:
      vector<string> first, second;
      void parse(string filePath);
      bool isWanted(const std::string & line);
      bool isWanted2(string findThis, const string line);
      vector<string> getFirst();
      vector<string> getSecond();

};
#endif
