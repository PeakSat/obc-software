#include "ECSS_Configuration.hpp"

#ifdef SERVICE_PARAMETER

#include "Services/ParameterService.hpp"
#include "PeakSatParameters.hpp"

void ParameterService::initializeParameterMap() {
    parameters = {{PeakSatParameters::OBCMCUTemperature,                                    PeakSatParameters::obcMCUTemperature},
                  {PeakSatParameters::OBCUseRTT,                                            PeakSatParameters::obcUseRTT},
                  {PeakSatParameters::OBCUseUART,                                           PeakSatParameters::obcUseUART},
                  {PeakSatParameters::OBCUseCAN,                                            PeakSatParameters::obcUseCAN},
            //-----------------------------------------------------------------------------------------------
                  {PeakSatParameters::OBCPCBTemperature1,                                   PeakSatParameters::obcPCBTemperature1},
                  {PeakSatParameters::OBCPCBTemperature2,                                   PeakSatParameters::obcPCBTemperature2},
                  {PeakSatParameters::OBCMCUInputVoltage,                                   PeakSatParameters::obcMCUInputVoltage},
                  {PeakSatParameters::OBCMCUBootCounter,                                    PeakSatParameters::obcMCUBootCounter},
                  {PeakSatParameters::OBCFlashInt,                                          PeakSatParameters::obcFlashInt},
                  {PeakSatParameters::OBCSRAMInt,                                           PeakSatParameters::obcSRAMInt},
                  {PeakSatParameters::OBCAvailableMRAM,                                     PeakSatParameters::obcAvailableMRAM},
                  {PeakSatParameters::OBCAvailableNAND,                                     PeakSatParameters::obcAvailableNAND},
                  {PeakSatParameters::OBCSpacecraftTimeRef,                                 PeakSatParameters::obcSpacecraftTimeRef},
                  {PeakSatParameters::OBCOnBoardTime,                                       PeakSatParameters::obcOnBoardTime},
                  {PeakSatParameters::OBCOperationalMode,                                   PeakSatParameters::obcOperationalMode},
                  {PeakSatParameters::OBCMemoryPartition,                                   PeakSatParameters::obcMemoryPartition},
                  {PeakSatParameters::OBCReconfigurationTimer,                              PeakSatParameters::obcReconfigurationTimer},
                  {PeakSatParameters::OBCLastFailedEvent,                                   PeakSatParameters::obcLastFailedEvent},
                  {PeakSatParameters::OBCMCUSystick,                                        PeakSatParameters::obcMCUSystick},
                  {PeakSatParameters::OBCCANBUSLoad1,                                       PeakSatParameters::obcCANBUSLoad1},
                  {PeakSatParameters::OBCCANBUSLoad2,                                       PeakSatParameters::obcCANBUSLoad2},
                  {PeakSatParameters::OBCCANBUSActive,                                      PeakSatParameters::obcCANBUSActive},
                  {PeakSatParameters::OBCMCUFDIR,                                           PeakSatParameters::obcMCUFDIR},
                  {PeakSatParameters::OBCMCURestartSafeModeThreshold,                       PeakSatParameters::obcMCURestartSafeModeThreshold},
                  {PeakSatParameters::OBCNANDFLASHLCLThreshold,                             PeakSatParameters::obcNANDFLASHLCLThreshold},
                  {PeakSatParameters::OBCMRAMLCLThreshold,                                  PeakSatParameters::obcMRAMLCLThreshold},
                  {PeakSatParameters::OBCNANDFLASHON,                                       PeakSatParameters::obcNANDFLASHON},
                  {PeakSatParameters::OBCMRAMON,                                            PeakSatParameters::obcNANDFlashScrubbingFrequency},
                  {PeakSatParameters::OBCNANDFLASHScrubbingFrequency,                       PeakSatParameters::obcMRAMON},
                  {PeakSatParameters::OBCRAMScrubbingFrequency,                             PeakSatParameters::obcRAMScrubbingFrequency},
                  {PeakSatParameters::OBCProgramFlashScrubbingFrequency,                    PeakSatParameters::obcProgramFlashScrubbingFrequency},

            //---------------------------------------------------------------------------------------------
                  {PeakSatParameters::EPSSwitch3V1,                                         PeakSatParameters::epsSwitch3V1},
                  {PeakSatParameters::EPSSwitch3V2,                                         PeakSatParameters::epsSwitch3V2},
                  {PeakSatParameters::EPSSwitch3V3,                                         PeakSatParameters::epsSwitch3V3},
                  {PeakSatParameters::EPSSwitch3V4,                                         PeakSatParameters::epsSwitch3V4},
                  {PeakSatParameters::EPSSwitch5V1,                                         PeakSatParameters::epsSwitch5V1},
                  {PeakSatParameters::EPSSwitch5V2,                                         PeakSatParameters::epsSwitch5V2},
                  {PeakSatParameters::EPSSwitch5V3,                                         PeakSatParameters::epsSwitch5V3},
                  {PeakSatParameters::EPSSwitch5V4,                                         PeakSatParameters::epsSwitch5V4},
                  {PeakSatParameters::EPSSwitch1,                                           PeakSatParameters::epsSwitch1},
                  {PeakSatParameters::EPSSwitch2,                                           PeakSatParameters::epsSwitch2},
                  {PeakSatParameters::EPSSwitch3,                                           PeakSatParameters::epsSwitch3},
                  {PeakSatParameters::EPSSwitch4,                                           PeakSatParameters::epsSwitch4},
                  {PeakSatParameters::EPSSwitch5,                                           PeakSatParameters::epsSwitch5},
                  {PeakSatParameters::EPSCurrentForRail3V1,                                 PeakSatParameters::epsCurrentForRail3V1},
                  {PeakSatParameters::EPSCurrentForRail3V2,                                 PeakSatParameters::epsCurrentForRail3V2},
                  {PeakSatParameters::EPSCurrentForRail3V3,                                 PeakSatParameters::epsCurrentForRail3V3},
                  {PeakSatParameters::EPSCurrentForRail3V4,                                 PeakSatParameters::epsCurrentForRail3V4},
                  {PeakSatParameters::EPSCurrentForRail5V1,                                 PeakSatParameters::epsCurrentForRail5V1},
                  {PeakSatParameters::EPSCurrentForRail5V2,                                 PeakSatParameters::epsCurrentForRail5V2},
                  {PeakSatParameters::EPSCurrentForRail5V3,                                 PeakSatParameters::epsCurrentForRail5V3},
                  {PeakSatParameters::EPSCurrentForRail5V4,                                 PeakSatParameters::epsCurrentForRail5V4},
                  {PeakSatParameters::EPSCurrentForRail1,                                   PeakSatParameters::epsCurrentForRail1},
                  {PeakSatParameters::EPSCurrentForRail2,                                   PeakSatParameters::epsCurrentForRail2},
                  {PeakSatParameters::EPSCurrentForRail3,                                   PeakSatParameters::epsCurrentForRail3},
                  {PeakSatParameters::EPSCurrentForRail4,                                   PeakSatParameters::epsCurrentForRail4},
                  {PeakSatParameters::EPSCurrentForRail5,                                   PeakSatParameters::epsCurrentForRail5},
                  {PeakSatParameters::EPSVoltageForEachRail3V1,                             PeakSatParameters::epsVoltageForEachRail3V1},
                  {PeakSatParameters::EPSVoltageForEachRail3V2,                             PeakSatParameters::epsVoltageForEachRail3V2},
                  {PeakSatParameters::EPSVoltageForEachRail3V3,                             PeakSatParameters::epsVoltageForEachRail3V3},
                  {PeakSatParameters::EPSVoltageForEachRail3V4,                             PeakSatParameters::epsVoltageForEachRail3V4},
                  {PeakSatParameters::EPSVoltageForEachRail5V1,                             PeakSatParameters::epsVoltageForEachRail5V1},
                  {PeakSatParameters::EPSVoltageForEachRail5V2,                             PeakSatParameters::epsVoltageForEachRail5V2},
                  {PeakSatParameters::EPSVoltageForEachRail5V3,                             PeakSatParameters::epsVoltageForEachRail5V3},
                  {PeakSatParameters::EPSVoltageForEachRail5V4,                             PeakSatParameters::epsVoltageForEachRail5V4},
                  {PeakSatParameters::EPSVoltageForEachRail12V1,                            PeakSatParameters::epsVoltageForEachRail12V1},
                  {PeakSatParameters::EPSVoltageForEachRail12V2,                            PeakSatParameters::epsVoltageForEachRail12V2},
                  {PeakSatParameters::EPSVoltageForEachRail12V3,                            PeakSatParameters::epsVoltageForEachRail12V3},
                  {PeakSatParameters::EPSVoltageForEachRail12V4,                            PeakSatParameters::epsVoltageForEachRail12V4},
                  {PeakSatParameters::EPSPanelVoltageXPlus,                                 PeakSatParameters::epsPanelVoltageXPlus},
                  {PeakSatParameters::EPSPanelVoltageXMinus,                                PeakSatParameters::epsPanelVoltageXMinus},
                  {PeakSatParameters::EPSPanelVoltageYPlus,                                 PeakSatParameters::epsPanelVoltageYPlus},
                  {PeakSatParameters::EPSPanelVoltageYMinus,                                PeakSatParameters::epsPanelVoltageYMinus},
                  {PeakSatParameters::EPSPanelVoltageZ,                                     PeakSatParameters::epsPanelVoltageZ},
                  {PeakSatParameters::EPSPanelCurrentXPlus,                                 PeakSatParameters::epsPanelCurrentXPlus},
                  {PeakSatParameters::EPSPanelCurrentXMinus,                                PeakSatParameters::epsPanelCurrentXMinus},
                  {PeakSatParameters::EPSPanelCurrentYPlus,                                 PeakSatParameters::epsPanelCurrentYPlus},
                  {PeakSatParameters::EPSPanelCurrentYMinus,                                PeakSatParameters::epsPanelCurrentYMinus},
                  {PeakSatParameters::EPSPanelCurrentZ,                                     PeakSatParameters::epsPanelCurrentZ},
                  {PeakSatParameters::EPSBatteryPackVoltage,                                PeakSatParameters::epsBatteryPackVoltage},
                  {PeakSatParameters::EPSPanelTemperatureXPlus,                             PeakSatParameters::epsPanelTemperatureXPlus},
                  {PeakSatParameters::EPSPanelTemperatureXMinus,                            PeakSatParameters::epsPanelTemperatureXMinus},
                  {PeakSatParameters::EPSPanelTemperatureYPlus,                             PeakSatParameters::epsPanelTemperatureYPlus},
                  {PeakSatParameters::EPSPanelTemperatureYMinus,                            PeakSatParameters::epsPanelTemperatureYMinus},
                  {PeakSatParameters::EPSPanelTemperatureZ,                                 PeakSatParameters::epsPanelTemperatureZ},
                  {PeakSatParameters::EPSPCBTemperatureSensor1,                             PeakSatParameters::epsPCBTemperatureSensor1},
                  {PeakSatParameters::EPSPCBTemperatureSensor2,                             PeakSatParameters::epsPCBTemperatureSensor2},
                  {PeakSatParameters::EPSBatteryTemperatureSensor1,                         PeakSatParameters::epsBatteryTemperatureSensor1},
                  {PeakSatParameters::EPSBatteryTemperatureSensor2,                         PeakSatParameters::epsBatteryTemperatureSensor2},
            //---------------------------------------------------------------------------------------------
                  {PeakSatParameters::COMMSUHFBandPATemperature,                            PeakSatParameters::commsUHFBandPATemperature},
                  {PeakSatParameters::COMMSSBandPATemperature,                              PeakSatParameters::commsSBandPATemperature},
                  {PeakSatParameters::COMMSPCBTemperature,                                  PeakSatParameters::commsPCBTemperature},
                  {PeakSatParameters::COMMSAntennaDeploymentStatus,                         PeakSatParameters::commsAntennaDeploymentStatus},
                  {PeakSatParameters::COMMSDataRateUHFTX,                                   PeakSatParameters::commsDataRateUHFTX},
                  {PeakSatParameters::COMMSDataRateUHFRX,                                   PeakSatParameters::commsDataRateUHFRX},
                  {PeakSatParameters::COMMSSymbolRateSBand,                                 PeakSatParameters::commsSymbolRateSBand},
                  {PeakSatParameters::COMMSCWInterval,                                      PeakSatParameters::commsCWInterval},
                  {PeakSatParameters::COMMSGMSKBeaconInterval,                              PeakSatParameters::commsGMSKBeaconInterval},
                  {PeakSatParameters::COMMSUHFBandTXPower,                                  PeakSatParameters::commsUHFBandTXPower},
                  {PeakSatParameters::COMMSSBandTXPower,                                    PeakSatParameters::commsSBandTXPower},
                  {PeakSatParameters::COMMSChannelNumberUHFBand,                            PeakSatParameters::commsChannelNumberUHFBand},
                  {PeakSatParameters::COMMSChannelNumberSBand,                              PeakSatParameters::commsChannelNumberSBand},
                  {PeakSatParameters::COMMSLNAGain,                                         PeakSatParameters::commsLNAGain},
                  {PeakSatParameters::COMMSPAGainUHFBand,                                   PeakSatParameters::commsPAGainUHFBand},
                  {PeakSatParameters::COMMSPAGainSBand,                                     PeakSatParameters::commsPAGainSBand},
                  {PeakSatParameters::COMMSVGAGain,                                         PeakSatParameters::commsVGAGain},
                  {PeakSatParameters::COMMSRSSI,                                            PeakSatParameters::commsRSSI},
                  {PeakSatParameters::COMMSUHFBandTXOnOff,                                  PeakSatParameters::commsUHFBandTXOnOff},
                  {PeakSatParameters::COMMSUHFBandRXOnOff,                                  PeakSatParameters::commsUHFBandRXOnOff},
                  {PeakSatParameters::COMMSSBandTXOnOff,                                    PeakSatParameters::commsSBandTXOnOff},
                  {PeakSatParameters::COMMSPacketsRejectedCOMMS,                            PeakSatParameters::commsPacketsRejectedCOMMS},
                  {PeakSatParameters::COMMSInvalidHMAC,                                     PeakSatParameters::commsInvalidHMAC},
                  {PeakSatParameters::COMMSInvalidPacketStructure,                          PeakSatParameters::commsInvalidPacketStructure},
                  {PeakSatParameters::COMMSInvalidSpacecraftID,                             PeakSatParameters::commsInvalidSpacecraftID},
                  {PeakSatParameters::COMMSFrameSequenceCounter,                            PeakSatParameters::commsFrameSequenceCounter},
                  {PeakSatParameters::COMMSPCBTemperature1,                                 PeakSatParameters::commsPCBTemperature1},
                  {PeakSatParameters::COMMSPCBTemperature2,                                 PeakSatParameters::commsPCBTemperature2},
                  {PeakSatParameters::COMMSMCUTemperature,                                  PeakSatParameters::commsMCUTemperature},
                  {PeakSatParameters::COMMSMCUInputVoltage,                                 PeakSatParameters::commsMCUInputVoltage},
                  {PeakSatParameters::COMMSMCUBootCounter,                                  PeakSatParameters::commsMCUBootCounter},
                  {PeakSatParameters::COMMSOnBoardTime,                                     PeakSatParameters::commsOnBoardTime},
                  {PeakSatParameters::COMMSNANDCurrentlyUsedMemoryPartition,                PeakSatParameters::commsNANDCurrentlyUsedMemoryPartition},
                  {PeakSatParameters::COMMSLastFailedEvent,                                 PeakSatParameters::commsLastFailedEvent},
                  {PeakSatParameters::COMMSMCUSystick,                                      PeakSatParameters::commsMCUSystick},
                  {PeakSatParameters::COMMSFlashInt,                                        PeakSatParameters::commsFlashInt},
                  {PeakSatParameters::COMMSSRAMInt,                                         PeakSatParameters::commsSRAMInt}};
}

#endif
