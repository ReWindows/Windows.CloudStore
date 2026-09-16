#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 6 member(s).
namespace Windows::Internal::Storage::Cloud {
class Core {
public:
    class ActivityAssetPublishCallback;
    class ActivityCallback;
    class ActivityDismissCallback;
    class ActivityPublishCallback;
    class ActivityStoreReaderCallbackWrapper;
    class CloudCacheImpl;
    class CloudCacheInvalidatorImpl;
    class CloudChangeNotificationDispatcher;
    class CloudStoreCollectionId;
    class CloudStoreCoreBackupStatusImpl;
    class CloudStoreCoreBatchSaveItemData;
    class CloudStoreCoreImpl;
    class CloudStoreItemId;
    class CloudStoreMockBackupStatusImpl;
    class CompositeDataWatcher;
    class CorrelationVector;
    class CurrentCache;
    class CurrentCacheImpl;
    class DefaultLocalStorageCollectionWatcher;
    class DefaultLocalStorageImpl;
    class DefaultLocalStorageItemWatcher;
    class DefaultLocalStorageWatcherBase;
    class DirectStoreMetadata;
    class GetActivitiesByAppActivityIdAndDeviceIdAsyncCallback;
    class GetActivitiesByAppActivityIdAsyncCallback;
    class GetActivitiesByGroupAndDeviceIdAsyncCallback;
    class GetActivitiesByGroupAsyncCallback;
    class GetActivityAssetCallback;
    class LocalCacheReplicaBase;
    class PersistentKeyValueStoreImpl;
    class ReaderSubscription;
    class RetryCacheImpl;
    class VerifyFeatureVelocityImpl;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendCorrelationVector@Core@Cloud@Storage@Internal@Windows@@YAXAEAY0IB@DI@Z
    void AppendCorrelationVector(char (&)[129], unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRandomNumberInBase64@Core@Cloud@Storage@Internal@Windows@@YAXAEAY0M@D@Z
    void GetRandomNumberInBase64(char (&)[12]);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LowBitMaskOfWithBitWidth@Core@Cloud@Storage@Internal@Windows@@YA_K_K@Z
    uint64_t LowBitMaskOfWithBitWidth(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeVersionedTombstonedData@Core@Cloud@Storage@Internal@Windows@@YA?AV?$versioned@V?$tombstoned@Vschematized_data@@@@@@AEBVRuntimeSchema@bond@@AEBVblob@8@_K@Z
    WindissectOpaque MakeVersionedTombstonedData(WindissectOpaque const &, WindissectOpaque const &, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateCloudStoreCollectionId@Core@Cloud@Storage@Internal@Windows@@YAXAEBVCloudStoreCollectionId@12345@@Z
    void ValidateCloudStoreCollectionId(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateCloudStoreItemId@Core@Cloud@Storage@Internal@Windows@@YAXAEBVCloudStoreItemId@12345@@Z
    void ValidateCloudStoreItemId(WindissectOpaque const &);
};
} // namespace Windows::Internal::Storage::Cloud
