#include "class.h"

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <algorithm>


typedef std::multimap<Time,Earthquake> mMapTE;

std::istream& operator>>(std::istream& inp, Time& t)
{
    std::string str,tmp;
    std::stringstream ss(str);

    std::getline(inp, tmp, ':');
    t.hour = std::stoi(tmp);

    std::getline(inp,tmp,':');
    t.mins = std::stoi(tmp);

    std::getline(inp,tmp);
    t.seconds = std::stoi(tmp);

    return inp;
}

std::ostream& operator<<(std::ostream& outp, const Time& t)
{
    outp << t.hour << ":" << t.mins << ":" << t.seconds;
    return outp;
}

std::ostream& operator<<(std::ostream& outp, const Earthquake& E)
{
    outp << "lat=" << E.lat << " lon=" << E.lon
         << " depth=" << E.depth << " magnitude="
         << E.magnitude << " location=" << E.location;
    return outp;
}


void queryEarthquakes(mMapTE& m, const Time& tstart, const Time& tend, std::string x)
{
    std::vector<mMapTE::iterator> deleteEl;
    bool fl = false;

    mMapTE::iterator lb = m.lower_bound(tstart);
    mMapTE::iterator ub = m.upper_bound(tend);

    for (mMapTE::iterator it = lb; it != ub; ++it)
    {
        if (it->second.location.find(x) >= 0 && it->second.location.length() >= it->second.location.find(x))
        {
            fl = true;
            std::cout << it->second << '\n';
        }
    }

    for (mMapTE::iterator it : deleteEl)
    {
        m.erase(it);
    }

    if(!fl)
        std::cout << "No matches";
}

void test1()
{
    Time t1,t2;

    std::cin >> t1;

    t2.hour = 23;
    t2.mins = 53;
    t2.seconds = 59;

    std :: cout << t2 << "\n";
    if(t1 < t2)
        std::cout << "check test1" << "\n\n";

}

void test2()
{

    Earthquake es;
    mMapTE m;
    es.fillMap(m);
    Time tstart, tend;
    std::string x;
    std::cin >> tstart >> tend >> x;
    queryEarthquakes(m, tstart, tend , x);

}


int main()
{
    test1();
    test2();

    return 0;
}


