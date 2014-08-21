/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.PolicySpi
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_POLICYSPI_HPP_DECL
#define J2CPP_JAVA_SECURITY_POLICYSPI_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace security {

	class PolicySpi;
	class PolicySpi
		: public object<PolicySpi>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit PolicySpi(jobject jobj)
		: object<PolicySpi>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		PolicySpi();
	}; //class PolicySpi

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_POLICYSPI_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_POLICYSPI_HPP_IMPL
#define J2CPP_JAVA_SECURITY_POLICYSPI_HPP_IMPL

namespace j2cpp {



java::security::PolicySpi::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::security::PolicySpi::PolicySpi()
: object<java::security::PolicySpi>(
	call_new_object<
		java::security::PolicySpi::J2CPP_CLASS_NAME,
		java::security::PolicySpi::J2CPP_METHOD_NAME(0),
		java::security::PolicySpi::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}







J2CPP_DEFINE_CLASS(java::security::PolicySpi,"java/security/PolicySpi")
J2CPP_DEFINE_METHOD(java::security::PolicySpi,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::security::PolicySpi,1,"engineImplies","(Ljava/security/ProtectionDomain;Ljava/security/Permission;)Z")
J2CPP_DEFINE_METHOD(java::security::PolicySpi,2,"engineRefresh","()V")
J2CPP_DEFINE_METHOD(java::security::PolicySpi,3,"engineGetPermissions","(Ljava/security/CodeSource;)Ljava/security/PermissionCollection;")
J2CPP_DEFINE_METHOD(java::security::PolicySpi,4,"engineGetPermissions","(Ljava/security/ProtectionDomain;)Ljava/security/PermissionCollection;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_POLICYSPI_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION