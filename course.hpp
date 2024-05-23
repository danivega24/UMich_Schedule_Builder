#include <iostream>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>


using namespace std;

enum class Class_type {

    EECS = 0,
    ENGR = 1,
    PHYS = 2,
    MATH = 3,
    CHEM = 4,
    STATS = 5,
    TCHNCLCM = 6,

};

struct UM_Course{

    Class_type type;
    size_t course_number;
    double difficulty;
    vector<size_t> prereqs;

    UM_Course(Class_type t, size_t cn, double d) : type(t), course_number(cn), difficulty(d){
        //constructor
    }

};  