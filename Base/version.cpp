#include <hook.h>
#include <string>

THook(
    std::string,
    "?getServerVersionString@Common@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ") {
  return original() + " With wine-bdlauncher";
}