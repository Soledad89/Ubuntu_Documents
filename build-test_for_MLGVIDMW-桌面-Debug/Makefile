#############################################################################
# Makefile for building: test_for_MLGVIDMW
# Generated by qmake (2.01a) (Qt 4.8.4) on: ?? 5? 24 22:12:35 2015
# Project:  ../test_for_MLGVIDMW/test_for_MLGVIDMW.pro
# Template: app
# Command: /usr/local/Qt4.8.4/bin/qmake -spec /usr/local/Qt4.8.4/mkspecs/linux-g++ CONFIG+=debug CONFIG+=declarative_debug -o Makefile ../test_for_MLGVIDMW/test_for_MLGVIDMW.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/local/Qt4.8.4/mkspecs/linux-g++ -I../test_for_MLGVIDMW -I/usr/local/Qt4.8.4/include/QtCore -I/usr/local/Qt4.8.4/include/QtGui -I/usr/local/Qt4.8.4/include -I../ML_GVIDMW -I../ML_GVIDMW -I../ML_GVIDMW -I. -I. -I../test_for_MLGVIDMW -I.
LINK          = g++
LFLAGS        = -Wl,-rpath,/usr/local/Qt4.8.4/lib
LIBS          = $(SUBLIBS)  -L/usr/local/Qt4.8.4/lib -L/home/soledad/Documents/test_for_MLGVIDMW/../ML_GVIDMW-build-desktop-Qt_4_8_2__4_8_2____/ -L/home/soledad/Documents/test_for_MLGVIDMW/../build-ML_GVIDMW-桌面-Debug/ -lML_GVIDMW -lQtGui -L/usr/local/Qt4.8.4/lib -L/usr/X11R6/lib -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/local/Qt4.8.4/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = ../test_for_MLGVIDMW/main.cpp \
		../test_for_MLGVIDMW/widget.cpp moc_widget.cpp
OBJECTS       = main.o \
		widget.o \
		moc_widget.o
DIST          = /usr/local/Qt4.8.4/mkspecs/common/unix.conf \
		/usr/local/Qt4.8.4/mkspecs/common/linux.conf \
		/usr/local/Qt4.8.4/mkspecs/common/gcc-base.conf \
		/usr/local/Qt4.8.4/mkspecs/common/gcc-base-unix.conf \
		/usr/local/Qt4.8.4/mkspecs/common/g++-base.conf \
		/usr/local/Qt4.8.4/mkspecs/common/g++-unix.conf \
		/usr/local/Qt4.8.4/mkspecs/qconfig.pri \
		/usr/local/Qt4.8.4/mkspecs/modules/qt_webkit_version.pri \
		/usr/local/Qt4.8.4/mkspecs/features/qt_functions.prf \
		/usr/local/Qt4.8.4/mkspecs/features/qt_config.prf \
		/usr/local/Qt4.8.4/mkspecs/features/exclusive_builds.prf \
		/usr/local/Qt4.8.4/mkspecs/features/default_pre.prf \
		/usr/local/Qt4.8.4/mkspecs/features/debug.prf \
		/usr/local/Qt4.8.4/mkspecs/features/default_post.prf \
		/usr/local/Qt4.8.4/mkspecs/features/declarative_debug.prf \
		/usr/local/Qt4.8.4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/local/Qt4.8.4/mkspecs/features/warn_on.prf \
		/usr/local/Qt4.8.4/mkspecs/features/qt.prf \
		/usr/local/Qt4.8.4/mkspecs/features/unix/thread.prf \
		/usr/local/Qt4.8.4/mkspecs/features/moc.prf \
		/usr/local/Qt4.8.4/mkspecs/features/resources.prf \
		/usr/local/Qt4.8.4/mkspecs/features/uic.prf \
		/usr/local/Qt4.8.4/mkspecs/features/yacc.prf \
		/usr/local/Qt4.8.4/mkspecs/features/lex.prf \
		/usr/local/Qt4.8.4/mkspecs/features/include_source_dir.prf \
		../test_for_MLGVIDMW/test_for_MLGVIDMW.pro
