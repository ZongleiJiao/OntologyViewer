#ifndef org_semanticweb_owlapi_model_OWLDatatype_H
#define org_semanticweb_owlapi_model_OWLDatatype_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataRange;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLLogicalEntity;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLNamedObject;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace vocab {
class OWL2Datatype;
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
class OWLDatatype : public java::lang::Object {
  public:
    OWLDatatype(JavaMarker* dummy);
    OWLDatatype(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::vocab::OWL2Datatype* getBuiltInDatatype(); // public abstract org.semanticweb.owlapi.vocab.OWL2Datatype org.semanticweb.owlapi.model.OWLDatatype.getBuiltInDatatype()
    virtual bool isString(); // public abstract boolean org.semanticweb.owlapi.model.OWLDatatype.isString()
    virtual bool isInteger(); // public abstract boolean org.semanticweb.owlapi.model.OWLDatatype.isInteger()
    virtual bool isFloat(); // public abstract boolean org.semanticweb.owlapi.model.OWLDatatype.isFloat()
    virtual bool isDouble(); // public abstract boolean org.semanticweb.owlapi.model.OWLDatatype.isDouble()
    virtual bool isBoolean(); // public abstract boolean org.semanticweb.owlapi.model.OWLDatatype.isBoolean()
    virtual bool isRDFPlainLiteral(); // public abstract boolean org.semanticweb.owlapi.model.OWLDatatype.isRDFPlainLiteral()

};
}
}
}
}
#endif
