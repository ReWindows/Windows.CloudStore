#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 19 member(s).
namespace Windows::Internal::Storage::Cloud::State {
class CloudStoreStateManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCompletedOps@CloudStoreStateManager@State@Cloud@Storage@Internal@Windows@@UEAAJW4OpUpdateContext@23456@W4InitOperations@Broker@3456@@Z
    virtual long AddCompletedOps(int, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CloudStoreStateManager@State@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CloudStoreStateManager@State@Cloud@Storage@Internal@Windows@@QEAA@PEAUHSTRING__@@_NPEAUIInspectable@@@Z
    CloudStoreStateManager(HSTRING__*, bool, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompletedInitOps@CloudStoreStateManager@State@Cloud@Storage@Internal@Windows@@UEAAJPEAW4InitOperations@Broker@3456@@Z
    virtual long GetCompletedInitOps(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CloudStoreStateManager@State@Cloud@Storage@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CloudStoreStateManager@State@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CloudStoreStateManager@State@Cloud@Storage@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CloudStoreStateManager@State@Cloud@Storage@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CloudStoreStateManager@State@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTestHook@CloudStoreStateManager@State@Cloud@Storage@Internal@Windows@@UEAAJPEAUIInspectable@@@Z
    virtual long SetTestHook(IInspectable *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStoreStateManager@State@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudStoreStateManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRead@CloudStoreStateManager@State@Cloud@Storage@Internal@Windows@@AEAA?AW4InitOperations@Broker@3456@XZ
    int EnsureRead();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Persist@CloudStoreStateManager@State@Cloud@Storage@Internal@Windows@@AEAA?AW4InitOperations@Broker@3456@W4OpUpdateContext@23456@W4783456@@Z
    int Persist(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadValues@CloudStoreStateManager@State@Cloud@Storage@Internal@Windows@@AEAAXPEAW4InitOperations@Broker@3456@0@Z
    void ReadValues(int *, int *);
};
} // namespace Windows::Internal::Storage::Cloud::State
