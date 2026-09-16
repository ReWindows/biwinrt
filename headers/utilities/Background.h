#pragma once
#include "../windissect_forwards.h"

// Reconstructed from biwinrt.dll by Windissect. 3 member(s).
namespace Windows::ApplicationModel {
class Background {
public:
    class BackgroundTaskRegistrationGroup;
    class BackgroundTaskRegistrationGroupFactory;
    class CBackgroundTaskBuilder;
    class CBackgroundTaskBuilderFactory;
    class CBackgroundTaskCompletedEventArgs;
    class CBackgroundTaskDeferral;
    class CBackgroundTaskInstance;
    class CBackgroundTaskInstanceFactory;
    class CBackgroundTaskProgressEventArgs;
    class CBackgroundTaskRegistration;
    class CBackgroundTaskRegistrationFactory;
    class CBackgroundTaskYieldAnyResult;
    class CBackgroundWorkCost;
    class CBackgroundWorkCostFactory;
    class CBackgroundWorkItemInstanceEvents;
    class CBackgroundWorkManager;
    class CBackgroundWorkManagerFactory;
    class ExtendedRegistrationData;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BipGetBackgroundManager@Background@ApplicationModel@Windows@@YAJPEAPEAUIBackgroundWorkManagerInternal@123@@Z
    long BipGetBackgroundManager(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BipMarshalHelperGetValueFactory@Background@ApplicationModel@Windows@@YAJPEAPEAUIPropertyValueStatics@Foundation@3@@Z
    long BipMarshalHelperGetValueFactory(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BipRtStatusDispatch@Background@ApplicationModel@Windows@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    long BipRtStatusDispatch(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
};
} // namespace Windows::ApplicationModel
