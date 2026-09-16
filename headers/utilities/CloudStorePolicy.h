#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 48 member(s).
namespace Windows::Internal::Storage::Cloud::Policy {
class CloudStorePolicy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CloudStorePolicy@Policy@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAuthenticationPolicy@CloudStorePolicy@Policy@Cloud@Storage@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAW4CloudStorePolicyAuthenticationOptions@23456@@Z
    virtual long GetAuthenticationPolicy(HSTRING__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectivePolicy@CloudStorePolicy@Policy@Cloud@Storage@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAW4CloudStorePolicyOptions@23456@@Z
    virtual long GetEffectivePolicy(HSTRING__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CloudStorePolicy@Policy@Cloud@Storage@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPolicy@CloudStorePolicy@Policy@Cloud@Storage@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAW4CloudStorePolicyOptions@23456@@Z
    virtual long GetPolicy(HSTRING__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CloudStorePolicy@Policy@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTestRoot@CloudStorePolicy@Policy@Cloud@Storage@Internal@Windows@@UEAAJPEAW4CloudStoreTestHookMode@@@Z
    virtual long GetTestRoot(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CloudStorePolicy@Policy@Cloud@Storage@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CloudStorePolicy@Policy@Cloud@Storage@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CloudStorePolicy@Policy@Cloud@Storage@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CloudStorePolicy@Policy@Cloud@Storage@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CloudStorePolicy@Policy@Cloud@Storage@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAuthenticationPolicy@CloudStorePolicy@Policy@Cloud@Storage@Internal@Windows@@UEAAJPEAUHSTRING__@@W4CloudStorePolicyAuthenticationOptions@23456@@Z
    virtual long SetAuthenticationPolicy(HSTRING__*, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPolicy@CloudStorePolicy@Policy@Cloud@Storage@Internal@Windows@@UEAAJPEAUHSTRING__@@W4CloudStorePolicyOptions@23456@@Z
    virtual long SetPolicy(HSTRING__*, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPolicyWithSaveOptions@CloudStorePolicy@Policy@Cloud@Storage@Internal@Windows@@UEAAJPEAUHSTRING__@@W4CloudStorePolicyOptions@23456@W4CloudStorePolicySaveOptions@23456@@Z
    virtual long SetPolicyWithSaveOptions(HSTRING__*, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTestFeatureVelocityKey@CloudStorePolicy@Policy@Cloud@Storage@Internal@Windows@@UEAAJH_N@Z
    virtual long SetTestFeatureVelocityKey(int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTestHookCallback@CloudStorePolicy@Policy@Cloud@Storage@Internal@Windows@@UEAAJPEAUIInspectable@@@Z
    virtual long SetTestHookCallback(IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTestRoot@CloudStorePolicy@Policy@Cloud@Storage@Internal@Windows@@UEAAJW4CloudStoreTestHookMode@@@Z
    virtual long SetTestRoot(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFamilyName@CloudStorePolicy@Policy@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFamilyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TestHook@CloudStorePolicy@Policy@Cloud@Storage@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_TestHook(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WebAccount@CloudStorePolicy@Policy@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUIWebAccount@Credentials@Security@6@@Z
    virtual long get_WebAccount(::Windows::Security::Credentials::IWebAccount * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TestHook@CloudStorePolicy@Policy@Cloud@Storage@Internal@Windows@@UEAAJE@Z
    virtual long put_TestHook(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStorePolicy@Policy@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudStorePolicy();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloudStorePolicySaveCoreOptionsFromPolicySaveOptions@CloudStorePolicy@Policy@Cloud@Storage@Internal@Windows@@CA?AW4CloudStorePolicySaveCoreOptions@Core@3456@W4CloudStorePolicySaveOptions@23456@@Z
    static int CloudStorePolicySaveCoreOptionsFromPolicySaveOptions(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCloudStorePolicyCore@CloudStorePolicy@Policy@Cloud@Storage@Internal@Windows@@AEAAAEAVCloudStorePolicyCore@Core@3456@XZ
    WindissectOpaque & GetCloudStorePolicyCore();
};
} // namespace Windows::Internal::Storage::Cloud::Policy