QMAKE_TARGET  = test_for_MLGVIDMW
DESTDIR       = 
TARGET        = test_for_MLGVIDMW

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

all: Makefile $(TARGET)

$(TARGET): ui_widget.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)
	{ test -n "$(DESTDIR)" && DESTDIR="$(DESTDIR)" || DESTDIR=.; } && test $$(gdb --version | sed -e 's,[^0-9]\+\([0-9]\)\.\([0-9]\).*,\1\2,;q') -gt 72 && gdb --nx --batch --quiet -ex 'set confirm off' -ex "save gdb-index $$DESTDIR" -ex quit '$(TARGET)' && test -f $(TARGET).gdb-index && objcopy --add-section '.gdb_index=$(TARGET).gdb-index' --set-section-flags '.gdb_index=readonly' '$(TARGET)' '$(TARGET)' && rm -f $(TARGET).gdb-index || true

Makefile: ../test_for_MLGVIDMW/test_for_MLGVIDMW.pro  /usr/local/Qt4.8.4/mkspecs/linux-g++/qmake.conf /usr/local/Qt4.8.4/mkspecs/common/unix.conf \
		/usr/local/Qt4.8.4/mkspecs/common/linux.conf \
		/usr/local/Qt4.8.4/mkspecs/common/gcc-base.conf \
		/usr/local/Qt4.8.4/mkspecs/common/gcc-base-unix.conf \
		/usr/local/Qt4.8.4/mkspecs/common/g++-base.conf \
		/usr/local/Qt4.8.4/mkspecs/common/g++-unix.conf \
		/usr/local/Qt4.8.4/mkspecs/qconfig.pri \
		/usr/local/Qt4.8.4/mkspecs/modules/qt_webkit_version.pri \
		/usr/local/Qt4.8.4/mkspecs/features/qt_functions.prf \
		/usr/local/Qt4.8.4/mkspecs/features/qt_config.prf \
		/usr/local/Qt4.8.4/mkspecs/features/exclusive_builds.prf \
		/usr/local/Qt4.8.4/mkspecs/features/default_pre.prf \
		/usr/local/Qt4.8.4/mkspecs/features/debug.prf \
		/usr/local/Qt4.8.4/mkspecs/features/default_post.prf \
		/usr/local/Qt4.8.4/mkspecs/features/declarative_debug.prf \
		/usr/local/Qt4.8.4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/local/Qt4.8.4/mkspecs/features/warn_on.prf \
		/usr/local/Qt4.8.4/mkspecs/features/qt.prf \
		/usr/local/Qt4.8.4/mkspecs/features/unix/thread.prf \
		/usr/local/Qt4.8.4/mkspecs/features/moc.prf \
		/usr/local/Qt4.8.4/mkspecs/features/resources.prf \
		/usr/local/Qt4.8.4/mkspecs/features/uic.prf \
		/usr/local/Qt4.8.4/mkspecs/features/yacc.prf \
		/usr/local/Qt4.8.4/mkspecs/features/lex.prf \
		/usr/local/Qt4.8.4/mkspecs/features/include_source_dir.prf \
		/usr/local/Qt4.8.4/lib/libQtGui.prl \
		/usr/local/Qt4.8.4/lib/libQtCore.prl
	$(QMAKE) -spec /usr/local/Qt4.8.4/mkspecs/linux-g++ CONFIG+=debug CONFIG+=declarative_debug -o Makefile ../test_for_MLGVIDMW/test_for_MLGVIDMW.pro
