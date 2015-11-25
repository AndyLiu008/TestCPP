#include <string>
#include <iostream>
using namespace std;
class Screen{
public:
typedef std::string::size_type index;
    Screen(index h=0,index w=0):cursor(0),height(h),width(w)
	{cout<<"inintlize succeed"<<endl;};

char get() const {return contents[cursor];}

private:
std::string contents;
index cursor;
index height,width;
};
