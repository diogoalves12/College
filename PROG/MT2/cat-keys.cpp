#include <list>
#include <map>
#include <string>
#include <climits>

using namespace std;

string cat_keys(list<map<string, unsigned>> lst){
    unsigned min =  UINT_MAX;
    string res = "";

    for(auto itr = lst.begin(); itr != lst.end(); itr++){
        
        unsigned local_min = UINT_MAX;
        string temp = "";
        
        for (auto map_itr = itr->begin(); map_itr != itr->end(); map_itr++)
        {
            temp += map_itr->first;

            if (map_itr->second < local_min)
            {
                local_min = map_itr->second;
            }
        }
        if(local_min < min){
            min = local_min;
            res = temp;
        }
    }
    return res;
}