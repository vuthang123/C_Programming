#include <stdio.h>
#include <stdint.h>
typedef uint8_t uint8 ;



typedef struct
{
#if ((SPI_LEVEL_DELIVERED == SPI_LEVEL1) || (SPI_LEVEL_DELIVERED == SPI_LEVEL2))
    /** @brief Array of the IDs of jobs to be scheduled, for each priority level. */
    Spi_JobType ScheduledJobsListHead[SPI_JOB_PRIORITY_LEVELS_COUNT];
    /** @brief Array of the IDs of last jobs in queues, for each priority level. */
    Spi_JobType ScheduledJobsListTail[SPI_JOB_PRIORITY_LEVELS_COUNT];
    /** @brief Array of the IDs of last jobs in queues, for each priority level. */
    sint8 MaxScheduledPriority;
#endif /* ((SPI_LEVEL_DELIVERED == SPI_LEVEL1) || (SPI_LEVEL_DELIVERED == SPI_LEVEL2)) */
    Spi_StatusType Status;    /**< @brief DSPI state. */
    Spi_ChannelType Channel; /**< Current channel index in Job */
    Spi_JobType Job; /**< Current job index */
} Spi_HWUnitQueue;

typedef struct
{
    /** @brief Number of channels in the job. */
    Spi_ChannelType NumChannels;
    /** @brief Channel index list. */
    const Spi_ChannelType *ChannelIndexList;
    /** @brief Job end notification. */
    Spi_NotifyType (*EndNotification);
    /** @brief Job start notification. */
    Spi_NotifyType (*StartNotification);
    /** @brief Priority. */
    sint8 Priority;
    /** @brief CoreID used */
    uint32 SpiCoreUse;
    /** @brief Implementation specific field referencing the channel internal state. */
    Spi_JobStateType *JobState;
    /** @brief HWUnit. */
    Spi_HWUnitType HWUnit;
    /** @brief ExternalDevice. */
    Spi_ExternalDeviceType ExternalDevice;
    /** @brief Implementation specific field: cached LLD device attributes. */
    const Spi_ExDevicesConfigType *ExternalDeviceConfig;
} Spi_JobConfigType;
typedef enum
{
    SPI_OVER_LPSPI = 0,
#if (SPI_IPW_SPI_FLEXIO_ENABLE == STD_ON)
    SPI_OVER_FLEXIO = 1
#endif
} Spi_Ipw_SupportedIpsType;

/** 
 * @bried This union contains config structure for all IPs available.
 */
typedef struct
{
    const Lpspi_Ip_ConfigType *LpspiIpConfig;
#if (SPI_IPW_SPI_FLEXIO_ENABLE == STD_ON)
    const Flexio_Spi_Ip_ConfigType *FlexioSpiIpConfig;
#endif
#if (SPI_IPW_DMA_USED == STD_ON)
#if (SPI_IPW_ENABLE_DMAFASTTRANSFER_SUPPORT == STD_ON)
    Lpspi_Ip_FastTransferType *LpspiFastTransferCfg; /* config structure for a sequence transfer with Dma Fast */
#endif
#endif
} Spi_Ipw_IpConfigType;

/** 
 * @bried This union contains config structure for all external device available.
 */
typedef struct
{
    const Lpspi_Ip_ExternalDeviceType *LpspiExternalDeviceConfig;
#if (SPI_IPW_SPI_FLEXIO_ENABLE == STD_ON)
    const Flexio_Spi_Ip_ExternalDeviceType *Flexio_SpiExternalDeviceConfig;
#endif
} Spi_Ipw_ExternalDeviceType;

/**
* @brief   This structure holds the HWUnit configuration parameters.
*
* @implements Spi_HWUnitConfigType_struct
*/
typedef struct
{
    Spi_Ipw_SupportedIpsType IpType;
    uint8 Instance;
    uint32 SpiCoreUse;
    Spi_Ipw_IpConfigType IpConfig;
    uint32 IsSync;
} Spi_HWUnitConfigType;

/**
* @brief   This structure holds the PhyUnit configuration.
*/
typedef struct
{
    /** @brief Point to PhyUnit configuration. */
    const Spi_HWUnitConfigType * PhyUnitConfig;
} Spi_PhyUnitsConfigType;

/**
* @brief   This structure holds the configuration parameters for each ExternalDevice.
*/
typedef struct
{
    Spi_Ipw_SupportedIpsType IpType;
    uint8 Instance;
    Spi_Ipw_ExternalDeviceType ExternalDeviceConfig;
    uint32 SpiCoreUse;
} Spi_ExternalDeviceConfigType;

/**
* @brief   This structure holds the ExternalDevice configuration.
*/
typedef struct
{
    /** @brief Point to ExternalDevice configuration. */
    const Spi_ExternalDeviceConfigType * ExDeviceConfig;
} Spi_ExDevicesConfigType;
int main()
{
	
	for (uint8 index = 0 ;index < sizeof(data_buffer)/sizeof(uint8); index++)
	 {
	 	printf("%02x ",(*data)[index]);
	 }
}