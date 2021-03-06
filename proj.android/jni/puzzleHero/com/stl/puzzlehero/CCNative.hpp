/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: com.stl.puzzlehero.CCNative
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_STL_PUZZLEHERO_CCNATIVE_HPP_DECL
#define J2CPP_COM_STL_PUZZLEHERO_CCNATIVE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include "NativeCallback.h"


namespace j2cpp {

namespace com { namespace stl { namespace puzzlehero {

	class CCNative;
	class CCNative
		: public object<CCNative>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
        J2CPP_DECLARE_FIELD(0)

		explicit CCNative(jobject jobj)
		: object<CCNative>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		CCNative();
		static local_ref<java::lang::String> getLocalIpAddress();
		static jboolean isNetworkAvailable();
		static jboolean isWIFIAvailable();
        static jboolean ssoWeiboLogin(local_ref<java::lang::String>, local_ref<java::lang::String>, local_ref<NativeCallback>);
        
        static static_field<J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref<java::lang::String>> mSSORet;
	}; //class CCNative

} //namespace puzzlehero
} //namespace stl
} //namespace com

} //namespace j2cpp

#endif //J2CPP_COM_STL_PUZZLEHERO_CCNATIVE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_STL_PUZZLEHERO_CCNATIVE_HPP_IMPL
#define J2CPP_COM_STL_PUZZLEHERO_CCNATIVE_HPP_IMPL

namespace j2cpp {



com::stl::puzzlehero::CCNative::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


com::stl::puzzlehero::CCNative::CCNative()
: object<com::stl::puzzlehero::CCNative>(
	call_new_object<
		com::stl::puzzlehero::CCNative::J2CPP_CLASS_NAME,
		com::stl::puzzlehero::CCNative::J2CPP_METHOD_NAME(0),
		com::stl::puzzlehero::CCNative::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


local_ref< java::lang::String > com::stl::puzzlehero::CCNative::getLocalIpAddress()
{
	return call_static_method<
		com::stl::puzzlehero::CCNative::J2CPP_CLASS_NAME,
		com::stl::puzzlehero::CCNative::J2CPP_METHOD_NAME(1),
		com::stl::puzzlehero::CCNative::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>();
}

jboolean com::stl::puzzlehero::CCNative::isNetworkAvailable()
{
	return call_static_method<
		com::stl::puzzlehero::CCNative::J2CPP_CLASS_NAME,
		com::stl::puzzlehero::CCNative::J2CPP_METHOD_NAME(2),
		com::stl::puzzlehero::CCNative::J2CPP_METHOD_SIGNATURE(2), 
		jboolean
	>();
}

jboolean com::stl::puzzlehero::CCNative::isWIFIAvailable()
{
	return call_static_method<
		com::stl::puzzlehero::CCNative::J2CPP_CLASS_NAME,
		com::stl::puzzlehero::CCNative::J2CPP_METHOD_NAME(3),
		com::stl::puzzlehero::CCNative::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>();
}

jboolean com::stl::puzzlehero::CCNative::ssoWeiboLogin(local_ref<java::lang::String> appKey, local_ref<java::lang::String> appCB, local_ref<NativeCallback> cb)
{
    return call_static_method<
        com::stl::puzzlehero::CCNative::J2CPP_CLASS_NAME,
        com::stl::puzzlehero::CCNative::J2CPP_METHOD_NAME(4),
        com::stl::puzzlehero::CCNative::J2CPP_METHOD_SIGNATURE(4),
        jboolean
    >(appKey, appCB, cb);
}

static_field<
	com::stl::puzzlehero::CCNative::J2CPP_CLASS_NAME,
	com::stl::puzzlehero::CCNative::J2CPP_FIELD_NAME(0),
	com::stl::puzzlehero::CCNative::J2CPP_FIELD_SIGNATURE(0),
	local_ref<java::lang::String>
> com::stl::puzzlehero::CCNative::mSSORet;


J2CPP_DEFINE_CLASS(com::stl::puzzlehero::CCNative,"com/stl/puzzlehero/CCNative")
J2CPP_DEFINE_METHOD(com::stl::puzzlehero::CCNative,0,"<init>","()V")
J2CPP_DEFINE_METHOD(com::stl::puzzlehero::CCNative,1,"getLocalIpAddress","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(com::stl::puzzlehero::CCNative,2,"isNetworkAvailable","()Z")
J2CPP_DEFINE_METHOD(com::stl::puzzlehero::CCNative,3,"isWIFIAvailable","()Z")
J2CPP_DEFINE_METHOD(com::stl::puzzlehero::CCNative,4,"ssoWeiboLogin","(Ljava/lang/String;Ljava/lang/String;Lcom/stl/puzzlehero/NativeCallback;)Z")
J2CPP_DEFINE_FIELD(com::stl::puzzlehero::CCNative,0,"mSSORet","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_COM_STL_PUZZLEHERO_CCNATIVE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
