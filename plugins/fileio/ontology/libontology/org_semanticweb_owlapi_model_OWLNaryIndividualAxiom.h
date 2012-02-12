#ifndef org_semanticweb_owlapi_model_OWLNaryIndividualAxiom_H
#define org_semanticweb_owlapi_model_OWLNaryIndividualAxiom_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLIndividualAxiom;
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
class OWLNaryIndividualAxiom : public java::lang::Object {
  public:
    OWLNaryIndividualAxiom(JavaMarker* dummy);
    OWLNaryIndividualAxiom(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual java::util::Set* getIndividuals(); // public abstract java.util.Set org.semanticweb.owlapi.model.OWLNaryIndividualAxiom.getIndividuals()
    virtual java::util::List* getIndividualsAsList(); // public abstract java.util.List org.semanticweb.owlapi.model.OWLNaryIndividualAxiom.getIndividualsAsList()

};
}
}
}
}
#endif
