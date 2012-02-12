#ifndef org_semanticweb_owlapi_model_OWLLiteral_H
#define org_semanticweb_owlapi_model_OWLLiteral_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObject;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAnnotationObject;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLAnnotationValue;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLPropertyAssertionObject;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataVisitor;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataVisitorEx;
}
}
}
}

namespace java {
namespace lang {
class String;
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDatatype;
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
class OWLLiteral : public java::lang::Object {
  public:
    OWLLiteral(JavaMarker* dummy);
    OWLLiteral(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool parseBoolean(); // public abstract boolean org.semanticweb.owlapi.model.OWLLiteral.parseBoolean() throws java.lang.NumberFormatException
    virtual float parseFloat(); // public abstract float org.semanticweb.owlapi.model.OWLLiteral.parseFloat() throws java.lang.NumberFormatException
    virtual double parseDouble(); // public abstract double org.semanticweb.owlapi.model.OWLLiteral.parseDouble() throws java.lang.NumberFormatException
    virtual void accept(org::semanticweb::owlapi::model::OWLDataVisitor* arg1); // public abstract void org.semanticweb.owlapi.model.OWLLiteral.accept(org.semanticweb.owlapi.model.OWLDataVisitor)
    virtual java::lang::Object* accept(org::semanticweb::owlapi::model::OWLDataVisitorEx* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLLiteral.accept(org.semanticweb.owlapi.model.OWLDataVisitorEx)
    virtual bool isInteger(); // public abstract boolean org.semanticweb.owlapi.model.OWLLiteral.isInteger()
    virtual bool isFloat(); // public abstract boolean org.semanticweb.owlapi.model.OWLLiteral.isFloat()
    virtual bool isDouble(); // public abstract boolean org.semanticweb.owlapi.model.OWLLiteral.isDouble()
    virtual bool isBoolean(); // public abstract boolean org.semanticweb.owlapi.model.OWLLiteral.isBoolean()
    virtual bool isRDFPlainLiteral(); // public abstract boolean org.semanticweb.owlapi.model.OWLLiteral.isRDFPlainLiteral()
    virtual const char* getLiteral(); // public abstract java.lang.String org.semanticweb.owlapi.model.OWLLiteral.getLiteral()
    virtual org::semanticweb::owlapi::model::OWLDatatype* getDatatype(); // public abstract org.semanticweb.owlapi.model.OWLDatatype org.semanticweb.owlapi.model.OWLLiteral.getDatatype()
    virtual bool hasLang(); // public abstract boolean org.semanticweb.owlapi.model.OWLLiteral.hasLang()
    virtual bool hasLang(const char* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLLiteral.hasLang(java.lang.String)
    virtual const char* getLang(); // public abstract java.lang.String org.semanticweb.owlapi.model.OWLLiteral.getLang()
    virtual int parseInteger(); // public abstract int org.semanticweb.owlapi.model.OWLLiteral.parseInteger() throws java.lang.NumberFormatException

};
}
}
}
}
#endif
