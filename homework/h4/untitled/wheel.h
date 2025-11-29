#ifndef WHEEL_H
#define WHEEL_H
#include <string>
using namespace std;

class Wheel
{
private:
    int size;
    string type;
public:
    Wheel();
    Wheel(int s, string t);
    int getSize() const;
    void setSize(int s);
    string getType() const;
    void setType(const string t);
};

#endif // WHEEL_H
