/***************************************************
 * @file    user_effect_flow_music.c                      
 * @brief   auto generated                          
 * @author  ACPWorkbench: 3.13.1                  
 * @version V1.2.0                                 
 * @graphics: music   
 * @Effect Version: 2.45.5
 * @RoboEffect Version: 2.25.5
 * @Created 2024-11-04T15:13:31                                      
 * @copy; Shanghai Mountain View Silicon Technology Co.,Ltd. All rights reserved.
 ***************************************************/

#include "stdio.h"
#include "type.h"
#include "roboeffect_config.h"
#include "roboeffect_api.h"
#include "user_defined_effect_api.h"
#include "user_effect_flow_music.h"

const char *chart_name_music = "music";
const unsigned char user_effects_script_music[] = {
0x03, 0x06, 0x00, 0x02, 0x05, 0x6d, 0x75, 0x73, 0x69, 0x63, 0x07, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x2e, 
0x39, 0x3e, 0x39, 0x2c, 0x38, 0x37, 0x2c, 0x3f, 0x76, 0x6e, 0x69, 0x2e, 0x39, 0x3e, 0x39, 0x2c, 0x38, 0x37, 0x2c, 0x3f, 
0x7e, 0x11, 0x00, 0x19, 0x05, 0x6e, 0x7b, 0x79, 0x7f, 0x68, 0x43, 0x29, 0x24, 0x30, 0x69, 0x70, 0x76, 0x3e, 0x20, 0x2e, 
0x09, 0x37, 0x3b, 0x2e, 0x7e, 0x11, 0x00, 0x19, 0x05, 0x6e, 0x7b, 0x79, 0x7f, 0x7f, 0x69, 0x20, 0x23, 0x20, 0x20, 0x2e, 
0x09, 0x37, 0x3b, 0x2e, 0x7e, 0x11, 0x00, 0x19, 0x05, 0x6e, 0x7b, 0x79, 0x7f, 0x68, 0x43, 0x28, 0x27, 0x73, 0x74, 0x6d, 
0x3b, 0x3a, 0x2a, 0x12, 0x33, 0x22, 0x79, 0x65, 0x14, 0x1a, 0x1d, 0x1e, 0x6b, 0x61, 0x7d, 0x64, 0x7a, 0x73, 0x24, 0x24, 
0x35, 0x0c, 0x0c, 0x1c, 0x7e, 0x11, 0x00, 0x19, 0x05, 0x6e, 0x7b, 0x79, 0x7f, 0x7f, 0x69, 0x28, 0x27, 0x62, 0x61, 0x0f, 
0x1f, 0x07, 0x1a, 0x70, 0x64, 0x67, 0x60, 0x61, 0x76, 0x36, 0x38, 0x7f, 0x7e, 0x11, 0x00, 0x19, 0x05, 0x6e, 0x7b, 0x79, 
0x7f, 0x7f, 0x69, 0x20, 0x23, 0x20, 0x20, 0x2e, 0x09, 0x16, 0x18, 0x65, 0x14, 0x1a, 0x1d, 0x1e, 0x6b, 0x61, 0x7d, 0x64, 
0x7a, 0x73, 0x2c, 0x3c, 0x66, 0x7b, 0x0b, 0x04, 0x02, 0x00, 0x74, 0x7f, 0x62, 0x7a, 0x72, 0x47, 0x31, 0x32, 0x20, 0x23, 
0x09, 0x30, 0x26, 0x23, 0x22, 0x21, 0x26, 0x21, 0x76, 0x6e, 0x69, 0x20, 0x3f, 0x30, 0x16, 0x2a, 0x37, 0x3a, 0x27, 0x65, 
0x14, 0x1a, 0x1d, 0x1e, 0x6b, 0x61, 0x7d, 0x64, 0x7a, 0x73, 0x2e, 0x2c, 0x3f, 0x3d, 0x16, 0x2e, 0x39, 0x3d, 0x3d, 0x3f, 
0x39, 0x3f, 0x79, 0x65, 0x14, 0x1a, 0x1d, 0x1e, 0x6b, 0x61, 0x7d, 0x64, 0x7a, 0x73, 0x2e, 0x2c, 0x3f, 0x3d, 0x16, 0x2e, 
0x39, 0x3d, 0x3d, 0x3f, 0x39, 0x3f, 0x7b, 0x65, 0x14, 0x1a, 0x1d, 0x1e, 0x6b, 0x61, 0x7d, 0x64, 0x7a, 0x73, 0x2e, 0x2c, 
0x3f, 0x3d, 0x16, 0x2e, 0x39, 0x3d, 0x3d, 0x3f, 0x39, 0x3f, 0x78, 0x65, 0x14, 0x1a, 0x1d, 0x1e, 0x6b, 0x61, 0x7d, 0x64, 
0x7a, 0x73, 0x2e, 0x2c, 0x3f, 0x3d, 0x16, 0x2e, 0x39, 0x3d, 0x3d, 0x3f, 0x39, 0x3f, 0x7a, 0x65, 0x14, 0x1a, 0x1d, 0x1e, 
0x6b, 0x61, 0x7d, 0x64, 0x7a, 0x73, 0x39, 0x3f, 0x33, 0x14, 0x28, 0x24, 0x38, 0x7b, 0x0b, 0x04, 0x02, 0x00, 0x74, 0x7f, 
0x62, 0x7a, 0x72, 0x47, 0x3e, 0x32, 0x3b, 0x20, 0x39, 0x3d, 0x20, 0x2e, 0x09, 0x36, 0x31, 0x2e, 0x3f, 0x27, 0x2c, 0x3f, 
0x76, 0x6e, 0x69, 0x25, 0x37, 0x21, 0x24, 0x22, 0x38, 0x3a, 0x2a, 0x12, 0x33, 0x2b, 0x2a, 0x24, 0x22, 0x36, 0x3b, 0x7d, 
0x7e, 0x11, 0x00, 0x19, 0x05, 0x6e, 0x7b, 0x79, 0x7f, 0x68, 0x43, 0x21, 0x39, 0x24, 0x16, 0x21, 0x33, 0x25, 0x2c, 0x21, 
0x09, 0x30, 0x26, 0x20, 0x26, 0x21, 0x2c, 0x3e, 0x25, 0x3c, 0x3b, 0x6d, 0x6b, 0x73, 0x25, 0x22, 0x21, 0x0c, 0x25, 0x28, 
0x20, 0x36, 0x25, 0x12, 0x35, 0x3c, 0x24, 0x3d, 0x24, 0x36, 0x3a, 0x3e, 0x39, 0x21, 0x78, 0x65, 0x14, 0x1a, 0x1d, 0x1e, 
0x6b, 0x61, 0x7d, 0x64, 0x7a, 0x73, 0x25, 0x22, 0x21, 0x0c, 0x25, 0x28, 0x20, 0x36, 0x25, 0x12, 0x35, 0x3c, 0x24, 0x3d, 
0x24, 0x36, 0x3a, 0x3e, 0x39, 0x21, 0x79, 0x65, 0x14, 0x1a, 0x1d, 0x1e, 0x6b, 0x61, 0x7d, 0x64, 0x6d, 0x59, 0x27, 0x22, 
0x32, 0x36, 0x69, 0x70, 0x76, 0x3d, 0x7b, 0x61, 0x76, 0x3d, 0x7a, 0x61, 0x76, 0x3d, 0x7c, 0x61, 0x76, 0x3d, 0x7f, 0x61, 
0x76, 0x3d, 0x7e, 0x61, 0x76, 0x3d, 0x79, 0x61, 0x76, 0x3d, 0x78, 0x61, 0x76, 0x3d, 0x7d, 0x65, 0x14, 0x1a, 0x1d, 0x1e, 
0x6b, 0x61, 0x7d, 0x64, 0x7a, 0x73, 0x27, 0x75, 0x7e, 0x11, 0x00, 0x19, 0x05, 0x6e, 0x7b, 0x79, 0x7f, 0x7f, 0x69, 0x23, 
0x6f, 0x7b, 0x0b, 0x04, 0x02, 0x00, 0x74, 0x7f, 0x62, 0x7a, 0x65, 0x6d, 0x38, 0x62, 0x79, 0x65, 0x14, 0x1a, 0x1d, 0x1e, 
0x6b, 0x61, 0x7d, 0x64, 0x6d, 0x59, 0x27, 0x22, 0x3f, 0x20, 0x2c, 0x12, 0x25, 0x26, 0x39, 0x3d, 0x24, 0x36, 0x3a, 0x3e, 
0x39, 0x21, 0x16, 0x28, 0x2e, 0x23, 0x28, 0x23, 0x32, 0x36, 0x3b, 0x6d, 0x6b, 0x73, 0x24, 0x24, 0x35, 0x0c, 0x27, 0x3e, 
0x7e, 0x11, 0x00, 0x19, 0x05, 0x6e, 0x7b, 0x79, 0x7f, 0x7f, 0x69, 0x23, 0x39, 0x3a, 0x3a, 0x28, 0x09, 0x20, 0x3c, 0x3d, 
0x26, 0x21, 0x2c, 0x3e, 0x25, 0x3c, 0x3b, 0x12, 0x33, 0x2b, 0x39, 0x2c, 0x38, 0x37, 0x2c, 0x3f, 0x66, 0x7b, 0x0b, 0x04, 
0x02, 0x00, 0x74, 0x7f, 0x62, 0x7a, 0x72, 0x47, 0x25, 0x3a, 0x25, 0x28, 0x38, 0x30, 0x2c, 0x12, 0x32, 0x36, 0x3d, 0x28, 
0x35, 0x27, 0x26, 0x3f, 0x76, 0x6e, 0x69, 0x3e, 0x3f, 0x3f, 0x2c, 0x23, 0x35, 0x36, 0x16, 0x29, 0x33, 0x27, 0x2c, 0x2e, 
0x22, 0x3c, 0x3b, 0x12, 0x3b, 0x26, 0x3a, 0x24, 0x35, 0x7b, 0x0b, 0x04, 0x02, 0x00, 0x74, 0x7f, 0x62, 0x7a, 0x65, 0x6d, 
0x25, 0x3a, 0x25, 0x28, 0x38, 0x30, 0x2c, 0x12, 0x32, 0x36, 0x3d, 0x28, 0x35, 0x27, 0x26, 0x3f, 0x09, 0x3e, 0x20, 0x2e, 
0x7e, 0x11, 0x00, 0x19, 0x05, 0x6e, 0x7b, 0x79, 0x7f, 0x68, 0x43, 0x3e, 0x3f, 0x3d, 0x22, 0x6d, 0x6b, 0x73, 0x0d, 0x0c, 
0x15, 0x63, 0x16, 0x1e, 0x1f, 0x1d, 0x02, 0x65, 0x14, 0x1a, 0x1d, 0x1e, 0x6b, 0x61, 0x7d, 0x64, 0x7a, 0x73, 0x08, 0x1d, 
0x06, 0x0c, 0x1a, 0x04, 0x18, 0x18, 0x61, 0x0f, 0x1f, 0x07, 0x1a, 0x70, 0x64, 0x67, 0x60, 0x61, 0x76, 0x00, 0x1d, 0x08, 
0x04, 0x16, 0x06, 0x12, 0x05, 0x1a, 0x07, 0x06, 0x7e, 0x11, 0x00, 0x19, 0x05, 0x6e, 0x7b, 0x79, 0x7f, 0x7f, 0x69, 0x1e, 
0x06, 0x17, 0x00, 0x0b, 0x09, 0x00, 0x00, 0x03, 0x1d, 0x7b, 0x0b, 0x04, 0x02, 0x00, 0x74, 0x7f, 0x62, 0x7a, 0x65, 0x6d, 
0x04, 0x16, 0x0a, 0x12, 0x05, 0x1a, 0x07, 0x06, 0x6d, 0x59, 0x3a, 0x22, 0x23, 0x21, 0x2a, 0x28, 0x76, 0x6e, 0x69, 0x00, 
0x1f, 0x10, 0x16, 0x1e, 0x19, 0x06, 0x1b, 0x0e, 0x13, 0x7b, 0x0b, 0x04, 0x02, 0x00, 0x74, 0x7f, 0x62, 0x7a, 0x65, 0x6d, 
0x17, 0x03, 0x19, 0x12, 0x05, 0x1c, 0x1c, 0x1f, 0x15, 0x16, 0x61, 0x0f, 0x1f, 0x07, 0x1a, 0x70, 0x64, 0x67, 0x60, 0x61, 
0x76, 0x01, 0x0c, 0x00, 0x1f, 0x1d, 0x0d, 0x12, 0x05, 0x1c, 0x1c, 0x1f, 0x15, 0x16, 0x61, 0x0f, 0x1f, 0x07, 0x1a, 0x70, 
0x64, 0x67, 0x60, 0x61, 0x76, 0x01, 0x0c, 0x0e, 0x09, 0x00, 0x06, 0x18, 0x04, 0x10, 0x0c, 0x65, 0x14, 0x1a, 0x1d, 0x1e, 
0x6b, 0x61, 0x7d, 0x64, 0x6d, 0x59, 0x3d, 0x25, 0x24, 0x36, 0x2c, 0x12, 0x32, 0x73, 0x74, 0x6d, 0x65, 0x17, 0x61, 0x0f, 
0x1f, 0x07, 0x1a, 0x70, 0x64, 0x67, 0x60, 0x76, 0x5c, 0x25, 0x20, 0x3f, 0x22, 0x26, 0x28, 0x21, 0x09, 0x31, 0x28, 0x3e, 
0x25, 0x73, 0x74, 0x6d, 0x3b, 0x25, 0x2b, 0x2c, 0x25, 0x20, 0x61, 0x0f, 0x1f, 0x07, 0x1a, 0x70, 0x64, 0x67, 0x60, 0x76, 
0x5c, 0x1e, 0x00, 0x0e, 0x09, 0x00, 0x06, 0x18, 0x04, 0x10, 0x0c, 0x61, 0x38, 0x67, 0x65, 0x3e, 0x3f, 0x3f, 0x2c, 0x23, 
0x35, 0x36, 0x16, 0x29, 0x33, 0x27, 0x2c, 0x2e, 0x22, 0x3c, 0x3b, 0x12, 0x3b, 0x3a, 0x2a, 0x76, 0x5c, 0x3d, 0x7d, 0x61, 
0x38, 0x6b, 0x65, 0x20, 0x3f, 0x30, 0x16, 0x28, 0x27, 0x63, 0x65, 0x20, 0x3f, 0x30, 0x16, 0x23, 0x25, 0x7f, 0x24, 0x24, 
0x35, 0x0c, 0x0c, 0x1c, 0x7a, 0x3e, 0x20, 0x2e, 0x09, 0x37, 0x3b, 0x2e, 0x7a, 0x3e, 0x20, 0x2e, 0x09, 0x34, 0x28, 0x24, 
0x38, 0x7f, 0x27, 0x7f, 0x7a, 0x3d, 0x7a, 0x61, 0x17, 0x03, 0x19, 0x12, 0x05, 0x1a, 0x07, 0x06, 0x6d, 0x59, 0x08, 0x1d, 
0x06, 0x0c, 0x1a, 0x02, 0x03, 0x01, 0x0a, 0x08, 0x7a, 0x23, 0x3b, 0x28, 0x11, 0x32, 0x20, 0x23, 0x7a, 0x3d, 0x70, 0x61, 
0x25, 0x3a, 0x25, 0x28, 0x38, 0x30, 0x2c, 0x12, 0x32, 0x36, 0x3d, 0x28, 0x35, 0x27, 0x26, 0x3f, 0x09, 0x3e, 0x3c, 0x3e, 
0x3f, 0x30, 0x72, 0x47, 0x38, 0x6a, 0x65, 0x23, 0x67, 0x63, 0x65, 0x2a, 0x37, 0x3a, 0x27, 0x12, 0x35, 0x3c, 0x27, 0x39, 
0x24, 0x3c, 0x25, 0x7d, 0x7a, 0x3d, 0x26, 0x24, 0x25, 0x36, 0x16, 0x3e, 0x23, 0x23, 0x39, 0x3f, 0x33, 0x20, 0x3a, 0x22, 
0x24, 0x0c, 0x2c, 0x35, 0x26, 0x32, 0x27, 0x29, 0x33, 0x21, 0x79, 0x61, 0x38, 0x66, 0x65, 0x2a, 0x37, 0x3a, 0x27, 0x12, 
0x35, 0x3c, 0x27, 0x39, 0x24, 0x3c, 0x25, 0x7f, 0x7a, 0x36, 0x38, 0x7c, 0x7a, 0x3d, 0x7f, 0x61, 0x35, 0x3c, 0x24, 0x3d, 
0x37, 0x3d, 0x2d, 0x28, 0x24, 0x7f, 0x25, 0x22, 0x21, 0x0c, 0x25, 0x28, 0x20, 0x36, 0x25, 0x12, 0x35, 0x3c, 0x24, 0x3d, 
0x24, 0x36, 0x3a, 0x3e, 0x39, 0x21, 0x78, 0x61, 0x3e, 0x32, 0x3b, 0x20, 0x39, 0x3d, 0x20, 0x2e, 0x09, 0x36, 0x31, 0x2e, 
0x3f, 0x27, 0x2c, 0x3f, 0x66, 0x7f, 0x24, 0x3b, 0x34, 0x32, 0x3a, 0x3e, 0x7a, 0x60, 0x0d, 0x61, 0x33, 0x22, 0x7b, 0x61, 
0x3b, 0x26, 0x3a, 0x24, 0x35, 0x0c, 0x2d, 0x3f, 0x35, 0x7f, 0x24, 0x38, 0x25, 0x3a, 0x2a, 0x12, 0x13, 0x02, 0x65, 0x23, 
0x61, 0x7f, 0x27, 0x7d, 0x7a, 0x3d, 0x78, 0x76, 0x5c, 0x3d, 0x7c, 0x61, 0x31, 0x32, 0x20, 0x23, 0x09, 0x30, 0x26, 0x23, 
0x22, 0x21, 0x26, 0x21, 0x67, 0x7f, 0x2c, 0x3c, 0x66, 0x7f, 0x25, 0x22, 0x21, 0x0c, 0x25, 0x28, 0x20, 0x36, 0x25, 0x12, 
0x35, 0x3c, 0x24, 0x3d, 0x24, 0x36, 0x3a, 0x3e, 0x39, 0x21, 0x79, 0x61, 0x38, 0x65, 0x72, 0x47, 0x04, 0x16, 0x04, 0x04, 
0x18, 0x17, 0x16, 0x1e, 0x19, 0x06, 0x1b, 0x0e, 0x13, 0x7f, 0x2e, 0x2c, 0x3f, 0x3d, 0x16, 0x2e, 0x39, 0x3d, 0x3d, 0x3f, 
0x39, 0x3f, 0x7a, 0x61, 0x38, 0x63, 0x72, 0x47, 0x38, 0x62, 0x65, 0x09, 0x17, 0x10, 0x79, 0x12, 0x05, 0x1a, 0x07, 0x06, 
0x6d, 0x59, 0x27, 0x7c, 0x7a, 0x00, 0x1d, 0x08, 0x04, 0x16, 0x06, 0x12, 0x05, 0x1a, 0x07, 0x06, 0x6d, 0x59, 0x27, 0x7c, 
0x7a, 0x00, 0x19, 0x09, 0x1f, 0x15, 0x16, 0x1e, 0x1f, 0x1d, 0x02, 0x76, 0x5c, 0x3d, 0x7e, 0x61, 0x04, 0x16, 0x0a, 0x12, 
0x05, 0x1a, 0x07, 0x06, 0x6d, 0x59, 0x1b, 0x08, 0x15, 0x0c, 0x1a, 0x02, 0x03, 0x01, 0x0a, 0x08, 0x7a, 0x3d, 0x79, 0x76, 
0x5c, 
};

