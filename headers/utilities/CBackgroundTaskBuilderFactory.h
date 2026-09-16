#pragma once
#include "../windissect_forwards.h"

// Reconstructed from biwinrt.dll by Windissect. 20 member(s).
namespace Windows::ApplicationModel::Background {
class CBackgroundTaskBuilderFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CBackgroundTaskBuilderFactory@Background@ApplicationModel@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBackgroundTaskBuilderFactory@Background@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBackgroundTaskBuilderFactory@Background@ApplicationModel@Windows@@QEAA@XZ
    CBackgroundTaskBuilderFactory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CBackgroundTaskBuilderFactory@Background@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CBackgroundTaskBuilderFactory@Background@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CBackgroundTaskBuilderFactory@Background@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBackgroundTaskBuilderFactory@Background@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBackgroundTaskBuilderFactory@Background@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsRunningTaskInStandbySupported@CBackgroundTaskBuilderFactory@Background@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_IsRunningTaskInStandbySupported(unsigned char *);
};
} // namespace Windows::ApplicationModel::Background
