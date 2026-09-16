#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 42 member(s).
namespace Windows::Internal::Storage::Cloud::Core {
class CloudStoreCoreImpl {
public:
    class DownloadUnitsArtifacts;
    class GetCollectionItemsInternalResult;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@CloudStoreCoreImpl@Core@Cloud@Storage@Internal@Windows@@UEAA?AUEntry@CloudStoreCore@23456@AEBVCloudStoreItemId@23456@_KAEBVCorrelationVector@23456@@Z
    virtual WindissectOpaque Delete(WindissectOpaque const &, uint64_t, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixAccount@CloudStoreCoreImpl@Core@Cloud@Storage@Internal@Windows@@UEAAJUWindowId@UI@6@AEBVCorrelationVector@23456@@Z
    virtual long FixAccount(::Windows::UI::WindowId, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionItemsAsync@CloudStoreCoreImpl@Core@Cloud@Storage@Internal@Windows@@UEAA?AU?$IAsyncOperation@UGetCollectionItemsResult@Cloud@Storage@Internal@Windows@winrt@@@Foundation@6winrt@@Uhstring@9@VCloudStoreCollectionId@23456@W4CloudStoreCoreLoadOptions@23456@W4CloudStoreCoreCollectionOptions@23456@0AEBVCorrelationVector@23456@@Z
    virtual WindissectOpaque GetCollectionItemsAsync(WindissectOpaque, WindissectOpaque, int, int, WindissectOpaque, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextVersion@CloudStoreCoreImpl@Core@Cloud@Storage@Internal@Windows@@UEAA_KPEB_J@Z
    virtual uint64_t GetNextVersion(int64_t const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitalizeDevicePartitionsAndProfile@CloudStoreCoreImpl@Core@Cloud@Storage@Internal@Windows@@UEAAXAEAVInitalizeDevicePartitionsAndProfileActivity@CloudStoreTelemetry@3456@AEAUhstring@winrt@@1AEBVCorrelationVector@23456@@Z
    virtual void InitalizeDevicePartitionsAndProfile(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNewDataAvailableInCloud@CloudStoreCoreImpl@Core@Cloud@Storage@Internal@Windows@@UEAA_NAEBVCloudStoreItemId@23456@AEBVCorrelationVector@23456@@Z
    virtual bool IsNewDataAvailableInCloud(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CloudStoreCoreImpl@Core@Cloud@Storage@Internal@Windows@@UEAA?AUEntry@CloudStoreCore@23456@AEBVCloudStoreItemId@23456@W4CloudStoreCoreLoadOptions@23456@AEBVCorrelationVector@23456@@Z
    virtual WindissectOpaque Load(WindissectOpaque const &, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadWithRetrySave@CloudStoreCoreImpl@Core@Cloud@Storage@Internal@Windows@@QEAA?AUEntry@CloudStoreCore@23456@AEBVCloudStoreItemId@23456@W4CloudStoreCoreLoadOptions@23456@AEBVCorrelationVector@23456@@Z
    WindissectOpaque LoadWithRetrySave(WindissectOpaque const &, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CloudStoreCoreImpl@Core@Cloud@Storage@Internal@Windows@@UEAA?AUEntry@CloudStoreCore@23456@AEBVCloudStoreItemId@23456@AEBU7823456@AEBV?$versioned@V?$tombstoned@Vschematized_data@@@@@@W4CloudStoreCoreSaveOptions@23456@AEBVCorrelationVector@23456@@Z
    virtual WindissectOpaque Save(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveNoExceptionEventLogging@CloudStoreCoreImpl@Core@Cloud@Storage@Internal@Windows@@QEAA?AUEntry@CloudStoreCore@23456@AEBVCloudStoreItemId@23456@AEBU7823456@AEBV?$versioned@V?$tombstoned@Vschematized_data@@@@@@W4CloudStoreCoreSaveOptions@23456@AEBVCorrelationVector@23456@@Z
    WindissectOpaque SaveNoExceptionEventLogging(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveWithRetry@CloudStoreCoreImpl@Core@Cloud@Storage@Internal@Windows@@QEAA?AUEntry@CloudStoreCore@23456@AEBVCloudStoreItemId@23456@AEBU7823456@AEBV?$versioned@V?$tombstoned@Vschematized_data@@@@@@W4CloudStoreCoreSaveOptions@23456@AEBVCorrelationVector@23456@@Z
    WindissectOpaque SaveWithRetry(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, int, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStoreCoreImpl@Core@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudStoreCoreImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildGetCollectionItemsRequestResponse@CloudStoreCoreImpl@Core@Cloud@Storage@Internal@Windows@@AEAA?AUDownloadUnitsArtifacts@123456@AEBVCloudStoreCollectionId@23456@Uhstring@winrt@@_NAEBVCorrelationVector@23456@@Z
    WindissectOpaque BuildGetCollectionItemsRequestResponse(WindissectOpaque const &, WindissectOpaque, bool, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCloudStoreDataReturnObj@CloudStoreCoreImpl@Core@Cloud@Storage@Internal@Windows@@AEAA?AUCloudStoreData@3456winrt@@AEBUEntry@CurrentCache@23456@W4CloudStoreDataStatus@3456@AEBV?$versioned@V?$tombstoned@Vschematized_data@@@@@@AEBVCloudStoreCollectionId@23456@AEBVCloudStoreItemId@23456@JW4DataDescriptionLanguage@3456@_K@Z
    WindissectOpaque CreateCloudStoreDataReturnObj(WindissectOpaque const &, int, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, long, int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDeviceProfileExists@CloudStoreCoreImpl@Core@Cloud@Storage@Internal@Windows@@AEAAXAEAVInitalizeDevicePartitionsAndProfileActivity@CloudStoreTelemetry@3456@AEBUhstring@winrt@@1VCorrelationVector@23456@@Z
    void EnsureDeviceProfileExists(WindissectOpaque &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePartitionsExists@CloudStoreCoreImpl@Core@Cloud@Storage@Internal@Windows@@AEAAXAEAVInitalizeDevicePartitionsAndProfileActivity@CloudStoreTelemetry@3456@AEAUhstring@winrt@@1VCorrelationVector@23456@@Z
    void EnsurePartitionsExists(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivityType@CloudStoreCoreImpl@Core@Cloud@Storage@Internal@Windows@@AEAA?AW4CDPActivityType@@AEBVCloudStoreItemId@23456@@Z
    int GetActivityType(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCDPDownloadOptionFlagsByAppActivityId@CloudStoreCoreImpl@Core@Cloud@Storage@Internal@Windows@@AEAA?BW4CDPDownloadOptionFlags@@AEBVRuntimeSchema@bond@@W4CloudStoreCoreLoadOptions@23456@@Z
    int GetCDPDownloadOptionFlagsByAppActivityId(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClientCacheTypeCore@CloudStoreCoreImpl@Core@Cloud@Storage@Internal@Windows@@AEAA?AW4ClientCacheType@@AEBVRuntimeSchema@bond@@AEBVCloudStoreItemId@23456@@Z
    int GetClientCacheTypeCore(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCloudCache@CloudStoreCoreImpl@Core@Cloud@Storage@Internal@Windows@@AEAAAEAVCloudCache@23456@XZ
    WindissectOpaque & GetCloudCache();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentCache@CloudStoreCoreImpl@Core@Cloud@Storage@Internal@Windows@@AEAAAEAVCurrentCache@23456@XZ
    WindissectOpaque & GetCurrentCache();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDownloadState@CloudStoreCoreImpl@Core@Cloud@Storage@Internal@Windows@@AEAAJAEBUDownloadResult@Downloader@3456winrt@@@Z
    long GetDownloadState(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHresultFromDownloadErrorDetails@CloudStoreCoreImpl@Core@Cloud@Storage@Internal@Windows@@CAJUDownloadErrorDetails@Downloader@3456winrt@@_K@Z
    static long GetHresultFromDownloadErrorDetails(WindissectOpaque, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRetryCache@CloudStoreCoreImpl@Core@Cloud@Storage@Internal@Windows@@AEAAAEAVRetryCache@23456@XZ
    WindissectOpaque & GetRetryCache();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVersionedDataFromActivity@CloudStoreCoreImpl@Core@Cloud@Storage@Internal@Windows@@AEAA?AV?$versioned@V?$tombstoned@Vschematized_data@@@@@@PEAVICDPActivity@@AEBVCloudStoreItemId@23456@_K@Z
    WindissectOpaque GetVersionedDataFromActivity(ICDPActivity *, WindissectOpaque const &, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLocalOnly@CloudStoreCoreImpl@Core@Cloud@Storage@Internal@Windows@@CA_NAEBVRuntimeSchema@bond@@@Z
    static bool IsLocalOnly(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessGetCollectionItemsResponse@CloudStoreCoreImpl@Core@Cloud@Storage@Internal@Windows@@AEAA?AUGetCollectionItemsInternalResult@123456@AEBUDownloadUnitsArtifacts@123456@AEBUDownloadResult@Downloader@3456winrt@@W4CloudStoreCoreCollectionOptions@23456@@Z
    WindissectOpaque ProcessGetCollectionItemsResponse(WindissectOpaque const &, WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdatePartitionMetadataIfNeeded@CloudStoreCoreImpl@Core@Cloud@Storage@Internal@Windows@@AEAA?AUPartition@Partitioning@Platform@Data@6@AEBVCloudStoreCollectionId@23456@_NAEBVCorrelationVector@23456@@Z
    ::Windows::Data::Platform::Partitioning::Partition TryUpdatePartitionMetadataIfNeeded(WindissectOpaque const &, bool, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCache@CloudStoreCoreImpl@Core@Cloud@Storage@Internal@Windows@@AEAAXW4CDPActivityType@@AEBVCloudStoreItemId@23456@AEBUEntry@CurrentCache@23456@W4CloudStoreCoreSaveOptions@23456@@Z
    void UpdateCache(int, WindissectOpaque const &, WindissectOpaque const &, int);
};
} // namespace Windows::Internal::Storage::Cloud::Core
