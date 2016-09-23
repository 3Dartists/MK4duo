/**
 * MK4duo 3D Printer Firmware
 *
 * Based on Marlin, Sprinter and grbl
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 * Copyright (C) 2013 - 2016 Alberto Cotronei @MagoKimbra
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Chinese
 *
 * LCD Menu Messages
 * See also documentation/LCDLanguageFont.md
 *
 */
#ifndef LANGUAGE_CN_H
#define LANGUAGE_CN_H

#define MAPPER_NON                  // For direct asci codes
#define DISPLAY_CHARSET_ISO10646_1  // use the better font on full graphic displays.


#define WELCOME_MSG                          MACHINE_NAME "׼�����ˡ�"
#define MSG_SD                               " SD "
#define MSG_SD_INSERTED                      MSG_SD "����"
#define MSG_SD_REMOVED                       MSG_SD "ɾ��"
#define MSG_MAIN                             "��ҳ"
#define MSG_AUTOSTART                        "�Զ�����"
#define MSG_DISABLE_STEPPERS                 "���õ��"
#define MSG_AUTO_HOME                        "�Զ���λ"
#define MSG_AUTO_HOME_X                      "x��λ "
#define MSG_AUTO_HOME_Y                      "y��λ"
#define MSG_AUTO_HOME_Z                      "z��λ"
#define MSG_LEVEL_BED_HOMING                 "XYZ����"
#define MSG_LEVEL_BED_WAITING                "�����ʼ"
#define MSG_LEVEL_BED_NEXT_POINT             "��һ��"
#define MSG_LEVEL_BED_DONE                   "��ƽ��ɣ�"
#define MSG_LEVEL_BED_CANCEL                 "ȡ��"
#define MSG_SET_HOME_OFFSETS                 "���ƫ��"
#define MSG_SET_ORIGIN                       "�������"
#define MSG_PREHEAT                          "Ԥ��"
#define MSG_PREHEAT_1                        MSG_PREHEAT "PAL"
#define MSG_PREHEAT_1_N                      MSG_PREHEAT_1 "  "
#define MSG_PREHEAT_1_ALL                    MSG_PREHEAT_1 "����"
#define MSG_PREHEAT_1_BEDONLY                MSG_PREHEAT_1 "�ȴ�"
#define MSG_PREHEAT_1_SETTINGS               MSG_PREHEAT_1 "conf "
#define MSG_PREHEAT_2                        MSG_PREHEAT " ABS "
#define MSG_PREHEAT_2_N                      MSG_PREHEAT_2 "  "
#define MSG_PREHEAT_2_ALL                    MSG_PREHEAT_2 "����"
#define MSG_PREHEAT_2_BEDONLY                MSG_PREHEAT_2 "�ȴ�"
#define MSG_PREHEAT_2_SETTINGS               MSG_PREHEAT_2 "conf "
#define MSG_PREHEAT_3                        MSG_PREHEAT " GUM "
#define MSG_PREHEAT_3_N                      MSG_PREHEAT_3 "  "
#define MSG_PREHEAT_3_ALL                    MSG_PREHEAT_3 "����"
#define MSG_PREHEAT_3_BEDONLY                MSG_PREHEAT_3 "�ȴ�"
#define MSG_PREHEAT_3_SETTINGS               MSG_PREHEAT_3 "conf "
#define MSG_TOO_COLD_FOR_FILAMENTCHANGE      " ��ͷ̫��ı䳤˿"
#define MSG_COOLDOWN                         "��ȴ"
#define MSG_SWITCH_PS_ON                     "����Դ"
#define MSG_SWITCH_PS_OFF                    "�ص�Դ"
#define MSG_EXTRUDE                          "����"
#define MSG_RETRACT                          "�ջ�"
#define MSG_PURGE                            "���"
#define MSG_LEVEL_BED                        "ƽ��"
#define MSG_SPEED                            "�ٶ�"
#define MSG_NOZZLE                           "����"
#define MSG_BED                              "��"
#define MSG_CHAMBER                          "����"
#define MSG_COOLER                           "��ȴ��"
#define MSG_BED_Z                            "�� Z"
#define MSG_FAN_SPEED                        "����ת��"
#define MSG_FLOW                             "����"
#define msg_control��                         "����"
#define MSG_FIX_LOSE_STEPS                   "�޸��Ჽ"
#define MSG_MIN                              LCD_STR_THERMOMETER "��С"
#define MSG_MAX                              LCD_STR_THERMOMETER "���"
#define MSG_FACTOR                           LCD_STR_THERMOMETER "ʵ��"
#define MSG_IDLEOOZING                       "����"
#define MSG_AUTOTEMP                         "�Զ�����"
#define MSG_ON                               "��"
#define MSG_OFF                              "��"
#define MSG_PID_P                            " PID-P "
#define MSG_PID_I                            " PID-I "
#define MSG_PID_D                            " PID-D "
#define MSG_PID_C                            " PID-C "
#define MSG_SELECT                           "ѡ��"
#define MSG_H1                               " H1 "
#define MSG_H2                               " H2 "
#define MSG_H3                               " H3 "
#define MSG_ACC                              "���ٶ�"
#define MSG_VXY_JERK                         " Vxy-jerk"
#define MSG_VZ_JERK                          " VZ-jerk"
#define MSG_VE_JERK                          " VE-jerk"
#define MSG_VMAX                             "V���"
#define MSG_X                                "x"
#define MSG_Y                                "y"
#define MSG_Z                                "z"
#define MSG_E                                "e"
#define MSG_MOVE                             "�ƶ�"
#define MSG_MOVE_AXIS                        MSG_MOVE "��"
#define MSG_MOVE_X                           MSG_MOVE "  " MSG_X
#define MSG_MOVE_Y                           MSG_MOVE "  " MSG_Y
#define MSG_MOVE_Z                           MSG_MOVE "  " MSG_Z
#define MSG_MOVE_01MM                        MSG_MOVE " 0.1����"
#define MSG_MOVE_1MM                         MSG_MOVE " 1����"
#define MSG_MOVE_10MM                        MSG_MOVE " 10����"
#define MSG_MOVE_E                           "������"
#define MSG_VMIN                             "��С"
#define MSG_VTRAV_MIN                        " VTrav����"
#define MSG_AMAX                             "A���"
#define MSG_A_RETRACT                        " A-�ջ�"
#define MSG_A_TRAVEL                         " A-�ƶ�"
#define MSG_XSTEPS                           MSG_X "��/����"
#define MSG_YSTEPS                           MSG_Y "��/����"
#define MSG_ZSTEPS                           MSG_Z "��/����"
#define MSG_E0STEPS                          MSG_E " 0��/����"
#define MSG_E1STEPS                          MSG_E " 1��/����"
#define MSG_E2STEPS                          MSG_E " 2��/����"
#define MSG_E3STEPS                          MSG_E " 3��/����"
#define MSG_TEMPERATURE                      "�¶�"
#define MSG_MOTION                           "�˶�"
#define MSG_FILAMENT                         "��˿"
#define MSG_VOLUMETRIC_ENABLED               MSG_E "��MM3 "
#define MSG_FILAMENT_SIZE_EXTRUDER           "�Ĳĳߴ�"
#define MSG_CONTRAST                         " LCD�Աȶ�"
#define MSG_STORE_EPROM                      "�洢�ڴ�"
#define MSG_LOAD_EPROM                       "װ�ش洢��"
#define MSG_RESTORE_FAILSAFE                 "��ԭ"
#define MSG_REFRESH                          "ˢ��"
#define MSG_WATCH                            "��Ϣ����"
#define MSG_PREPARE                          "׼��"
#define MSG_TUNE                             "����"
#define MSG_PAUSE_PRINT                      "��ͣ��ӡ"
#define MSG_RESUME_PRINT                     "������ӡ"
#define MSG_STOP_PRINT                       "ֹͣӡˢ"
#define MSG_STOP_SAVE_PRINT                  "ֹͣ������"
#define MSG_CARD_MENU                        "sd����ӡ"
#define MSG_NO_CARD                          "����sd"
#define MSG_DWELL                            "˯��...... "
#define MSG_USERWAIT                         "�ȴ��û�...... "
#define MSG_RESUMING                         "�ָ���ӡ"
#define MSG_PRINT_ABORTED                    "��ӡ��ֹ"
#define MSG_NO_MOVE                          "���ƶ���"
#define MSG_KILLED                           "�Ͽ���"
#define MSG_STOPPED                          "��ֹͣ��"
#define MSG_CONTROL_RETRACT                  "�����ջ�"
#define MSG_CONTROL_RETRACT_SWAP             "�ջغ���"
#define MSG_CONTROL_RETRACTF                 "�ջ��ٶ�"
#define MSG_CONTROL_RETRACT_ZLIFT            "���ٺ���"
#define MSG_CONTROL_RETRACT_RECOVER          "����+����"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP     "�ջط���+����"
#define MSG_CONTROL_RETRACT_RECOVERF         "�շ��ٶ�"
#define MSG_AUTORETRACT                      "�Զ�����"
#define MSG_FILAMENT_CHANGE                  "���ĳ�˿"
#define MSG_INIT_SDCARD                      "��ʼ��sd"
#define MSG_CNG_SDCARD                       "����sd"
#define MSG_ZPROBE_OUT                       "z̽��.��"
#define MSG_BLTOUCH_SELFTEST                 " ����̽��"
#define MSG_RESET_BLTOUCH                    "��λ���� "
#define MSG_HOME                             "��λ"
#define MSG_FIRST                            "�״�"
#define MSG_ZPROBE_ZOFFSET                   "̽��ƫ��"
#define MSG_BABYSTEP                         " ���� "
#define MSG_BABYSTEP_X                       MSG_BABYSTEP "  " MSG_X
#define MSG_BABYSTEP_Y                       MSG_BABYSTEP "  " MSG_Y
#define MSG_BABYSTEP_Z                       MSG_BABYSTEP "  " MSG_Z
#define MSG_ENDSTOP_ABORT                    "�������"
#define MSG_HEATING_FAILED_LCD               "����ʧ��"
#define MSG_ERR_REDUNDANT_TEMP               "�¶����"
#define MSG_THERMAL_RUNAWAY                  "��ʧ��"
#define MSG_AD595                            "AD595ƫ�ƺ�����"
#define MSG_ERR_MAXTEMP                      "����¶����"
#define MSG_ERR_MINTEMP                      "��С�¶����"
#define MSG_ERR_MAXTEMP_BED                  "����¶ȴ�����"
#define MSG_ERR_MINTEMP_BED                  "��С�¶ȴ�����"
#define MSG_ERR_Z_HOMING                     "G28?����"
#define MSG_ERR_MAXTEMP_CHAMBER              "����¶������"
#define MSG_ERR_MINTEMP_CHAMBER              "��С�¶������"
#define MSG_ERR_MAXTEMP_COOLER               "����¶���ȴ������"
#define MSG_ERR_MINTEMP_COOLER               "��С�¶���ȴ������"
#define MSG_HALTED                           "��ӡ��ֹͣ"
#define MSG_PLEASE_RESET                     "������"
#define MSG_END_DAY                          "��"
#define MSG_END_HOUR                         "Сʱ"
#define MSG_END_MINUTE                       "����"
#define MSG_PRINT_TIME                       "��ӡʱ��"

