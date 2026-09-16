#pragma once
#include "../windissect_forwards.h"

// Reconstructed from biwinrt.dll by Windissect. 6 member(s).
namespace Windows::ApplicationModel::Background {
class CBackgroundTaskRegistrationFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CBackgroundTaskRegistrationFactory@Background@ApplicationModel@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskGroup@CBackgroundTaskRegistrationFactory@Background@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIBackgroundTaskRegistrationGroup@234@@Z
    virtual long GetTaskGroup(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AllTaskGroups@CBackgroundTaskRegistrationFactory@Background@ApplicationModel@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAVBackgroundTaskRegistrationGroup@Background@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long get_AllTaskGroups(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AllTasks@CBackgroundTaskRegistrationFactory@Background@ApplicationModel@Windows@@UEAAJPEAPEAU?$IMapView@U_GUID@@PEAUIBackgroundTaskRegistration@Background@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long get_AllTasks(WindissectOpaque * *);
};
} // namespace Windows::ApplicationModel::Background
