#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 16 member(s).
class RemoteCloudStoreFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@RemoteCloudStoreFactory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceIndirect@RemoteCloudStoreFactory@@UEAAJW4CloudStoreOptions@Cloud@Storage@Internal@Windows@@_KPEAUHSTRING__@@222PEAPEAUICloudStore@3456@@Z
    virtual long CreateInstanceIndirect(int, uint64_t, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceIndirectWithTimeOuts@RemoteCloudStoreFactory@@UEAAJW4CloudStoreOptions@Cloud@Storage@Internal@Windows@@_KPEAUHSTRING__@@222UWaitTimes@3456@PEAPEAUICloudStore@3456@@Z
    virtual long CreateInstanceIndirectWithTimeOuts(int, uint64_t, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, WindissectOpaque, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@RemoteCloudStoreFactory@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@RemoteCloudStoreFactory@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@RemoteCloudStoreFactory@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@RemoteCloudStoreFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RemoteCloudStoreFactory@@UEAAKXZ
    virtual unsigned long Release();
};