#define MSG_ENDSTOPS_HIT                     "�յ㵲����У�"
#define MSG_BABYSTEPPING                     " Babystepping "
#define MSG_BABYSTEPPING_X                   MSG_BABYSTEPPING "  " MSG_X
#define MSG_BABYSTEPPING_Y                   MSG_BABYSTEPPING "  " MSG_Y
#define MSG_BABYSTEPPING_Z                   MSG_BABYSTEPPING "  " MSG_Z

#define MSG_ENDSTOP_XS                       MSG_X
#define MSG_ENDSTOP_YS                       MSG_Y
#define MSG_ENDSTOP_ZS                       MSG_Z
#define MSG_ENDSTOP_ZPS                      MSG_Z " P "
#define MSG_ENDSTOP_ES                       MSG_E

// Calibrate Delta
#define MSG_DELTA_CALIBRATE                  "������У׼"
#define MSG_DELTA_CALIBRATE_X                "У׼" MSG_X
#define MSG_DELTA_CALIBRATE_Y                "У׼" MSG_Y
#define MSG_DELTA_CALIBRATE_Z                "У׼" MSG_Z
#define MSG_DELTA_CALIBRATE_CENTER           "У׼����"

// Info printers
#define MSG_INFO_MENU                        "���ڴ�ӡ��"
#define MSG_INFO_FIRMWARE_MENU               "�̼���Ϣ"
#define MSG_INFO_STATS_MENU                  "��ӡ״̬"
#define MSG_INFO_BOARD_MENU                  "��Ϣ��"
#define MSG_INFO_THERMISTOR_MENU             "��������"
#define MSG_INFO_EXTRUDERS                   "������"
#define MSG_INFO_HOTENDS                     "��ͷ"
#define MSG_INFO_BED                         "�ȴ�"
#define MSG_INFO_CHAMBER                     "����"
#define MSG_INFO_COOLER                      "��ȴ��"
#define MSG_INFO_BAUDRATE                    "����"
#define MSG_INFO_PROTOCOL                    "Э��"
#define MSG_INFO_TOTAL_PRINTS                "��ӡ"
#define MSG_INFO_FINISHED_PRINTS             "��ӡ��"
#define MSG_INFO_ON_TIME                     "����ʱ��"
#define MSG_INFO_PRINT_TIME                  "��ӡʱ��"
#define MSG_INFO_FILAMENT_USAGE              "�ļ�"
#define MSG_INFO_PWRCONSUMED                 " PWR "
#define MSG_INFO_MIN_TEMP                    "����¶�"
#define MSG_INFO_MAX_TEMP                    "����¶�"
#define MSG_INFO_PSU                         "��Դ"

