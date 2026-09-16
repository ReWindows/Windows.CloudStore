#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 28 member(s).
namespace Windows::Internal::Storage::Cloud {
class RegistryDataWatcher {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@RegistryDataWatcher@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@RegistryDataWatcher@Cloud@Storage@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@RegistryDataWatcher@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@RegistryDataWatcher@Cloud@Storage@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDataChange@RegistryDataWatcher@Cloud@Storage@Internal@Windows@@UEAAJXZ
    virtual long NotifyDataChange();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@RegistryDataWatcher@Cloud@Storage@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RegistryDataWatcher@Cloud@Storage@Internal@Windows@@QEAA@XZ
    RegistryDataWatcher();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RegistryDataWatcher@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@RegistryDataWatcher@Cloud@Storage@Internal@Windows@@QEAAJPEAUHKEY__@@PEBG@Z
    long RuntimeClassInitialize(HKEY__*, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DataChanged@RegistryDataWatcher@Cloud@Storage@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAU1@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_DataChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DataChanged@RegistryDataWatcher@Cloud@Storage@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DataChanged(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartListening@RegistryDataWatcher@Cloud@Storage@Internal@Windows@@AEAAJXZ
    long StartListening();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopListeningIfNoClients@RegistryDataWatcher@Cloud@Storage@Internal@Windows@@AEAAXXZ
    void StopListeningIfNoClients();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RegistryDataWatcher@Cloud@Storage@Internal@Windows@@EEAA@XZ
    virtual ~RegistryDataWatcher();
};
} // namespace Windows::Internal::Storage::Cloud
