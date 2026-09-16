#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 9 member(s).
namespace Windows::Internal::Storage::Cloud::Core {
class CloudStoreCoreBackupStatusImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackupCoreStatus@CloudStoreCoreBackupStatusImpl@Core@Cloud@Storage@Internal@Windows@@UEAA?AW4CloudStoreCoreUploadStatus@23456@AEBVCorrelationVector@23456@@Z
    virtual int GetBackupCoreStatus(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingsFromJson@CloudStoreCoreBackupStatusImpl@Core@Cloud@Storage@Internal@Windows@@UEAAXAEAUJsonObject@Json@Data@6winrt@@AEAUhstring@winrt@@_N@Z
    virtual void GetSettingsFromJson(WindissectOpaque &, WindissectOpaque &, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStoreCoreBackupStatusImpl@Core@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudStoreCoreBackupStatusImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareAndUpdateStatus@CloudStoreCoreBackupStatusImpl@Core@Cloud@Storage@Internal@Windows@@AEAAXAEAW4CloudStoreCoreUploadStatus@23456@@Z
    void CompareAndUpdateStatus(int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCacheExists@CloudStoreCoreBackupStatusImpl@Core@Cloud@Storage@Internal@Windows@@AEAAXXZ
    void EnsureCacheExists();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSettingAvailableInRetryCach@CloudStoreCoreBackupStatusImpl@Core@Cloud@Storage@Internal@Windows@@AEAA_NXZ
    bool IsSettingAvailableInRetryCach();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendRequest@CloudStoreCoreBackupStatusImpl@Core@Cloud@Storage@Internal@Windows@@AEAAXAEBVCorrelationVector@23456@AEBUhstring@winrt@@AEAUHttpResponseMessage@Http@Web@69@@Z
    void SendRequest(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque &);
};
} // namespace Windows::Internal::Storage::Cloud::Core
