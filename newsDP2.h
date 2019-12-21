#ifndef NEWSDP2_H
#define NEWSDP2_H
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <istream>
#include <string>
#include <vector>

class articles{

public:
      std::string author[5];
      std::string title[5];
      void findArticle(std::string fileName);

};

#endif // NEWSDP2_H
