#include "recommendedOutfit.h"
#include <QDir>


std::string recommendedOutfit::getOutfitPath(std::string inWeather, int inTemp, std::string inEvent){
	
	std::string tempInter = "";
    std::string systemPath = QDir::currentPath().toStdString();

	int temp = inTemp;
	if(temp < 0){
		tempInter = "under0";
	}else if(inTemp <10){
		tempInter = "under10";
	}else{
		tempInter = "over10";
    }
	
    std:: string path = systemPath + "/Res/outfitRecommendation";
	path = path + "/" + inWeather + "/" + tempInter + "/" + inEvent +".jpg";
	
	
	return path;
}



