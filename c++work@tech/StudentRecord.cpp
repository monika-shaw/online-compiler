//
// Created by shawm on 10-10-2022.
//
#include <conio.h>
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

class student
{
private:
    string rgln, s_name,m_name,f_name,c_name,cr_name,roll_no,dd,mm,yy,grade,result;
    float per;
    int oop,dsu,dte,dms,cgr,sum;
public:
    void menu();
    void insert();
    void display();
    void deleted();
};

void student::menu() {
    start:
    int choice;
    char x;

    cout<<"\n..........................\n"<<endl;
    cout<<"1 Enter new Record"<<endl;
    cout<<"2 Display record"<<endl;
    cout<<"3 Delete Record"<<endl;
    cout<<"4 Exit"<<endl;
    cout<<"Please enter your choice"<<endl;
    cin>>choice;

    switch(choice)
    {
        case 1:
            do {
                insert();
                cout<<"Add new record (y/n)"<<endl;
                cin>>x;
            }
            while(x=='y'|| x=='Y');
            break;

        case 2:
            display();
            break;

        case 3:
            deleted();
            break;

        case 4:
            exit(0);

        default:
            cout<<"Invalid choice"<<endl;
    }
    goto start;
}

void student::insert() {

    fstream file;
    cout<<"Add details of student"<<endl;
    cout<<"Enter your name"<<endl;
    cin>>s_name;
    cout<<"Enter your mother name"<<endl;
    cin>>m_name;
    cout<<"Enter your father name"<<endl;
    cin>>f_name;
    cout<<"Enter college name"<<endl;
    cin>>c_name;
    cout<<"Enter course name"<<endl;
    cin>>cr_name;
    cout<<"Enter your roll no"<<endl;
    cin>>roll_no;
    cout<<"Enter Regulation"<<endl;
    cin>>rgln;
    cout<<"Birth date"<<endl;
    cin>>dd>>mm>>yy;

    cout<<"Enter your marks subject wise"<<endl;
    cout<<"OOP"<<endl;
    cin>>oop;
    cout<<"DSU"<<endl;
    cin>>dsu;
    cout<<"DTE"<<endl;
    cin>>dte;
    cout<<"DMS"<<endl;
    cin>>dms;
    cout<<"CGR"<<endl;
    cin>>cgr;

    sum = oop+dsu+dte+dms+cgr;

    per = sum/5;
    if(per >= 80)
    {
        grade = "A";
        result = "Pass";
    }
    else if (per >= 60)
    {
        grade = "B";
        result="Pass";
    }
    else if (per >=35)
    {
        grade="C";
        result = "Pass";
    }
    else
    {
        grade = "-";
        result = "Fail";
    }

    file.open("studentData.txt",ios::out | ios::app);
    file<<" "<<s_name<<f_name<<m_name<<c_name<<cr_name<<roll_no<<rgln<<dd<<mm<<yy<<oop<<dsu<<dte<<dms<<cgr<<sum<<per<<grade<<result;
    file.close();


}

void student::display() {

    fstream file;
    cout<<"......................................"<<endl;
    cout<<"Student details"<<endl;
    file.open("studentData.txt",ios::in);
    if(!file)
    {
        cout<<"No data found"<<endl;
        file.close();
    }
    else
    {
        file>>s_name>>m_name>>c_name>>f_name>>cr_name>>roll_no>>rgln>>dd>>mm>>yy>>oop>>dsu>>dte>>dms>>cgr>>sum>>per>>grade>>result;
        while(!file.eof())
        {
            cout<<"Class:"<<cr_name<<endl;
            cout<<"College"<<c_name<<endl;

            cout<<"student name"<<s_name<<endl;
            cout<<"roll"<<roll_no<<endl;
            cout<<"mother"<<m_name<<endl;
            cout<<"Father"<<f_name<<endl;
            cout<<"dob"<<dd<<mm<<yy<<endl;
            cout<<"regulation"<<rgln<<endl;

            cout<<"..............................."<<endl;
            cout<<"oop"<<oop<<endl;
            cout<<"DSU"<<dsu<<endl;
            cout<<"dte"<<dte<<endl;
            cout<<"dms"<<dms<<endl;
            cout<<"cgr"<<cgr<<endl;
            cout<<"percentage"<<per<<endl;
            cout<<"Grade"<<grade<<endl;
            cout<<"sum"<<sum<<endl;
            cout<<"result"<<result<<endl;

            file>>s_name>>f_name>>m_name>>c_name>>cr_name>>roll_no>>rgln>>dd>>mm>>yy>>oop>>dsu>>dte>>dms>>cgr>>sum>>per>>grade>>result;


        }
    }
    file.close();
}

void student::deleted() {

    fstream file,file1;
    string rollno;
    int found = 0;
    cout<<"Delete student record"<<endl;

    file.open("studentData.txt",ios::in);
    if(!file)
    {
        cout<<"No data found"<<endl;
        file.close();
    }
    else
    {
        cout<<"Enter roll which you want to delete"<<endl;
        cin>>rollno;
        file1.open("temp.txt",ios::out | ios::app);

        file>>s_name>>m_name>>c_name>>f_name>>cr_name>>roll_no>>rgln>>dd>>mm>>yy>>oop>>dsu>>dte>>dms>>cgr>>sum>>per>>grade>>result;
        while(!file.eof())
        {
            if(rollno != roll_no)
            {
                file1<<" "<<s_name<<f_name<<m_name<<c_name<<cr_name<<roll_no<<rgln<<dd<<mm<<yy<<oop<<dsu<<dte<<dms<<cgr<<sum<<per<<grade<<result;

            }
            else
            {
                found++;
                cout<<"record deleted successfully"<<endl;
            }
            file>>s_name>>m_name>>c_name>>f_name>>cr_name>>roll_no>>rgln>>dd>>mm>>yy>>oop>>dsu>>dte>>dms>>cgr>>sum>>per>>grade>>result;

        }
        if(found == 0)
        {
            cout<<"roll no not found"<<endl;
        }
        file.close();
        file1.close();

        remove("studentData.txt");
        rename("temp.txt","studentData.txt");
    }
}
int main()
{
    student s;
    s.menu();

    return 0;
}
