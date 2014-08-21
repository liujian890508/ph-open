/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.os.IBinder
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_IBINDER_HPP_DECL
#define J2CPP_ANDROID_OS_IBINDER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class FileDescriptor; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class IInterface; } } }
namespace j2cpp { namespace android { namespace os { namespace IBinder_ { class DeathRecipient; } } } }


#include <android/os/IBinder.hpp>
#include <android/os/IInterface.hpp>
#include <android/os/Parcel.hpp>
#include <java/io/FileDescriptor.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace os {

	class IBinder;
	namespace IBinder_ {

		class DeathRecipient;
		class DeathRecipient
			: public object<DeathRecipient>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit DeathRecipient(jobject jobj)
			: object<DeathRecipient>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void binderDied();
		}; //class DeathRecipient

	} //namespace IBinder_

	class IBinder
		: public object<IBinder>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)

		typedef IBinder_::DeathRecipient DeathRecipient;

		explicit IBinder(jobject jobj)
		: object<IBinder>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::String > getInterfaceDescriptor();
		jboolean pingBinder();
		jboolean isBinderAlive();
		local_ref< android::os::IInterface > queryLocalInterface(local_ref< java::lang::String >  const&);
		void dump(local_ref< java::io::FileDescriptor >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&);
		jboolean transact(jint, local_ref< android::os::Parcel >  const&, local_ref< android::os::Parcel >  const&, jint);
		void linkToDeath(local_ref< android::os::IBinder_::DeathRecipient >  const&, jint);
		jboolean unlinkToDeath(local_ref< android::os::IBinder_::DeathRecipient >  const&, jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > FIRST_CALL_TRANSACTION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > LAST_CALL_TRANSACTION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > PING_TRANSACTION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > DUMP_TRANSACTION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > INTERFACE_TRANSACTION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > FLAG_ONEWAY;
	}; //class IBinder

} //namespace os
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_IBINDER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_IBINDER_HPP_IMPL
#define J2CPP_ANDROID_OS_IBINDER_HPP_IMPL

namespace j2cpp {




android::os::IBinder_::DeathRecipient::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::os::IBinder_::DeathRecipient::binderDied()
{
	return call_method<
		android::os::IBinder_::DeathRecipient::J2CPP_CLASS_NAME,
		android::os::IBinder_::DeathRecipient::J2CPP_METHOD_NAME(0),
		android::os::IBinder_::DeathRecipient::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::os::IBinder_::DeathRecipient,"android/os/IBinder$DeathRecipient")
J2CPP_DEFINE_METHOD(android::os::IBinder_::DeathRecipient,0,"binderDied","()V")



android::os::IBinder::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::lang::String > android::os::IBinder::getInterfaceDescriptor()
{
	return call_method<
		android::os::IBinder::J2CPP_CLASS_NAME,
		android::os::IBinder::J2CPP_METHOD_NAME(0),
		android::os::IBinder::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jboolean android::os::IBinder::pingBinder()
{
	return call_method<
		android::os::IBinder::J2CPP_CLASS_NAME,
		android::os::IBinder::J2CPP_METHOD_NAME(1),
		android::os::IBinder::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject());
}

jboolean android::os::IBinder::isBinderAlive()
{
	return call_method<
		android::os::IBinder::J2CPP_CLASS_NAME,
		android::os::IBinder::J2CPP_METHOD_NAME(2),
		android::os::IBinder::J2CPP_METHOD_SIGNATURE(2), 
		jboolean
	>(get_jobject());
}

local_ref< android::os::IInterface > android::os::IBinder::queryLocalInterface(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::os::IBinder::J2CPP_CLASS_NAME,
		android::os::IBinder::J2CPP_METHOD_NAME(3),
		android::os::IBinder::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::os::IInterface >
	>(get_jobject(), a0);
}

void android::os::IBinder::dump(local_ref< java::io::FileDescriptor > const &a0, local_ref< array< local_ref< java::lang::String >, 1> > const &a1)
{
	return call_method<
		android::os::IBinder::J2CPP_CLASS_NAME,
		android::os::IBinder::J2CPP_METHOD_NAME(4),
		android::os::IBinder::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1);
}

