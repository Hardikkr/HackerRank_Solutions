#include <iostream>
#include <sstream>
using namespace std;

class Student{
private:
    int age, standard;
    string first_name, last_name;

public:
    void set_age(int temp){
        age = temp;
    }
    void set_standard(int temp){
        standard = temp;
    }
    void set_first_name(string temp){
        first_name = temp;
    }
    void set_last_name(string temp){
        last_name = temp;
    }

    int get_age(){
        return age;
    }
    int get_standard(){
        return standard;
    }
    string get_first_name(){
        return first_name;
    }
    string get_last_name(){
        return last_name;
    }  

    string to_string(){
        stringstream new_string;
        new_string << age << "," << first_name << "," << last_name << "," << standard;
        return new_string.str();
    } 

};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
