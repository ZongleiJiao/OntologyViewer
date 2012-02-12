#ifndef org_semanticweb_owlapi_model_SWRLVariable_H
#define org_semanticweb_owlapi_model_SWRLVariable_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLIArgument;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class SWRLDArgument;
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
class SWRLVariable : public java::lang::Object {
  public:
    SWRLVariable(JavaMarker* dummy);
    SWRLVariable(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::IRI* getIRI(); // public abstract org.semanticweb.owlapi.model.IRI org.semanticweb.owlapi.model.SWRLVariable.getIRI()

};
}
}
}
}
#endif
