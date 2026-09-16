#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 8 member(s).
namespace Windows::Internal::Storage::Cloud {
class CloudStoreFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CloudStoreFactory@Cloud@Storage@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CloudStoreFactory@Cloud@Storage@Internal@Windows@@QEAA@XZ
    CloudStoreFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CloudStoreFactory@Cloud@Storage@Internal@Windows@@UEAAJW4CloudStoreOptions@2345@PEAUIUser@System@5@PEAUIWebAccount@Credentials@Security@5@PEAUHSTRING__@@PEAPEAUICloudStore@2345@@Z
    virtual long CreateInstance(int, ::Windows::System::IUser *, ::Windows::Security::Credentials::IWebAccount *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceIndirect@CloudStoreFactory@Cloud@Storage@Internal@Windows@@UEAAJW4CloudStoreOptions@2345@_KPEAUHSTRING__@@222PEAPEAUICloudStore@2345@@Z
    virtual long CreateInstanceIndirect(int, uint64_t, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceIndirectWithTimeOuts@CloudStoreFactory@Cloud@Storage@Internal@Windows@@UEAAJW4CloudStoreOptions@2345@_KPEAUHSTRING__@@222UWaitTimes@2345@PEAPEAUICloudStore@2345@@Z
    virtual long CreateInstanceIndirectWithTimeOuts(int, uint64_t, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithTimeOuts@CloudStoreFactory@Cloud@Storage@Internal@Windows@@UEAAJW4CloudStoreOptions@2345@PEAUIUser@System@5@PEAUIWebAccount@Credentials@Security@5@PEAUHSTRING__@@UWaitTimes@2345@PEAPEAUICloudStore@2345@@Z
    virtual long CreateInstanceWithTimeOuts(int, ::Windows::System::IUser *, ::Windows::Security::Credentials::IWebAccount *, HSTRING__*, WindissectOpaque, WindissectOpaque * *);
};
} // namespace Windows::Internal::Storage::Cloud
