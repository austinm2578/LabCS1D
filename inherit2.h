/**********************************************************************
*********** inherit2.h header file for the PersonType class ***********/

#ifndef H_PersonType
#define H_PersonType

#include <string>
using namespace std;
 
/**
 *  Class for a type of person.
 */
 
class personType
{
  public:
   /** 
    *  Method to output the first and last name.
    *  In the form firstName lastName.
    */
   void print() const;
   
   /** 
    *  Method to set the person's name.
    *  Post: firstName = first, lastName = last.
    *  @param first The person's first name.
    *  @param last The person's last name.
    */
   void setName(string first, string last);
 
   /**
    *  Method to get the person's name.
    *  @param first The person's first name.
    *  @param last The person's last name.
    *  @return first = firstName, last = lastName
    */
   void getName(string& first, string& last);
 
 
   /**
    * Overloaded Contructor.
    * sets the person's first and last name.
    * POST: firstName = first, lastName = last.
    * @param first The persons first name.
    * @param last The persons last name.
    */ 
   personType(string first, string last);

   /**
    *  Default Constructor.
    *  firstName and lastName are set to an empty string.
    *  POST: firstname = "", lastName = "".
    */
   personType();
 
  private:
   string firstName; /**< stores the first name */
   string lastName;  /**< stores the last name  */
};


#endif
