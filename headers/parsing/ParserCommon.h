#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 4 member(s).
namespace Windows::Internal::Storage::Cloud::Downloader::Types {
class ParserCommon {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedBoolIfNotNull@ParserCommon@Types@Downloader@Cloud@Storage@Internal@Windows@@SA_NUJsonObject@Json@Data@7winrt@@PEBG_N@Z
    static bool GetNamedBoolIfNotNull(WindissectOpaque, unsigned short const *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedNumberIfNotNull@ParserCommon@Types@Downloader@Cloud@Storage@Internal@Windows@@SANUJsonObject@Json@Data@7winrt@@PEBGN@Z
    static double GetNamedNumberIfNotNull(WindissectOpaque, unsigned short const *, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedStringIfNotNull@ParserCommon@Types@Downloader@Cloud@Storage@Internal@Windows@@SA?AUhstring@winrt@@UJsonObject@Json@Data@79@U89@PEBG@Z
    static WindissectOpaque GetNamedStringIfNotNull(WindissectOpaque, WindissectOpaque, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringFieldOrThrow@ParserCommon@Types@Downloader@Cloud@Storage@Internal@Windows@@SA?AUhstring@winrt@@UJsonObject@Json@Data@79@PEBG@Z
    static WindissectOpaque GetStringFieldOrThrow(WindissectOpaque, unsigned short const *);
};
} // namespace Windows::Internal::Storage::Cloud::Downloader::Types
