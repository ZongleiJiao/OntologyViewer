
QT           += xml svg
TEMPLATE      = lib
CONFIG       += qt plugin
TARGET        = $$qtLibraryTarget(fileio_ontology)

include(../../../common_options.qmake)
include(../fileio_plugin_options.pri)

INCLUDEPATH += . \
               ./libontology \
               /usr/lib/jvm/java-6-sun-1.6.0.26/include \
               /usr/lib/jvm/java-6-sun-1.6.0.26/include/linux \
               /usr/lib/jvm/java-6-sun-1.6.0.26/jre/lib/i386/client
DEPENDPATH += . \
               ./libontology \
               /usr/lib/jvm/java-6-sun-1.6.0.26/include \
               /usr/lib/jvm/java-6-sun-1.6.0.26/include/linux \
               /usr/lib/jvm/java-6-sun-1.6.0.26/jre/lib/i386/client

HEADERS       = \
    libontology/java_wrapper.h \
    libontology/java_util_SortedMap.h \
    libontology/java_util_Set.h \
    libontology/java_util_Map.h \
    libontology/java_util_Locale.h \
    libontology/java_util_ListIterator.h \
    libontology/java_util_List.h \
    libontology/java_util_Iterator.h \
    libontology/java_util_Enumeration.h \
    libontology/java_util_Date.h \
    libontology/java_util_Comparator.h \
    libontology/java_util_Collection.h \
    libontology/java_security_Timestamp.h \
    libontology/java_security_PublicKey.h \
    libontology/java_security_ProtectionDomain.h \
    libontology/java_security_Principal.h \
    libontology/java_security_PermissionCollection.h \
    libontology/java_security_Permission.h \
    libontology/java_security_Key.h \
    libontology/java_security_Guard.h \
    libontology/java_security_CodeSource.h \
    libontology/java_security_CodeSigner.h \
    libontology/java_security_cert_CertPath.h \
    libontology/java_security_cert_Certificate.h \
    libontology/java_nio_ShortBuffer.h \
    libontology/java_nio_LongBuffer.h \
    libontology/java_nio_IntBuffer.h \
    libontology/java_nio_FloatBuffer.h \
    libontology/java_nio_DoubleBuffer.h \
    libontology/java_nio_charset_CodingErrorAction.h \
    libontology/java_nio_charset_CoderResult.h \
    libontology/java_nio_charset_CharsetEncoder.h \
    libontology/java_nio_charset_CharsetDecoder.h \
    libontology/java_nio_charset_Charset.h \
    libontology/java_nio_CharBuffer.h \
    libontology/java_nio_ByteOrder.h \
    libontology/java_nio_ByteBuffer.h \
    libontology/java_nio_Buffer.h \
    libontology/java_net_URLStreamHandlerFactory.h \
    libontology/java_net_URLStreamHandler.h \
    libontology/java_net_URLConnection.h \
    libontology/java_net_URL.h \
    libontology/java_net_URI.h \
    libontology/java_net_SocketAddress.h \
    libontology/java_net_Proxy__Type.h \
    libontology/java_net_Proxy.h \
    libontology/java_net_FileNameMap.h \
    libontology/java_net_ContentHandlerFactory.h \
    libontology/java_net_ContentHandler.h \
    libontology/java_marker.h \
    libontology/java_magic.h \
    libontology/java_lang_StringBuilder.h \
    libontology/java_lang_StringBuffer.h \
    libontology/java_lang_String.h \
    libontology/java_lang_reflect_TypeVariable.h \
    libontology/java_lang_reflect_Type.h \
    libontology/java_lang_reflect_Method.h \
    libontology/java_lang_reflect_Member.h \
    libontology/java_lang_reflect_GenericDeclaration.h \
    libontology/java_lang_reflect_Field.h \
    libontology/java_lang_reflect_Constructor.h \
    libontology/java_lang_reflect_AnnotatedElement.h \
    libontology/java_lang_reflect_AccessibleObject.h \
    libontology/java_lang_Readable.h \
    libontology/java_lang_Package.h \
    libontology/java_lang_Object.h \
    libontology/java_lang_Iterable.h \
    libontology/java_lang_Enum.h \
    libontology/java_lang_Comparable.h \
    libontology/java_lang_Cloneable.h \
    libontology/java_lang_ClassLoader.h \
    libontology/java_lang_Class.h \
    libontology/java_lang_CharSequence.h \
    libontology/java_lang_Appendable.h \
    libontology/java_lang_annotation_Annotation.h \
    libontology/java_lang_AbstractStringBuilder.h \
    libontology/java_io_Serializable.h \
    libontology/java_io_OutputStream.h \
    libontology/java_io_InputStream.h \
    libontology/java_io_Flushable.h \
    libontology/java_io_Closeable.h \
    libontology/java_classes.h \
    libontology/java_base_class.h \
    libontology/java_array.h \
    libontology/edu_monash_infotech_OWLAPIWrapper.h

