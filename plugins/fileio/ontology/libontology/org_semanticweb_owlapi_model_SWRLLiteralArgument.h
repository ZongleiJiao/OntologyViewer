#ifndef org_semanticweb_owlapi_model_SWRLLiteralArgument_H
#define org_semanticweb_owlapi_model_SWRLLiteralArgument_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

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
class OWLLiteral;
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
class SWRLLiteralArgument : public java::lang::Object {
  public:
    SWRLLiteralArgument(JavaMarker* dummy);
    SWRLLiteralArgument(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::OWLLiteral* getLiteral(); // public abstract org.semanticweb.owlapi.model.OWLLiteral org.semanticweb.owlapi.model.SWRLLiteralArgument.getLiteral()

};
}
}
}
}
#endif
