#include "weatherDP.h"
#include "recommendedOutfit.h"


void Weather::findWeatherInfo(std::string fileP)
{
    std::fstream inFile;
    inFile.open(fileP, std::ios::in);
    std::string info;
    std::string tempurature = "tests";
    std::string description = "";

    this->description = description;
    this->tempurature = tempurature;
    if (!std::getline(inFile, info))
    {
        // return current_weather;
    }
    std::size_t description_pos = info.find("main");
    if (description_pos != std::string::npos)
    {
        description_pos = description_pos + 7;
        info = info.substr(description_pos);
        std::size_t end_of_description = info.find('"');
        if (end_of_description != std::string::npos)
        {
            std::string unedited_description = info.substr(0, end_of_description);
            if (unedited_description.find("Thunderstorm") || unedited_description.find("Drizzle") || unedited_description.find("Rain"))
            {
                description = "rain";
            }
            else if (unedited_description.find("Snow"))
            {
                description = "snow";
            }
            else
            {
                description = "sun";
            }
        }
    }
    std::size_t tempurature_pos = info.find("temp");
    if (tempurature_pos != std::string::npos)
    {

        tempurature_pos = tempurature_pos + 6;
        info = info.substr(tempurature_pos);
        std::size_t end_of_temp = info.find(",");
        if (end_of_temp != std::string::npos)
        {

            tempurature = info.substr(0, end_of_temp);
        }
    }
    this->description = description;
    this->tempurature = tempurature;
    inFile.close();
};

