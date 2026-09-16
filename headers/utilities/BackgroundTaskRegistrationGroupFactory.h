#pragma once
#include "../windissect_forwards.h"

// Reconstructed from biwinrt.dll by Windissect. 6 member(s).
namespace Windows::ApplicationModel::Background {
class BackgroundTaskRegistrationGroupFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@BackgroundTaskRegistrationGroupFactory@Background@ApplicationModel@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BackgroundTaskRegistrationGroupFactory@Background@ApplicationModel@Windows@@QEAA@XZ
    BackgroundTaskRegistrationGroupFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@BackgroundTaskRegistrationGroupFactory@Background@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIBackgroundTaskRegistrationGroup@234@@Z
    virtual long Create(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithName@BackgroundTaskRegistrationGroupFactory@Background@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAUIBackgroundTaskRegistrationGroup@234@@Z
    virtual long CreateWithName(HSTRING__*, HSTRING__*, WindissectOpaque * *);
};
} // namespace Windows::ApplicationModel::Background
