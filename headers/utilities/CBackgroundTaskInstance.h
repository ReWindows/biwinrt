#pragma once
#include "../windissect_forwards.h"

// Reconstructed from biwinrt.dll by Windissect. 74 member(s).
namespace Windows::ApplicationModel::Background {
class CBackgroundTaskInstance {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBackgroundTaskInstance@Background@ApplicationModel@Windows@@QEAA@XZ
    CBackgroundTaskInstance();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferral@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@UEAAJPEAPEAUIBackgroundTaskDeferral@234@@Z
    virtual long GetDeferral(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThrottleCount@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@UEAAJW4BackgroundTaskThrottleCounter@234@PEAI@Z
    virtual long GetThrottleCount(int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalObjectToPropertySet@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@UEAAJPEAUIPropertySet@Collections@Foundation@4@@Z
    virtual long MarshalObjectToPropertySet(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Run@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@UEAAJPEAUIBackgroundTask@234@@Z
    virtual long Run(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@UEAAJPEAUIInspectable@@@Z
    virtual long RuntimeClassInitialize(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@UEAAJPEBU_GUID@@0PEAUIBackgroundWorkItemInstanceRemote@@@Z
    virtual long RuntimeClassInitialize(_GUID const *, _GUID const *, IBackgroundWorkItemInstanceRemote *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskRegistrationCreate@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@QEAAJXZ
    long TaskRegistrationCreate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerDetailsCreate@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@QEAAJXZ
    long TriggerDetailsCreate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?YieldForTime@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@UEAAJUTimeSpan@Foundation@4@PEAW4BackgroundTaskYieldStatus@234@@Z
    virtual long YieldForTime(WindissectOpaque, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?YieldUntil@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@UEAAJPEAUIBackgroundTaskYieldable@234@UTimeSpan@Foundation@4@PEAW4BackgroundTaskYieldStatus@234@@Z
    virtual long YieldUntil(WindissectOpaque *, WindissectOpaque, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?YieldUntilAny@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@UEAAJPEAU?$IIterable@PEAUIBackgroundTaskYieldable@Background@ApplicationModel@Windows@@@Collections@Foundation@4@UTimeSpan@74@PEAPEAUIBackgroundTaskYieldAnyResult@234@@Z
    virtual long YieldUntilAny(WindissectOpaque *, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Canceled@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@UEAAJPEAUIBackgroundTaskCanceledEventHandler@234@PEAUEventRegistrationToken@@@Z
    virtual long add_Canceled(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InstanceId@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_InstanceId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxYieldTimeout@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@UEAAJPEAUTimeSpan@Foundation@4@@Z
    virtual long get_MaxYieldTimeout(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinYieldTimeout@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@UEAAJPEAUTimeSpan@Foundation@4@@Z
    virtual long get_MinYieldTimeout(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Progress@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@UEAAJPEAI@Z
    virtual long get_Progress(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuspendedCount@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@UEAAJPEAI@Z
    virtual long get_SuspendedCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Task@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@UEAAJPEAPEAUIBackgroundTaskRegistration@234@@Z
    virtual long get_Task(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TriggerDetails@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_TriggerDetails(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@UEAAJPEAPEAUIUser@System@4@@Z
    virtual long get_User(::Windows::System::IUser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Progress@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@UEAAJI@Z
    virtual long put_Progress(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Canceled@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Canceled(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBackgroundTaskInstance@Background@ApplicationModel@Windows@@UEAA@XZ
    virtual ~CBackgroundTaskInstance();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRemoteInstanceCompleted@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@AEAAXJE@Z
    void NotifyRemoteInstanceCompleted(long, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunInternal@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@AEAAJPEAUIBackgroundTask@234@AEAE@Z
    long RunInternal(WindissectOpaque *, unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForAnyOutstandingDeferrals@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@EEAAJXZ
    virtual long WaitForAnyOutstandingDeferrals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?YieldInternal@CBackgroundTaskInstance@Background@ApplicationModel@Windows@@AEAAJHPEAPEAX_JPEAU_BACKGROUND_TASK_YIELDANY_RESULT@234@@Z
    long YieldInternal(int, void * *, int64_t, WindissectOpaque *);
};
} // namespace Windows::ApplicationModel::Background
