/* FUN_180091780 @ 180091780 */

void FUN_180091780(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 local_20 [16];
  
  lVar1 = *param_1;
  FUN_1801ef980(local_20,param_2,&DAT_18020ee40,4);
  FUN_1801ef590(local_20,"stream_id",9,lVar1 + 0x20,&DAT_18020ee48);
  if (*(char *)(lVar1 + 0x24) != '\0') {
    FUN_1801ef590(local_20,"flags",5,lVar1 + 0x24,&DAT_18020ee78);
  }
  if (*(char *)(lVar1 + 0x25) == '\x01') {
    FUN_1801ef590(local_20,"pad_len",7,lVar1 + 0x26,&DAT_18020eea0);
  }
  FUN_1801ef720(local_20);
  return;
}


