#include <iostream>
#include <fstream>
#include "Time.h"
#include "date.h"
#include "student.h"
#include "classroom.h"
using namespace std;

ifstream Ifile("universityinput.txt", ios::in);

bool interference(classroom t1, classroom t2)
{
    if (t1.timeover() > t2.start or t2.timeover() > t1.start)
        return true;
    else
        return false;
}
int main()
{
    classroom arr[5400];
    int classcount;
    Ifile >> classcount;
    for (int i = 0; i < classcount; i++)
    {
        string id, l, tn, temp;
        int nos;
        bool vp, f;
        cout << "(id,lesson,teacher's name,video perojector): ";
        Ifile >> id >> l >> tn >> temp;
        if (temp == "true")
            vp = true;
        else
            vp = false;
        cout << "video perojector: ";
        Ifile >> temp;
        if (temp == "true")
            f = true;
        else
            f = false;
        classroom cr(id, l, tn, vp, f);
        if (f == true)
        {
            Ifile >> nos;
            cr.set_num_s(nos);
        }
        int h, m;
        cout << "Hour , Minute: ";
        Ifile >> h >> m;
        Time s(h, m);
        cr.set_ST(s);
        cout << "Hour , Minute: ";
        Ifile >> h >> m;
        Time du(h, m);
        cr.set_DT(du);
        int y, mo, da;
        string wd;
        cout << "(Year , Month , Day , WeekDay): ";
        Ifile >> y >> mo >> da >> wd;
        date dat(y, mo, da, wd);
        cr.set_d(dat);
        int j = 0;
        string n;
        int sn;
        cout << "Student number , student's name: ";
        Ifile >> sn >> n;
        while (sn > 1000 and sn < 9999)
        {
            student stud(n, sn);
            cr.set_stu(stud, j);
            j++;
            Ifile >> sn >> n;
        }
    }
    return 0;
}