static const roboeffect_exec_effect_info user_effects_music[] = {
    {MUSIC_silence_detector_mic_ADDR                   ,    ROBOEFFECT_SILENCE_DETECTOR             ,     BITS_24,       CH_STEREO},  //silence_detector_mic    
    {MUSIC_mic_eq0_ADDR                                ,    ROBOEFFECT_EQ                           ,     BITS_24,       CH_STEREO},  //mic_eq0    
    {MUSIC_mic_ns_ADDR                                 ,    ROBOEFFECT_NOISE_SUPPRESSOR_EXPANDER    ,     BITS_24,       CH_STEREO},  //mic_ns    
    {MUSIC_mic_EQ_ADDR                                 ,    ROBOEFFECT_EQ                           ,     BITS_24,       CH_STEREO},  //mic_EQ    
    {MUSIC_mic_drc_ADDR                                ,    ROBOEFFECT_DRC                          ,     BITS_24,       CH_STEREO},  //mic_drc    
    {MUSIC_mic_gain_ADDR                               ,    ROBOEFFECT_GAIN_CONTROL                 ,     BITS_24,       CH_STEREO},  //mic_gain    
    {MUSIC_preGain_ADDR                                ,    ROBOEFFECT_GAIN_CONTROL                 ,     BITS_24,       CH_STEREO},  //preGain    
    {MUSIC_silence_detector_music_ADDR                 ,    ROBOEFFECT_SILENCE_DETECTOR             ,     BITS_24,       CH_STEREO},  //silence_detector_music    
    {MUSIC_gain_control0_ADDR                          ,    ROBOEFFECT_GAIN_CONTROL                 ,     BITS_24,       CH_STEREO},  //gain_control0    
    {MUSIC_noise_suppressor_expander0_ADDR             ,    ROBOEFFECT_NOISE_SUPPRESSOR_EXPANDER    ,     BITS_24,       CH_STEREO},  //noise_suppressor_expander0    
    {MUSIC_gain_control2_ADDR                          ,    ROBOEFFECT_GAIN_CONTROL                 ,     BITS_24,       CH_STEREO},  //gain_control2    
    {MUSIC_eq1_ADDR                                    ,    ROBOEFFECT_EQ                           ,     BITS_24,       CH_STEREO},  //eq1    
    {MUSIC_compander_ADDR                              ,    ROBOEFFECT_COMPANDER                    ,     BITS_24,       CH_STEREO},  //compander    
    {MUSIC_low_level_compressor1_ADDR                  ,    ROBOEFFECT_LOW_LEVEL_COMPRESSOR         ,     BITS_24,       CH_STEREO},  //low_level_compressor1    
    {MUSIC_harmonic_exciter0_ADDR                      ,    ROBOEFFECT_HARMONIC_EXCITER             ,     BITS_24,       CH_STEREO},  //harmonic_exciter0    
    {MUSIC_mvbass_ADDR                                 ,    ROBOEFFECT_VIRTUAL_BASS                 ,     BITS_24,       CH_STEREO},  //mvbass    
    {MUSIC_3D_ADDR                                     ,    ROBOEFFECT_THREE_D                      ,     BITS_24,       CH_STEREO},  //3D    
    {MUSIC_eq2_ADDR                                    ,    ROBOEFFECT_EQ                           ,     BITS_24,       CH_STEREO},  //eq2    
    {MUSIC_music_drc_ADDR                              ,    ROBOEFFECT_DRC                          ,     BITS_24,       CH_STEREO},  //music_drc    
    {MUSIC_music_EQ_ADDR                               ,    ROBOEFFECT_EQ                           ,     BITS_24,       CH_STEREO},  //music_EQ    
    {MUSIC_gain_control1_ADDR                          ,    ROBOEFFECT_GAIN_CONTROL                 ,     BITS_24,       CH_STEREO},  //gain_control1    
    {MUSIC_eq0_ADDR                                    ,    ROBOEFFECT_EQ                           ,     BITS_24,       CH_STEREO},  //eq0    
    {MUSIC_low_level_compressor0_ADDR                  ,    ROBOEFFECT_LOW_LEVEL_COMPRESSOR         ,     BITS_24,       CH_STEREO},  //low_level_compressor0    
    {MUSIC_gain_control3_ADDR                          ,    ROBOEFFECT_GAIN_CONTROL                 ,     BITS_24,       CH_STEREO},  //gain_control3    
};              

