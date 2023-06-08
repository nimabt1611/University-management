#include <iostream>
#include "Time.h"
#include "date.h"
#include "student.h"
#include "classroom.h"
using namespace std;
bool interference(classroom t1, classroom t2)
{
    if (t1.timeover() > t2.start or t2.timeover() > t1.start)
        return true;
    else
        return false;
}
int main()
{
    
}

