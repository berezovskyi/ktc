/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is false */

void *fifofclap = (void*) 0 ;
void *fifofdata =(void*) 0;
int vTaskExitCritical(char *unit ) ;
int vTaskEnterCritical(char *unit ) ;
#line 49 "/Applications/microchip/xc32/v1.42/pic32mx/include/lega-c/machine/int_types.h"
typedef unsigned short __uint16_t;
#line 51 "/Applications/microchip/xc32/v1.42/pic32mx/include/lega-c/machine/int_types.h"
typedef unsigned int __uint32_t;
#line 94 "/Applications/microchip/xc32/v1.42/pic32mx/include/lega-c/setjmp.h"
typedef long long jmp_buf[24];
#line 95 "/Applications/microchip/xc32/v1.42/pic32mx/include/lega-c/setjmp.h"
typedef long long sigjmp_buf[25];
#line 137 "/Applications/microchip/xc32/v1.42/pic32mx/include/lega-c/sys/signal.h"
typedef unsigned long long sigset_t;
#line 128 "/Applications/microchip/xc32/v1.42/pic32mx/include/lega-c/sys/time.h"
struct timespec {
   long tv_sec ;
   long tv_nsec ;
};
#line 77 "/Applications/microchip/xc32/v1.42/pic32mx/include/lega-c/sched.h"
struct timespec;
#line 71 "/Applications/microchip/xc32/v1.42/pic32mx/include/lega-c/pthread/impl.h"
struct _rtpx_thread;
#line 71
struct _rtpx_thread;
#line 72 "/Applications/microchip/xc32/v1.42/pic32mx/include/lega-c/pthread/impl.h"
typedef struct _rtpx_thread *pthread_t;
#line 358 "/Applications/microchip/xc32/v1.42/pic32mx/include/lega-c/pthread.h"
struct timespec;
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
#line 88 "/Users/saranya/Documents/VM_Shared/ktc/bin/../FreeRTOS/Source/include/queue.h"
typedef void *QueueHandle_t;
#line 98 "/Users/saranya/Documents/VM_Shared/ktc/bin/../include/cilktc-free.h"
struct cbm {
   int use ;
   int data ;
   struct cbm *nextc ;
};
#line 98 "/Users/saranya/Documents/VM_Shared/ktc/bin/../include/cilktc-free.h"
typedef struct cbm cbm;
#line 104 "/Users/saranya/Documents/VM_Shared/ktc/bin/../include/cilktc-free.h"
struct cab_ds {
   struct cbm *free ;
   struct cbm *mrb ;
   int maxcbm ;
};
#line 190 "/Users/saranya/Documents/VM_Shared/ktc/bin/../include/cilktc-free.h"
struct timer_env {
   char * tname;
   jmp_buf envn ;
};
#line 8 "freeClap.c"
enum state_machine {
    STATE_DRIVE = 0,
    STATE_STOP = 1,
    STATE_RIGHT = 2,
    STATE_LEFT = 3
} ;
#line 98 "/Applications/microchip/xc32/v1.42/pic32mx/include/lega-c/setjmp.h"
extern int setjmp(long long * ) ;
#line 360 "/Users/saranya/Documents/VM_Shared/ktc/bin/../FreeRTOS/Source/include/task.h"
extern BaseType_t xTaskCreate(void (*pxTaskCode)(void * ) , char const   * const  pcName , __uint16_t const   usStackDepth , void * const  pvParameters , UBaseType_t uxPriority , TaskHandle_t * const  pxCreatedTask ) ;
#line 643
extern void vTaskDelete(TaskHandle_t xTaskToDelete ) ;
#line 754
extern void vTaskDelayUntil(TickType_t * const  pxPreviousWakeTime , TickType_t const   xTimeIncrement ) ;
#line 1288
extern TickType_t xTaskGetTickCount(void) ;
#line 66 "/Users/saranya/Documents/VM_Shared/ktc/bin/../include/cilktc-free.h"
struct timespec *timepecptr  ;
#line 68 "/Users/saranya/Documents/VM_Shared/ktc/bin/../include/cilktc-free.h"
sigset_t sigtype  ;
#line 95 "/Users/saranya/Documents/VM_Shared/ktc/bin/../include/cilktc-free.h"
sigjmp_buf buf_struct  ;
#line 111 "/Users/saranya/Documents/VM_Shared/ktc/bin/../include/cilktc-free.h"
cbm cabmsgv  ;
#line 112 "/Users/saranya/Documents/VM_Shared/ktc/bin/../include/cilktc-free.h"
struct cab_ds cabdsv  ;
#line 115 "/Users/saranya/Documents/VM_Shared/ktc/bin/../include/cilktc-free.h"
QueueHandle_t xQueue  ;
#line 121
extern void ktc_fifo_init(QueueHandle_t *xqueue ) ;
#line 122
extern int ktc_fifo_read(QueueHandle_t xqueue , int *data ) ;
#line 123
extern void ktc_fifo_write(QueueHandle_t xqueue , int data ) ;
#line 187 "/Users/saranya/Documents/VM_Shared/ktc/bin/../include/cilktc-free.h"
pthread_t pthread_id_example  ;
#line 194 "/Users/saranya/Documents/VM_Shared/ktc/bin/../include/cilktc-free.h"
TaskHandle_t tskhndl  ;
#line 195 "/Users/saranya/Documents/VM_Shared/ktc/bin/../include/cilktc-free.h"
TimerHandle_t tmrhndl  ;
#line 196 "/Users/saranya/Documents/VM_Shared/ktc/bin/../include/cilktc-free.h"
//UBaseType_t idle_prio  =    2UL;
#line 197 "/Users/saranya/Documents/VM_Shared/ktc/bin/../include/cilktc-free.h"
TickType_t tckvar  ;
#line 198
extern TimerHandle_t ktc_timer_init_free(struct timer_env *ptrtenv ) ;
#line 199
extern long ktc_sdelay_init_free(int intrval , char *unit , TickType_t *start_time , int id ) ;
#line 200
extern void ktc_start_time_init_free(TickType_t *start_time ) ;
#line 201
extern int ktc_fdelay_start_timer_free(int interval , char *unit , TimerHandle_t ktctimer , TickType_t start_time ) ;
#line 202
extern long ktc_fdelay_init_free(int interval , char *unit , TickType_t *start_time , TimerHandle_t ktctimer , int retjmp , int id ) ;
#line 203
extern struct timer_env timer_env_array[50] ;
#line 205
/* #pragma cilnoremove("timer_env_array") */
#line 206
/* #pragma cilnoremove("taskEXIT_CRITICAL") */
#line 207
/* #pragma cilnoremove("taskENTER_CRITICAL") */
#line 208
/* #pragma cilnoremove("timer_env_array") */
#line 209
/* #pragma cilnoremove("tmrhndl") */
#line 210
/* #pragma cilnoremove("tckvar") */
#line 211
/* #pragma cilnoremove("tskhdl") */
#line 212
/* #pragma cilnoremove("idle_prio") */
#line 213
/* #pragma cilnoremove("xTaskCreate") */
#line 214
/* #pragma cilnoremove("xTaskGetTickCount") */
#line 215
/* #pragma cilnoremove("vTaskDelayUntil") */
#line 216
/* #pragma cilnoremove("vTaskDelete") */
#line 217
/* #pragma cilnoremove("ktc_start_time_init_free") */
#line 218
/* #pragma cilnoremove("ktc_timer_init_free") */
#line 219
/* #pragma cilnoremove("ktc_sdelay_init_free") */
#line 220
/* #pragma cilnoremove("setjmp") */
#line 221
/* #pragma cilnoremove("ktc_fdelay_init_free") */
#line 222
/* #pragma cilnoremove("ktc_fdelay_start_timer_free") */
#line 223
/* #pragma cilnoremove("ktc_fifo_init") */
#line 224
/* #pragma cilnoremove("ktc_fifo_read") */
#line 225
/* #pragma cilnoremove("ktc_fifo_write") */
#line 226
/* #pragma cilnoremove("fifodt") */
#line 227
/* #pragma cilnoremove("xQueue") */
#line 3 "tcar.h"
extern void setPortsAndParameters() ;
#line 4
extern void sendTurnRightSignal() ;
#line 5
extern void sendStopSignal() ;
#line 6
extern void sendStartSignal() ;
#line 7
extern int getData() ;
#line 5 "freeClap.c"
int __attribute__((__fifochannel__))  fdata  ;
#line 6 "freeClap.c"
int __attribute__((__fifochannel__))  fclap  ;
#line 8 "freeClap.c"
enum state_machine state  ;
#line 20
extern int ( /* missing proto */  sleep)() ;
#line 16 "freeClap.c"
jmp_buf buf;
extern void vTaskSuspend( TaskHandle_t xTaskToSuspend );


