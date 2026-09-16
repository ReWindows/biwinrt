#pragma once
#include "../windissect_forwards.h"

// Reconstructed from biwinrt.dll by Windissect. 58 member(s).
namespace Windows::ApplicationModel::Background {
class CBackgroundTaskRegistration {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBackgroundTaskRegistration@Background@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CBackgroundTaskRegistration@Background@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CBackgroundTaskRegistration@Background@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CBackgroundTaskRegistration@Background@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWnfStateName@CBackgroundTaskRegistration@Background@ApplicationModel@Windows@@UEAAJPEAU_WNF_STATE_NAME@@PEAE@Z
    virtual long GetWnfStateName(_WNF_STATE_NAME *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CBackgroundTaskRegistration@Background@ApplicationModel@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CBackgroundTaskRegistration@Background@ApplicationModel@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBackgroundTaskRegistration@Background@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBackgroundTaskRegistration@Background@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CBackgroundTaskRegistration@Background@ApplicationModel@Windows@@UEAAJU_GUID@@PEAGKPEAU_WNF_STATE_NAME@@PEAUIBackgroundWorkManagerInternal@234@0KPEAEK@Z
    virtual long RuntimeClassInitialize(_GUID, unsigned short *, unsigned long, _WNF_STATE_NAME *, WindissectOpaque *, _GUID, unsigned long, unsigned char *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendCompletion@CBackgroundTaskRegistration@Background@ApplicationModel@Windows@@UEAAJPEAUIBackgroundTaskCompletedEventArgs@234@@Z
    virtual long SendCompletion(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendProgress@CBackgroundTaskRegistration@Background@ApplicationModel@Windows@@UEAAJPEAUIBackgroundTaskProgressEventArgs@234@@Z
    virtual long SendProgress(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskWasUnregistered@CBackgroundTaskRegistration@Background@ApplicationModel@Windows@@UEAAJXZ
    virtual long TaskWasUnregistered();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@CBackgroundTaskRegistration@Background@ApplicationModel@Windows@@UEAAJE@Z
    virtual long Unregister(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Completed@CBackgroundTaskRegistration@Background@ApplicationModel@Windows@@UEAAJPEAUIBackgroundTaskCompletedEventHandler@234@PEAUEventRegistrationToken@@@Z
    virtual long add_Completed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Progress@CBackgroundTaskRegistration@Background@ApplicationModel@Windows@@UEAAJPEAUIBackgroundTaskProgressEventHandler@234@PEAUEventRegistrationToken@@@Z
    virtual long add_Progress(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppEnergyUsePredictionContribution@CBackgroundTaskRegistration@Background@ApplicationModel@Windows@@UEAAJPEAN@Z
    virtual long get_AppEnergyUsePredictionContribution(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@CBackgroundTaskRegistration@Background@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TaskGroup@CBackgroundTaskRegistration@Background@ApplicationModel@Windows@@UEAAJPEAPEAUIBackgroundTaskRegistrationGroup@234@@Z
    virtual long get_TaskGroup(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TaskId@CBackgroundTaskRegistration@Background@ApplicationModel@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_TaskId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TaskLastThrottledInStandbyTimestamp@CBackgroundTaskRegistration@Background@ApplicationModel@Windows@@UEAAJPEAUDateTime@Foundation@4@@Z
    virtual long get_TaskLastThrottledInStandbyTimestamp(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Trigger@CBackgroundTaskRegistration@Background@ApplicationModel@Windows@@UEAAJPEAPEAUIBackgroundTrigger@234@@Z
    virtual long get_Trigger(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Completed@CBackgroundTaskRegistration@Background@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Completed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Progress@CBackgroundTaskRegistration@Background@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Progress(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForStatusUpdates@CBackgroundTaskRegistration@Background@ApplicationModel@Windows@@EEAAJXZ
    virtual long RegisterForStatusUpdates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelfReference@CBackgroundTaskRegistration@Background@ApplicationModel@Windows@@EEAAXXZ
    virtual void UpdateSelfReference();
};
} // namespace Windows::ApplicationModel::Background
