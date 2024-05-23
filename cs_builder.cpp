#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

void requirements(){
  cout << "----------------------Welcome to University of Michigan CS(COE) course builder---------------------\n";
  cout << "|                                                                                                 |\n";
  cout << "------------------------------------------COE requirements-----------------------------------------\n\n";

  cout << "1.) Engr 100, and [Engr 101 or Engr 151 or EECS 180 AP credit (AP CSA) or Rob 102]\n";
  cout << "2.)[Chemistry 125, Chemistry 126, and Chemistry 130] or [Chemistry 210 and Chemistry 211]\n";
  cout << "3.) Physics 140, Physics 141, Physics 240, and Physics 241\n";
  cout << "4.) Math\n";
  cout << "   a.) Math 115 or Math 120 or AP Credit (AP Calc AB)\n";
  cout << "   b.) Math 116 or Math 121 or AP Credit (AP Calc BC)\n";
  cout << "   c.) Math 214 (can also be satisfied with Math 217, Math 417, Math 419, or Robotics 101)\n";
  cout << "   d.) Math 215 or Math 216 (If both Math 215 and Math 216 are taken, Math 216 can count as a Flexible Technical Elective.)\n";
  cout << "5.) Intellectual Breadth (16 Credits)\n";
  cout << "6.) General Electives: 15 credits (more or less required to reach 128 credit goal for graduation)\n\n";

  cout << "-------------------------------------CS-ENG Program Requirements-----------------------------------\n";
  cout << "|                                                                                                 |\n";
  cout << "--------------------------------------------Program Core-------------------------------------------\n\n";
  cout << "1.) Computer Science: \n";
  cout << "                                      EECS 203         EECS 280                                    \n";
  cout << "                                          \\             /                                         \n";
  cout << "                                              EECS 281                                             \n";
  cout << "                                          /             \\                                         \n";
  cout << "                                      EECS 370         EECS 376                                    \n";
  cout << "                                          \\             /                                         \n";
  cout << "                                              EECS 496                                             \n\n";
  cout << "2.) Probability and Statistics: \n";
  cout << "    STATS 250 or STATS 206/DATASCI 101 or STATS 280 or STATS 412 or STATS 426 or EECS 301 or       \n";
  cout << "    EECS 401 or IOE 265 or TO 301\n";
  cout << "    NOTE: AP STATS will count for STATS 250, however, should pursue STATS 280 to satisfy this \n";
  cout << "          requirement\n\n";
  cout << "3.) Technical Communications: TCHNCLCM 300 (if taking ROB 204, class will be waived\n\n";

  cout << "-----------------------------------------Technical Electives---------------------------------------\n";
  cout << "            NOTE: A minimum of 26 additional credits of technical electives is required            \n";
  cout << "1.) At least 16 of these credits must be in approved Upper Level CS Technical Electives\n";
  cout << "2.) The remainder of the technical elective credits may be chosen from the approved Flexible\n"; 
  cout << "    Technical Electives lists\n\n";

  cout << "------------------------------------Major Design Experience (MDE)----------------------------------\n";
  cout << "DESCRIPTION: The MDE is a capstone design project that is recommended to be taken during one  \n";
  cout << "of your final two semesters. The technical writing requirement (2., below) must be taken in   \n";
  cout << "the same or later semester as the MDE (preferably the same semester).\n";
  cout << "1.) Approved CS MDE course\n";
  cout << "2.) Technical writing and oral presentation: TCHNCLCM 497\n";
}
string requesting_existing_credits(){
  cout << "Do you have any credits coming into Michigan?\n";
  string response;
  cin >> response;
  return response;
}
size_t num_semesters_desired(){
  cout << "How many semesters do you plan on taking at Michigan?\n";
  size_t num_semesters;
  cin >> num_semesters;
  return num_semesters;
}
int main(){
  //calling the requirements
  requirements();

  bool existing_credits;
  existing_credits = requesting_existing_credits() == "yes";

  if(!existing_credits){
    //build basic schedule
  }
  else{
    size_t num_semestes_planned = num_semesters_desired();
    cout << "EXISTING CREDITS AND " << num_semestes_planned << " SEMESTERS DESIRED\n";
    //perform calculations to find optimal schedule builder
  }

}