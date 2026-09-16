#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 51 member(s).
namespace Windows::Internal::Storage::Cloud::Broker {
class CloudStoreBroker {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CloudStoreBroker@Broker@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CloudStoreBroker@Broker@Cloud@Storage@Internal@Windows@@QEAA@XZ
    CloudStoreBroker();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CloudStoreBroker@Broker@Cloud@Storage@Internal@Windows@@QEAA@AEBVEffectiveUserContext@@_N@Z
    CloudStoreBroker(EffectiveUserContext const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CloudStoreBroker@Broker@Cloud@Storage@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMode@CloudStoreBroker@Broker@Cloud@Storage@Internal@Windows@@UEAAJPEAW4TestHookMode@Test@3456@@Z
    virtual long GetMode(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CloudStoreBroker@Broker@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CloudStoreBroker@Broker@Cloud@Storage@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserAccountId@CloudStoreBroker@Broker@Cloud@Storage@Internal@Windows@@UEAAJPEAUIWebAccount@Credentials@Security@6@PEAPEAUHSTRING__@@@Z
    virtual long GetUserAccountId(::Windows::Security::Credentials::IWebAccount *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWebAccountForCdpActivityStoreId@CloudStoreBroker@Broker@Cloud@Storage@Internal@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAUIWebAccount@Credentials@Security@6@@Z
    virtual long GetWebAccountForCdpActivityStoreId(HSTRING__*, HSTRING__*, ::Windows::Security::Credentials::IWebAccount * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CloudStoreBroker@Broker@Cloud@Storage@Internal@Windows@@UEAAJW4InitializeOption@23456@PEAE@Z
    virtual long Initialize(int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize2@CloudStoreBroker@Broker@Cloud@Storage@Internal@Windows@@UEAAJPEAUHSTRING__@@0W4InitOperations@23456@EPEAW4823456@@Z
    virtual long Initialize2(HSTRING__*, HSTRING__*, int, unsigned char, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForUserWorker@CloudStoreBroker@Broker@Cloud@Storage@Internal@Windows@@SAJAEBVEffectiveUserContext@@W4InitializeOption@23456@PEAE@Z
    static long InitializeForUserWorker(EffectiveUserContext const &, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeStoreCache@CloudStoreBroker@Broker@Cloud@Storage@Internal@Windows@@UEAAJXZ
    virtual long InitializeStoreCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeStoreCacheForUserWorker@CloudStoreBroker@Broker@Cloud@Storage@Internal@Windows@@SAJAEBVEffectiveUserContext@@@Z
    static long InitializeStoreCacheForUserWorker(EffectiveUserContext const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CloudStoreBroker@Broker@Cloud@Storage@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CloudStoreBroker@Broker@Cloud@Storage@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAADUser@CloudStoreBroker@Broker@Cloud@Storage@Internal@Windows@@UEAAJPEAE@Z
    virtual long IsAADUser(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMSAUser@CloudStoreBroker@Broker@Cloud@Storage@Internal@Windows@@UEAAJPEAE@Z
    virtual long IsMSAUser(unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CloudStoreBroker@Broker@Cloud@Storage@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CloudStoreBroker@Broker@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCallback@CloudStoreBroker@Broker@Cloud@Storage@Internal@Windows@@UEAAJPEAUIInspectable@@@Z
    virtual long SetCallback(IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFeatureState@CloudStoreBroker@Broker@Cloud@Storage@Internal@Windows@@UEAAJHE@Z
    virtual long SetFeatureState(int, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMode@CloudStoreBroker@Broker@Cloud@Storage@Internal@Windows@@UEAAJW4TestHookMode@Test@3456@@Z
    virtual long SetMode(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStoreBroker@Broker@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudStoreBroker();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForUserWorker2@CloudStoreBroker@Broker@Cloud@Storage@Internal@Windows@@AEAAJAEBVCorrelationVector@Core@3456@AEBVEffectiveUserContext@@PEAUHSTRING__@@W4InitOperations@23456@_NPEAW4InitOperations@23456@@Z
    long InitializeForUserWorker2(WindissectOpaque const &, EffectiveUserContext const &, HSTRING__*, int, bool, int *);
};
} // namespace Windows::Internal::Storage::Cloud::Broker
