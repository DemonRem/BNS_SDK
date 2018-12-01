#pragma once

/*
#############################################################################################
# Blade and Soul (25) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: ALAudio_classes.h
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

// Class ALAudio.ALAudioDevice
// 0x0090 (0x0564 - 0x04D4)
class UALAudioDevice : public UAudioDevice
{
public:
	unsigned char                                      UnknownData00[ 0x14 ];                            		// 0x04D4 (0x0014) MISSED OFFSET
	struct FString                                     DeviceName;                                       		// 0x04E8 (0x000C) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      UnknownData01[ 0x68 ];                            		// 0x04F4 (0x0068) MISSED OFFSET
	float                                              MinOggVorbisDurationEditor;                       		// 0x055C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MinOggVorbisDurationGame;                         		// 0x0560 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3493 ];

		return pClassPointer;
	};

};

//UClass* UALAudioDevice::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif