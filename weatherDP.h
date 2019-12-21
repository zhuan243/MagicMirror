#ifndef WEATHER_H
#define WEATHER_H
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string.h>

class Weather 
{
    public:  
        std::string tempurature; 
        std::string description;
        void findWeatherInfo(std::string fileP);
};

static size_t write_to_file(void *ptr, size_t size, size_t nmemb, void *stream);

#endif
