#ifndef org_semanticweb_owlapi_model_ClassExpressionType_H
#define org_semanticweb_owlapi_model_ClassExpressionType_H
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
class ClassExpressionType : public java::lang::Enum {
  public:
    ClassExpressionType(JavaMarker* dummy);
    ClassExpressionType(jobject obj);

    virtual void updateAllVariables(JavaMarker* dummy);
    virtual void updateAllNonFinalVariables(JavaMarker* dummy);
    virtual const char* toString(); // public java.lang.String org.semanticweb.owlapi.model.ClassExpressionType.toString()
    virtual JavaObjectArray* values(); // public static final org.semanticweb.owlapi.model.ClassExpressionType[] org.semanticweb.owlapi.model.ClassExpressionType.values()
    virtual org::semanticweb::owlapi::model::ClassExpressionType* valueOf(const char* arg1); // public static org.semanticweb.owlapi.model.ClassExpressionType org.semanticweb.owlapi.model.ClassExpressionType.valueOf(java.lang.String)
    virtual const char* getName(); // public java.lang.String org.semanticweb.owlapi.model.ClassExpressionType.getName()

    org::semanticweb::owlapi::model::ClassExpressionType* OWL_CLASS; // public static final org.semanticweb.owlapi.model.ClassExpressionType org.semanticweb.owlapi.model.ClassExpressionType.OWL_CLASS
    org::semanticweb::owlapi::model::ClassExpressionType* OBJECT_SOME_VALUES_FROM; // public static final org.semanticweb.owlapi.model.ClassExpressionType org.semanticweb.owlapi.model.ClassExpressionType.OBJECT_SOME_VALUES_FROM
    org::semanticweb::owlapi::model::ClassExpressionType* OBJECT_ALL_VALUES_FROM; // public static final org.semanticweb.owlapi.model.ClassExpressionType org.semanticweb.owlapi.model.ClassExpressionType.OBJECT_ALL_VALUES_FROM
    org::semanticweb::owlapi::model::ClassExpressionType* OBJECT_MIN_CARDINALITY; // public static final org.semanticweb.owlapi.model.ClassExpressionType org.semanticweb.owlapi.model.ClassExpressionType.OBJECT_MIN_CARDINALITY
    org::semanticweb::owlapi::model::ClassExpressionType* OBJECT_MAX_CARDINALITY; // public static final org.semanticweb.owlapi.model.ClassExpressionType org.semanticweb.owlapi.model.ClassExpressionType.OBJECT_MAX_CARDINALITY
    org::semanticweb::owlapi::model::ClassExpressionType* OBJECT_EXACT_CARDINALITY; // public static final org.semanticweb.owlapi.model.ClassExpressionType org.semanticweb.owlapi.model.ClassExpressionType.OBJECT_EXACT_CARDINALITY
    org::semanticweb::owlapi::model::ClassExpressionType* OBJECT_HAS_VALUE; // public static final org.semanticweb.owlapi.model.ClassExpressionType org.semanticweb.owlapi.model.ClassExpressionType.OBJECT_HAS_VALUE
    org::semanticweb::owlapi::model::ClassExpressionType* OBJECT_HAS_SELF; // public static final org.semanticweb.owlapi.model.ClassExpressionType org.semanticweb.owlapi.model.ClassExpressionType.OBJECT_HAS_SELF
    org::semanticweb::owlapi::model::ClassExpressionType* DATA_SOME_VALUES_FROM; // public static final org.semanticweb.owlapi.model.ClassExpressionType org.semanticweb.owlapi.model.ClassExpressionType.DATA_SOME_VALUES_FROM
    org::semanticweb::owlapi::model::ClassExpressionType* DATA_ALL_VALUES_FROM; // public static final org.semanticweb.owlapi.model.ClassExpressionType org.semanticweb.owlapi.model.ClassExpressionType.DATA_ALL_VALUES_FROM
    org::semanticweb::owlapi::model::ClassExpressionType* DATA_MIN_CARDINALITY; // public static final org.semanticweb.owlapi.model.ClassExpressionType org.semanticweb.owlapi.model.ClassExpressionType.DATA_MIN_CARDINALITY
    org::semanticweb::owlapi::model::ClassExpressionType* DATA_MAX_CARDINALITY; // public static final org.semanticweb.owlapi.model.ClassExpressionType org.semanticweb.owlapi.model.ClassExpressionType.DATA_MAX_CARDINALITY
    org::semanticweb::owlapi::model::ClassExpressionType* DATA_EXACT_CARDINALITY; // public static final org.semanticweb.owlapi.model.ClassExpressionType org.semanticweb.owlapi.model.ClassExpressionType.DATA_EXACT_CARDINALITY
    org::semanticweb::owlapi::model::ClassExpressionType* DATA_HAS_VALUE; // public static final org.semanticweb.owlapi.model.ClassExpressionType org.semanticweb.owlapi.model.ClassExpressionType.DATA_HAS_VALUE
    org::semanticweb::owlapi::model::ClassExpressionType* OBJECT_INTERSECTION_OF; // public static final org.semanticweb.owlapi.model.ClassExpressionType org.semanticweb.owlapi.model.ClassExpressionType.OBJECT_INTERSECTION_OF
    org::semanticweb::owlapi::model::ClassExpressionType* OBJECT_UNION_OF; // public static final org.semanticweb.owlapi.model.ClassExpressionType org.semanticweb.owlapi.model.ClassExpressionType.OBJECT_UNION_OF
    org::semanticweb::owlapi::model::ClassExpressionType* OBJECT_COMPLEMENT_OF; // public static final org.semanticweb.owlapi.model.ClassExpressionType org.semanticweb.owlapi.model.ClassExpressionType.OBJECT_COMPLEMENT_OF
    org::semanticweb::owlapi::model::ClassExpressionType* OBJECT_ONE_OF; // public static final org.semanticweb.owlapi.model.ClassExpressionType org.semanticweb.owlapi.model.ClassExpressionType.OBJECT_ONE_OF
};
}
}
}
}
#endif
