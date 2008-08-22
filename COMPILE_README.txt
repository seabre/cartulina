First, before you try to compile you need to make sure you have the Qt library installed. You can get it for your platform here:
http://trolltech.com/downloads/opensource

To compile, it's easy. First run 'qmake' to generate a makefile for your particular system. Then, run 'make' or 'nmake'. A binary for your system will be generated. As far as installation goes, there is no install option in the Makefile, so that part is up to you, but you should be able to run the binary as is.

-- Sean