// FILAMENT_CHANGE_FEATURE
#define MSG_FILAMENT_CHANGE_HEADER           "�ı����"
#define MSG_FILAMENT_CHANGE_INIT_1           "�ȴ���ʼ"
#define MSG_FILAMENT_CHANGE_INIT_2           "����"
#define MSG_FILAMENT_CHANGE_INIT_3           "�ı�"
#define MSG_FILAMENT_CHANGE_UNLOAD_1         "�ȴ�"
#define MSG_FILAMENT_CHANGE_UNLOAD_2         "����ж��"
#define MSG_FILAMENT_CHANGE_UNLOAD_3         " "
#define MSG_FILAMENT_CHANGE_INSERT_1         "�������"
#define MSG_FILAMENT_CHANGE_INSERT_2         "Ȼ���°�ť"
#define MSG_FILAMENT_CHANGE_INSERT_3         "����...... "
#define MSG_FILAMENT_CHANGE_LOAD_1           "�ȴ�"
#define MSG_FILAMENT_CHANGE_LOAD_2           "���ϸ���"
#define MSG_FILAMENT_CHANGE_LOAD_3           " "
#define MSG_FILAMENT_CHANGE_EXTRUDE_1        "�ȴ�"
#define MSG_FILAMENT_CHANGE_EXTRUDE_2        "���ϼ���"
#define MSG_FILAMENT_CHANGE_EXTRUDE_3        " "
#define MSG_FILAMENT_CHANGE_OPTION_HEADER    "��һ����ʲô��"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE   "���������"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME    "������ӡ"
#define MSG_FILAMENT_CHANGE_RESUME_1         "�ȴ���ӡ"
#define MSG_FILAMENT_CHANGE_RESUME_2         "�ָ�"
#define MSG_FILAMENT_CHANGE_RESUME_3         " "

