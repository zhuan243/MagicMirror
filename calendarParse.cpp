#include "calendarParse.h"

bool calendarParse::isWanted(const string & line) {

// any selection criteria you like
  return (line.find("eventList:begin") != string::npos);
}

bool calendarParse::isWanted2(string findThis, const string line) {
// any selection criteria you like
  return (line.find(findThis) != string::npos);
}

void calendarParse::parse(string filePath) {
  string file_name = filePath;

  //open a file copy.out for input
  ifstream inFile(file_name.c_str());

  if (! inFile) {
    cerr << "unable to open input file: " << file_name << " closing program \n";
    return;
}

  string line = "";
  string temp = "";
  string temp2 = "";
  string delimiter = "";
  size_t pos = 0;
  size_t pos2 = 0;
  delimiter = ",";
  while (getline(inFile, line)) {

    if (isWanted2("eventList:begin",line)) {
      pos = line.find("112819");
      temp = line.substr(pos+7,63);
      //cout << temp << endl;
      pos2 = line.find("112919");
      temp2 = line.substr(pos2+7);
      temp2 = temp2.substr(0, temp2.size()-1);
      //cout << temp2 << endl;
    }
  }

  size_t pos3 = 0;
  string token;
  while ((pos3 != std::string::npos)) {
      pos3 = temp.find(delimiter);
      token = temp.substr(0, pos3);
      //std::cout << token << std::endl;
      first.push_back(token);
      temp.erase(0, pos + delimiter.length());
}


  size_t pos4 = 0;
  string token2;
  while ((pos4 != std::string::npos)) {
      pos4 = temp2.find(delimiter);
      token2 = temp2.substr(0, pos4);
      //std::cout << token << std::endl;
      second.push_back(token2);
      temp2.erase(0, pos4 + delimiter.length());
}

  inFile.close();
}

vector<string> calendarParse::getFirst() {
  return first;
}

vector<string> calendarParse::getSecond() {
  return second;
}
