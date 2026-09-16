#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 4 member(s).
namespace Windows::Internal::Storage::Cloud::Core {
class CloudStoreMockBackupStatusImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackupCoreStatus@CloudStoreMockBackupStatusImpl@Core@Cloud@Storage@Internal@Windows@@UEAA?AW4CloudStoreCoreUploadStatus@23456@AEBVCorrelationVector@23456@@Z
    virtual int GetBackupCoreStatus(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingsFromJson@CloudStoreMockBackupStatusImpl@Core@Cloud@Storage@Internal@Windows@@UEAAXAEAUJsonObject@Json@Data@6winrt@@AEAUhstring@winrt@@_N@Z
    virtual void GetSettingsFromJson(WindissectOpaque &, WindissectOpaque &, bool);
};
} // namespace Windows::Internal::Storage::Cloud::Core
