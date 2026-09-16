#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 15 member(s).
namespace Windows::Internal::Storage::Cloud::Downloader::Utils {
class DownloaderUtils {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildClientInfoHeaderString@DownloaderUtils@Utils@Downloader@Cloud@Storage@Internal@Windows@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque BuildClientInfoHeaderString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToHexString@DownloaderUtils@Utils@Downloader@Cloud@Storage@Internal@Windows@@SA?AUhstring@winrt@@AEBU89@@Z
    static WindissectOpaque ConvertToHexString(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePathUnderAppDataAndReturnFullFilePath@DownloaderUtils@Utils@Downloader@Cloud@Storage@Internal@Windows@@SA?AUhstring@winrt@@AEBU89@0@Z
    static WindissectOpaque CreatePathUnderAppDataAndReturnFullFilePath(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePathUnderAppDataAndReturnFullFilePathWithLongPath@DownloaderUtils@Utils@Downloader@Cloud@Storage@Internal@Windows@@SA?AUhstring@winrt@@AEBU89@0@Z
    static WindissectOpaque CreatePathUnderAppDataAndReturnFullFilePathWithLongPath(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateCacheEntryAsBlob@DownloaderUtils@Utils@Downloader@Cloud@Storage@Internal@Windows@@SA?AVblob@bond@@AEBV89@_K@Z
    static WindissectOpaque GenerateCacheEntryAsBlob(WindissectOpaque const &, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceManufacturerName@DownloaderUtils@Utils@Downloader@Cloud@Storage@Internal@Windows@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque GetDeviceManufacturerName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceModelName@DownloaderUtils@Utils@Downloader@Cloud@Storage@Internal@Windows@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque GetDeviceModelName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOsLocale@DownloaderUtils@Utils@Downloader@Cloud@Storage@Internal@Windows@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque GetOsLocale();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOsVersion@DownloaderUtils@Utils@Downloader@Cloud@Storage@Internal@Windows@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque GetOsVersion();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVersionForStoredCacheEntry@DownloaderUtils@Utils@Downloader@Cloud@Storage@Internal@Windows@@SA_KXZ
    static uint64_t GetVersionForStoredCacheEntry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Tokenize@DownloaderUtils@Utils@Downloader@Cloud@Storage@Internal@Windows@@SA?AUCloudDataStoreTypeInfo@234567@AEBUhstring@winrt@@0@Z
    static WindissectOpaque Tokenize(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteFileToStorage@DownloaderUtils@Utils@Downloader@Cloud@Storage@Internal@Windows@@SA_NPEBXKAEBUhstring@winrt@@@Z
    static bool WriteFileToStorage(void const *, unsigned long, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteFileToStorage@DownloaderUtils@Utils@Downloader@Cloud@Storage@Internal@Windows@@SA_NUIBuffer@Streams@57winrt@@AEBUhstring@winrt@@@Z
    static bool WriteFileToStorage(WindissectOpaque, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DownloaderUtils@Utils@Downloader@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~DownloaderUtils();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindDelimiter@DownloaderUtils@Utils@Downloader@Cloud@Storage@Internal@Windows@@CAJAEBUhstring@winrt@@0PEA_K@Z
    static long FindDelimiter(WindissectOpaque const &, WindissectOpaque const &, uint64_t *);
};
} // namespace Windows::Internal::Storage::Cloud::Downloader::Utils
