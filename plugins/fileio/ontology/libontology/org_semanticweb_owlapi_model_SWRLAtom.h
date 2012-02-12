#ifndef org_semanticweb_owlapi_model_SWRLAtom_H
#define org_semanticweb_owlapi_model_SWRLAtom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLObject;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLPredicate;
}
}
}
}

namespace java {
namespace util {
class Collection;
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
class SWRLAtom : public java::lang::Object {
  public:
    SWRLAtom(JavaMarker* dummy);
    SWRLAtom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::SWRLPredicate* getPredicate(); // public abstract org.semanticweb.owlapi.model.SWRLPredicate org.semanticweb.owlapi.model.SWRLAtom.getPredicate()
    virtual java::util::Collection* getAllArguments(); // public abstract java.util.Collection org.semanticweb.owlapi.model.SWRLAtom.getAllArguments()

};
}
}
}
}
#endif
