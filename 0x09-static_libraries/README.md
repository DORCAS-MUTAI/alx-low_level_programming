Its the be beginning of static libraries.
steps are:
- compiling....gcc -c -Wall -Werror -Wextra *.c
-  create a static library or add object files to an existing static library...ar -rc libname.a *.o
- update/create an index...ar -rcs libname.a *.o

