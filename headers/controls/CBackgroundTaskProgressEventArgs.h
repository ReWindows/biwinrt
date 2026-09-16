#pragma once
#include "../windissect_forwards.h"

// Reconstructed from biwinrt.dll by Windissect. 17 member(s).
namespace Windows::ApplicationModel::Background {
class CBackgroundTaskProgressEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBackgroundTaskProgressEventArgs@Background@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CBackgroundTaskProgressEventArgs@Background@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CBackgroundTaskProgressEventArgs@Background@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CBackgroundTaskProgressEventArgs@Background@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBackgroundTaskProgressEventArgs@Background@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBackgroundTaskProgressEventArgs@Background@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CBackgroundTaskProgressEventArgs@Background@ApplicationModel@Windows@@UEAAJU_GUID@@I@Z
    virtual long RuntimeClassInitialize(_GUID, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InstanceId@CBackgroundTaskProgressEventArgs@Background@ApplicationModel@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_InstanceId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Progress@CBackgroundTaskProgressEventArgs@Background@ApplicationModel@Windows@@UEAAJPEAI@Z
    virtual long get_Progress(unsigned int *);
};
} // namespace Windows::ApplicationModel::Background
