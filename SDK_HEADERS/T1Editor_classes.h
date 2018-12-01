#pragma once

/*
#############################################################################################
# Blade and Soul (25) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: T1Editor_classes.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
# Mentions: Ant.
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class T1Editor.RetrieveMarkedPackagesCommandlet
// 0x0060 (0x00DC - 0x007C)
class URetrieveMarkedPackagesCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x60 ];                            		// 0x007C (0x0060) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3605 ];

		return pClassPointer;
	};

};

//UClass* URetrieveMarkedPackagesCommandlet::pClassPointer = NULL;

// Class T1Editor.T1GatherResourceListCommandlet
// 0x0000 (0x007C - 0x007C)
class UT1GatherResourceListCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3607 ];

		return pClassPointer;
	};

};

//UClass* UT1GatherResourceListCommandlet::pClassPointer = NULL;

// Class T1Editor.ValidateLocalPackagesCommandlet
// 0x0000 (0x007C - 0x007C)
class UValidateLocalPackagesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3609 ];

		return pClassPointer;
	};

};

//UClass* UValidateLocalPackagesCommandlet::pClassPointer = NULL;

// Class T1Editor.CopyLocalPublicPkgCommandlet
// 0x0000 (0x007C - 0x007C)
class UCopyLocalPublicPkgCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3611 ];

		return pClassPointer;
	};

};

//UClass* UCopyLocalPublicPkgCommandlet::pClassPointer = NULL;

// Class T1Editor.AutoResourceProfileCommandlet
// 0x0000 (0x007C - 0x007C)
class UAutoResourceProfileCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3613 ];

		return pClassPointer;
	};

};

//UClass* UAutoResourceProfileCommandlet::pClassPointer = NULL;

// Class T1Editor.CacheTableBuilderCommandlet
// 0x0000 (0x007C - 0x007C)
class UCacheTableBuilderCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3615 ];

		return pClassPointer;
	};

};

//UClass* UCacheTableBuilderCommandlet::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif