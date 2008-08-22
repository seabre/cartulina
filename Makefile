#############################################################################
# Makefile for building: Cartulina.app/Contents/MacOS/Cartulina
# Generated by qmake (2.01a) (Qt 4.4.1) on: Fri Aug 22 03:31:52 2008
# Project:  Cartulina.pro
# Template: app
# Command: /usr/local/Trolltech/Qt-4.4.1/bin/qmake -macx -config release -o Makefile Cartulina.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -Os -Wall -W $(DEFINES)
CXXFLAGS      = -pipe -Os -Wall -W $(DEFINES)
INCPATH       = -I/usr/local/Trolltech/Qt-4.4.1/mkspecs/macx-g++ -I. -I/usr/local/Trolltech/Qt-4.4.1/lib/QtCore.framework/Versions/4/Headers -I/usr/local/Trolltech/Qt-4.4.1/include/QtCore -I/usr/local/Trolltech/Qt-4.4.1/include/QtCore -I/usr/local/Trolltech/Qt-4.4.1/lib/QtGui.framework/Versions/4/Headers -I/usr/local/Trolltech/Qt-4.4.1/include/QtGui -I/usr/local/Trolltech/Qt-4.4.1/include/QtGui -I/usr/local/Trolltech/Qt-4.4.1/include -I. -I. -I. -F/usr/local/Trolltech/Qt-4.4.1/lib
LINK          = g++
LFLAGS        = -headerpad_max_install_names
LIBS          = $(SUBLIBS) -F/usr/local/Trolltech/Qt-4.4.1/lib -L/usr/local/Trolltech/Qt-4.4.1/lib -framework QtGui -L/usr/local/Trolltech/Qt-4.4.1/lib -F/usr/local/Trolltech/Qt-4.4.1/lib -framework Carbon -framework AppKit -lpng -framework QtCore -lz -lm -framework ApplicationServices
AR            = ar cq
RANLIB        = ranlib -s
QMAKE         = /usr/local/Trolltech/Qt-4.4.1/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
INSTALL_FILE  = $(COPY_FILE)
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = $(COPY_FILE)
DEL_FILE      = rm -f
SYMLINK       = ln -sf
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
export MACOSX_DEPLOYMENT_TARGET = 10.3

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = cartulinaabout.cpp \
		cartulinamain.cpp \
		deckparser.cpp \
		main.cpp moc_cartulinaabout.cpp \
		moc_cartulinamain.cpp
OBJECTS       = cartulinaabout.o \
		cartulinamain.o \
		deckparser.o \
		main.o \
		moc_cartulinaabout.o \
		moc_cartulinamain.o
DIST          = /usr/local/Trolltech/Qt-4.4.1/mkspecs/common/unix.conf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/common/mac.conf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/common/mac-g++.conf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/qconfig.pri \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/qt_functions.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/qt_config.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/exclusive_builds.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/default_pre.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/mac/default_pre.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/release.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/default_post.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/mac/default_post.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/mac/objective_c.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/warn_on.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/qt.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/unix/thread.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/moc.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/mac/rez.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/mac/sdk.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/resources.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/uic.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/yacc.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/lex.prf \
		Cartulina.pro
QMAKE_TARGET  = Cartulina
DESTDIR       = 
TARGET        = Cartulina.app/Contents/MacOS/Cartulina

####### Custom Compiler Variables
QMAKE_COMP_QMAKE_OBJECTIVE_CFLAGS = -pipe \
		-Os \
		-Wall \
		-W


first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile Cartulina.app/Contents/PkgInfo Cartulina.app/Contents/Info.plist Cartulina.app/Contents/Resources/cartulina.icns $(TARGET)

$(TARGET): ui_ui_about.h ui_ui_cartulinamain.h $(OBJECTS)  
	@$(CHK_DIR_EXISTS) Cartulina.app/Contents/MacOS/ || $(MKDIR) Cartulina.app/Contents/MacOS/ 
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: Cartulina.pro  /usr/local/Trolltech/Qt-4.4.1/mkspecs/macx-g++/qmake.conf /usr/local/Trolltech/Qt-4.4.1/mkspecs/common/unix.conf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/common/mac.conf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/common/mac-g++.conf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/qconfig.pri \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/qt_functions.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/qt_config.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/exclusive_builds.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/default_pre.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/mac/default_pre.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/release.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/default_post.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/mac/default_post.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/mac/objective_c.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/warn_on.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/qt.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/unix/thread.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/moc.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/mac/rez.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/mac/sdk.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/resources.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/uic.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/yacc.prf \
		/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/lex.prf \
		/usr/local/Trolltech/Qt-4.4.1/lib/QtGui.framework/QtGui.prl \
		/usr/local/Trolltech/Qt-4.4.1/lib/QtCore.framework/QtCore.prl
	$(QMAKE) -macx -config release -o Makefile Cartulina.pro
