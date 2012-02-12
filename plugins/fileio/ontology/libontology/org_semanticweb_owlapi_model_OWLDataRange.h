#ifndef org_semanticweb_owlapi_model_OWLDataRange_H
#define org_semanticweb_owlapi_model_OWLDataRange_H
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
class OWLPropertyRange;
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

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataRangeVisitor;
}
}
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class OWLDataRangeVisitorEx;
}
}
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

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class DataRangeType;
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
class OWLDataRange : public java::lang::Object {
  public:
    OWLDataRange(JavaMarker* dummy);
    OWLDataRange(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual void accept(org::semanticweb::owlapi::model::OWLDataVisitor* arg1); // public abstract void org.semanticweb.owlapi.model.OWLDataRange.accept(org.semanticweb.owlapi.model.OWLDataVisitor)
    virtual java::lang::Object* accept(org::semanticweb::owlapi::model::OWLDataVisitorEx* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLDataRange.accept(org.semanticweb.owlapi.model.OWLDataVisitorEx)
    virtual void accept(org::semanticweb::owlapi::model::OWLDataRangeVisitor* arg1); // public abstract void org.semanticweb.owlapi.model.OWLDataRange.accept(org.semanticweb.owlapi.model.OWLDataRangeVisitor)
    virtual java::lang::Object* accept(org::semanticweb::owlapi::model::OWLDataRangeVisitorEx* arg1); // public abstract java.lang.Object org.semanticweb.owlapi.model.OWLDataRange.accept(org.semanticweb.owlapi.model.OWLDataRangeVisitorEx)
    virtual org::semanticweb::owlapi::model::OWLDatatype* asOWLDatatype(); // public abstract org.semanticweb.owlapi.model.OWLDatatype org.semanticweb.owlapi.model.OWLDataRange.asOWLDatatype()
    virtual bool isDatatype(); // public abstract boolean org.semanticweb.owlapi.model.OWLDataRange.isDatatype()
    virtual bool isTopDatatype(); // public abstract boolean org.semanticweb.owlapi.model.OWLDataRange.isTopDatatype()
    virtual org::semanticweb::owlapi::model::DataRangeType* getDataRangeType(); // public abstract org.semanticweb.owlapi.model.DataRangeType org.semanticweb.owlapi.model.OWLDataRange.getDataRangeType()

};
}
}
}
}
#endif
