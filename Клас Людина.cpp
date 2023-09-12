#include <iostream>
#include <string>

using namespace std;

class Human
{

public:

    string Get_name() const {
        return name;
    }

    int Get_age() const {
        return age;
    }

    string Get_country() const {
        return country;
    }

    string Get_city() const {
        return city;
    }

    string Get_adress() const {
        return adress;
    }


    void Set_name(const string& new_name) {
        name = new_name;
    }

    void Set_age(int new_age) {
        age = new_age;
    }

    void Set_country(const string& new_country) {
        country = new_country;
    }

    void Set_city(const string& new_city) {
        city = new_city;
    }

    void Set_adress(const string& new_adress) {
        adress = new_adress;
    }


private:
    string name;
    int age;
    string country;
    string city;
    string adress;


public:
    void display_info_about_Human() {          
        cout << "Name: " << name << endl;
        cout << "Age: " << age << " y.o." << endl;
        cout << "Country: " << country << endl;
        cout << "City: " << city << endl;
        cout << "Adress: " << adress << endl;
    };

    Human(const string& name, int age, const string& country, const string& city, const string& adress)
        : name(name), age(age), country(country), city(city), adress(adress) {}

    ~Human() {}
};



class Student: public Human      
{

private:
    string student_id;


public:
    Student(const string& name, int age, const string& country, const string& city, const string& adress,
        const string& student_id)
        :Human(name, age, country, city, adress), student_id(student_id) {}

    ~Student() {}

    string Get_student_id() const {
        return student_id;
    }

    void Set_student_id(const string& new_student_id) {
        student_id = new_student_id;
    }

    void display_info_about_Student() {
        display_info_about_Human();
        cout << "Student's ID: " << student_id << endl;
    }

};



int main()
{

    Human human_0("Ivan", 18, "Ukraine", "Kherson", "Nekrasova-34");
    human_0.display_info_about_Human();

    human_0.Set_name("Muhammad");
    human_0.Set_age(19);
    human_0.Set_country("Syria");
    human_0.Set_city("Damask");
    human_0.Set_adress("Husseinova-14");

    cout << "-----------------------" << endl;

    cout << human_0.Get_name() << endl;
    cout << human_0.Get_age() << endl;
    cout << human_0.Get_country() << endl;
    cout << human_0.Get_city() << endl;
    cout << human_0.Get_adress() << endl;

    cout << "-----------------------" << endl;

    Student student_0("Ivan", 18, "Ukraine", "Kherson", "Nekrasova-34", "771524RT");
    student_0.display_info_about_Student();

    return 0;
}