/usr/local/Trolltech/Qt-4.4.1/mkspecs/common/unix.conf:
/usr/local/Trolltech/Qt-4.4.1/mkspecs/common/mac.conf:
/usr/local/Trolltech/Qt-4.4.1/mkspecs/common/mac-g++.conf:
/usr/local/Trolltech/Qt-4.4.1/mkspecs/qconfig.pri:
/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/qt_functions.prf:
/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/qt_config.prf:
/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/exclusive_builds.prf:
/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/default_pre.prf:
/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/mac/default_pre.prf:
/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/release.prf:
/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/default_post.prf:
/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/mac/default_post.prf:
/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/mac/objective_c.prf:
/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/warn_on.prf:
/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/qt.prf:
/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/unix/thread.prf:
/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/moc.prf:
/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/mac/rez.prf:
/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/mac/sdk.prf:
/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/resources.prf:
/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/uic.prf:
/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/yacc.prf:
/usr/local/Trolltech/Qt-4.4.1/mkspecs/features/lex.prf:
/usr/local/Trolltech/Qt-4.4.1/lib/QtGui.framework/QtGui.prl:
/usr/local/Trolltech/Qt-4.4.1/lib/QtCore.framework/QtCore.prl:
qmake:  FORCE
	@$(QMAKE) -macx -config release -o Makefile Cartulina.pro

Cartulina.app/Contents/PkgInfo: 
	@$(CHK_DIR_EXISTS) Cartulina.app/Contents || $(MKDIR) Cartulina.app/Contents 
	@$(DEL_FILE) Cartulina.app/Contents/PkgInfo
	@echo "APPL????" >Cartulina.app/Contents/PkgInfo
Cartulina.app/Contents/Info.plist: 
	@$(CHK_DIR_EXISTS) Cartulina.app/Contents || $(MKDIR) Cartulina.app/Contents 
	@$(DEL_FILE) Cartulina.app/Contents/Info.plist
	@sed -e "s,@ICON@,cartulina.icns,g" -e "s,@EXECUTABLE@,Cartulina,g" -e "s,@TYPEINFO@,????,g" /usr/local/Trolltech/Qt-4.4.1/mkspecs/macx-g++/Info.plist.app >Cartulina.app/Contents/Info.plist
Cartulina.app/Contents/Resources/cartulina.icns: cartulina.icns
	@$(CHK_DIR_EXISTS) Cartulina.app/Contents/Resources/ || $(MKDIR) Cartulina.app/Contents/Resources/ 
	@$(DEL_FILE) Cartulina.app/Contents/Resources/cartulina.icns
	@$(COPY_FILE) cartulina.icns Cartulina.app/Contents/Resources/cartulina.icns
dist: 
	@$(CHK_DIR_EXISTS) .tmp/Cartulina1.0.0 || $(MKDIR) .tmp/Cartulina1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/Cartulina1.0.0/ && $(COPY_FILE) --parents cartulinaabout.h cartulinamain.h deckparser.h ui_about.h .tmp/Cartulina1.0.0/ && $(COPY_FILE) --parents cartulinaabout.cpp cartulinamain.cpp deckparser.cpp main.cpp .tmp/Cartulina1.0.0/ && $(COPY_FILE) --parents ui_about.ui ui_cartulinamain.ui .tmp/Cartulina1.0.0/ && (cd `dirname .tmp/Cartulina1.0.0` && $(TAR) Cartulina1.0.0.tar Cartulina1.0.0 && $(COMPRESS) Cartulina1.0.0.tar) && $(MOVE) `dirname .tmp/Cartulina1.0.0`/Cartulina1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/Cartulina1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) -r Cartulina.app
	-$(DEL_FILE) Makefile


mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_objective_c_make_all:
compiler_objective_c_clean:
compiler_moc_header_make_all: moc_cartulinaabout.cpp moc_cartulinamain.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_cartulinaabout.cpp moc_cartulinamain.cpp
moc_cartulinaabout.cpp: ui_about.h \
		cartulinaabout.h
	/usr/local/Trolltech/Qt-4.4.1/bin/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ cartulinaabout.h -o moc_cartulinaabout.cpp

moc_cartulinamain.cpp: ui_cartulinamain.h \
		deckparser.h \
		cartulinamain.h
	/usr/local/Trolltech/Qt-4.4.1/bin/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ cartulinamain.h -o moc_cartulinamain.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_rez_source_make_all:
compiler_rez_source_clean:
compiler_uic_make_all: ui_ui_about.h ui_ui_cartulinamain.h
compiler_uic_clean:
	-$(DEL_FILE) ui_ui_about.h ui_ui_cartulinamain.h
ui_ui_about.h: ui_about.ui
	/usr/local/Trolltech/Qt-4.4.1/bin/uic ui_about.ui -o ui_ui_about.h

ui_ui_cartulinamain.h: ui_cartulinamain.ui
	/usr/local/Trolltech/Qt-4.4.1/bin/uic ui_cartulinamain.ui -o ui_ui_cartulinamain.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

cartulinaabout.o: cartulinaabout.cpp cartulinaabout.h \
		ui_about.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o cartulinaabout.o cartulinaabout.cpp

cartulinamain.o: cartulinamain.cpp cartulinamain.h \
		ui_cartulinamain.h \
		deckparser.h \
		cartulinaabout.h \
		ui_about.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o cartulinamain.o cartulinamain.cpp

deckparser.o: deckparser.cpp deckparser.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o deckparser.o deckparser.cpp

main.o: main.cpp cartulinamain.h \
		ui_cartulinamain.h \
		deckparser.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

moc_cartulinaabout.o: moc_cartulinaabout.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_cartulinaabout.o moc_cartulinaabout.cpp

moc_cartulinamain.o: moc_cartulinamain.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_cartulinamain.o moc_cartulinamain.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

