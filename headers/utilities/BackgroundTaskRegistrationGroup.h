#pragma once
#include "../windissect_forwards.h"

// Reconstructed from biwinrt.dll by Windissect. 32 member(s).
namespace Windows::ApplicationModel::Background {
class BackgroundTaskRegistrationGroup {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BackgroundTaskRegistrationGroup@Background@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BackgroundTaskRegistrationGroup@Background@ApplicationModel@Windows@@QEAA@XZ
    BackgroundTaskRegistrationGroup();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@BackgroundTaskRegistrationGroup@Background@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@BackgroundTaskRegistrationGroup@Background@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@BackgroundTaskRegistrationGroup@Background@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@BackgroundTaskRegistrationGroup@Background@ApplicationModel@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@BackgroundTaskRegistrationGroup@Background@ApplicationModel@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeBackgroundActivatedEvent@BackgroundTaskRegistrationGroup@Background@ApplicationModel@Windows@@UEAAJPEAUIBackgroundActivatedEventArgs@Activation@34@@Z
    virtual long InvokeBackgroundActivatedEvent(::Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BackgroundTaskRegistrationGroup@Background@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BackgroundTaskRegistrationGroup@Background@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@BackgroundTaskRegistrationGroup@Background@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@0PEAUIBackgroundWorkManagerInternal@234@@Z
    virtual long RuntimeClassInitialize(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_BackgroundActivated@BackgroundTaskRegistrationGroup@Background@ApplicationModel@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVBackgroundTaskRegistrationGroup@Background@ApplicationModel@Windows@@PEAVBackgroundActivatedEventArgs@Activation@34@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_BackgroundActivated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AllTasks@BackgroundTaskRegistrationGroup@Background@ApplicationModel@Windows@@UEAAJPEAPEAU?$IMapView@U_GUID@@PEAVBackgroundTaskRegistration@Background@ApplicationModel@Windows@@@Collections@Foundation@4@@Z
    virtual long get_AllTasks(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@BackgroundTaskRegistrationGroup@Background@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@BackgroundTaskRegistrationGroup@Background@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_BackgroundActivated@BackgroundTaskRegistrationGroup@Background@ApplicationModel@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_BackgroundActivated(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BackgroundTaskRegistrationGroup@Background@ApplicationModel@Windows@@UEAA@XZ
    virtual ~BackgroundTaskRegistrationGroup();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelfReference@BackgroundTaskRegistrationGroup@Background@ApplicationModel@Windows@@EEAAXXZ
    virtual void UpdateSelfReference();
};
} // namespace Windows::ApplicationModel::Background
