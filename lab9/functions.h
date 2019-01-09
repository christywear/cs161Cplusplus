#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

/***********************************************************************/
//  This is where all the prototype of the functions lives here        //
//                                                                     //
//  format :                                                           //
//  example:  type func_name(input_type inputname);                    //                               */
/***********************************************************************/
void introstuff();
std::string getinput();
void processinputfile(std::string wheretoreadfrom);
void clearallthethings(char& code, char& value, std::string& tempfix, std::string& grrr, int& rows, int& columns);
std::string drawRect(char out_char, int rows, int columns);
std::string draw_triangle(char out_char, int rows, int columns);
std::string draw_square(char out_char, int rows, int columns);
std::string draw_diamond(char out_char, int rows, int columns);
void printout();
bool playagain();

#endif // FUNCTIONS_H_INCLUDED
