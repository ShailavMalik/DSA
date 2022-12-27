#include <iostream>
using namespace std;

class marks
{
public:
    int sub1;
    int sub2;
    int sub3;
};

class totalMarks : public marks
{
public:
    int findTotal()
    {
        return (sub1 + sub2 + sub3);
    }
};

class percentage : public totalMarks
{
public:
    int max;
    int totalObt;
    // totalObt=findTotal(); this doesn't work because
    // its value is evaluated after the object has created
    int totalMax;
    void displayPercentage()
    {
        cout << "Percentage = " << (totalObt * 100) / totalMax << endl;
    }

    percentage()
    {
        max = 100;
        totalMax = 3 * max;
    }
};

int main()
{
    percentage ob;
    ob.sub1 = 80;
    ob.sub2 = 70;
    ob.sub3 = 60;
    ob.totalObt = ob.findTotal();
    ob.displayPercentage();

    return 0;
}