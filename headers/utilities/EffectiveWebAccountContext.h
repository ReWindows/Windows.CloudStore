#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 12 member(s).
class EffectiveWebAccountContext {
public:
    class State;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForDefaultAccount@EffectiveWebAccountContext@@SA?AV1@AEBVEffectiveUserContext@@PEBG@Z
    static EffectiveWebAccountContext CreateForDefaultAccount(EffectiveUserContext const &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForWebAccount@EffectiveWebAccountContext@@SA?AV1@AEBVEffectiveUserContext@@PEAUIWebAccount@Credentials@Security@Windows@@PEBG@Z
    static EffectiveWebAccountContext CreateForWebAccount(EffectiveUserContext const &, ::Windows::Security::Credentials::IWebAccount *, unsigned short const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EffectiveWebAccountContext@@QEAA@AEBV0@@Z
    EffectiveWebAccountContext(EffectiveWebAccountContext const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EffectiveWebAccountContext@@QEAA@$$QEAV0@@Z
    EffectiveWebAccountContext(EffectiveWebAccountContext &&);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccountStorageId@EffectiveWebAccountContext@@QEBAPEBGXZ
    unsigned short const * GetAccountStorageId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccountStorageName@EffectiveWebAccountContext@@QEBAPEBGXZ
    unsigned short const * GetAccountStorageName() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsDefault@EffectiveWebAccountContext@@QEBA_NXZ
    bool GetIsDefault() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWebAccount@EffectiveWebAccountContext@@QEBAPEAUIWebAccount@Credentials@Security@Windows@@XZ
    ::Windows::Security::Credentials::IWebAccount * GetWebAccount() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EffectiveWebAccountContext@@QEAA@XZ
    ~EffectiveWebAccountContext();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForStoreDefaultAccount@EffectiveWebAccountContext@@CA?AV1@AEBVEffectiveUserContext@@PEBG1@Z
    static EffectiveWebAccountContext CreateForStoreDefaultAccount(EffectiveUserContext const &, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForStoreWebAccount@EffectiveWebAccountContext@@CA?AV1@AEBVEffectiveUserContext@@PEAUIWebAccount@Credentials@Security@Windows@@PEBG2@Z
    static EffectiveWebAccountContext CreateForStoreWebAccount(EffectiveUserContext const &, ::Windows::Security::Credentials::IWebAccount *, unsigned short const *, unsigned short const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EffectiveWebAccountContext@@AEAA@AEBVEffectiveUserContext@@PEBG@Z
    EffectiveWebAccountContext(EffectiveUserContext const &, unsigned short const *);
};
