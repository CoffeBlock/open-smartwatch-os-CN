#include "osw_config_keys.h"

#include <nvs_flash.h>
#include <rom/rtc.h>

#include "gfx_util.h"

// Add your keys to this namespace (do not forget to also declare them inside the header)
namespace OswConfigAllKeys {
OswConfigKeyString wifiSsid("a", "WiFi", "WLAN SSID", "Your wifi name", WIFI_SSID);
OswConfigKeyPassword wifiPass("b", "WiFi", "WLAN Password", nullptr, WIFI_PASS);
OswConfigKeyRGB themePrimaryColor("c", "Theme & UI", "Primary color", nullptr, rgb888(179, 107, 0));
OswConfigKeyShort displayTimeout("d", "Theme & UI", "Screen timeout", "Seconds until the screen blanks", 15);
}  // namespace OswConfigAllKeys

// And also here, if you want to make it available in the configuration ui
const unsigned char oswConfigKeysCount = 4;
OswConfigKey* oswConfigKeys[] = {&OswConfigAllKeys::wifiSsid, &OswConfigAllKeys::wifiPass,
                                 &OswConfigAllKeys::themePrimaryColor, &OswConfigAllKeys::displayTimeout};