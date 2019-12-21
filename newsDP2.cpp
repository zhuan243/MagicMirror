#include "newsDP2.h"

void articles::findArticle (std::string fileName) {

    int count = 0;
    std::fstream inFile;
    inFile.open (fileName, std::ios::in);

    std::string info;
    std::getline(inFile, info);

    while (count < 5) {
        std::size_t start_pos = 0;
        start_pos = info.find("author");
        if (start_pos != std::string::npos) {
            start_pos = start_pos + 9;
            std::string parsed_info = info.substr (start_pos);
            std::size_t end_pos = parsed_info.find ("\"");
            std::string author = parsed_info.substr (0, end_pos);

           if (author.compare("ull,") == 0) {
                author = "None";
            }

            this -> author[count] = author;

        } else {
            printf("Error has occured, update of mirror necessary");
            exit(1);
        }

        start_pos = info.find("title");
        if (start_pos != std::string::npos) {
            start_pos = start_pos + 8;
            std::string parsed_info = info.substr (start_pos);
            std::size_t end_pos = parsed_info.find ("\"");
            std::string title = parsed_info.substr (0, end_pos);

            this -> title[count] = title;
        } else {
            printf("Error has occured, update of mirror necessary");
            exit(1);
        }
        info = info.substr (start_pos);
        count++; 
    }

    inFile.close();
}


