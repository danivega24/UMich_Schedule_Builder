#include <cmath>
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

class Database{
//stores the "tree" of all courses a computer science major has/can take

public:
Database(){

}
//required course load



//elective course work

private:
std::vector<size_t> eecs_course;

};

enum class Class_type {

    EECS = 0,
    ENGR = 1,
    PHYS = 2,
    MATH = 3,
    CHEM = 4,
    STATS = 5,
    TCHNCLCM = 6,

};