// Heater
#define MSG_HEATING                          "����...... "
#define MSG_HEATING_COMPLETE                 "�������"
#define MSG_BED_HEATING                      "�ȴ�"
#define MSG_BED_DONE                         "�����"
#define MSG_CHAMBER_HEATING                  "���ڼ���"
#define MSG_CHAMBER_DONE                     "�������"
#define MSG_COOLER_COOLING                   "��...... "
#define MSG_COOLER_DONE                      "��ȴ���"

// Extra
#define MSG_LASER                            "����Ԥ��"
#define MSG_CONFIG                           "����"
#define MSG_E_BOWDEN_LENGTH                  MSG_EXTRUDE "  "�ַ�������BOWDEN_LENGTH�� "����"
#define MSG_R_BOWDEN_LENGTH                  MSG_RETRACT "  "�ַ�������BOWDEN_LENGTH�� "����"
#define MSG_PURGE_XMM                        MSG_PURGE "  "�ַ�������LCD_PURGE_LENGTH�� "����"
#define MSG_RETRACT_XMM                      MSG_RETRACT "  "�ַ�������LCD_RETRACT_LENGTH�� "����"
#define MSG_SAVED_POS                        "����λ��"
#define MSG_RESTORING_POS                    "��ԭλ��"
#define MSG_INVALID_POS_SLOT                 "��Ч�Ĳ�ۣ�����ܶ"

