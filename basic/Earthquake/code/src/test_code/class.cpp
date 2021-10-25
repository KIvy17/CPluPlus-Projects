#include "class.h"

#include <string>
#include <sstream>
#include <map>
#include <fstream>
#include <iostream>

typedef std::multimap<Time,Earthquake> mMapTE;

mMapTE Earthquake::fillMap(mMapTE& m)
{
    std::ifstream inputFile;
    inputFile.open("C:\\Users\\ivan2\\Desktop\\Proga\\test_code\\docs\\earthquakes.csv");
    if (!inputFile.is_open())
    {
        std::cerr << "The earthquake file can't be open";
        return m;
    }
    std::string line;
    bool skipLine = true;
//    while(std::getline(inputFile, line).good())           // для пустой строчки
    while(std::getline(inputFile, line))
    {
        if (skipLine)
        {
            skipLine = false;
            continue;
        }
        Time anotherTime;
        Earthquake anotherEarthquake;
        std::string time,tmp,lat,lon,dep,mag,loc;

        std::stringstream ss(line);
        std::getline(ss, time, ',');

        std::stringstream ss2(time);
        std::getline(ss2,tmp,':');
        anotherTime.hour = std::stod(tmp);
        std::getline(ss2,tmp,':');
        anotherTime.mins = std::stod(tmp);
        std::getline(ss2,tmp);
        anotherTime.seconds = std::stod(tmp);

        std::getline(ss, lat, ',');
        anotherEarthquake.lat = std::stod(lat);
        std::getline(ss, lon, ',');
        anotherEarthquake.lon = std::stod(lon);
        std::getline(ss, dep, ',');
        anotherEarthquake.depth = std::stod(dep);
        std::getline(ss, mag, ',');
        anotherEarthquake.magnitude = std::stod(mag);
        std::getline(ss, loc);
        anotherEarthquake.location = loc;

        m.insert({anotherTime,anotherEarthquake});
    }
    return m;
}


