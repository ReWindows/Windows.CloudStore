#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 5 member(s).
namespace Windows::Internal::Storage::Cloud {
class CloudStoreTokenBroker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixAccount@CloudStoreTokenBroker@Cloud@Storage@Internal@Windows@@UEAAJUWindowId@UI@5@VCorrelationVector@Core@2345@UWebAccount@Credentials@Security@5winrt@@@Z
    virtual long FixAccount(::Windows::UI::WindowId, WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTokenAsync@CloudStoreTokenBroker@Cloud@Storage@Internal@Windows@@UEAA?AU?$IAsyncOperation@UHttpCredentialsHeaderValue@Headers@Http@Web@Windows@winrt@@@Foundation@5winrt@@UWebAccount@Credentials@Security@58@@Z
    virtual WindissectOpaque GetTokenAsync(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloudStoreTokenBroker@Cloud@Storage@Internal@Windows@@UEAA@XZ
    virtual ~CloudStoreTokenBroker();
};
} // namespace Windows::Internal::Storage::Cloud