void * __attribute__((__task__)) genClap(int x) 
{ 
   
  int data ;
  TimerHandle_t genClap_timer ;
  TickType_t start_time ;
  TickType_t temp_time ;
  struct timer_env env_genClap ;
  int retjmp ;
  int i;
 maskInterrupt();
  {
  env_genClap.tname = "genClap_timer";
  ktc_start_time_init_free(& start_time);
  genClap_timer = ktc_timer_init_free(& env_genClap);
#line 18
  while (1) {
#line 19
      i++;
    data = getData();
    {
   ktc_fifo_write(&fifofdata, 1UL);
   
      
   
    }
  }
}
}
#line 29

#line 34
extern int ( /* missing proto */  next)() ;
#line 35
extern int ( /* missing proto */  fdelay)() ;
extern void vTaskSetApplicationTaskTag();

#line 39

extern int pHook();
extern void  countClapAux();
extern void control1Aux(); 
extern auxYIELD();


#line 24 "freeClap.c"
void * __attribute__((__task__)) countClap(int x) 
{ 
   int i = 0;
  int data ;
  int clap ;
  int tmp ;
  TimerHandle_t countClap_timer ;
  TickType_t start_time ;
  TickType_t temp_time ;
  struct timer_env env_countClap ;
  int retjmp ;
 // vTaskSetApplicationTaskTag( (void*) 0, pHook);
  
  {
  env_countClap.tname = "countClap_timer";
  ktc_start_time_init_free(& start_time);
  countClap_timer = ktc_timer_init_free(& env_countClap);
  //vTaskSetApplicationTaskTag( (void *) 0, pHook );
#line 27
  while (1) {
      {
     
      ktc_fifo_read(&fifofdata, (unsigned long )(& data));
    }
    {
    {
    _9: /* CIL Label */ ;
    {
#line 29
    ktc_sdelay_init_free(0, "ms", & start_time, 1);
 
    //vInitialiseTimerForIntQueueTest(); 
    
    }
    }
#line 30
    clap = 1;
    }
#line 31
    while (1) {
      { 
       
       tmp = ktc_fifo_read_timer(&fifofdata, (unsigned long )(& data));
       if(tmp == 0){
           control1Aux();
           goto _18;
       }
    
      }
#line 33
      clap ++;
      
      {
      
      goto _18;
      }
      {
      {
         
     _18: 
     //tmp = 0;
      {
#line 35
      //tmp=ktc_fdelay_init_free(500, "ms", & start_time, countClap_timer, retjmp, 2); 
      if (tmp == 0) {
#line 36
        
        break;
      } 
       
    
      }
      }
      }
#line 35

    }
#line 39
    
    ktc_fifo_write(&fifofclap, clap);
     
  }
}
}
#line 52
extern int ( /* missing proto */  sendTurnLeftSignal)() ;
#line 43 "freeClap.c"
void controlSignal(int clap ) 
{ 

  {

#line 44
  switch ((unsigned int )state) {
  case 0U: 
#line 46
  if (clap == 1) {
#line 47
    sendTurnRightSignal();
#line 48
    state = 2;
#line 49
    state = 0;
  }
#line 51
  if (clap == 2) {
#line 52
    sendTurnLeftSignal();
#line 53
    state = 3;
#line 54
    state = 0;
  }
#line 56
  if (clap == 3) {
#line 57
    sendStopSignal();
#line 58
    state = 1;
  }
#line 60
  break;
  case 1U: 
#line 62
  if (clap == 3) {
#line 63
    sendStartSignal();
#line 64
    state = 0;
  }
#line 66
  break;
  default: 
#line 68
  break;
  }
#line 71
  return;
}
}
#line 73 "freeClap.c"
void * __attribute__((__task__)) control1(int x) 
{ 
   
  int clap ;
  TimerHandle_t control_timer ;
  TickType_t start_time ;
  TickType_t temp_time ;
  struct timer_env env_control ;
  int retjmp ;
   maskInterrupt();
  {

#line 76
  while (1) {
    {
    ktc_fifo_read(&fifofclap, (& clap));
    
    }
#line 78
    controlSignal(clap);
  }
}
}
#line 82 "freeClap.c"
void motor(void) 
{ 
  int data ;
  TimerHandle_t main_timer ;
  TickType_t start_time ;
  TickType_t temp_time ;
  struct timer_env env_main ;
  int retjmp ;
  TaskHandle_t t_0 ;
  TaskHandle_t t_1 ;
  TaskHandle_t t_2 ;

  {
  env_main.tname = "main_timer";
  ktc_start_time_init_free(& start_time);
  main_timer = ktc_timer_init_free(& env_main);
#line 84
  setPortsAndParameters();
  state = 0; 

  {
  ktc_fifo_init(& fifofdata);
  }
    {
  ktc_fifo_init(& fifofclap);
 
  }
  
  
  xTaskCreate(genClap, "genClapt_0", 190, 31, 3, & t_0);
  xTaskCreate(countClap, "countClapt_1", 190, 31, 3, & t_1);
  xTaskCreate(control1, "controlt_2", 190, 31, 3, & t_2);
  
  vTaskStartScheduler();
   maskInterrupt();
  if (t_0 != (void *)0) {
    vTaskDelete(t_0);
  }
  if (t_1 != (void *)0) {
    vTaskDelete(t_1);
  }
  if (t_2 != (void *)0) {
    vTaskDelete(t_2);
  }
#line 90
  return;
}
}
