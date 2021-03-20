#include<iostream>
#include<vector>

using namespace std;

class Grade{
    public:
    string subject_name;
    char grade;
};
class Student{
    public:
    int student_id;
    string student_name;
    vector<Grade>grades;
    
};
// Write the Grade and Student classes here

int main(){
    int student_id;
    string student_name;
    cin >> student_id >> student_name;

    int subjectsCount;
    cin >> subjectsCount;

    vector<Grade> grades;
    while(subjectsCount--){
        string subject_name;
        char grade;
        cin >> subject_name >> grade;

        Grade g = {subject_name, grade};
        grades.push_back(g);
    }

    Student s = {student_id, student_name, grades};
    
    cout << s.student_id << " " << s.student_name << endl;
    for(int i=0; i < s.grades.size(); i++) {
        Grade grade=s.grades[i];
        cout << grade.subject_name << " " << grade.grade << endl;
    }
}
