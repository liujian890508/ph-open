/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.ref.WeakReference
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REF_WEAKREFERENCE_HPP_DECL
#define J2CPP_JAVA_LANG_REF_WEAKREFERENCE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { namespace ref { class Reference; } } } }
namespace j2cpp { namespace java { namespace lang { namespace ref { class ReferenceQueue; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/ref/Reference.hpp>
#include <java/lang/ref/ReferenceQueue.hpp>


namespace j2cpp {

namespace java { namespace lang { namespace ref {

	class WeakReference;
	class WeakReference
		: public object<WeakReference>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit WeakReference(jobject jobj)
		: object<WeakReference>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::ref::Reference>() const;


		WeakReference(local_ref< java::lang::Object > const&);
		WeakReference(local_ref< java::lang::Object > const&, local_ref< java::lang::ref::ReferenceQueue > const&);
	}; //class WeakReference

} //namespace ref
} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REF_WEAKREFERENCE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REF_WEAKREFERENCE_HPP_IMPL
#define J2CPP_JAVA_LANG_REF_WEAKREFERENCE_HPP_IMPL

namespace j2cpp {



java::lang::ref::WeakReference::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::lang::ref::WeakReference::operator local_ref<java::lang::ref::Reference>() const
{
	return local_ref<java::lang::ref::Reference>(get_jobject());
}


java::lang::ref::WeakReference::WeakReference(local_ref< java::lang::Object > const &a0)
: object<java::lang::ref::WeakReference>(
	call_new_object<
		java::lang::ref::WeakReference::J2CPP_CLASS_NAME,
		java::lang::ref::WeakReference::J2CPP_METHOD_NAME(0),
		java::lang::ref::WeakReference::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



java::lang::ref::WeakReference::WeakReference(local_ref< java::lang::Object > const &a0, local_ref< java::lang::ref::ReferenceQueue > const &a1)
: object<java::lang::ref::WeakReference>(
	call_new_object<
		java::lang::ref::WeakReference::J2CPP_CLASS_NAME,
		java::lang::ref::WeakReference::J2CPP_METHOD_NAME(1),
		java::lang::ref::WeakReference::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}



J2CPP_DEFINE_CLASS(java::lang::ref::WeakReference,"java/lang/ref/WeakReference")
J2CPP_DEFINE_METHOD(java::lang::ref::WeakReference,0,"<init>","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::lang::ref::WeakReference,1,"<init>","(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REF_WEAKREFERENCE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
