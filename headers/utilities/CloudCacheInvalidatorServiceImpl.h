#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 8 member(s).
class CloudCacheInvalidatorServiceImpl {
public:
    class ActiveActivityStoreInfo;
    class AppExtensionWatcherInfo;
    class CDPActivityStoreInfoWatcherCallback;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CloudCacheInvalidatorServiceImpl@@QEAA@AEBVEffectiveUserContext@@@Z
    CloudCacheInvalidatorServiceImpl(EffectiveUserContext const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudCacheInvalidatorServiceImpl@@QEAA@XZ
    ~CloudCacheInvalidatorServiceImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppExtensionEventDetected@CloudCacheInvalidatorServiceImpl@@AEAAXXZ
    void AppExtensionEventDetected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAllAccountsAreBeingWatchedBySSO@CloudCacheInvalidatorServiceImpl@@AEAAXXZ
    void EnsureAllAccountsAreBeingWatchedBySSO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAppExtensionSchemaWatcher@CloudCacheInvalidatorServiceImpl@@AEAAXXZ
    void EnsureAppExtensionSchemaWatcher();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInactiveInvalidator@CloudCacheInvalidatorServiceImpl@@AEAAXXZ
    void ProcessInactiveInvalidator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryInitializeStoreCache@CloudCacheInvalidatorServiceImpl@@AEAAXXZ
    void TryInitializeStoreCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryInitializeStoreCacheWorker@CloudCacheInvalidatorServiceImpl@@AEAAXXZ
    void TryInitializeStoreCacheWorker();
};
