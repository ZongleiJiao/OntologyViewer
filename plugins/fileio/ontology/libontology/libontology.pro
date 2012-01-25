TEMPLATE = lib
TARGET = ontology

CONFIG += shared warn_off

INCLUDEPATH += .. . \
               /usr/lib/jvm/java-6-sun-1.6.0.26/include \
               /usr/lib/jvm/java-6-sun-1.6.0.26/include/linux \
               /usr/lib/jvm/java-6-sun-1.6.0.26/jre/lib/i386/client
DEPENDPATH += .. . \
               /usr/lib/jvm/java-6-sun-1.6.0.26/include \
               /usr/lib/jvm/java-6-sun-1.6.0.26/include/linux \
               /usr/lib/jvm/java-6-sun-1.6.0.26/jre/lib/i386/client
include(../common_options.qmake)
CONFIG -= qt

HEADERS += \
    java_wrapper.h \
    java_util_SortedMap.h \
    java_util_Set.h \
    java_util_Map.h \
    java_util_Locale.h \
    java_util_ListIterator.h \
    java_util_List.h \
    java_util_Iterator.h \
    java_util_Enumeration.h \
    java_util_Date.h \
    java_util_Comparator.h \
    java_util_Collection.h \
    java_security_Timestamp.h \
    java_security_PublicKey.h \
    java_security_ProtectionDomain.h \
    java_security_Principal.h \
    java_security_PermissionCollection.h \
    java_security_Permission.h \
    java_security_Key.h \
    java_security_Guard.h \
    java_security_CodeSource.h \
    java_security_CodeSigner.h \
    java_security_cert_CertPath.h \
    java_security_cert_Certificate.h \
    java_nio_ShortBuffer.h \
    java_nio_LongBuffer.h \
    java_nio_IntBuffer.h \
    java_nio_FloatBuffer.h \
    java_nio_DoubleBuffer.h \
    java_nio_charset_CodingErrorAction.h \
    java_nio_charset_CoderResult.h \
    java_nio_charset_CharsetEncoder.h \
    java_nio_charset_CharsetDecoder.h \
    java_nio_charset_Charset.h \
    java_nio_CharBuffer.h \
    java_nio_ByteOrder.h \
    java_nio_ByteBuffer.h \
    java_nio_Buffer.h \
    java_net_URLStreamHandlerFactory.h \
    java_net_URLStreamHandler.h \
    java_net_URLConnection.h \
    java_net_URL.h \
    java_net_URI.h \
    java_net_SocketAddress.h \
    java_net_Proxy__Type.h \
    java_net_Proxy.h \
    java_net_FileNameMap.h \
    java_net_ContentHandlerFactory.h \
    java_net_ContentHandler.h \
    java_marker.h \
    java_magic.h \
    java_lang_StringBuilder.h \
    java_lang_StringBuffer.h \
    java_lang_String.h \
    java_lang_reflect_TypeVariable.h \
    java_lang_reflect_Type.h \
    java_lang_reflect_Method.h \
    java_lang_reflect_Member.h \
    java_lang_reflect_GenericDeclaration.h \
    java_lang_reflect_Field.h \
    java_lang_reflect_Constructor.h \
    java_lang_reflect_AnnotatedElement.h \
    java_lang_reflect_AccessibleObject.h \
    java_lang_Readable.h \
    java_lang_Package.h \
    java_lang_Object.h \
    java_lang_Iterable.h \
    java_lang_Enum.h \
    java_lang_Comparable.h \
    java_lang_Cloneable.h \
    java_lang_ClassLoader.h \
    java_lang_Class.h \
    java_lang_CharSequence.h \
    java_lang_Appendable.h \
    java_lang_annotation_Annotation.h \
    java_lang_AbstractStringBuilder.h \
    java_io_Serializable.h \
    java_io_OutputStream.h \
    java_io_InputStream.h \
    java_io_Flushable.h \
    java_io_Closeable.h \
    java_classes.h \
    java_base_class.h \
    java_array.h \
    edu_monash_it_OWLAPIWrapper.h

