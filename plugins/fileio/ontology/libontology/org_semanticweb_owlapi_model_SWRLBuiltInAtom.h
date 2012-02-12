#ifndef org_semanticweb_owlapi_model_SWRLBuiltInAtom_H
#define org_semanticweb_owlapi_model_SWRLBuiltInAtom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLAtom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class IRI;
}
}
}
}

namespace java {
namespace util {
class List;
}
}
class JavaByteArray;
class JavaBooleanArray;
class JavaCharArray;
class JavaIntArray;
class JavaShortArray;
class JavaLongArray;
class JavaDoubleArray;
class JavaFloatArray;
class JavaObjectArray;

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLBuiltInAtom : public java::lang::Object {
  public:
    SWRLBuiltInAtom(JavaMarker* dummy);
    SWRLBuiltInAtom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::IRI* getPredicate(); // public abstract org.semanticweb.owlapi.model.IRI org.semanticweb.owlapi.model.SWRLBuiltInAtom.getPredicate()
    virtual java::util::List* getArguments(); // public abstract java.util.List org.semanticweb.owlapi.model.SWRLBuiltInAtom.getArguments()
    virtual bool isCoreBuiltIn(); // public abstract boolean org.semanticweb.owlapi.model.SWRLBuiltInAtom.isCoreBuiltIn()

};
}
}
}
}
#endif
