#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 10 member(s).
class CloudCacheInvalidatorService {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CloudCacheInvalidatorService@@QEAA@XZ
    CloudCacheInvalidatorService();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHandleSignaled@CloudCacheInvalidatorService@@UEAAJPEAXIIPEAPEAXPEAI@Z
    virtual long OnHandleSignaled(void *, unsigned int, unsigned int, void * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CloudCacheInvalidatorService@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CloudCacheInvalidatorService@@QEAAJPEAUIUser@System@Windows@@@Z
    long RuntimeClassInitialize(::Windows::System::IUser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@CloudCacheInvalidatorService@@UEAAJIPEAPEAXPEAI@Z
    virtual long Start(unsigned int, void * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CloudCacheInvalidatorService@@UEAAJXZ
    virtual long Stop();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudCacheInvalidatorService@@UEAA@XZ
    virtual ~CloudCacheInvalidatorService();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureEffectiveUserContext@CloudCacheInvalidatorService@@AEAAAEBVEffectiveUserContext@@PEAUIUser@System@Windows@@@Z
    EffectiveUserContext const & EnsureEffectiveUserContext(::Windows::System::IUser *);
};
