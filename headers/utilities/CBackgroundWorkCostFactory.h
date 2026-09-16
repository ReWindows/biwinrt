#pragma once
#include "../windissect_forwards.h"

// Reconstructed from biwinrt.dll by Windissect. 7 member(s).
namespace Windows::ApplicationModel::Background {
class CBackgroundWorkCostFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CBackgroundWorkCostFactory@Background@ApplicationModel@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppEnergyUseLevel@CBackgroundWorkCostFactory@Background@ApplicationModel@Windows@@UEAAJPEAW4EnergyUseLevel@234@@Z
    virtual long get_AppEnergyUseLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppEnergyUsePrediction@CBackgroundWorkCostFactory@Background@ApplicationModel@Windows@@UEAAJPEAW4EnergyUseLevel@234@@Z
    virtual long get_AppEnergyUsePrediction(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppLastThrottledInStandbyTimestamp@CBackgroundWorkCostFactory@Background@ApplicationModel@Windows@@UEAAJPEAUDateTime@Foundation@4@@Z
    virtual long get_AppLastThrottledInStandbyTimestamp(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentBackgroundWorkCost@CBackgroundWorkCostFactory@Background@ApplicationModel@Windows@@UEAAJPEAW4BackgroundWorkCostValue@234@@Z
    virtual long get_CurrentBackgroundWorkCost(int *);
};
} // namespace Windows::ApplicationModel::Background
