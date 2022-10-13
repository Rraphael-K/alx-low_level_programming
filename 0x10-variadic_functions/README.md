** Variadic Functions **
	* Why use Variadic Functions **
		1. Allows a functions to take an unlimited number of arguments
			- int func(int a, ...)
		2. The ellipses detail that the number of argumetns are unlimited.
		3. The length of the array must correspond with the number of argumetns.
			
	* Reciev the Arguments Values
		1. Initiliaze argument pointer variable of
			va_list using *va_start*
		2. Access the arguments by successive calls to:
			*va_arg*
		3. Stop the iteration of va_arg use
			*va_end*
	* va_list holds the
		variadic function list of arguments
	* va_start marks the starting point of the variadic function list of argumetns/variables
	* va_arg holds the arguments generated for the va_list and holds the arguments in an array
	* va_end marks the end of the va_list compilation. use at the end of the program, 
	  once the variadic function list is completed. Used within the function.
