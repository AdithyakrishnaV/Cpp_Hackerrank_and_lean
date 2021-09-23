#include <bits/stdc++.h>
using namespace std;

class Student {
  private: 
        int m_age;
        int m_standard;
        string m_first_name;
        string m_last_name;

  public:

    void set_age( int  age){
        m_age = age;
    }

    void set_standard(int standard){
        m_standard = standard;
    }

    void set_first_name(string firstName){
        m_first_name = firstName;
    }

    void set_last_name(string lastName){
        m_last_name = lastName;
    }

    int get_age(){
        return m_age;
    }

    int get_standard(){
        return m_standard;
    }

    string get_first_name(){
        return m_first_name;
    }

    string get_last_name(){
        return m_last_name;
    }

};
 


int main(){
    Student st;
    int m_age, m_standard;
    string m_first_name, m_last_name;
    char c=',';
    cin>>m_age>>m_first_name>>m_last_name>>m_standard;
    
    st.set_age(m_age);
    st.set_first_name(m_first_name);
    st.set_last_name(m_last_name);
    st.set_standard(m_standard);

    cout<<st.get_age()<<"\n";
    cout<<st.get_last_name()<<c<<" "<<st.get_first_name()<<"\n";
    cout<<st.get_standard()<<"\n";
    cout<<"\n";
    cout<<st.get_age()<<c<<st.get_first_name()<<c<<st.get_last_name()<<c<<st.get_standard();
    
    return 0;
}