SOURCES += \
    test.cpp \
    java_wrapper.cpp \
    java_util_SortedMap.cpp \
    java_util_Set.cpp \
    java_util_Map.cpp \
    java_util_Locale.cpp \
    java_util_ListIterator.cpp \
    java_util_List.cpp \
    java_util_Iterator.cpp \
    java_util_Enumeration.cpp \
    java_util_Date.cpp \
    java_util_Comparator.cpp \
    java_util_Collection.cpp \
    java_security_Timestamp.cpp \
    java_security_PublicKey.cpp \
    java_security_ProtectionDomain.cpp \
    java_security_Principal.cpp \
    java_security_PermissionCollection.cpp \
    java_security_Permission.cpp \
    java_security_Key.cpp \
    java_security_Guard.cpp \
    java_security_CodeSource.cpp \
    java_security_CodeSigner.cpp \
    java_security_cert_CertPath.cpp \
    java_security_cert_Certificate.cpp \
    java_nio_ShortBuffer.cpp \
    java_nio_LongBuffer.cpp \
    java_nio_IntBuffer.cpp \
    java_nio_FloatBuffer.cpp \
    java_nio_DoubleBuffer.cpp \
    java_nio_charset_CodingErrorAction.cpp \
    java_nio_charset_CoderResult.cpp \
    java_nio_charset_CharsetEncoder.cpp \
    java_nio_charset_CharsetDecoder.cpp \
    java_nio_charset_Charset.cpp \
    java_nio_CharBuffer.cpp \
    java_nio_ByteOrder.cpp \
    java_nio_ByteBuffer.cpp \
    java_nio_Buffer.cpp \
    java_net_URLStreamHandlerFactory.cpp \
    java_net_URLStreamHandler.cpp \
    java_net_URLConnection.cpp \
    java_net_URL.cpp \
    java_net_URI.cpp \
    java_net_SocketAddress.cpp \
    java_net_Proxy__Type.cpp \
    java_net_Proxy.cpp \
    java_net_FileNameMap.cpp \
    java_net_ContentHandlerFactory.cpp \
    java_net_ContentHandler.cpp \
    java_lang_StringBuilder.cpp \
    java_lang_StringBuffer.cpp \
    java_lang_String.cpp \
    java_lang_reflect_TypeVariable.cpp \
    java_lang_reflect_Type.cpp \
    java_lang_reflect_Method.cpp \
    java_lang_reflect_Member.cpp \
    java_lang_reflect_GenericDeclaration.cpp \
    java_lang_reflect_Field.cpp \
    java_lang_reflect_Constructor.cpp \
    java_lang_reflect_AnnotatedElement.cpp \
    java_lang_reflect_AccessibleObject.cpp \
    java_lang_Readable.cpp \
    java_lang_Package.cpp \
    java_lang_Object.cpp \
    java_lang_Iterable.cpp \
    java_lang_Enum.cpp \
    java_lang_Comparable.cpp \
    java_lang_Cloneable.cpp \
    java_lang_ClassLoader.cpp \
    java_lang_Class.cpp \
    java_lang_CharSequence.cpp \
    java_lang_Appendable.cpp \
    java_lang_annotation_Annotation.cpp \
    java_lang_AbstractStringBuilder.cpp \
    java_io_Serializable.cpp \
    java_io_OutputStream.cpp \
    java_io_InputStream.cpp \
    java_io_Flushable.cpp \
    java_io_Closeable.cpp \
    java_base_class.cpp \
    java_array.cpp \
    edu_monash_it_OWLAPIWrapper.cpp



unix:!symbian|win32: LIBS += -L$$PWD/../../../../../../usr/lib/jvm/java-6-sun-1.6.0.26/jre/lib/i386/client/ -ljvm

INCLUDEPATH += $$PWD/../../../../../../usr/lib/jvm/java-6-sun-1.6.0.26/jre/lib/i386/client
DEPENDPATH += $$PWD/../../../../../../usr/lib/jvm/java-6-sun-1.6.0.26/jre/lib/i386/client
