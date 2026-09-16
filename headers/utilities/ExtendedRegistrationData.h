#pragma once
#include "../windissect_forwards.h"

// Reconstructed from biwinrt.dll by Windissect. 19 member(s).
namespace Windows::ApplicationModel::Background {
class ExtendedRegistrationData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@ExtendedRegistrationData@Background@ApplicationModel@Windows@@UEAAJPEAEK@Z
    virtual long Deserialize(unsigned char *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ExtendedRegistrationData@Background@ApplicationModel@Windows@@UEAAJXZ
    virtual long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@ExtendedRegistrationData@Background@ApplicationModel@Windows@@UEAAJPEAPEAEPEAK@Z
    virtual long Serialize(unsigned char * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GroupId@ExtendedRegistrationData@Background@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_GroupId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GroupName@ExtendedRegistrationData@Background@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_GroupName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Properties@ExtendedRegistrationData@Background@ApplicationModel@Windows@@UEAAJPEAPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@4@@Z
    virtual long get_Properties(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SchemaVersion@ExtendedRegistrationData@Background@ApplicationModel@Windows@@UEAAJPEAI@Z
    virtual long get_SchemaVersion(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_GroupId@ExtendedRegistrationData@Background@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_GroupId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_GroupName@ExtendedRegistrationData@Background@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_GroupName(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SchemaVersion@ExtendedRegistrationData@Background@ApplicationModel@Windows@@UEAAJI@Z
    virtual long put_SchemaVersion(unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGroupMap@ExtendedRegistrationData@Background@ApplicationModel@Windows@@AEAAJPEAPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@4@@Z
    long CreateGroupMap(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetString@ExtendedRegistrationData@Background@ApplicationModel@Windows@@CAJPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@4@PEAUHSTRING__@@1PEAE@Z
    static long SetString(WindissectOpaque *, HSTRING__*, HSTRING__*, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUInt32@ExtendedRegistrationData@Background@ApplicationModel@Windows@@CAJPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@4@PEAUHSTRING__@@IPEAE@Z
    static long SetUInt32(WindissectOpaque *, HSTRING__*, unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetMap@ExtendedRegistrationData@Background@ApplicationModel@Windows@@CAJPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@4@PEAUHSTRING__@@PEAPEAU5674@PEAE@Z
    static long TryGetMap(WindissectOpaque *, HSTRING__*, WindissectOpaque * *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetString@ExtendedRegistrationData@Background@ApplicationModel@Windows@@CAJPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@4@PEAUHSTRING__@@PEAPEAU8@PEAE@Z
    static long TryGetString(WindissectOpaque *, HSTRING__*, HSTRING__* *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetValue@ExtendedRegistrationData@Background@ApplicationModel@Windows@@CAJPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@4@PEAUHSTRING__@@PEAPEAUIInspectable@@PEAE@Z
    static long TryGetValue(WindissectOpaque *, HSTRING__*, IInspectable * *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateSchema@ExtendedRegistrationData@Background@ApplicationModel@Windows@@AEAAJXZ
    long ValidateSchema();
};
} // namespace Windows::ApplicationModel::Background
