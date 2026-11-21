/* FUN_18003a0f0 @ 18003a0f0 */

void FUN_18003a0f0(undefined8 *param_1,undefined8 param_2)

{
  char *pcVar1;
  char *local_8;
  
  pcVar1 = (char *)*param_1;
  if (*pcVar1 == '\0') {
    local_8 = pcVar1 + 1;
    FUN_1801f0210(param_2,"Reset",5,pcVar1 + 4,&DAT_1802070e0,pcVar1 + 8,&DAT_180207100,&local_8,
                  &DAT_180207120);
    return;
  }
  if (*pcVar1 == '\x01') {
    local_8 = pcVar1 + 1;
    FUN_1801f0210(param_2,"GoAway",6,pcVar1 + 8,&PTR_LAB_180207148,pcVar1 + 4,&DAT_180207100,
                  &local_8,&DAT_180207120);
    return;
  }
  local_8 = pcVar1 + 8;
  FUN_1801f0060(param_2,"IoArc counter overflow",2,pcVar1 + 1,&DAT_180207448,&local_8,&DAT_180207468
               );
  return;
}


