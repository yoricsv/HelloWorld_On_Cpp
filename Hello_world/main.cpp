/*
  *****************************************************************************************
  *                                     It's C++ Code                                     *
  *****************************************************************************************
  *****************************************************************************************
  *                             The PREPROCESSOR DIRECTIVEs                               *
  *****************************************************************************************
  *       #include (the preprocessor directive) - addict a code from another file;        *
  *****************************************************************************************
  *  <IOSTREAM> - standard library of Input/Output and formatting functions on C++        *
  *  <LOCALE>   - standard library contain of international special symbols and etc.      *
  *  <LINITS>   - contain MAX / MIN values of data types using in C++                     *
  *****************************************************************************************
 */
// INCLUDE CODE BEGIN //
#include <iostream>	
// INCLUDE CODE END //

/*
  *****************************************************************************************
  * USING NAMESPACE - there's we define classes, objects, methods and variables scope for *
  *                   our project.                                                        *
  * STD - is a namespace from IOSTREAM standard library. If we don't use it we must use   *
  *       before each function COUT, ENDL or other write what is it!                      *
  * EXM:  std::cout << "Hello, World!" << std::endl;                                      *
  *****************************************************************************************
*/
// NAMESPACE DEFINES BEGIN //
using namespace std;
// NAMESPACE DEFINES END //
/*
  *****************************************************************************************
  *                                  The MAIN function                                    *
  *****************************************************************************************
  * VOID - data type that function should be return after operating (nothing return)      *
  * MAIN - the major function in program (Start point of program)                         *
  * ( ... ) - there is write everything we wanna take to the function                     *
  * { ... } - the body of function. There is contained all instructions                   * 
  *---------------------------------------------------------------------------------------*
  * void         - show that the function don't get any parameters                        *
  * int ARGC     - number of strings in array argv                                        *
  * char *argv[] - array of command-line argument strings                                 *
  * char *envp[] - array of environment variable strings                                  *
  * EXM: int main( int argc, char *argv[], char *envp[] )                                 *
  *****************************************************************************************
*/
// MAIN FUNCTION BEGIN //
void main(void)
//
{
	// CODE/INSTRUCTIONS BEGIN //

	// CHECK PROGRAM OPERATIONS BEGIN //
/*
  *****************************************************************************************
  * COUT - the function display our information on console                                *
  * <<   - put into output stream (all data from right will be output)                    *
  * >>   - get from input stream (the input stream reads a sequence of characters up to a *
  *        space, then this sequence is converted to the type of identifier, and the      *
  *        result value is placed in the identifier (located from right))                 *
  * ENDL - (End Line) function the same as scape consequence [\n]                         *
  *****************************************************************************************
*/
	cout << "Hello, World!" << endl; 
/*
  *****************************************************************************************
  *            CHANGE LOCALIZATION for correctly displays of local SYMBOLS                *
  *****************************************************************************************
  *  SETLOCALE - function allow to use difference local symbols                           *
  *  LC_ALL (Locate Categories) - point out to switch all localization functions on       *
  *  Ru-RU - switch on all localization function on for Russian (Ru-RU by list of LCID)   *
  *****************************************************************************************
*/
	// SET RIGHT LOCALIZATION BEGIN //s
	setlocale(LC_ALL, "Ru-RU");
	// SET RIGHT LOCALIZATION END //

	// CHECK APPLIED RIGHT CYRILLIC ALPHABET BEGIN //
	cout << "Привет, Мир!" << endl;
	// CHECK APPLIED RIGHT CYRILLIC ALPHABET END //

	// CHECK PROGRAM OPERATIONS END //

	// CODE/INSTRUCTIONS END //
}
// MAIN FUNCTION END //