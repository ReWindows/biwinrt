#pragma once
#include "../windissect_forwards.h"

// Reconstructed from biwinrt.dll by Windissect. 34 member(s).
namespace Windows::ApplicationModel::Background {
class CBackgroundWorkManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBackgroundWorkManager@Background@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AssociateWorkItem@CBackgroundWorkManager@Background@ApplicationModel@Windows@@UEAAJU_GUID@@PEAUHSTRING__@@1IIPEAPEAUIBackgroundTaskRegistration@234@@Z
    virtual long AssociateWorkItem(_GUID, HSTRING__*, HSTRING__*, unsigned int, unsigned int, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBackgroundWorkManager@Background@ApplicationModel@Windows@@QEAA@XZ
    CBackgroundWorkManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEventW@CBackgroundWorkManager@Background@ApplicationModel@Windows@@UEAAJKPEAU_GUID@@@Z
    virtual long CreateEventW(unsigned long, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGroup@CBackgroundWorkManager@Background@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAUIBackgroundTaskRegistrationGroup@234@@Z
    virtual long CreateGroup(HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteEvent@CBackgroundWorkManager@Background@ApplicationModel@Windows@@UEAAJU_GUID@@@Z
    virtual long DeleteEvent(_GUID);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroup@CBackgroundWorkManager@Background@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIBackgroundTaskRegistrationGroup@234@@Z
    virtual long GetGroup(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGrouplessTasks@CBackgroundWorkManager@Background@ApplicationModel@Windows@@UEAAJPEAPEAU?$IMapView@U_GUID@@PEAUIBackgroundTaskRegistration@Background@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long GetGrouplessTasks(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CBackgroundWorkManager@Background@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CBackgroundWorkManager@Background@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskWithId@CBackgroundWorkManager@Background@ApplicationModel@Windows@@UEAAJU_GUID@@PEAPEAUIBackgroundTaskRegistration@234@@Z
    virtual long GetTaskWithId(_GUID, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTasksForGroup@CBackgroundWorkManager@Background@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IMapView@U_GUID@@PEAVBackgroundTaskRegistration@Background@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long GetTasksForGroup(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CBackgroundWorkManager@Background@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CBackgroundWorkManager@Background@ApplicationModel@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CBackgroundWorkManager@Background@ApplicationModel@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBackgroundWorkManager@Background@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBackgroundWorkManager@Background@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTaskWithWnfStateName@CBackgroundWorkManager@Background@ApplicationModel@Windows@@UEAAJPEAU_WNF_STATE_NAME@@@Z
    virtual long RemoveTaskWithWnfStateName(_WNF_STATE_NAME *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CBackgroundWorkManager@Background@ApplicationModel@Windows@@UEAAJXZ
    virtual long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalEvent@CBackgroundWorkManager@Background@ApplicationModel@Windows@@UEAAJU_GUID@@@Z
    virtual long SignalEvent(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RegisteredBackgroundTasks@CBackgroundWorkManager@Background@ApplicationModel@Windows@@UEAAJPEAPEAU?$IMapView@U_GUID@@PEAUIBackgroundTaskRegistration@Background@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long get_RegisteredBackgroundTasks(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RegisteredGroups@CBackgroundWorkManager@Background@ApplicationModel@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAVBackgroundTaskRegistrationGroup@Background@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long get_RegisteredGroups(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBackgroundWorkManager@Background@ApplicationModel@Windows@@UEAA@XZ
    virtual ~CBackgroundWorkManager();
};
} // namespace Windows::ApplicationModel::Background
