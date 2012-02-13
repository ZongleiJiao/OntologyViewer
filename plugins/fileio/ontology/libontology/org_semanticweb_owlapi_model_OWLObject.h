#ifndef org_semanticweb_owlapi_model_OWLObject_H
#define org_semanticweb_owlapi_model_OWLObject_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace lang {
class Comparable;
}
}

namespace java {
namespace util {
class Set;
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObjectVisitor;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLObjectVisitorEx;
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
class OWLObject : public java::lang::Object {
  public:
    OWLObject(JavaMarker* dummy);
    OWLObject(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::util::Set* getSignature(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLObject.getSignature()
    virtual void accept(org::semanticweb::owlapi::model::OWLObjectVisitor* arg1); // public abstract void org.semanticweb.owlapi.model.OWLObject.accept(org.semanticweb.owlapi.model.OWLObjectVisitor)
    virtual java::lang::Object* accept(org::semanticweb::owlapi::model::OWLObjectVisitorEx* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLObject.accept(org.semanticweb.owlapi.model.OWLObjectVisitorEx)
    virtual java::util::Set* getClassesInSignature(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLObject.getClassesInSignature()
    virtual java::util::Set* getIndividualsInSignature(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLObject.getIndividualsInSignature()
    virtual java::util::Set* getDataPropertiesInSignature(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLObject.getDataPropertiesInSignature()
    virtual java::util::Set* getObjectPropertiesInSignature(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLObject.getObjectPropertiesInSignature()
    virtual java::util::Set* getDatatypesInSignature(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLObject.getDatatypesInSignature()
    virtual java::util::Set* getNestedClassExpressions(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLObject.getNestedClassExpressions()
    virtual bool isTopEntity(); // public abstract boolean org.semanticweb.owlapi.model.OWLObject.isTopEntity()
    virtual bool isBottomEntity(); // public abstract boolean org.semanticweb.owlapi.model.OWLObject.isBottomEntity()

};
}
}
}
}
#endif
