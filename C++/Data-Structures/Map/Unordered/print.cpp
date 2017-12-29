// map::at
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main ()
{
  std::unordered_map<std::string,int> mymap = {
                { "beta", 0 },
                
                { "alpha", 0 },
                
                { "gamma", 0 } };

  mymap.at("beta") = 20;
  mymap.at("alpha") = 10;
  mymap.at("gamma") = 30;

  mymap.insert( std::pair<string,int>("zeta",40) );

  mymap.erase("gamma");

  //prints in order of insertion
  for (auto& x: mymap) {
    std::cout << x.first << ": " << x.second << '\n';
  }
  
  string check = "gamma";
  if (mymap.count(check)>0)
    std::cout << check << " is an element of mymap." << endl;
  else 
    std::cout << check << " is not an element of mymap." << endl;

  check = "alpha";
  if (mymap.count(check)>0)
    std::cout << check << " is an element of mymap." << endl;
  else 
    std::cout << check << " is not an element of mymap." << endl;

  std::cout << "SIZE: " << mymap.size();

  return 0;
}