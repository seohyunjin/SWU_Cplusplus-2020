#include <iostream>
#include <string>
using namespace std;

# include "Person.h"
# include "Family.h"


int main() {
    Family* simpson = new Family("Simpson", 3); // 3명으로 구성된 Simpson 가족 
    simpson->setName(0, "Mr. Simpson");
    simpson->setName(1, "Mrs. Simpson");
    simpson->setName(2, "Bart Simpson");
    simpson->show();
    delete simpson;
}
