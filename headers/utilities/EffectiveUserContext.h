#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 52 member(s).
class EffectiveUserContext {
public:
    class State;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForCurrentUser@EffectiveUserContext@@SA?AV1@_N@Z
    static EffectiveUserContext CreateForCurrentUser(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForUser@EffectiveUserContext@@SA?AV1@PEAUIUser@System@Windows@@@Z
    static EffectiveUserContext CreateForUser(::Windows::System::IUser *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EffectiveUserContext@@QEAA@$$QEAV0@@Z
    EffectiveUserContext(EffectiveUserContext &&);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EffectiveUserContext@@QEAA@AEBV0@@Z
    EffectiveUserContext(EffectiveUserContext const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSidString@EffectiveUserContext@@QEBAPEBGXZ
    unsigned short const * GetSidString() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EffectiveUserContext@@QEAA@XZ
    ~EffectiveUserContext();
};
