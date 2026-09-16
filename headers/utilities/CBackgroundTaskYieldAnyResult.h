#pragma once
#include "../windissect_forwards.h"

// Reconstructed from biwinrt.dll by Windissect. 18 member(s).
namespace Windows::ApplicationModel::Background {
class CBackgroundTaskYieldAnyResult {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBackgroundTaskYieldAnyResult@Background@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBackgroundTaskYieldAnyResult@Background@ApplicationModel@Windows@@QEAA@XZ
    CBackgroundTaskYieldAnyResult();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CBackgroundTaskYieldAnyResult@Background@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CBackgroundTaskYieldAnyResult@Background@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CBackgroundTaskYieldAnyResult@Background@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBackgroundTaskYieldAnyResult@Background@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBackgroundTaskYieldAnyResult@Background@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Source@CBackgroundTaskYieldAnyResult@Background@ApplicationModel@Windows@@UEAAJPEAPEAUIBackgroundTaskYieldable@234@@Z
    virtual long get_Source(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Status@CBackgroundTaskYieldAnyResult@Background@ApplicationModel@Windows@@UEAAJPEAW4BackgroundTaskYieldStatus@234@@Z
    virtual long get_Status(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBackgroundTaskYieldAnyResult@Background@ApplicationModel@Windows@@UEAA@XZ
    virtual ~CBackgroundTaskYieldAnyResult();
};
} // namespace Windows::ApplicationModel::Background
