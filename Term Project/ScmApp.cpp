#include "ScmApp.h"
using namespace std;
namespace cs
{
   ScmApp::ScmApp()
   {
      //courseList_ = nullptr;
      noOfCourses = 0;
   }


   ScmApp::ScmApp(const ScmApp& source)                           //copy constructor
   {

   }

   ScmApp& ScmApp::operator=(const ScmApp& source)        //assignment operator
   {
	   return *this;
   }

   ScmApp::~ScmApp()
   {

   }

   void ScmApp::pause() const
   {
      cout << "Press Enter to continue..." << endl;
   }

   int ScmApp::menu()
   {
      cout << "Seneca Course Management Tool" << endl;
      cout << "1 - List courses." << endl;
      cout << "2 - Display the details of a course." << endl;
      cout << "3 - Add a course." << endl;
      cout << "4 - Change the study load of a course." << endl;
      cout << "0 - Exit program" << endl;
	  cout << ">";
	  return 0;
   }

   void ScmApp::listCourses()const
   {

   }

   int ScmApp::searchACourse(const char* courseCode)const
   {
	   return 0;
   }

   void ScmApp::changeStudyLoad(const char* courseCode)
   {

   }

   void ScmApp::addACourse()
   {

   }
   int ScmApp::run()
   {
	   return 0;
   }

};