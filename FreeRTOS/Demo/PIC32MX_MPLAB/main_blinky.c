/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is false */

int vTaskExitCritical(char *unit ) ;
int vTaskEnterCritical(char *unit ) ;
#line 47 "/Applications/microchip/xc32/v1.42/pic32mx/include/lega-c/machine/int_types.h"
typedef unsigned char __uint8_t;
#line 49 "/Applications/microchip/xc32/v1.42/pic32mx/include/lega-c/machine/int_types.h"
typedef unsigned short __uint16_t;
#line 51 "/Applications/microchip/xc32/v1.42/pic32mx/include/lega-c/machine/int_types.h"
typedef unsigned int __uint32_t;
#line 94 "/Applications/microchip/xc32/v1.42/pic32mx/include/lega-c/setjmp.h"
typedef long long jmp_buf[24];
#line 100 "/Users/saranya/Documents/VM_Shared/ktc/bin/../FreeRTOS/Source/portable/MPLAB/PIC32MX/portmacro.h"
typedef long BaseType_t;
#line 101 "/Users/saranya/Documents/VM_Shared/ktc/bin/../FreeRTOS/Source/portable/MPLAB/PIC32MX/portmacro.h"
typedef unsigned long UBaseType_t;
#line 107 "/Users/saranya/Documents/VM_Shared/ktc/bin/../FreeRTOS/Source/portable/MPLAB/PIC32MX/portmacro.h"
typedef __uint32_t TickType_t;
#line 103 "/Users/saranya/Documents/VM_Shared/ktc/bin/../FreeRTOS/Source/include/task.h"
typedef void *TaskHandle_t;
#line 118 "/Users/saranya/Documents/VM_Shared/ktc/bin/../FreeRTOS/Source/include/timers.h"
typedef void *TimerHandle_t;
#line 34 "/Users/saranya/Documents/VM_Shared/ktc/bin/../include/cilktc-free.h"
struct cbm {
   int use ;
   int data ;
   struct cbm *nextc ;
};
#line 34 "/Users/saranya/Documents/VM_Shared/ktc/bin/../include/cilktc-free.h"
typedef struct cbm cbm;
#line 40 "/Users/saranya/Documents/VM_Shared/ktc/bin/../include/cilktc-free.h"
struct cab_ds {
   struct cbm *free ;
   struct cbm *mrb ;
   int maxcbm ;
};
#line 58 "/Users/saranya/Documents/VM_Shared/ktc/bin/../include/cilktc-free.h"
struct timer_env {
   char *tname ;
   jmp_buf envn ;
};
#line 88 "/Users/saranya/Documents/VM_Shared/ktc/bin/../FreeRTOS/Source/include/queue.h"
typedef void *QueueHandle_t;
#line 98 "/Applications/microchip/xc32/v1.42/pic32mx/include/lega-c/setjmp.h"
extern int setjmp(long long * ) ;
#line 136 "/Users/saranya/Documents/VM_Shared/ktc/bin/../FreeRTOS/Demo/PIC32MX_MPLAB/FreeRTOSConfig.h"
extern void vAssertCalled(char const   *pcFileName , unsigned long ulLine ) ;
#line 360 "/Users/saranya/Documents/VM_Shared/ktc/bin/../FreeRTOS/Source/include/task.h"
extern BaseType_t xTaskCreate(void (*pxTaskCode)(void * ) , char const   * const  pcName , __uint16_t const   usStackDepth , void * const  pvParameters , UBaseType_t uxPriority , TaskHandle_t * const  pxCreatedTask ) ;
#line 643
extern void vTaskDelete(TaskHandle_t xTaskToDelete ) ;
#line 754
extern void vTaskDelayUntil(TickType_t * const  pxPreviousWakeTime , TickType_t const   xTimeIncrement ) ;
#line 1112
extern void vTaskStartScheduler(void) ;
#line 1288
extern TickType_t xTaskGetTickCount(void) ;
#line 48 "/Users/saranya/Documents/VM_Shared/ktc/bin/../include/cilktc-free.h"
cbm cabmsgv  ;
#line 49 "/Users/saranya/Documents/VM_Shared/ktc/bin/../include/cilktc-free.h"
struct cab_ds cabdsv  ;
#line 62 "/Users/saranya/Documents/VM_Shared/ktc/bin/../include/cilktc-free.h"
TaskHandle_t tskhndl  ;
#line 63 "/Users/saranya/Documents/VM_Shared/ktc/bin/../include/cilktc-free.h"
TimerHandle_t tmrhndl  ;
#line 64
extern UBaseType_t idle_prio_free ;
#line 65 "/Users/saranya/Documents/VM_Shared/ktc/bin/../include/cilktc-free.h"
TickType_t tckvar  ;
#line 66
extern TimerHandle_t ktc_timer_init_free(struct timer_env *ptrtenv ) ;
#line 67
extern long ktc_sdelay_init_free(int intrval , char *unit , TickType_t *start_time , int id ) ;
#line 68
extern void ktc_start_time_init_free(TickType_t *start_time ) ;
#line 69
extern int ktc_fdelay_start_timer_free(int interval , char *unit , TimerHandle_t ktctimer , TickType_t start_time ) ;
#line 70
extern long ktc_fdelay_init_free(int interval , char *unit , TickType_t *start_time , TimerHandle_t ktctimer , int id ) ;
#line 71
extern struct timer_env *timer_env_array[10] ;
#line 73
/* #pragma cilnoremove("timer_env_array") */
#line 74
/* #pragma cilnoremove("taskEXIT_CRITICAL") */
#line 75
/* #pragma cilnoremove("taskENTER_CRITICAL") */
#line 76
/* #pragma cilnoremove("timer_env_array") */
#line 77
/* #pragma cilnoremove("tmrhndl") */
#line 78
/* #pragma cilnoremove("tckvar") */
#line 79
/* #pragma cilnoremove("tskhdl") */
#line 80
/* #pragma cilnoremove("idle_prio_free") */
#line 81
/* #pragma cilnoremove("xTaskCreate") */
#line 82
/* #pragma cilnoremove("xTaskGetTickCount") */
#line 83
/* #pragma cilnoremove("vTaskDelayUntil") */
#line 84
/* #pragma cilnoremove("vTaskDelete") */
#line 85
/* #pragma cilnoremove("ktc_start_time_init_free") */
#line 86
/* #pragma cilnoremove("ktc_timer_init_free") */
#line 87
/* #pragma cilnoremove("ktc_sdelay_init_free") */
#line 88
/* #pragma cilnoremove("setjmp") */
#line 89
/* #pragma cilnoremove("ktc_fdelay_init_free") */
#line 90
/* #pragma cilnoremove("ktc_fdelay_start_timer_free") */
#line 692 "/Users/saranya/Documents/VM_Shared/ktc/bin/../FreeRTOS/Source/include/queue.h"
extern BaseType_t xQueueGenericSend(QueueHandle_t xQueue , void const   * const  pvItemToQueue , TickType_t xTicksToWait , BaseType_t const   xCopyPosition ) ;
#line 1013
extern BaseType_t xQueueGenericReceive(QueueHandle_t xQueue , void * const  pvBuffer , TickType_t xTicksToWait , BaseType_t const   xJustPeek ) ;
#line 1639
extern QueueHandle_t xQueueGenericCreate(UBaseType_t const   uxQueueLength , UBaseType_t const   uxItemSize , __uint8_t const   ucQueueType ) ;
#line 77 "/Users/saranya/Documents/VM_Shared/ktc/bin/../FreeRTOS/Demo/Common/include/partest.h"
extern void vParTestToggleLED(UBaseType_t uxLED ) ;
#line 36 "freertos_main.c"
static QueueHandle_t xQueue  =    (void *)0;
#line 39 "freertos_main.c"
UBaseType_t idle_prio  ;
#line 58
extern int ( /* missing proto */  sdelay)() ;
#line 41 "freertos_main.c"
void * __attribute__((__task__)) prvQueueSendTask(void *pvParameters ) 
{ 
  unsigned long ulValueToSend ;
  TimerHandle_t prvQueueSendTask_timer ;
  TickType_t start_time ;
  TickType_t temp_time ;
  struct timer_env env_prvQueueSendTask ;
  int retjmp ;

  {
  env_prvQueueSendTask.tname = "prvQueueSendTask_timer";
  ktc_start_time_init_free(& start_time);
  prvQueueSendTask_timer = ktc_timer_init_free(& env_prvQueueSendTask);
#line 43
  ulValueToSend = 100UL;
#line 46
  if (((unsigned long )pvParameters == 4369UL) == 0) {
#line 46
    vAssertCalled("freertos_main.c", 46);
  }
#line 51
  while (1) {
    {
    {
#line 58
    ktc_sdelay_init_free(200, "ms", & start_time, 1);
    _6: /* CIL Label */ ;
    }
#line 63
    xQueueGenericSend(xQueue, & ulValueToSend, 0U, (BaseType_t )0);
    }
  }
}
}
#line 92
extern int ( /* missing proto */  fdelay)() ;
#line 69 "freertos_main.c"
void * __attribute__((__task__)) prvQueueReceiveTask(void *pvParameters ) 
{ 
  unsigned long ulReceivedValue ;
  TimerHandle_t prvQueueReceiveTask_timer ;
  TickType_t start_time ;
  TickType_t temp_time ;
  struct timer_env env_prvQueueReceiveTask ;
  int retjmp ;

  {
  env_prvQueueReceiveTask.tname = "prvQueueReceiveTask_timer";
  ktc_start_time_init_free(& start_time);
  prvQueueReceiveTask_timer = ktc_timer_init_free(& env_prvQueueReceiveTask);
#line 74
  if (((unsigned long )pvParameters == 34UL) == 0) {
#line 74
    vAssertCalled("freertos_main.c", 74);
  }
  {
  {
#line 76
  ktc_sdelay_init_free(100, "ms", & start_time, 2);
  _11: /* CIL Label */ ;
  retjmp = setjmp(env_prvQueueReceiveTask.envn);
  if (retjmp) {
    goto _18;
  }
  ktc_fdelay_start_timer_free(400, "ms", prvQueueReceiveTask_timer, start_time);
  }
#line 77
  vParTestToggleLED(1);
  }
#line 78
  while (1) {
#line 83
    xQueueGenericReceive(xQueue, & ulReceivedValue, (TickType_t )4294967295UL, (BaseType_t )0);
#line 87
    if (ulReceivedValue == 100UL) {
#line 89
      vParTestToggleLED(0);
#line 90
      ulReceivedValue = 0U;
    }
    {
    {
#line 92
    ktc_fdelay_init_free(200, "ms", & start_time, prvQueueReceiveTask_timer, 3);
    _18:
    if(retjmp){
        vParTestToggleLED(1);}/* CIL Label */ ;
    }
    }
  }
}
}
#line 98 "freertos_main.c"
void main_blinky(void) 
{ 
  void *funparam ;
  TimerHandle_t main_blinky_timer ;
  TickType_t start_time ;
  TickType_t temp_time ;
  struct timer_env env_main_blinky ;
  int retjmp ;
  TaskHandle_t t_0 ;
  TaskHandle_t t_1 ;

  {
  env_main_blinky.tname = "main_blinky_timer";
  ktc_start_time_init_free(& start_time);
  main_blinky_timer = ktc_timer_init_free(& env_main_blinky);
#line 103
  xQueue = xQueueGenericCreate(1, sizeof(unsigned long ), (__uint8_t )0U);
#line 105
  if ((unsigned long )xQueue != (unsigned long )((void *)0)) {
#line 107
    funparam = (void *)34UL;
#line 108
    idle_prio = 2UL;
    xTaskCreate(prvQueueReceiveTask, "prvQueueReceiveTaskt_0", 190, funparam, idle_prio, & t_0);
#line 110
    funparam = (void *)4369UL;
#line 111
    idle_prio = 1UL;
    xTaskCreate(prvQueueSendTask, "prvQueueSendTaskt_1", 190, funparam, idle_prio, & t_1);
#line 113
    vTaskStartScheduler();
  }
  if (t_0 != (void *)0) {
    vTaskDelete(t_0);
  }
  if (t_1 != (void *)0) {
    vTaskDelete(t_1);
  }
#line 115
  while (1) {

  }
}
}