/usr/local/Qt4.8.4/mkspecs/common/unix.conf:
/usr/local/Qt4.8.4/mkspecs/common/linux.conf:
/usr/local/Qt4.8.4/mkspecs/common/gcc-base.conf:
/usr/local/Qt4.8.4/mkspecs/common/gcc-base-unix.conf:
/usr/local/Qt4.8.4/mkspecs/common/g++-base.conf:
/usr/local/Qt4.8.4/mkspecs/common/g++-unix.conf:
/usr/local/Qt4.8.4/mkspecs/qconfig.pri:
/usr/local/Qt4.8.4/mkspecs/modules/qt_webkit_version.pri:
/usr/local/Qt4.8.4/mkspecs/features/qt_functions.prf:
/usr/local/Qt4.8.4/mkspecs/features/qt_config.prf:
/usr/local/Qt4.8.4/mkspecs/features/exclusive_builds.prf:
/usr/local/Qt4.8.4/mkspecs/features/default_pre.prf:
/usr/local/Qt4.8.4/mkspecs/features/debug.prf:
/usr/local/Qt4.8.4/mkspecs/features/default_post.prf:
/usr/local/Qt4.8.4/mkspecs/features/declarative_debug.prf:
/usr/local/Qt4.8.4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/local/Qt4.8.4/mkspecs/features/warn_on.prf:
/usr/local/Qt4.8.4/mkspecs/features/qt.prf:
/usr/local/Qt4.8.4/mkspecs/features/unix/thread.prf:
/usr/local/Qt4.8.4/mkspecs/features/moc.prf:
/usr/local/Qt4.8.4/mkspecs/features/resources.prf:
/usr/local/Qt4.8.4/mkspecs/features/uic.prf:
/usr/local/Qt4.8.4/mkspecs/features/yacc.prf:
/usr/local/Qt4.8.4/mkspecs/features/lex.prf:
/usr/local/Qt4.8.4/mkspecs/features/include_source_dir.prf:
/usr/local/Qt4.8.4/lib/libQtGui.prl:
/usr/local/Qt4.8.4/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/local/Qt4.8.4/mkspecs/linux-g++ CONFIG+=debug CONFIG+=declarative_debug -o Makefile ../test_for_MLGVIDMW/test_for_MLGVIDMW.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/test_for_MLGVIDMW1.0.0 || $(MKDIR) .tmp/test_for_MLGVIDMW1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/test_for_MLGVIDMW1.0.0/ && $(COPY_FILE) --parents ../test_for_MLGVIDMW/widget.h .tmp/test_for_MLGVIDMW1.0.0/ && $(COPY_FILE) --parents ../test_for_MLGVIDMW/main.cpp ../test_for_MLGVIDMW/widget.cpp .tmp/test_for_MLGVIDMW1.0.0/ && $(COPY_FILE) --parents ../test_for_MLGVIDMW/widget.ui .tmp/test_for_MLGVIDMW1.0.0/ && (cd `dirname .tmp/test_for_MLGVIDMW1.0.0` && $(TAR) test_for_MLGVIDMW1.0.0.tar test_for_MLGVIDMW1.0.0 && $(COMPRESS) test_for_MLGVIDMW1.0.0.tar) && $(MOVE) `dirname .tmp/test_for_MLGVIDMW1.0.0`/test_for_MLGVIDMW1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/test_for_MLGVIDMW1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_widget.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_widget.cpp
moc_widget.cpp: ../test_for_MLGVIDMW/widget.h
	/usr/local/Qt4.8.4/bin/moc $(DEFINES) $(INCPATH) ../test_for_MLGVIDMW/widget.h -o moc_widget.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_widget.h
compiler_uic_clean:
	-$(DEL_FILE) ui_widget.h
ui_widget.h: ../test_for_MLGVIDMW/widget.ui
	/usr/local/Qt4.8.4/bin/uic ../test_for_MLGVIDMW/widget.ui -o ui_widget.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

main.o: ../test_for_MLGVIDMW/main.cpp ../test_for_MLGVIDMW/widget.h \
		../ML_GVIDMW/ml_gvidmw.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o ../test_for_MLGVIDMW/main.cpp

widget.o: ../test_for_MLGVIDMW/widget.cpp ../test_for_MLGVIDMW/widget.h \
		ui_widget.h \
		../ML_GVIDMW/ml_gvidmw.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o widget.o ../test_for_MLGVIDMW/widget.cpp

moc_widget.o: moc_widget.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_widget.o moc_widget.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

