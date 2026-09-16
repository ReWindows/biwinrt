#pragma once
#include "../windissect_forwards.h"

// Reconstructed from biwinrt.dll by Windissect. 17 member(s).
namespace Windows::ApplicationModel::Background {
class CBackgroundTaskCompletedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBackgroundTaskCompletedEventArgs@Background@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckResult@CBackgroundTaskCompletedEventArgs@Background@ApplicationModel@Windows@@UEAAJXZ
    virtual long CheckResult();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CBackgroundTaskCompletedEventArgs@Background@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CBackgroundTaskCompletedEventArgs@Background@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CBackgroundTaskCompletedEventArgs@Background@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBackgroundTaskCompletedEventArgs@Background@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBackgroundTaskCompletedEventArgs@Background@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CBackgroundTaskCompletedEventArgs@Background@ApplicationModel@Windows@@UEAAJU_GUID@@J@Z
    virtual long RuntimeClassInitialize(_GUID, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InstanceId@CBackgroundTaskCompletedEventArgs@Background@ApplicationModel@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_InstanceId(_GUID *);
};
} // namespace Windows::ApplicationModel::Background
