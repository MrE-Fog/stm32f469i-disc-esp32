// 4.16.0 0x7a0cda6a
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_d1_mt8050ie_meter[]; // BITMAP_D1_MT8050IE_METER_ID = 0, Size: 800x480 pixels
extern const unsigned char image_d2_mt8070ie_heatersystem_mod[]; // BITMAP_D2_MT8070IE_HEATERSYSTEM_MOD_ID = 1, Size: 800x480 pixels
extern const unsigned char image_d3_mt8100ie_ac_system[]; // BITMAP_D3_MT8100IE_AC_SYSTEM_ID = 2, Size: 800x480 pixels
extern const unsigned char image_e2_mt8150xe_demo[]; // BITMAP_E2_MT8150XE_DEMO_ID = 3, Size: 800x480 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] =
{
    { image_d1_mt8050ie_meter, 0, 800, 480, 0, 0, 800, (uint8_t)(touchgfx::Bitmap::RGB888) >> 3, 480, (uint8_t)(touchgfx::Bitmap::RGB888) & 0x7 },
    { image_d2_mt8070ie_heatersystem_mod, 0, 800, 480, 0, 0, 800, (uint8_t)(touchgfx::Bitmap::RGB888) >> 3, 480, (uint8_t)(touchgfx::Bitmap::RGB888) & 0x7 },
    { image_d3_mt8100ie_ac_system, 0, 800, 480, 0, 0, 800, (uint8_t)(touchgfx::Bitmap::RGB888) >> 3, 480, (uint8_t)(touchgfx::Bitmap::RGB888) & 0x7 },
    { image_e2_mt8150xe_demo, 0, 800, 480, 0, 0, 800, (uint8_t)(touchgfx::Bitmap::RGB888) >> 3, 480, (uint8_t)(touchgfx::Bitmap::RGB888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
}
