#ifndef org_semanticweb_owlapi_model_OWLNaryClassAxiom_H
#define org_semanticweb_owlapi_model_OWLNaryClassAxiom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLClassAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLNaryAxiom;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLSubClassOfAxiomSetShortCut;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLClassExpression;
}
}
}
}

namespace java {
namespace util {
class Set;
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
class OWLNaryClassAxiom : public java::lang::Object {
  public:
    OWLNaryClassAxiom(JavaMarker* dummy);
    OWLNaryClassAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual bool contains(org::semanticweb::owlapi::model::OWLClassExpression* arg1); // public abstract boolean org.semanticweb.owlapi.model.OWLNaryClassAxiom.contains(org.semanticweb.owlapi.model.OWLClassExpression)
    virtual java::util::Set* getClassExpressions(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLNaryClassAxiom.getClassExpressions()
    virtual java::util::List* getClassExpressionsAsList(); // public abstract java.util.List org.semanticweb.owlapi.model.OWLNaryClassAxiom.getClassExpressionsAsList()
    virtual java::util::Set* getClassExpressionsMinus(JavaObjectArray* arg1); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLNaryClassAxiom.getClassExpressionsMinus(org.semanticweb.owlapi.model.OWLClassExpression[])

};
}
}
}
}
#endif
