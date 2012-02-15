
/* $Id: java_wrapper.cpp 6 2005-12-05 15:43:30Z kleiner $

   This file is part of java4cpp
   Copyright (C) 2005  Stefan Palme

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#include <jni.h>
#include <java_marker.h>

JNIEnv     *javaEnv;
jobject    javaException;
JavaMarker *wrapperIntern = new JavaMarker();

int initJavaWrapper(int argc,char **argv)
{
        JavaVM* jvm=NULL;
        JavaVMOption options[3];
        JavaVMInitArgs vm_args;
        options[0].optionString = "-Djava.compiler=NONE";                                       /* disable JIT */
        options[1].optionString = "-Djava.class.path=../plugins/fileio/ontology/libontology/OWLAPIWrapper.jar"; // path for linux
        //options[1].optionString = "-Djava.class.path=../../../plugins/fileio/ontology/libontology/OWLAPIWrapper.jar"; // path for mac
        options[2].optionString = "-verbose:none";                                              /* print JNI-related messages */
        vm_args.version = JNI_VERSION_1_2;
        vm_args.options = options;
        vm_args.nOptions = 3;
        vm_args.ignoreUnrecognized = JNI_TRUE;

        int res = JNI_CreateJavaVM(&jvm, (void**)&javaEnv, &vm_args);
        return res;
}