roboeffect_effect_list_info user_effect_list_music = {
    MUSIC_COUNT_ADDR - 0x81, //count      
    44100, //sample rate
    256, //frame size
    user_effects_music,
};
static const roboeffect_io_unit source_unit_music[] = {
    {MUSIC_SOURCE_MIC_SOURCE          ,  0 , BITS_24         , CH_STEREO}, //{source, mem, bit_width, ch}
    {MUSIC_SOURCE_APP_SOURCE          ,  1 , BITS_24         , CH_STEREO}, //{source, mem, bit_width, ch}
    {MUSIC_SOURCE_REMIND_SOURCE       ,  2 , BITS_24         , CH_STEREO}, //{source, mem, bit_width, ch}
    {MUSIC_SOURCE_REC_SOURCE          ,  3 , BITS_24         , CH_STEREO}, //{source, mem, bit_width, ch}
};

static const roboeffect_io_unit sink_unit_music[] = {
    {MUSIC_SINK_DAC0_SINK           ,   3, BITS_24         , CH_STEREO}, //{sink, mem, bit_width, ch}
    {MUSIC_SINK_APP_SINK            ,   2, BITS_24         , CH_STEREO}, //{sink, mem, bit_width, ch}
    {MUSIC_SINK_STEREO_SINK         ,   4, BITS_24         , CH_STEREO}, //{sink, mem, bit_width, ch}
    {MUSIC_SINK_SPDIF_SINK          ,   6, BITS_24         , CH_STEREO}, //{sink, mem, bit_width, ch}
    {MUSIC_SINK_REC_SINK            ,   5, BITS_16         , CH_STEREO}, //{sink, mem, bit_width, ch}
};

static const uint32_t effect_flow_music[] = {
33686168, 50528770, 33554433, 129, 33686146, 33686147, 33686148, 33686149, 
33686150, 16843143, 67174657, 16843144, 67372169, 67372170, 84149249, 67372171, 
67372172, 84215189, 84215190, 84215191, 67372290, 67372173, 67372174, 67372175, 
67372176, 67372177, 67372178, 67372179, 67372180, 84149249, 50529282, 67306241, 
100926465, 
};

const roboeffect_effect_steps_table user_effect_steps_music = {
    33,  //step cnt
    3,  //mem used
    4,  //src numb
    5,  //des numb

    source_unit_music,  //source
    sink_unit_music,  //sink
    effect_flow_music,  //steps
};

uint32_t get_user_effects_script_len_music(void)
{
    return sizeof(user_effects_script_music);
}

char *parameter_group_name_music[1] = { "Music" };

const unsigned char user_effect_parameters_music_Music[] = {
0x7f, 0x03, /*total data length*/
0x02, 0x2d, 0x05, /*Effect Version*/

0x02, 0x19, 0x05, /* Roboeffect Version*/

0x01, 0x00, /*3rd part data total length  */
0x00, /*number of 3rd part items*/
0x81, /*silence_detector_mic*/
0x03,/*length*/
0x01, /*enable*/
0x29, 0x00, /*PCM amplitude*/

0x82, /*mic_eq0*/
0x69,/*length*/
0x00, /*enable*/
0x00, 0x00, /*Pregain*/
0x00, 0x00, /*Fixed-Floating_Point*/
0x00, 0x00, /*Filter1_Enable*/
0x00, 0x00, /*Filter1_Type*/
0xc8, 0x00, /*Filter1_F0*/
0xd4, 0x02, /*Filter1_Q*/
0x00, 0x00, /*Filter1_Gain*/
0x00, 0x00, /*Filter2_Enable*/
0x00, 0x00, /*Filter2_Type*/
0xc8, 0x00, /*Filter2_F0*/
0xd4, 0x02, /*Filter2_Q*/
0x00, 0x00, /*Filter2_Gain*/
0x00, 0x00, /*Filter3_Enable*/
0x00, 0x00, /*Filter3_Type*/
0xc8, 0x00, /*Filter3_F0*/
0xd4, 0x02, /*Filter3_Q*/
0x00, 0x00, /*Filter3_Gain*/
0x00, 0x00, /*Filter4_Enable*/
0x00, 0x00, /*Filter4_Type*/
0xc8, 0x00, /*Filter4_F0*/
0xd4, 0x02, /*Filter4_Q*/
0x00, 0x00, /*Filter4_Gain*/
0x00, 0x00, /*Filter5_Enable*/
0x00, 0x00, /*Filter5_Type*/
0xc8, 0x00, /*Filter5_F0*/
0xd4, 0x02, /*Filter5_Q*/
0x00, 0x00, /*Filter5_Gain*/
0x00, 0x00, /*Filter6_Enable*/
0x00, 0x00, /*Filter6_Type*/
0xc8, 0x00, /*Filter6_F0*/
0xd4, 0x02, /*Filter6_Q*/
0x00, 0x00, /*Filter6_Gain*/
0x00, 0x00, /*Filter7_Enable*/
0x00, 0x00, /*Filter7_Type*/
0xc8, 0x00, /*Filter7_F0*/
0xd4, 0x02, /*Filter7_Q*/
0x00, 0x00, /*Filter7_Gain*/
0x00, 0x00, /*Filter8_Enable*/
0x00, 0x00, /*Filter8_Type*/
0xc8, 0x00, /*Filter8_F0*/
0xd4, 0x02, /*Filter8_Q*/
0x00, 0x00, /*Filter8_Gain*/
0x00, 0x00, /*Filter9_Enable*/
0x00, 0x00, /*Filter9_Type*/
0xc8, 0x00, /*Filter9_F0*/
0xd4, 0x02, /*Filter9_Q*/
0x00, 0x00, /*Filter9_Gain*/
0x00, 0x00, /*Filter10_Enable*/
0x00, 0x00, /*Filter10_Type*/
0xc8, 0x00, /*Filter10_F0*/
0xd4, 0x02, /*Filter10_Q*/
0x00, 0x00, /*Filter10_Gain*/

0x83, /*mic_ns*/
0x09,/*length*/
0x00, /*enable*/
0x6c, 0xee, /*threshold*/
0x03, 0x00, /*ratio*/
0x05, 0x00, /*attack*/
0xf4, 0x01, /*release*/

0x84, /*mic_EQ*/
0x69,/*length*/
0x00, /*enable*/
0x00, 0x00, /*Pregain*/
0x00, 0x00, /*Fixed-Floating_Point*/
0x00, 0x00, /*Filter1_Enable*/
0x00, 0x00, /*Filter1_Type*/
0xc8, 0x00, /*Filter1_F0*/
0xd4, 0x02, /*Filter1_Q*/
0x00, 0x00, /*Filter1_Gain*/
0x00, 0x00, /*Filter2_Enable*/
0x00, 0x00, /*Filter2_Type*/
0xc8, 0x00, /*Filter2_F0*/
0xd4, 0x02, /*Filter2_Q*/
0x00, 0x00, /*Filter2_Gain*/
0x00, 0x00, /*Filter3_Enable*/
0x00, 0x00, /*Filter3_Type*/
0xc8, 0x00, /*Filter3_F0*/
0xd4, 0x02, /*Filter3_Q*/
0x00, 0x00, /*Filter3_Gain*/
0x00, 0x00, /*Filter4_Enable*/
0x00, 0x00, /*Filter4_Type*/
0xc8, 0x00, /*Filter4_F0*/
0xd4, 0x02, /*Filter4_Q*/
0x00, 0x00, /*Filter4_Gain*/
0x00, 0x00, /*Filter5_Enable*/
0x00, 0x00, /*Filter5_Type*/
0xc8, 0x00, /*Filter5_F0*/
0xd4, 0x02, /*Filter5_Q*/
0x00, 0x00, /*Filter5_Gain*/
0x00, 0x00, /*Filter6_Enable*/
0x00, 0x00, /*Filter6_Type*/
0xc8, 0x00, /*Filter6_F0*/
0xd4, 0x02, /*Filter6_Q*/
0x00, 0x00, /*Filter6_Gain*/
0x00, 0x00, /*Filter7_Enable*/
0x00, 0x00, /*Filter7_Type*/
0xc8, 0x00, /*Filter7_F0*/
0xd4, 0x02, /*Filter7_Q*/
0x00, 0x00, /*Filter7_Gain*/
0x00, 0x00, /*Filter8_Enable*/
0x00, 0x00, /*Filter8_Type*/
0xc8, 0x00, /*Filter8_F0*/
0xd4, 0x02, /*Filter8_Q*/
0x00, 0x00, /*Filter8_Gain*/
0x00, 0x00, /*Filter9_Enable*/
0x00, 0x00, /*Filter9_Type*/
0xc8, 0x00, /*Filter9_F0*/
0xd4, 0x02, /*Filter9_Q*/
0x00, 0x00, /*Filter9_Gain*/
0x00, 0x00, /*Filter10_Enable*/
0x00, 0x00, /*Filter10_Type*/
0xc8, 0x00, /*Filter10_F0*/
0xd4, 0x02, /*Filter10_Q*/
0x00, 0x00, /*Filter10_Gain*/

0x85, /*mic_drc*/
0x35,/*length*/
0x00, /*enable*/
0x00, 0x00, /*mode*/
0x03, 0x00, /*CF_type*/
0xd4, 0x02, /*Q_L*/
0xd4, 0x02, /*Q_H*/
0x2c, 0x01, /*FC1*/
0xb8, 0x0b, /*FC2*/
0x00, 0x00, /*Threshold1*/
0x00, 0x00, /*Threshold2*/
0x00, 0x00, /*Threshold3*/
0x00, 0x00, /*Threshold4*/
0x64, 0x00, /*Ratio1*/
0x64, 0x00, /*Ratio2*/
0x64, 0x00, /*Ratio3*/
0x64, 0x00, /*Ratio4*/
0x01, 0x00, /*Attack1*/
0x01, 0x00, /*Attack2*/
0x01, 0x00, /*Attack3*/
0x01, 0x00, /*Attack4*/
0xe8, 0x03, /*Release1*/
0xe8, 0x03, /*Release2*/
0xe8, 0x03, /*Release3*/
0xe8, 0x03, /*Release4*/
0x00, 0x00, /*Pregain1*/
0x00, 0x00, /*Pregain2*/
0x00, 0x00, /*Pregain3*/
0x00, 0x00, /*Pregain4*/

0x86, /*mic_gain*/
0x05,/*length*/
0x01, /*enable*/
0x00, 0x00, /*mute*/
0x00, 0x00, /*gain*/

0x87, /*preGain*/
0x05,/*length*/
0x01, /*enable*/
0x00, 0x00, /*mute*/
0x00, 0x00, /*gain*/

0x88, /*silence_detector_music*/
0x03,/*length*/
0x01, /*enable*/
0xb1, 0x19, /*PCM amplitude*/

0x89, /*gain_control0*/
0x05,/*length*/
0x01, /*enable*/
0x00, 0x00, /*mute*/
0x00, 0x00, /*gain*/

0x8a, /*noise_suppressor_expander0*/
0x09,/*length*/
0x00, /*enable*/
0x6c, 0xee, /*threshold*/
0x03, 0x00, /*ratio*/
0x05, 0x00, /*attack*/
0xf4, 0x01, /*release*/

0x8b, /*gain_control2*/
0x05,/*length*/
0x00, /*enable*/
0x00, 0x00, /*mute*/
0x00, 0x00, /*gain*/

0x8c, /*eq1*/
0x69,/*length*/
0x00, /*enable*/
0x00, 0x00, /*Pregain*/
0x00, 0x00, /*Fixed-Floating_Point*/
0x00, 0x00, /*Filter1_Enable*/
0x00, 0x00, /*Filter1_Type*/
0xc8, 0x00, /*Filter1_F0*/
0xd4, 0x02, /*Filter1_Q*/
0x00, 0x00, /*Filter1_Gain*/
0x00, 0x00, /*Filter2_Enable*/
0x00, 0x00, /*Filter2_Type*/
0xc8, 0x00, /*Filter2_F0*/
0xd4, 0x02, /*Filter2_Q*/
0x00, 0x00, /*Filter2_Gain*/
0x00, 0x00, /*Filter3_Enable*/
0x00, 0x00, /*Filter3_Type*/
0xc8, 0x00, /*Filter3_F0*/
0xd4, 0x02, /*Filter3_Q*/
0x00, 0x00, /*Filter3_Gain*/
0x00, 0x00, /*Filter4_Enable*/
0x00, 0x00, /*Filter4_Type*/
0xc8, 0x00, /*Filter4_F0*/
0xd4, 0x02, /*Filter4_Q*/
0x00, 0x00, /*Filter4_Gain*/
0x00, 0x00, /*Filter5_Enable*/
0x00, 0x00, /*Filter5_Type*/
0xc8, 0x00, /*Filter5_F0*/
0xd4, 0x02, /*Filter5_Q*/
0x00, 0x00, /*Filter5_Gain*/
0x00, 0x00, /*Filter6_Enable*/
0x00, 0x00, /*Filter6_Type*/
0xc8, 0x00, /*Filter6_F0*/
0xd4, 0x02, /*Filter6_Q*/
0x00, 0x00, /*Filter6_Gain*/
0x00, 0x00, /*Filter7_Enable*/
0x00, 0x00, /*Filter7_Type*/
0xc8, 0x00, /*Filter7_F0*/
0xd4, 0x02, /*Filter7_Q*/
0x00, 0x00, /*Filter7_Gain*/
0x00, 0x00, /*Filter8_Enable*/
0x00, 0x00, /*Filter8_Type*/
0xc8, 0x00, /*Filter8_F0*/
0xd4, 0x02, /*Filter8_Q*/
0x00, 0x00, /*Filter8_Gain*/
0x00, 0x00, /*Filter9_Enable*/
0x00, 0x00, /*Filter9_Type*/
0xc8, 0x00, /*Filter9_F0*/
0xd4, 0x02, /*Filter9_Q*/
0x00, 0x00, /*Filter9_Gain*/
0x00, 0x00, /*Filter10_Enable*/
0x00, 0x00, /*Filter10_Type*/
0xc8, 0x00, /*Filter10_F0*/
0xd4, 0x02, /*Filter10_Q*/
0x00, 0x00, /*Filter10_Gain*/

0x8d, /*compander*/
0x0d,/*length*/
0x00, /*enable*/
0x60, 0xf0, /*threshold*/
0xc8, 0x00, /*ratio_below*/
0x32, 0x00, /*ratio_above*/
0x05, 0x00, /*attack_time*/
0x64, 0x00, /*release_time*/
0x00, 0x00, /*pregain*/

0x8e, /*low_level_compressor1*/
0x09,/*length*/
0x00, /*enable*/
0x00, 0xe7, /*threshold*/
0x5c, 0x08, /*gain*/
0x0a, 0x00, /*attack_time*/
0xe8, 0x03, /*release_time*/

0x8f, /*harmonic_exciter0*/
0x07,/*length*/
0x00, /*enable*/
0xe8, 0x03, /*cutoff frequency*/
0x50, 0x00, /*dry*/
0x50, 0x00, /*wet*/

0x90, /*mvbass*/
0x07,/*length*/
0x00, /*enable*/
0x64, 0x00, /*cutoff frequency*/
0x23, 0x00, /*intensity*/
0x01, 0x00, /*enhanced*/

0x91, /*3D*/
0x03,/*length*/
0x00, /*enable*/
0x32, 0x00, /*intensity*/

0x92, /*eq2*/
0x69,/*length*/
0x00, /*enable*/
0x00, 0x00, /*Pregain*/
0x00, 0x00, /*Fixed-Floating_Point*/
0x00, 0x00, /*Filter1_Enable*/
0x00, 0x00, /*Filter1_Type*/
0xc8, 0x00, /*Filter1_F0*/
0xd4, 0x02, /*Filter1_Q*/
0x00, 0x00, /*Filter1_Gain*/
0x00, 0x00, /*Filter2_Enable*/
0x00, 0x00, /*Filter2_Type*/
0xc8, 0x00, /*Filter2_F0*/
0xd4, 0x02, /*Filter2_Q*/
0x00, 0x00, /*Filter2_Gain*/
0x00, 0x00, /*Filter3_Enable*/
0x00, 0x00, /*Filter3_Type*/
0xc8, 0x00, /*Filter3_F0*/
0xd4, 0x02, /*Filter3_Q*/
0x00, 0x00, /*Filter3_Gain*/
0x00, 0x00, /*Filter4_Enable*/
0x00, 0x00, /*Filter4_Type*/
0xc8, 0x00, /*Filter4_F0*/
0xd4, 0x02, /*Filter4_Q*/
0x00, 0x00, /*Filter4_Gain*/
0x00, 0x00, /*Filter5_Enable*/
0x00, 0x00, /*Filter5_Type*/
0xc8, 0x00, /*Filter5_F0*/
0xd4, 0x02, /*Filter5_Q*/
0x00, 0x00, /*Filter5_Gain*/
0x00, 0x00, /*Filter6_Enable*/
0x00, 0x00, /*Filter6_Type*/
0xc8, 0x00, /*Filter6_F0*/
0xd4, 0x02, /*Filter6_Q*/
0x00, 0x00, /*Filter6_Gain*/
0x00, 0x00, /*Filter7_Enable*/
0x00, 0x00, /*Filter7_Type*/
0xc8, 0x00, /*Filter7_F0*/
0xd4, 0x02, /*Filter7_Q*/
0x00, 0x00, /*Filter7_Gain*/
0x00, 0x00, /*Filter8_Enable*/
0x00, 0x00, /*Filter8_Type*/
0xc8, 0x00, /*Filter8_F0*/
0xd4, 0x02, /*Filter8_Q*/
0x00, 0x00, /*Filter8_Gain*/
0x00, 0x00, /*Filter9_Enable*/
0x00, 0x00, /*Filter9_Type*/
0xc8, 0x00, /*Filter9_F0*/
0xd4, 0x02, /*Filter9_Q*/
0x00, 0x00, /*Filter9_Gain*/
0x00, 0x00, /*Filter10_Enable*/
0x00, 0x00, /*Filter10_Type*/
0xc8, 0x00, /*Filter10_F0*/
0xd4, 0x02, /*Filter10_Q*/
0x00, 0x00, /*Filter10_Gain*/

0x93, /*music_drc*/
0x35,/*length*/
0x00, /*enable*/
0x00, 0x00, /*mode*/
0x03, 0x00, /*CF_type*/
0xd4, 0x02, /*Q_L*/
0xd4, 0x02, /*Q_H*/
0x2c, 0x01, /*FC1*/
0xb8, 0x0b, /*FC2*/
0x00, 0x00, /*Threshold1*/
0x00, 0x00, /*Threshold2*/
0x00, 0x00, /*Threshold3*/
0x00, 0x00, /*Threshold4*/
0x64, 0x00, /*Ratio1*/
0x64, 0x00, /*Ratio2*/
0x64, 0x00, /*Ratio3*/
0x64, 0x00, /*Ratio4*/
0x01, 0x00, /*Attack1*/
0x01, 0x00, /*Attack2*/
0x01, 0x00, /*Attack3*/
0x01, 0x00, /*Attack4*/
0xe8, 0x03, /*Release1*/
0xe8, 0x03, /*Release2*/
0xe8, 0x03, /*Release3*/
0xe8, 0x03, /*Release4*/
0x00, 0x00, /*Pregain1*/
0x00, 0x00, /*Pregain2*/
0x00, 0x00, /*Pregain3*/
0x00, 0x00, /*Pregain4*/

0x94, /*music_EQ*/
0x69,/*length*/
0x00, /*enable*/
0x00, 0x00, /*Pregain*/
0x00, 0x00, /*Fixed-Floating_Point*/
0x00, 0x00, /*Filter1_Enable*/
0x00, 0x00, /*Filter1_Type*/
0xc8, 0x00, /*Filter1_F0*/
0xd4, 0x02, /*Filter1_Q*/
0x00, 0x00, /*Filter1_Gain*/
0x00, 0x00, /*Filter2_Enable*/
0x00, 0x00, /*Filter2_Type*/
0xc8, 0x00, /*Filter2_F0*/
0xd4, 0x02, /*Filter2_Q*/
0x00, 0x00, /*Filter2_Gain*/
0x00, 0x00, /*Filter3_Enable*/
0x00, 0x00, /*Filter3_Type*/
0xc8, 0x00, /*Filter3_F0*/
0xd4, 0x02, /*Filter3_Q*/
0x00, 0x00, /*Filter3_Gain*/
0x00, 0x00, /*Filter4_Enable*/
0x00, 0x00, /*Filter4_Type*/
0xc8, 0x00, /*Filter4_F0*/
0xd4, 0x02, /*Filter4_Q*/
0x00, 0x00, /*Filter4_Gain*/
0x00, 0x00, /*Filter5_Enable*/
0x00, 0x00, /*Filter5_Type*/
0xc8, 0x00, /*Filter5_F0*/
0xd4, 0x02, /*Filter5_Q*/
0x00, 0x00, /*Filter5_Gain*/
0x00, 0x00, /*Filter6_Enable*/
0x00, 0x00, /*Filter6_Type*/
0xc8, 0x00, /*Filter6_F0*/
0xd4, 0x02, /*Filter6_Q*/
0x00, 0x00, /*Filter6_Gain*/
0x00, 0x00, /*Filter7_Enable*/
0x00, 0x00, /*Filter7_Type*/
0xc8, 0x00, /*Filter7_F0*/
0xd4, 0x02, /*Filter7_Q*/
0x00, 0x00, /*Filter7_Gain*/
0x00, 0x00, /*Filter8_Enable*/
0x00, 0x00, /*Filter8_Type*/
0xc8, 0x00, /*Filter8_F0*/
0xd4, 0x02, /*Filter8_Q*/
0x00, 0x00, /*Filter8_Gain*/
0x00, 0x00, /*Filter9_Enable*/
0x00, 0x00, /*Filter9_Type*/
0xc8, 0x00, /*Filter9_F0*/
0xd4, 0x02, /*Filter9_Q*/
0x00, 0x00, /*Filter9_Gain*/
0x00, 0x00, /*Filter10_Enable*/
0x00, 0x00, /*Filter10_Type*/
0xc8, 0x00, /*Filter10_F0*/
0xd4, 0x02, /*Filter10_Q*/
0x00, 0x00, /*Filter10_Gain*/

0x95, /*gain_control1*/
0x05,/*length*/
0x01, /*enable*/
0x00, 0x00, /*mute*/
0x00, 0x00, /*gain*/

0x96, /*eq0*/
0x69,/*length*/
0x00, /*enable*/
0x00, 0x00, /*Pregain*/
0x00, 0x00, /*Fixed-Floating_Point*/
0x00, 0x00, /*Filter1_Enable*/
0x00, 0x00, /*Filter1_Type*/
0xc8, 0x00, /*Filter1_F0*/
0xd4, 0x02, /*Filter1_Q*/
0x00, 0x00, /*Filter1_Gain*/
0x00, 0x00, /*Filter2_Enable*/
0x00, 0x00, /*Filter2_Type*/
0xc8, 0x00, /*Filter2_F0*/
0xd4, 0x02, /*Filter2_Q*/
0x00, 0x00, /*Filter2_Gain*/
0x00, 0x00, /*Filter3_Enable*/
0x00, 0x00, /*Filter3_Type*/
0xc8, 0x00, /*Filter3_F0*/
0xd4, 0x02, /*Filter3_Q*/
0x00, 0x00, /*Filter3_Gain*/
0x00, 0x00, /*Filter4_Enable*/
0x00, 0x00, /*Filter4_Type*/
0xc8, 0x00, /*Filter4_F0*/
0xd4, 0x02, /*Filter4_Q*/
0x00, 0x00, /*Filter4_Gain*/
0x00, 0x00, /*Filter5_Enable*/
0x00, 0x00, /*Filter5_Type*/
0xc8, 0x00, /*Filter5_F0*/
0xd4, 0x02, /*Filter5_Q*/
0x00, 0x00, /*Filter5_Gain*/
0x00, 0x00, /*Filter6_Enable*/
0x00, 0x00, /*Filter6_Type*/
0xc8, 0x00, /*Filter6_F0*/
0xd4, 0x02, /*Filter6_Q*/
0x00, 0x00, /*Filter6_Gain*/
0x00, 0x00, /*Filter7_Enable*/
0x00, 0x00, /*Filter7_Type*/
0xc8, 0x00, /*Filter7_F0*/
0xd4, 0x02, /*Filter7_Q*/
0x00, 0x00, /*Filter7_Gain*/
0x00, 0x00, /*Filter8_Enable*/
0x00, 0x00, /*Filter8_Type*/
0xc8, 0x00, /*Filter8_F0*/
0xd4, 0x02, /*Filter8_Q*/
0x00, 0x00, /*Filter8_Gain*/
0x00, 0x00, /*Filter9_Enable*/
0x00, 0x00, /*Filter9_Type*/
0xc8, 0x00, /*Filter9_F0*/
0xd4, 0x02, /*Filter9_Q*/
0x00, 0x00, /*Filter9_Gain*/
0x00, 0x00, /*Filter10_Enable*/
0x00, 0x00, /*Filter10_Type*/
0xc8, 0x00, /*Filter10_F0*/
0xd4, 0x02, /*Filter10_Q*/
0x00, 0x00, /*Filter10_Gain*/

0x97, /*low_level_compressor0*/
0x09,/*length*/
0x00, /*enable*/
0x00, 0xe7, /*threshold*/
0x5c, 0x08, /*gain*/
0x0a, 0x00, /*attack_time*/
0xe8, 0x03, /*release_time*/

0x98, /*gain_control3*/
0x05,/*length*/
0x01, /*enable*/
0x00, 0x00, /*mute*/
0x00, 0x00, /*gain*/

};

