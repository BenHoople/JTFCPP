#ifndef CS_COURSE_H_
#define CS_COURSE_H_

#include <iostream>
#include <cstring>
#include "general.h"
#include "Streamable.h"


namespace cs
{
   class Course : public Streamable
   {
   private:
      char courseCode_[MAX_COURSECODE_LEN + 1];
      char* courseTitle_;
      int credits_;
      int studyLoad_;

   public:
      Course();
      Course(const char*, const char*, int, int);
      Course(const Course&);                          //copy constructor
      Course& operator=(const Course&);               //assignment operator
      ~Course();
      //setters
      void courseCode(const char*);
      void courseTitle(const char*);
      void credits(int);
      void studyLoad(int);
      //getters
      const char* getCourseCode() const;
      const char* getCourseTitle_(const char*) const;
      int getCredits_(int) const;
      int getStudyLoad_(int) const;
      bool isEmpty() const;
   };
   //non member operator
   bool operator == (int&, const Course&);
   int operator += (int&, const Course&);
   std::ostream& operator<<(std::ostream&, const Course&);
}

#endif