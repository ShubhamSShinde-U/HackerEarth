#include <iostream>
#include <sstream>

using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
public:
    int age,standard;
    string first_name,last_name;

    void set_age(int a){
        age=a;
    }

    void set_standard(int b){
        standard=b;
    }
    void set_first_name(string fname){
        first_name=fname;
    }
    void set_last_name(string lname){
        last_name=lname;
    }

    int get_age(){
        return age;
    }
    int get_standard(){
        return standard;
    }

    string get_last_name(){
        return last_name;
    }

    string get_first_name(){
        return first_name;
    }

    string to_strin(){
        string all="";
        string str=to_string(age);
        string str2=to_string(standard);
        all=all+str+","+first_name+","+last_name+","+str2;
        return all;
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
    cout << st.to_strin();
    
    return 0;
}