jboolean android::os::IBinder::transact(jint a0, local_ref< android::os::Parcel > const &a1, local_ref< android::os::Parcel > const &a2, jint a3)
{
	return call_method<
		android::os::IBinder::J2CPP_CLASS_NAME,
		android::os::IBinder::J2CPP_METHOD_NAME(5),
		android::os::IBinder::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject(), a0, a1, a2, a3);
}

void android::os::IBinder::linkToDeath(local_ref< android::os::IBinder_::DeathRecipient > const &a0, jint a1)
{
	return call_method<
		android::os::IBinder::J2CPP_CLASS_NAME,
		android::os::IBinder::J2CPP_METHOD_NAME(6),
		android::os::IBinder::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0, a1);
}

jboolean android::os::IBinder::unlinkToDeath(local_ref< android::os::IBinder_::DeathRecipient > const &a0, jint a1)
{
	return call_method<
		android::os::IBinder::J2CPP_CLASS_NAME,
		android::os::IBinder::J2CPP_METHOD_NAME(7),
		android::os::IBinder::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject(), a0, a1);
}


static_field<
	android::os::IBinder::J2CPP_CLASS_NAME,
	android::os::IBinder::J2CPP_FIELD_NAME(0),
	android::os::IBinder::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::os::IBinder::FIRST_CALL_TRANSACTION;

static_field<
	android::os::IBinder::J2CPP_CLASS_NAME,
	android::os::IBinder::J2CPP_FIELD_NAME(1),
	android::os::IBinder::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::os::IBinder::LAST_CALL_TRANSACTION;

static_field<
	android::os::IBinder::J2CPP_CLASS_NAME,
	android::os::IBinder::J2CPP_FIELD_NAME(2),
	android::os::IBinder::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::os::IBinder::PING_TRANSACTION;

static_field<
	android::os::IBinder::J2CPP_CLASS_NAME,
	android::os::IBinder::J2CPP_FIELD_NAME(3),
	android::os::IBinder::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::os::IBinder::DUMP_TRANSACTION;

static_field<
	android::os::IBinder::J2CPP_CLASS_NAME,
	android::os::IBinder::J2CPP_FIELD_NAME(4),
	android::os::IBinder::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::os::IBinder::INTERFACE_TRANSACTION;

static_field<
	android::os::IBinder::J2CPP_CLASS_NAME,
	android::os::IBinder::J2CPP_FIELD_NAME(5),
	android::os::IBinder::J2CPP_FIELD_SIGNATURE(5),
	jint
> android::os::IBinder::FLAG_ONEWAY;


J2CPP_DEFINE_CLASS(android::os::IBinder,"android/os/IBinder")
J2CPP_DEFINE_METHOD(android::os::IBinder,0,"getInterfaceDescriptor","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::os::IBinder,1,"pingBinder","()Z")
J2CPP_DEFINE_METHOD(android::os::IBinder,2,"isBinderAlive","()Z")
J2CPP_DEFINE_METHOD(android::os::IBinder,3,"queryLocalInterface","(Ljava/lang/String;)Landroid/os/IInterface;")
J2CPP_DEFINE_METHOD(android::os::IBinder,4,"dump","(Ljava/io/FileDescriptor;[java.lang.String)V")
J2CPP_DEFINE_METHOD(android::os::IBinder,5,"transact","(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z")
J2CPP_DEFINE_METHOD(android::os::IBinder,6,"linkToDeath","(Landroid/os/IBinder$DeathRecipient;I)V")
J2CPP_DEFINE_METHOD(android::os::IBinder,7,"unlinkToDeath","(Landroid/os/IBinder$DeathRecipient;I)Z")
J2CPP_DEFINE_FIELD(android::os::IBinder,0,"FIRST_CALL_TRANSACTION","I")
J2CPP_DEFINE_FIELD(android::os::IBinder,1,"LAST_CALL_TRANSACTION","I")
J2CPP_DEFINE_FIELD(android::os::IBinder,2,"PING_TRANSACTION","I")
J2CPP_DEFINE_FIELD(android::os::IBinder,3,"DUMP_TRANSACTION","I")
J2CPP_DEFINE_FIELD(android::os::IBinder,4,"INTERFACE_TRANSACTION","I")
J2CPP_DEFINE_FIELD(android::os::IBinder,5,"FLAG_ONEWAY","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_IBINDER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION