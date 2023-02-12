// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.2.0
// PROJECT: SmartFarmDashboard

#ifndef _SMARTFARMDASHBOARD_UI_H
#define _SMARTFARMDASHBOARD_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

void ui_event_Screen1(lv_event_t * e);
extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_AppBar;
extern lv_obj_t * ui_Time;
extern lv_obj_t * ui_Screen1_Title;
extern lv_obj_t * ui_Wifi_Signel;
extern lv_obj_t * ui_RoomTemp_Group;
extern lv_obj_t * ui_RoomTempTitle;
extern lv_obj_t * ui_RoomTempData;
extern lv_obj_t * ui_Label2;
extern lv_obj_t * ui_SunLight_Group;
extern lv_obj_t * ui_SunLightTitle;
extern lv_obj_t * ui_SunLightData;
extern lv_obj_t * ui_Label6;
extern lv_obj_t * ui_Soil_Moisture_Group;
extern lv_obj_t * ui_MoistureTitle;
extern lv_obj_t * ui_MoistureData;
extern lv_obj_t * ui_Label4;
extern lv_obj_t * ui_Soil_TempGroup;
extern lv_obj_t * ui_HumidTitle1;
extern lv_obj_t * ui_SoilTemp;
extern lv_obj_t * ui_Label1;
extern lv_obj_t * ui_RoomHumid_Group;
extern lv_obj_t * ui_Label3;
extern lv_obj_t * ui_RoomHumidTitle;
extern lv_obj_t * ui_RoomHumidData;
extern lv_obj_t * ui_fertility_Group;
extern lv_obj_t * ui_FertilityTitla;
extern lv_obj_t * ui_FertilityData;
extern lv_obj_t * ui_Label5;
void ui_event_Screen2(lv_event_t * e);
extern lv_obj_t * ui_Screen2;
void ui_event_WateringIcon(lv_event_t * e);
extern lv_obj_t * ui_WateringIcon;
extern lv_obj_t * ui_LightStatTitle1;
extern lv_obj_t * ui_Stat2;
extern lv_obj_t * ui_WateringIMG;
void ui_event_LightIcon(lv_event_t * e);
extern lv_obj_t * ui_LightIcon;
extern lv_obj_t * ui_LightStatTitle;
extern lv_obj_t * ui_Stat1;
extern lv_obj_t * ui_LightIMG;
void ui_event_FanIcon(lv_event_t * e);
extern lv_obj_t * ui_FanIcon;
extern lv_obj_t * ui_FanIMG;
extern lv_obj_t * ui_FanStatTitle;
extern lv_obj_t * ui_Stat;
extern lv_obj_t * ui_AppBar1;
extern lv_obj_t * ui_Time1;
extern lv_obj_t * ui_Screen2_Title;
extern lv_obj_t * ui_Wifi_Signel1;


LV_IMG_DECLARE(ui_img_watering2_png);    // assets\watering2.png
LV_IMG_DECLARE(ui_img_lighting_png);    // assets\lighting.png
LV_IMG_DECLARE(ui_img_974855107);    // assets\fan (3).png




void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
