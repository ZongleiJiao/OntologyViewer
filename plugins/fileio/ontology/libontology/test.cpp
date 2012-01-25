#include <jni.h>
#include <jni_md.h>
#include <java_magic.h>
#include <edu_monash_it_OWLAPIWrapper.h>
#include <iostream>
#include <string>

using namespace std;
int main(int argc, char** argv){
    initJavaWrapper(argc,argv);

    edu::monash::it::OWLAPIWrapper* wp = new edu::monash::it::OWLAPIWrapper();

    wp->loadOntologyFile("/home/qiang/koala.owl");

    JavaObjectArray *res = wp->getAllOWLClasses();
    java::lang::Object ** a = (java::lang::Object **)res->getArrayData();
    cout<<"-=-=-=-"<<res->getArrayLength()<<endl;
    for(int i=0;i<res->getArrayLength();i++){
        cout<<a[i]->toString()<<endl;
//        JavaObjectArray *sub = wp->getSubClasses("Thing");
        JavaObjectArray *sub = wp->getSubClasses(a[i]->toString());
        if(sub!=NULL){
            java::lang::Object ** b = (java::lang::Object **)sub->getArrayData();
            cout<<"+++Subclasses:"<<sub->getArrayLength()<<endl;
            for(int j=0;j<sub->getArrayLength();j++){
                cout<<"::"<<b[j]->toString()<<endl;
            }
        }
    }

}
