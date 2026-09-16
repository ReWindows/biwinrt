#pragma once
#include "../windissect_forwards.h"

// Reconstructed from biwinrt.dll by Windissect. 66 member(s).
namespace Windows::ApplicationModel::Background {
class CBackgroundTaskBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCondition@CBackgroundTaskBuilder@Background@ApplicationModel@Windows@@UEAAJPEAUIBackgroundCondition@234@@Z
    virtual long AddCondition(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBackgroundTaskBuilder@Background@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBackgroundTaskBuilder@Background@ApplicationModel@Windows@@QEAA@XZ
    CBackgroundTaskBuilder();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CBackgroundTaskBuilder@Background@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CBackgroundTaskBuilder@Background@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CBackgroundTaskBuilder@Background@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CBackgroundTaskBuilder@Background@ApplicationModel@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CBackgroundTaskBuilder@Background@ApplicationModel@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBackgroundTaskBuilder@Background@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CBackgroundTaskBuilder@Background@ApplicationModel@Windows@@UEAAJPEAPEAUIBackgroundTaskRegistration@234@@Z
    virtual long Register(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CBackgroundTaskBuilder@Background@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIBackgroundTaskRegistration@234@@Z
    virtual long Register(HSTRING__*, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBackgroundTaskBuilder@Background@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CBackgroundTaskBuilder@Background@ApplicationModel@Windows@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTaskEntryPointClsid@CBackgroundTaskBuilder@Background@ApplicationModel@Windows@@UEAAJU_GUID@@@Z
    virtual long SetTaskEntryPointClsid(_GUID);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTrigger@CBackgroundTaskBuilder@Background@ApplicationModel@Windows@@UEAAJPEAUIBackgroundTrigger@234@@Z
    virtual long SetTrigger(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@CBackgroundTaskBuilder@Background@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long Validate(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AllowRunningTaskInStandby@CBackgroundTaskBuilder@Background@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_AllowRunningTaskInStandby(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CancelOnConditionLoss@CBackgroundTaskBuilder@Background@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_CancelOnConditionLoss(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsNetworkRequested@CBackgroundTaskBuilder@Background@ApplicationModel@Windows@@UEAAJPEAE@Z
    virtual long get_IsNetworkRequested(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@CBackgroundTaskBuilder@Background@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TaskEntryPoint@CBackgroundTaskBuilder@Background@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TaskEntryPoint(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TaskGroup@CBackgroundTaskBuilder@Background@ApplicationModel@Windows@@UEAAJPEAPEAUIBackgroundTaskRegistrationGroup@234@@Z
    virtual long get_TaskGroup(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AllowRunningTaskInStandby@CBackgroundTaskBuilder@Background@ApplicationModel@Windows@@UEAAJE@Z
    virtual long put_AllowRunningTaskInStandby(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CancelOnConditionLoss@CBackgroundTaskBuilder@Background@ApplicationModel@Windows@@UEAAJE@Z
    virtual long put_CancelOnConditionLoss(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsNetworkRequested@CBackgroundTaskBuilder@Background@ApplicationModel@Windows@@UEAAJE@Z
    virtual long put_IsNetworkRequested(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Name@CBackgroundTaskBuilder@Background@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Name(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TaskEntryPoint@CBackgroundTaskBuilder@Background@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_TaskEntryPoint(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TaskGroup@CBackgroundTaskBuilder@Background@ApplicationModel@Windows@@UEAAJPEAUIBackgroundTaskRegistrationGroup@234@@Z
    virtual long put_TaskGroup(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBackgroundTaskBuilder@Background@ApplicationModel@Windows@@UEAA@XZ
    virtual ~CBackgroundTaskBuilder();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterInternal@CBackgroundTaskBuilder@Background@ApplicationModel@Windows@@AEAAJW4_BI_TASK_BUILDER_REGISTER_FLAGS@234@PEAPEAUIBackgroundTaskRegistration@234@@Z
    long RegisterInternal(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterTaskByName@CBackgroundTaskBuilder@Background@ApplicationModel@Windows@@AEAAJPEAUHSTRING__@@@Z
    long UnregisterTaskByName(HSTRING__*);
};
} // namespace Windows::ApplicationModel::Background
