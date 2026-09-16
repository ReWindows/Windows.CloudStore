#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 6 member(s).
namespace Windows::Internal::Storage::Cloud::Policy {
class CloudStorePolicyFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CloudStorePolicyFactory@Policy@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CloudStorePolicyFactory@Policy@Cloud@Storage@Internal@Windows@@UEAAJPEAUIWebAccount@Credentials@Security@6@PEAUHSTRING__@@PEAPEAUICloudStorePolicy@23456@@Z
    virtual long CreateInstance(::Windows::Security::Credentials::IWebAccount *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance2@CloudStorePolicyFactory@Policy@Cloud@Storage@Internal@Windows@@UEAAJPEAUIWebAccount@Credentials@Security@6@PEAUHSTRING__@@IPEAPEAUICloudStorePolicy@23456@@Z
    virtual long CreateInstance2(::Windows::Security::Credentials::IWebAccount *, HSTRING__*, unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceCdsPolicyCache@CloudStorePolicyFactory@Policy@Cloud@Storage@Internal@Windows@@UEAAJPEAUIWebAccount@Credentials@Security@6@PEAUHSTRING__@@IEPEAPEAUICloudStorePolicy@23456@@Z
    virtual long CreateInstanceCdsPolicyCache(::Windows::Security::Credentials::IWebAccount *, HSTRING__*, unsigned int, unsigned char, WindissectOpaque * *);
};
} // namespace Windows::Internal::Storage::Cloud::Policy
