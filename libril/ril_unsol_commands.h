/* //device/libs/telephony/ril_unsol_commands.h
**
** Copyright 2006, The Android Open Source Project
** Copyright (c) 2012-2013, The Linux Foundation. All rights reserved.
**
** Not a Contribution
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/
    {RIL_UNSOL_RESPONSE_RADIO_STATE_CHANGED, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_RESPONSE_CALL_STATE_CHANGED, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_RESPONSE_VOICE_NETWORK_STATE_CHANGED, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_RESPONSE_NEW_SMS, responseString, WAKE_PARTIAL},
    {RIL_UNSOL_RESPONSE_NEW_SMS_STATUS_REPORT, responseString, WAKE_PARTIAL},
    {RIL_UNSOL_RESPONSE_NEW_SMS_ON_SIM, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_ON_USSD, responseStrings, WAKE_PARTIAL},
    {RIL_UNSOL_ON_USSD_REQUEST, responseVoid, DONT_WAKE},
    {RIL_UNSOL_NITZ_TIME_RECEIVED, responseString, WAKE_PARTIAL},
    {RIL_UNSOL_SIGNAL_STRENGTH, responseRilSignalStrength, DONT_WAKE},
    {RIL_UNSOL_DATA_CALL_LIST_CHANGED, responseDataCallList, WAKE_PARTIAL},
    {RIL_UNSOL_SUPP_SVC_NOTIFICATION, responseSsn, WAKE_PARTIAL},
    {RIL_UNSOL_STK_SESSION_END, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_STK_PROACTIVE_COMMAND, responseString, WAKE_PARTIAL},
    {RIL_UNSOL_STK_EVENT_NOTIFY, responseString, WAKE_PARTIAL},
    {RIL_UNSOL_STK_CALL_SETUP, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_SIM_SMS_STORAGE_FULL, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_SIM_REFRESH, responseSimRefresh, WAKE_PARTIAL},
    {RIL_UNSOL_CALL_RING, responseCallRing, WAKE_PARTIAL},
    {RIL_UNSOL_RESPONSE_SIM_STATUS_CHANGED, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_RESPONSE_CDMA_NEW_SMS, responseCdmaSms, WAKE_PARTIAL},
    {RIL_UNSOL_RESPONSE_NEW_BROADCAST_SMS, responseRaw, WAKE_PARTIAL},
    {RIL_UNSOL_CDMA_RUIM_SMS_STORAGE_FULL, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_RESTRICTED_STATE_CHANGED, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_ENTER_EMERGENCY_CALLBACK_MODE, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_CDMA_CALL_WAITING, responseCdmaCallWaiting, WAKE_PARTIAL},
    {RIL_UNSOL_CDMA_OTA_PROVISION_STATUS, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_CDMA_INFO_REC, responseCdmaInformationRecords, WAKE_PARTIAL},
    {RIL_UNSOL_OEM_HOOK_RAW, responseRaw, WAKE_PARTIAL},
    {RIL_UNSOL_RINGBACK_TONE, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_RESEND_INCALL_MUTE, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_CDMA_SUBSCRIPTION_SOURCE_CHANGED, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_CDMA_PRL_CHANGED, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_EXIT_EMERGENCY_CALLBACK_MODE, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_RIL_CONNECTED, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_VOICE_RADIO_TECH_CHANGED, responseInts, WAKE_PARTIAL},
#ifndef RIL_NO_CELL_INFO_LIST
    {RIL_UNSOL_CELL_INFO_LIST, responseCellInfoList, WAKE_PARTIAL},
#endif
    {RIL_UNSOL_RESPONSE_IMS_NETWORK_STATE_CHANGED, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_RESPONSE_TETHERED_MODE_STATE_CHANGED, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_ON_SS, responseSSData, WAKE_PARTIAL},
    {RIL_UNSOL_STK_CC_ALPHA_NOTIFY, responseString, WAKE_PARTIAL},
    {RIL_UNSOL_UICC_SUBSCRIPTION_STATUS_CHANGED, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_ENTER_LPM, responseVoid, WAKE_PARTIAL},                                      // s_unsolResponses[0]: 1523
    {RIL_UNSOL_ENTER_LPM_M7, responseVoid, WAKE_PARTIAL},                                   // s_unsolResponses[1]: 3023
    {RIL_UNSOL_CDMA_3G_INDICATOR, responseInts, WAKE_PARTIAL},                              // s_unsolResponses[2]: 3009
    {RIL_UNSOL_CDMA_3G_INDICATOR_M7, responseInts, WAKE_PARTIAL},                           // s_unsolResponses[3]: 4259
    {RIL_UNSOL_CDMA_ENHANCE_ROAMING_INDICATOR, responseInts, WAKE_PARTIAL},                 // s_unsolResponses[4]: 3012
    {RIL_UNSOL_CDMA_ENHANCE_ROAMING_INDICATOR_M7, responseInts, WAKE_PARTIAL},              // s_unsolResponses[5]: 4626
    {RIL_UNSOL_CDMA_NETWORK_BASE_PLUSCODE_DIAL, responseStrings, WAKE_PARTIAL},             // s_unsolResponses[6]: 3020
    {RIL_UNSOL_CDMA_NETWORK_BASE_PLUSCODE_DIAL_M7, responseStrings, WAKE_PARTIAL},          // s_unsolResponses[7]: 4270
    {RIL_UNSOL_RESPONSE_PHONE_MODE_CHANGE, responseInts, WAKE_PARTIAL},                     // s_unsolResponses[8]: 6002
    {RIL_UNSOL_RESPONSE_PHONE_MODE_CHANGE_M7, responseInts, WAKE_PARTIAL},                  // s_unsolResponses[9]: 4802
    {RIL_UNSOL_RESPONSE_VOICE_RADIO_TECH_CHANGED_HTC, responseVoid, WAKE_PARTIAL},          // s_unsolResponses[10]: 21004
    {RIL_UNSOL_RESPONSE_IMS_NETWORK_STATE_CHANGED_HTC, responseVoid, WAKE_PARTIAL},         // s_unsolResponses[11]: 21005
    {RIL_UNSOL_RESPONSE_IMS_NETWORK_STATE_CHANGED_HTC_M7, responseVoid, WAKE_PARTIAL},      // s_unsolResponses[12]: 5755
    {RIL_UNSOL_RESPONSE_DATA_NETWORK_STATE_CHANGED, responseInts, WAKE_PARTIAL},            // s_unsolResponses[13]: 21007
    {RIL_UNSOL_RESPONSE_DATA_NETWORK_STATE_CHANGED_M7, responseInts, WAKE_PARTIAL},         // s_unsolResponses[14]: 5757