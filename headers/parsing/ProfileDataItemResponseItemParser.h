#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 2 member(s).
namespace Windows::Internal::Storage::Cloud::Downloader::Types {
class ProfileDataItemResponseItemParser {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Parse@ProfileDataItemResponseItemParser@Types@Downloader@Cloud@Storage@Internal@Windows@@SA?AV1234567@AEBUIJsonValue@Json@Data@7winrt@@@Z
    static WindissectOpaque Parse(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProfileDataItemResponseItemParser@Types@Downloader@Cloud@Storage@Internal@Windows@@QEAA@XZ
    ~ProfileDataItemResponseItemParser();
};
} // namespace Windows::Internal::Storage::Cloud::Downloader::Types
