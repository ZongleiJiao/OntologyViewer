#ifndef org_semanticweb_owlapi_model_EntityType_H
#define org_semanticweb_owlapi_model_EntityType_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace java {
namespace lang {
class String;
}
}

namespace java {
namespace util {
class List;
}
}

namespace org {
namespace semanticweb {
namespace owlapi {
namespace vocab {
class OWLRDFVocabulary;
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
class EntityType : public java::lang::Object {
  public:
    EntityType(JavaMarker* dummy);
    EntityType(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual const char* toString(); // public java.lang.String org.semanticweb.owlapi.model.EntityType.toString()
    virtual java::util::List* values(); // public static java.util.List org.semanticweb.owlapi.model.EntityType.values()
    virtual const char* getName(); // public java.lang.String org.semanticweb.owlapi.model.EntityType.getName()
    virtual org::semanticweb::owlapi::vocab::OWLRDFVocabulary* getVocabulary(); // public org.semanticweb.owlapi.vocab.OWLRDFVocabulary org.semanticweb.owlapi.model.EntityType.getVocabulary()

    org::semanticweb::owlapi::model::EntityType* CLASS; // public static final org.semanticweb.owlapi.model.EntityType org.semanticweb.owlapi.model.EntityType.CLASS
    org::semanticweb::owlapi::model::EntityType* OBJECT_PROPERTY; // public static final org.semanticweb.owlapi.model.EntityType org.semanticweb.owlapi.model.EntityType.OBJECT_PROPERTY
    org::semanticweb::owlapi::model::EntityType* DATA_PROPERTY; // public static final org.semanticweb.owlapi.model.EntityType org.semanticweb.owlapi.model.EntityType.DATA_PROPERTY
    org::semanticweb::owlapi::model::EntityType* ANNOTATION_PROPERTY; // public static final org.semanticweb.owlapi.model.EntityType org.semanticweb.owlapi.model.EntityType.ANNOTATION_PROPERTY
    org::semanticweb::owlapi::model::EntityType* NAMED_INDIVIDUAL; // public static final org.semanticweb.owlapi.model.EntityType org.semanticweb.owlapi.model.EntityType.NAMED_INDIVIDUAL
    org::semanticweb::owlapi::model::EntityType* DATATYPE; // public static final org.semanticweb.owlapi.model.EntityType org.semanticweb.owlapi.model.EntityType.DATATYPE
};
}
}
}
}
#endif