SOURCES       = plugin.cpp \
    libontology/java_wrapper.cpp \
    libontology/java_util_SortedMap.cpp \
    libontology/java_util_Set.cpp \
    libontology/java_util_Map.cpp \
    libontology/java_util_Locale.cpp \
    libontology/java_util_ListIterator.cpp \
    libontology/java_util_List.cpp \
    libontology/java_util_Iterator.cpp \
    libontology/java_util_Enumeration.cpp \
    libontology/java_util_Date.cpp \
    libontology/java_util_Comparator.cpp \
    libontology/java_util_Collection.cpp \
    libontology/java_security_Timestamp.cpp \
    libontology/java_security_PublicKey.cpp \
    libontology/java_security_ProtectionDomain.cpp \
    libontology/java_security_Principal.cpp \
    libontology/java_security_PermissionCollection.cpp \
    libontology/java_security_Permission.cpp \
    libontology/java_security_Key.cpp \
    libontology/java_security_Guard.cpp \
    libontology/java_security_CodeSource.cpp \
    libontology/java_security_CodeSigner.cpp \
    libontology/java_security_cert_CertPath.cpp \
    libontology/java_security_cert_Certificate.cpp \
    libontology/java_nio_ShortBuffer.cpp \
    libontology/java_nio_LongBuffer.cpp \
    libontology/java_nio_IntBuffer.cpp \
    libontology/java_nio_FloatBuffer.cpp \
    libontology/java_nio_DoubleBuffer.cpp \
    libontology/java_nio_charset_CodingErrorAction.cpp \
    libontology/java_nio_charset_CoderResult.cpp \
    libontology/java_nio_charset_CharsetEncoder.cpp \
    libontology/java_nio_charset_CharsetDecoder.cpp \
    libontology/java_nio_charset_Charset.cpp \
    libontology/java_nio_CharBuffer.cpp \
    libontology/java_nio_ByteOrder.cpp \
    libontology/java_nio_ByteBuffer.cpp \
    libontology/java_nio_Buffer.cpp \
    libontology/java_net_URLStreamHandlerFactory.cpp \
    libontology/java_net_URLStreamHandler.cpp \
    libontology/java_net_URLConnection.cpp \
    libontology/java_net_URL.cpp \
    libontology/java_net_URI.cpp \
    libontology/java_net_SocketAddress.cpp \
    libontology/java_net_Proxy__Type.cpp \
    libontology/java_net_Proxy.cpp \
    libontology/java_net_FileNameMap.cpp \
    libontology/java_net_ContentHandlerFactory.cpp \
    libontology/java_net_ContentHandler.cpp \
    libontology/java_lang_StringBuilder.cpp \
    libontology/java_lang_StringBuffer.cpp \
    libontology/java_lang_String.cpp \
    libontology/java_lang_reflect_TypeVariable.cpp \
    libontology/java_lang_reflect_Type.cpp \
    libontology/java_lang_reflect_Method.cpp \
    libontology/java_lang_reflect_Member.cpp \
    libontology/java_lang_reflect_GenericDeclaration.cpp \
    libontology/java_lang_reflect_Field.cpp \
    libontology/java_lang_reflect_Constructor.cpp \
    libontology/java_lang_reflect_AnnotatedElement.cpp \
    libontology/java_lang_reflect_AccessibleObject.cpp \
    libontology/java_lang_Readable.cpp \
    libontology/java_lang_Package.cpp \
    libontology/java_lang_Object.cpp \
    libontology/java_lang_Iterable.cpp \
    libontology/java_lang_Enum.cpp \
    libontology/java_lang_Comparable.cpp \
    libontology/java_lang_Cloneable.cpp \
    libontology/java_lang_ClassLoader.cpp \
    libontology/java_lang_Class.cpp \
    libontology/java_lang_CharSequence.cpp \
    libontology/java_lang_Appendable.cpp \
    libontology/java_lang_annotation_Annotation.cpp \
    libontology/java_lang_AbstractStringBuilder.cpp \
    libontology/java_io_Serializable.cpp \
    libontology/java_io_OutputStream.cpp \
    libontology/java_io_InputStream.cpp \
    libontology/java_io_Flushable.cpp \
    libontology/java_io_Closeable.cpp \
    libontology/java_base_class.cpp \
    libontology/java_array.cpp \
    libontology/edu_monash_infotech_OWLAPIWrapper.cpp

unix:!symbian|win32: LIBS += -L/usr/lib/jvm/java-6-sun-1.6.0.26/jre/lib/i386/client/ -ljvm

INCLUDEPATH += /usr/lib/jvm/java-6-sun-1.6.0.26/jre/lib/i386/client
DEPENDPATH += /usr/lib/jvm/java-6-sun-1.6.0.26/jre/lib/i386/client










