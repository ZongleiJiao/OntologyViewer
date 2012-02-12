#ifndef org_semanticweb_owlapi_model_PrefixManager_H
#define org_semanticweb_owlapi_model_PrefixManager_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Object.h>

namespace org {
namespace semanticweb {
namespace owlapi {
namespace model {
class IRI;
}
}
}
}

namespace java {
namespace lang {
class String;
}
}

namespace java {
namespace util {
class Set;
}
}

namespace java {
namespace util {
class Map;
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
class PrefixManager : public java::lang::Object {
  public:
    PrefixManager(JavaMarker* dummy);
    PrefixManager(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual org::semanticweb::owlapi::model::IRI* getIRI(const char* arg1); // public abstract org.semanticweb.owlapi.model.IRI org.semanticweb.owlapi.model.PrefixManager.getIRI(java.lang.String)
    virtual java::util::Set* getPrefixNames(); // public abstract java.util.Set org.semanticweb.owlapi.model.PrefixManager.getPrefixNames()
    virtual const char* getPrefixIRI(org::semanticweb::owlapi::model::IRI* arg1); // public abstract java.lang.String org.semanticweb.owlapi.model.PrefixManager.getPrefixIRI(org.semanticweb.owlapi.model.IRI)
    virtual const char* getDefaultPrefix(); // public abstract java.lang.String org.semanticweb.owlapi.model.PrefixManager.getDefaultPrefix()
    virtual bool containsPrefixMapping(const char* arg1); // public abstract boolean org.semanticweb.owlapi.model.PrefixManager.containsPrefixMapping(java.lang.String)
    virtual java::util::Map* getPrefixName2PrefixMap(); // public abstract java.util.Map org.semanticweb.owlapi.model.PrefixManager.getPrefixName2PrefixMap()
    virtual const char* getPrefix(const char* arg1); // public abstract java.lang.String org.semanticweb.owlapi.model.PrefixManager.getPrefix(java.lang.String)

};
}
}
}
}
#endif
