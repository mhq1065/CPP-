#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class people {
protected:
    string name;
    int age;

public:
    people(string s, int a) : name(s), age(a){};
};

class student : public people {
protected:
    int sno;
    int cls;

public:
    student(string s, int a, int sno, int cls) : people(s, a), sno(sno), cls(cls){};
    void display() {
        cout << "姓名:" << this->name << endl;
        cout << "年龄:" << this->age << endl;
        cout << "学号:" << this->sno << endl;
        cout << "班级:" << this->cls << endl;
    }
};

class teacher : public people {
private:
    string college, specialty;

public:
    teacher(string s, int a, string college, string specialty)
        : people(s, a), college(college), specialty(specialty){};
    void display() {
        cout << "姓名:" << this->name << endl;
        cout << "年龄:" << this->age << endl;
        cout << "所属学院:" << this->college << endl;
        cout << "专业:" << this->specialty << endl;
    }
};

class staffer : public people {
private:
    string department, role;

public:
    staffer(string s, int a, string department, string role)
        : people(s, a), department(department), role(role){};
    void display() {
        cout << "姓名:" << this->name << endl;
        cout << "年龄:" << this->age << endl;
        cout << "工作部门:" << this->department << endl;
        cout << "职称:" << this->role << endl;
    }
};

int main() {
    // printf("姓名:ZhangSan\n年龄:19\n学号:123456\n班级:123\n\n姓名:LiSi\n年龄:40\n所属学院:CEIE\n专业:CS\n\n姓名:WangWu\n年龄:40\n工作部门:logistics\n职称:staff");
    student a("ZhangSan", 19, 123456, 123);
    teacher b("LiSi", 40, "CEIE", "CS");
    staffer c("WangWu", 40, "logistics", "staff");
    a.display();
    cout << endl;
    b.display();
    cout << endl;
    c.display();

    return 0;
}