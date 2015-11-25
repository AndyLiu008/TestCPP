#include <string>
#include <iostream>
using namespace std;
class Screen{
public:
typedef std::string::size_type index;
    Screen(index h=0,index w=0):cursor(0),height(h),width(w)
	{cout<<"inintlize succeed"<<endl;};
    friend class Sales_item;
inline char get() const ;
char get(index ht,index wd)const;
Screen& set(char ch);
Screen& move(index r, index c);
private:
std::string contents;
index cursor;
index height,width;
};

inline char Screen::get()const{return contents[cursor];}//inline 只放在头文件中



