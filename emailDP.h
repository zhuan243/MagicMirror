#ifndef EMAILDP_H
#define EMAILDP_H
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
#include <vector>


class emails{

public:
    std::vector <std::string> emails;
    void findEmails(std::string list_of_emails, std::string file_path_1, std::string file_path_2, std::string file_path_3, std::string file_path_4);
    int getSize();
    int size;
    std::vector<std::string> getEmailInfo (std::vector <std::string> ids, std::string file_path_1, std::string file_path_2, std::string file_path_3, std::string file_path_4);

};

#endif // EMAILDP_H
