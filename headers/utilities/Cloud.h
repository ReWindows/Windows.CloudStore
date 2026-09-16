#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 8 member(s).
namespace Windows::Internal::Storage {
class Cloud {
public:
    class BufferOverCore;
    class CloudStorage;
    class CloudStore;
    class CloudStoreBatchSaveItemData;
    class CloudStoreBatchSaveItemDataFactory;
    class CloudStoreCache;
    class CloudStoreCollectionChangedEventArgs;
    class CloudStoreCollectionNameOverCore;
    class CloudStoreCollectionWatcherOverCore;
    class CloudStoreData;
    class CloudStoreDataChangedEventArgs;
    class CloudStoreDataDescriptor;
    class CloudStoreDataOverCore;
    class CloudStoreDataWatcher;
    class CloudStoreDataWatcherOverCore;
    class CloudStoreFactory;
    class CloudStoreHomeCloudMgr;
    class CloudStoreHttpClient;
    class CloudStoreItemName;
    class CloudStoreItemNameOverCore;
    class CloudStoreItemReferenceOverCore;
    class CloudStoreMetadata;
    class CloudStoreRetryTimer;
    class CloudStoreSaveResult;
    class CloudStoreSaveResultOverCore;
    class CloudStoreSchema;
    class CloudStoreTelemetry;
    class CloudStoreTokenBroker;
    class CollectionChangeCallbackImpl;
    class Common;
    class Core;
    class EnvironmentConfiguration;
    class FileStorage;
    class GetCollectionItemsResultOverCore;
    class HomeCloudInfo;
    class ICloudStoreHomeCloudMgr;
    class ICloudStoreHttpClient;
    class ICloudStoreRetryTimer;
    class ICloudStoreTokenBroker;
    class IServiceEnvironmentConfig;
    class ItemChangeCallbackImpl;
    class Policy;
    class RegistryDataWatcher;
    class RegistryStorage;
    class ServiceEnvironmentConfig;
    class TestHookCallbackOverCore;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloudStoreCache_CreateInstance@Cloud@Storage@Internal@Windows@@YAJPEAUIDefaultLocalStorage@1234@PEAUIBulkLocalStorage@1234@PEAPEAUICloudStoreCache@1234@@Z
    long CloudStoreCache_CreateInstance(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloudStoreDataDescriptor_CreateInstance@Cloud@Storage@Internal@Windows@@YAJPEBG000_KPEAUIStream@@PEAPEAUICloudStoreDataDescriptor@1234@@Z
    long CloudStoreDataDescriptor_CreateInstance(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, uint64_t, IStream *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloudStoreSchema_CreateInstance@Cloud@Storage@Internal@Windows@@YAJAEBVEffectiveUserContext@@PEBG1PEAPEAUICloudStoreSchema@1234@@Z
    long CloudStoreSchema_CreateInstance(EffectiveUserContext const &, unsigned short const *, unsigned short const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FileStorage_CreateInstance@Cloud@Storage@Internal@Windows@@YAJPEBGPEAPEAUIBulkLocalStorage@1234@@Z
    long FileStorage_CreateInstance(unsigned short const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBulkLocalStorage@Cloud@Storage@Internal@Windows@@YAJPEAPEAUIBulkLocalStorage@1234@@Z
    long GetBulkLocalStorage(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentTimeAsInt64@Cloud@Storage@Internal@Windows@@YA_KXZ
    uint64_t GetCurrentTimeAsInt64();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultLocalStorage@Cloud@Storage@Internal@Windows@@YAJPEAPEAUIDefaultLocalStorage@1234@@Z
    long GetDefaultLocalStorage(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVersionOlderThanNDays@Cloud@Storage@Internal@Windows@@YA_N_KH@Z
    bool IsVersionOlderThanNDays(uint64_t, int);
};
} // namespace Windows::Internal::Storage
