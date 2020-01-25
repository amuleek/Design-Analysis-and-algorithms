#include <iostream>
#include <string.h>
#include <string>
using namespace std;
struct devops
{
 int sapid;
  string name;
 int dob;
 int score;
};
int main()
{
 string name;
 struct devops s1,*s2,*s3;
  s2 = (struct devops*) malloc (sizeof(struct devops));
 s3 = (struct devops*) malloc (sizeof(struct devops));
 cout<<"Enter Name of three students ";
 cin>>name;
 s1.name=name;
 cin>>name;
 s2->name=name;
 cin>>name;
 s3->name=name;
 cout<<"Enter dob(ddmmyyyy) of three students ";