// Rfid module
#define MSG_RFID_SPOOL                       "��E��̨"
#define MSG_RFID_BRAND                       "Ʒ�ƣ�"
#define MSG_RFID_TYPE                        "���ͣ�"
#define MSG_RFID_COLOR                       "��ɫ"
#define MSG_RFID_SIZE                        "�ߴ磺"
#define MSG_RFID_TEMP_HOTEND                 "��ͷ�¶�"
#define MSG_RFID_TEMP_BED                    "�ȴ���"
#define MSG_RFID_TEMP_USER_HOTEND            "�û���ͷ�¶�"
#define MSG_RFID_TEMP_USER_BED               "�û��ȴ��¶�"
#define MSG_RFID_DENSITY                     "�ܶȣ�"
#define MSG_RFID_SPOOL_LENGHT                "��̨��ӡ���ȣ�"

// Firmware Test
#define MSG_FWTEST_YES                       "��Y����ȥ��һ��"
#define MSG_FWTEST_NO                        "��N����ȥ��һ��"
#define MSG_FWTEST_YES_NO                    "��Y��N����ת����һ��"
#define MSG_FWTEST_ENDSTOP_ERR               "������󣡼����ߺ�����"
#define MSG_FWTEST_PRESS                     "��ס����"
#define MSG_FWTEST_INVERT                    "�����ֵ"
#define MSG_FWTEST_XAXIS                     "�������ƶ����ұߣ�"
#define MSG_FWTEST_YAXIS                     "����ǰ�ƣ�"
#define MSG_FWTEST_ZAXIS                     "������ж��ˣ�"
#define MSG_FWTEST_01                        "�ֶ��ƶ���X��Y��Z�ӵ����뿪"
#define MSG_FWTEST_02                        "��Ҫ��鵲�飿"
#define MSG_FWTEST_03                        "��ʼ��鵲��"
#define MSG_FWTEST_04                        "��ʼ�����"
#define MSG_FWTEST_ATTENTION                 "ע�⣡����������Ǵӵ���5 mm���ϣ�"
#define MSG_FWTEST_END                       "��ɲ��ԡ����ù̼����Ժͱ���"
#define MSG_FWTEST_INTO                      "�仯"
#define MSG_FWTEST_ERROR                     "����"
#define MSG_FWTEST_OK                        " OK "
#define MSG_FWTEST_NDEF                      "û�ж���"

#endif // LANGUAGE_CN_H
