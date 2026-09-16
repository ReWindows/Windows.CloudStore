#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 6 member(s).
class CloudStoreAccountImpl {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CloudStoreAccountImpl@@QEAA@AEBVEffectiveWebAccountContext@@@Z
    CloudStoreAccountImpl(EffectiveWebAccountContext const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccountType@CloudStoreAccountImpl@@UEAA?AW4UserAccountType@Common@Cloud@Storage@Internal@Windows@@XZ
    virtual int GetAccountType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDefaultWebAccount@CloudStoreAccountImpl@@UEAA_NXZ
    virtual bool IsDefaultWebAccount();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStoreAccountImpl@@UEAA@XZ
    virtual ~CloudStoreAccountImpl();
};
