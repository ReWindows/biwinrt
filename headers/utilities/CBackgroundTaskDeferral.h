#pragma once
#include "../windissect_forwards.h"

// Reconstructed from biwinrt.dll by Windissect. 15 member(s).
namespace Windows::ApplicationModel::Background {
class CBackgroundTaskDeferral {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBackgroundTaskDeferral@Background@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBackgroundTaskDeferral@Background@ApplicationModel@Windows@@QEAA@XZ
    CBackgroundTaskDeferral();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@CBackgroundTaskDeferral@Background@ApplicationModel@Windows@@UEAAJXZ
    virtual long Complete();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CBackgroundTaskDeferral@Background@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CBackgroundTaskDeferral@Background@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CBackgroundTaskDeferral@Background@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBackgroundTaskDeferral@Background@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBackgroundTaskDeferral@Background@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CBackgroundTaskDeferral@Background@ApplicationModel@Windows@@UEAAJPEAVCBackgroundTaskInstance@234@@Z
    virtual long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBackgroundTaskDeferral@Background@ApplicationModel@Windows@@UEAA@XZ
    virtual ~CBackgroundTaskDeferral();
};
} // namespace Windows::ApplicationModel::Background
