#ifndef CLASS_H
#define CLASS_H

#include <string>
#include <map>
#include <vector>

struct Time
{
    int hour;
    int mins;
    int seconds;

    int toSeconds() const
    {
        return 60 * 60 * hour + 60 * mins + seconds;
    }

    bool operator<(const Time& t2) const
    {
        return(toSeconds() < t2.toSeconds());
    }
};

struct Earthquake
{
    double lat;
    double lon;
    double depth;
    double magnitude;
    std::string location;

    std::multimap<Time, Earthquake> fillMap(std::multimap<Time, Earthquake>& m);
};


#endif // CLASS_H
