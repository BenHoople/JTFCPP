#ifndef CS_SCMAPP_H_
#define CS_SCMAPP_H_

#include <iostream>
#include "general.h"
#include "Course.h"

namespace cs
{
	class ScmApp //: public Course
	{
	private:
		Course* courseList_[MAX_NO_RECS];
		int noOfCourses;
	public:
		ScmApp();
		ScmApp(const ScmApp&);                          //copy constructor
		ScmApp& operator=(const ScmApp&);               //assignment operator
		~ScmApp();
		void pause() const;
		int menu();
		void listCourses()const;
		int searchACourse(const char*)const;
		void changeStudyLoad(const char*);
		void addACourse();
		int run();
	};
};
#endif
