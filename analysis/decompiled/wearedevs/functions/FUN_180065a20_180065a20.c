/* FUN_180065a20 @ 180065a20 */

void FUN_180065a20(undefined8 *param_1,undefined8 param_2)

{
  char *pcVar1;
  char *local_8;
  
  pcVar1 = (char *)*param_1;
  if (*pcVar1 == '\0') {
    FUN_1801f0c50(param_2,&DAT_18020a668,4);
    return;
  }
  local_8 = pcVar1 + 1;
  if (*pcVar1 == '\x01') {
    FUN_1801f0060(param_2,"Closing",7,pcVar1 + 4,&DAT_18020a670,&local_8,&DAT_18020a690);
    return;
  }
  FUN_1801f0060(param_2,"Closed",6,pcVar1 + 4,&DAT_18020a670,&local_8,&DAT_18020a690);
  return;
}


