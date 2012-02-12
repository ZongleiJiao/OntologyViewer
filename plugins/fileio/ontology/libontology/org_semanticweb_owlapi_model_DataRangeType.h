#ifndef org_semanticweb_owlapi_model_DataRangeType_H
#define org_semanticweb_owlapi_model_DataRangeType_H
#include <jni.h>
#include <java_marker.h>
#include <java_lang_Enum.h>

namespace java {
namespace lang {
class String;
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
class DataRangeType : public java::lang::Enum {
  public:
    DataRangeType(JavaMarker* dummy);
    DataRangeType(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual JavaObjectArray* values(); // public static final org.semanticweb.owlapi.model.DataRangeType[] org.semanticweb.owlapi.model.DataRangeType.values()
    virtual org::semanticweb::owlapi::model::DataRangeType* valueOf(const char* arg1); // public static org.semanticweb.owlapi.model.DataRangeType org.semanticweb.owlapi.model.DataRangeType.valueOf(java.lang.String)
    virtual const char* getName(); // public java.lang.String org.semanticweb.owlapi.model.DataRangeType.getName()

    org::semanticweb::owlapi::model::DataRangeType* DATATYPE; // public static final org.semanticweb.owlapi.model.DataRangeType org.semanticweb.owlapi.model.DataRangeType.DATATYPE
    org::semanticweb::owlapi::model::DataRangeType* DATA_ONE_OF; // public static final org.semanticweb.owlapi.model.DataRangeType org.semanticweb.owlapi.model.DataRangeType.DATA_ONE_OF
    org::semanticweb::owlapi::model::DataRangeType* DATATYPE_RESTRICTION; // public static final org.semanticweb.owlapi.model.DataRangeType org.semanticweb.owlapi.model.DataRangeType.DATATYPE_RESTRICTION
    org::semanticweb::owlapi::model::DataRangeType* DATA_COMPLEMENT_OF; // public static final org.semanticweb.owlapi.model.DataRangeType org.semanticweb.owlapi.model.DataRangeType.DATA_COMPLEMENT_OF
    org::semanticweb::owlapi::model::DataRangeType* DATA_UNION_OF; // public static final org.semanticweb.owlapi.model.DataRangeType org.semanticweb.owlapi.model.DataRangeType.DATA_UNION_OF
    org::semanticweb::owlapi::model::DataRangeType* DATA_INTERSECTION_OF; // public static final org.semanticweb.owlapi.model.DataRangeType org.semanticweb.owlapi.model.DataRangeType.DATA_INTERSECTION_OF
};
}
}
}
}
#endif
