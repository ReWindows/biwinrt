#pragma once
#include "../windissect_forwards.h"

// Reconstructed from biwinrt.dll by Windissect. 7 member(s).
namespace Windows::ApplicationModel::Background {
class CBackgroundTaskInstanceFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CBackgroundTaskInstanceFactory@Background@ApplicationModel@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BackgroundTaskInstanceCreateAndInitialize@CBackgroundTaskInstanceFactory@Background@ApplicationModel@Windows@@UEAAJU_GUID@@0PEAUIInspectable@@PEAPEAUIBackgroundTaskInstance@234@@Z
    virtual long BackgroundTaskInstanceCreateAndInitialize(_GUID, _GUID, IInspectable *, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBackgroundTaskInstanceFactory@Background@ApplicationModel@Windows@@QEAA@XZ
    CBackgroundTaskInstanceFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBackgroundTaskInstance@CBackgroundTaskInstanceFactory@Background@ApplicationModel@Windows@@UEAAJPEAUIInspectable@@PEAPEAUIBackgroundTaskInstance@234@@Z
    virtual long CreateBackgroundTaskInstance(IInspectable *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarshalObjectFromPropertySet@CBackgroundTaskInstanceFactory@Background@ApplicationModel@Windows@@UEAAJPEAUIPropertySet@Collections@Foundation@4@PEAPEAUIInspectable@@@Z
    virtual long UnmarshalObjectFromPropertySet(WindissectOpaque *, IInspectable * *);
};
} // namespace Windows::ApplicationModel::Background
