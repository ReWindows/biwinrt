#pragma once
#include "../windissect_forwards.h"

// Reconstructed from biwinrt.dll by Windissect. 6 member(s).
namespace Windows::ApplicationModel::Background {
class CBackgroundWorkItemInstanceEvents {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBackgroundWorkItemInstanceEvents@Background@ApplicationModel@Windows@@QEAA@XZ
    CBackgroundWorkItemInstanceEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@CBackgroundWorkItemInstanceEvents@Background@ApplicationModel@Windows@@UEAAJK@Z
    virtual long Cancel(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CBackgroundWorkItemInstanceEvents@Background@ApplicationModel@Windows@@UEAAJPEAVCBackgroundTaskInstance@234@@Z
    virtual long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBackgroundWorkItemInstanceEvents@Background@ApplicationModel@Windows@@UEAA@XZ
    virtual ~CBackgroundWorkItemInstanceEvents();
};
} // namespace Windows::ApplicationModel::Background