const unsigned char user_module_parameters_music_Music[] = {
0x03, /*ADC0_PGA_CONTROL*/
0x0c, /*length*/
0x00, 0x00, /*pga_aux_left_show*/
0x00, 0x00, /*pga_aux_right_show*/
0x01, 0x00, /*pga_aux_left_enable*/
0x01, 0x00, /*pga_aux_right_enable*/
0x0e, 0x00, /*pga_aux_left_gain*/
0x0e, 0x00, /*pga_aux_right_gain*/

0x04, /*ADC0_DIGITAL_CONTROL*/
0x14, /*length*/
0x03, 0x00, /*enable*/
0x00, 0x00, /*mute*/
0x00, 0x10, /*left_volume*/
0x00, 0x10, /*right_volume*/
0x07, 0x00, /*sample_rate*/
0x00, 0x00, /*LR_swap*/
0x00, 0x00, /*hpc*/
0x05, 0x00, /*fade_time*/
0x00, 0x00, /*mclk_source*/
0x01, 0x00, /*dc_blocker*/

0x05, /*ADC0_AGC_CONTROL*/
0x00, /*length*/

0x06, /*ADC1_PGA_CONTROL*/
0x08, /*length*/
0x00, 0x00, /*pga_mic_show*/
0x00, 0x00, /*pga_mic_mode*/
0x01, 0x00, /*pga_mic_enable*/
0x09, 0x00, /*pga_mic_gain*/

0x07, /*ADC1_DIGITAL_CONTROL*/
0x14, /*length*/
0x03, 0x00, /*enable*/
0x00, 0x00, /*mute*/
0x00, 0x10, /*left_volume*/
0x00, 0x10, /*right_volume*/
0x07, 0x00, /*sample_rate*/
0x00, 0x00, /*LR_swap*/
0x00, 0x00, /*hpc*/
0x05, 0x00, /*fade_time*/
0x00, 0x00, /*mclk_source*/
0x01, 0x00, /*dc_blocker*/

0x08, /*ADC1_AGC_CONTROL*/
0x1c, /*length*/
0x00, 0x00, /*mode*/
0x00, 0x00, /*max_level*/
0x00, 0x00, /*target_level*/
0x00, 0x00, /*max_gain*/
0x00, 0x00, /*min_gain*/
0x00, 0x00, /*gain_offset*/
0x0a, 0x00, /*frame_time*/
0x0a, 0x00, /*hold_time*/
0x0a, 0x00, /*attack_time*/
0x0a, 0x00, /*decay_time*/
0x00, 0x00, /*noise_gate_enable*/
0x05, 0x00, /*noise_gate_threshold*/
0x00, 0x00, /*noise_gate_mode*/
0x00, 0x00, /*noise_gate_hold_time*/

0x09, /*DAC0_CONTROL*/
0x1c, /*length*/
0x03, 0x00, /*enable*/
0x07, 0x00, /*sample_rate*/
0x00, 0x00, /*mute*/
0x00, 0x10, /*left_volume*/
0x00, 0x10, /*right_volume*/
0x00, 0x00, /*dither*/
0x03, 0x00, /*scramble*/
0x01, 0x00, /*mode*/
0x00, 0x00, /*pause*/
0x00, 0x00, /*sample_edge_mode*/
0x00, 0x00, /*SCF_mute*/
0x05, 0x00, /*fade_time*/
0x00, 0x00, /*zero_num*/
0x00, 0x00, /*mclk_source*/

0x0a, /*DAC1_CONTROL*/
0x00, /*length*/

0x0b, /*I2S0_CONTROL*/
0x16, /*length*/
0x00, 0x00, /*tx_enable*/
0x00, 0x00, /*rx_enable*/
0x00, 0x00, /*sample_rate*/
0x00, 0x00, /*mclk_source*/
0x00, 0x00, /*master_slave*/
0x00, 0x00, /*word_length*/
0x00, 0x00, /*stereo_mono*/
0x00, 0x00, /*fade_time*/
0x00, 0x00, /*data_format*/
0x00, 0x00, /*bclk_invert*/
0x00, 0x00, /*lrclk_invert*/

0x0c, /*I2S1_CONTROL*/
0x16, /*length*/
0x00, 0x00, /*tx_enable*/
0x00, 0x00, /*rx_enable*/
0x00, 0x00, /*sample_rate*/
0x00, 0x00, /*mclk_source*/
0x00, 0x00, /*master_slave*/
0x00, 0x00, /*word_length*/
0x00, 0x00, /*stereo_mono*/
0x00, 0x00, /*fade_time*/
0x00, 0x00, /*data_format*/
0x00, 0x00, /*bclk_invert*/
0x00, 0x00, /*lrclk_invert*/

0x0d, /*SPDIF_CONTROL*/
0x14, /*length*/
0x00, 0x00, /*enable*/
0x00, 0x00, /*sample_rate*/
0x00, 0x00, /*channel_mode*/
0x00, 0x00, /*io_mode*/
0x00, 0x00, /*lock_status*/
0x00, 0x00, /*enable1*/
0x00, 0x00, /*sample_rate1*/
0x00, 0x00, /*channel_mode1*/
0x00, 0x00, /*io_mode1*/
0x00, 0x00, /*lock_status1*/

};


