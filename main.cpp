#include <iostream>
#include <stack>
#include <queue>
#include <fstream>

using namespace std;

class Student
{
    public:
        Student() : name(""), arrtime(0), meetduration(0) {}
        void readqueue();
        void readstack();
    private:
        string name;
        int arrtime;
        int meetduration;
};

void Student::readqueue()
{
    int profavtime = 0;
    
    ifstream in;
    in.open("personin.txt", ios::in);
    
    if (!in) {
    cout << "Error in opening the file" << endl;
    return; 
    }
    
    queue<string> s_name;
    queue<int> arr_time;
    queue<int> meet_duration;
    
    Student p;
    
    //in >> p.name >> p.arrtime >> p.meetduration;
   
    //while(in.eof()) {
    while (in >> p.name >> p.arrtime >> p.meetduration) {
        while ((p.arrtime > profavtime) && (!s_name.empty()))
        {
            if (profavtime == 0) profavtime = arr_time.front();
            cout << s_name.front() << " meets from " << profavtime << " to " << profavtime + meet_duration.front() << endl;; 
            profavtime = profavtime + meet_duration.front();    
            s_name.pop();
            arr_time.pop();
            meet_duration.pop();
            
        }
        cout << p.name << " arrives at " << p.arrtime << " and requests a meeting of length " << p.meetduration << endl;
        s_name.push(p.name);
        arr_time.push(p.arrtime);
        meet_duration.push(p.meetduration);
        //in >> p.name >> p.arrtime >> p.meetduration;
    } 
    while (!s_name.empty())
        {
            if (profavtime == 0) profavtime = arr_time.front();
            cout << s_name.front() << " meets from " << profavtime << " to " << profavtime + meet_duration.front() << endl;; 
            profavtime = profavtime + meet_duration.front();    
            s_name.pop();
            arr_time.pop();
            meet_duration.pop();
        }
}

void Student::readstack()
{
    int profavtime = 0;
    
    ifstream in;
    in.open("personin.txt", ios::in);
    
    if (!in) {
    cout << "Error in opening the file" << endl;
    return; 
    }
    
    stack<string> st_name;
    stack<int> arrv_time;
    stack<int> meeting_duration;
    
    Student p;
    
    //in >> p.name >> p.arrtime >> p.meetduration;
   
    //while(in.eof()) {
    while (in >> p.name >> p.arrtime >> p.meetduration) {
        while ((p.arrtime > profavtime) && (!st_name.empty()))
        {
            if (profavtime == 0) profavtime = arrv_time.top();
            cout << st_name.top() << " meets from " << profavtime << " to " << profavtime + meeting_duration.top() << endl;; 
            profavtime = profavtime + meeting_duration.top();
            st_name.pop();
            arrv_time.pop();
            meeting_duration.pop();
            
        }
        cout << p.name << " arrives at " << p.arrtime << " and requests a meeting of length " << p.meetduration << endl;
        st_name.push(p.name);
        arrv_time.push(p.arrtime);
        meeting_duration.push(p.meetduration);
        //in >> p.name >> p.arrtime >> p.meetduration;
    } 
    while (!st_name.empty())
        {
            if (profavtime == 0) profavtime = arrv_time.top();
            cout << st_name.top() << " meets from " << profavtime << " to " << profavtime + meeting_duration.top() << endl;; 
            profavtime = profavtime + meeting_duration.top();    
            st_name.pop();
            arrv_time.pop();
            meeting_duration.pop();
        }
}

int main()
{
    Student p;
    
    cout << "The unfair way\n";
    p.readstack();
    cout << endl;
    cout << "The fair way\n";
    p.readqueue();
    cout << endl;

    return 0;
}